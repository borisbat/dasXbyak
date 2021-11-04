options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module jit_x86_64_common shared public

require jit_x86_64_regs public

require ast public
require dasxbyak/xbyak_boost
require math

/*
    STACK FRAME IS
VARIABLE_FRAME
    0   var0
    ...
PROLOGUE
    CONTEXT     8
    ARGUMENTS   8
    CMRES       8
TEMPORARY
    0   temp0
    ...
*/


let ARG_CMRES             = 24u
let ARG_ARGUMENTS         = 16u
let ARG_CONTEXT           =  8u

let GP_TEMP_REG_TOTAL = 11

struct RegAllocator
    regs : array<bool>
    freq : array<int>

def free ( var regs:RegAllocator; r:int )
    assert(regs.regs[r]==true)
    regs.regs[r] = false

def allocate ( var regs:RegAllocator )
    let l = length(regs.regs)
    for i in range(l)
        if !regs.regs[i]
            regs.regs[i] = true
            regs.freq[i] ++
            return i
    regs.regs |> push(true)
    regs.freq |> push(1)
    return l

def mask ( var regs:RegAllocator; maxReg:int )
    var mask = 0u
    for t in range(min(maxReg,length(regs.regs)))
        if regs.regs[t]
            mask |= 1u << uint(t)
    return mask

enum CompareType
    always
    less
    equals

def condJump ( var gen:CodeGenerator; lab:string; cond:CompareType )
    if cond==CompareType less
        jl(gen,lab,LabelType T_NEAR)
    elif cond==CompareType equals
        je(gen,lab,LabelType T_NEAR)
    else
        panic("unsupported jump {cond}")

def condJumpIfNot ( var gen:CodeGenerator; lab:string; cond:CompareType )
    if cond==CompareType less
        jge(gen,lab,LabelType T_NEAR)
    elif cond==CompareType equals
        jne(gen,lab,LabelType T_NEAR)
    else
        panic("unsupported jump {cond}")

variant EvResult
    nothing : bool
    stack   : uint
    gpReg   : GpTempReg     // any GP register
    gpRegT  : GpTempReg     // variable replaced via register
    xmmReg  : XmmTempReg
    iconst  : uint64
    cmp     : CompareType

struct Transients
    gp_mask  : uint
    xmm_mask : uint

struct EvContext
    expr_res   : table<uint64; EvResult>
    temp_var   : table<uint64; GpTempReg>
    temp_extra : table<uint64; GpTempReg>
    tf_offset  : table<uint64; uint>
    transients : table<uint64; Transients>
    gpa : RegAllocator
    xmma : RegAllocator
    temp_frame  : uint      // where temp buffers are allocated (like calls)
    stack_frame : uint      // regular stack
    save_frame  : uint      // where transient registers are saved
    use_cmres   : bool
    use_args    : bool
    use_context : bool
    assume_no_exceptions : bool

def dump ( ctx:EvContext )
    print("stack frame is {ctx.stack_frame}\n")
    print("temp frame is {ctx.temp_frame} bytes\n")
    print("save frame is {ctx.save_frame} bytes\n")
    print("use context: {ctx.use_context}\n")
    print("use args: {ctx.use_args}\n")
    print("use cmres: {ctx.use_cmres}\n")
    for k,v in keys(ctx.tf_offset),values(ctx.tf_offset)
        unsafe
            let pexpr = reinterpret<Expression?> k
            let at & = pexpr.at
            let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
            print("\ttemp frame {k}.{pexpr.__rtti} ->  {v} at {fname}:{int(at.line)}:{int(at.column)}\n")
    print("gp temp: {length(ctx.gpa.regs)}\n")
    for t in range(length(ctx.gpa.regs))
        unsafe
            print("\t{reinterpret<GpTempReg> t} {ctx.gpa.freq[t]} times\n")
    print("xmm temp: {length(ctx.xmma.regs)}\n")
    for x in range(length(ctx.xmma.regs))
        unsafe
            print("\t{reinterpret<XmmTempReg> x} {ctx.xmma.freq[x]} times\n")
    print("register allocation:\n")
    for k,v in keys(ctx.expr_res),values(ctx.expr_res)
        unsafe
            let pexpr = reinterpret<Expression?> k
            let at & = pexpr.at
            let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
            print("\t{k}.{pexpr.__rtti} ->  {v} at {fname}:{int(at.line)}:{int(at.column)}\n")

def is_gpreg_type ( t:TypeDeclPtr )
    if length(t.dim)>0
        return false
    if t.isInteger || t.isPointer || t.baseType==Type tBool
        return true
    return true

def is_for_range1 ( expr:smart_ptr<ExprFor> )
    if length(expr.sources)!=1
        return false
    if length(expr.sources[0]._type.dim)!=0
        return false
    if expr.sources[0]._type.baseType!=Type tRange
        return false
    return true

def is_for_range1_with_unused_var ( expr:smart_ptr<ExprFor> )
    if !is_for_range1(expr)
        return false
    let flags = expr.iteratorVariables[0].access_flags
    if !flags.access_ref && !flags.access_get
        return true
    return false

class JitVisitor : AstVisitor
    verbose : bool
    context : EvContext
    failed_to_generate : bool
    visitor_type : string
    def JitVisitor ( var ctx:EvContext )
        context <- ctx
    def error ( txt:string; at:LineInfo )
        failed_to_generate = true
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("\nERROR jit_x86_64({visitor_type}): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
        stackwalk(false,false)
    def failed ( txt:string; at:LineInfo )
        failed_to_generate = true
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("\nTODO jit_x86_64({visitor_type}): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
        stackwalk(false,false)
    def log(text:string)
        if verbose
            print(text)
    def logAt(text:string; at:LineInfo)
        if verbose
            let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
            print("{text} at {fname}:{int(at.line)}:{int(at.column)}\n")

