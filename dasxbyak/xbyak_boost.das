options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module xbyak_boost shared public

require xbyak public

require daslib/ast_boost

[tag_function(xbyak_remove_gen)]
def with_xbyak ( var pgen:CodeGenerator?; blk:block<(var gen:CodeGenerator)> )
    invoke(blk, *pgen)

[tag_function(xbyak_remove_gen)]
def with_xbyak ( blk:block<(var gen:CodeGenerator)> )
    var pgen = new CodeGenerator
    invoke(blk, *pgen)
    return pgen

class XybakVisitor : AstVisitor
    astChanged : bool = false
    genName : string
    instructions : table<string; bool>
    def XybakVisitor(gname:string)
        genName = gname
        var cgen <- typeinfo(ast_typedecl type<CodeGenerator>)
        var mod = cgen.annotation._module
        for_each_function(mod, "") <| $ ( fun )
            if length(fun.arguments) > 0
                if fun.arguments[0]._type.baseType==Type tHandle
                    if fun.arguments[0]._type.annotation.name == "CodeGenerator"
                        instructions[string(fun.name)] = true
    def override visitExprVar(expr:smart_ptr<ExprVar>) : ExpressionPtr
        var cgen <- typeinfo(ast_typedecl type<CodeGenerator>)
        if has_field(cgen, string(expr.name), true)
            astChanged = true
            return <- new [[ExprField() at=expr.at,
                value <- new [[ExprVar() at=expr.at, name:=genName]],
                name := expr.name
            ]]
        return expr
    def override visitExprCall(var expr:smart_ptr<ExprCall>) : ExpressionPtr
        var cgen <- typeinfo(ast_typedecl type<CodeGenerator>)
        if expr.func==null
            if length(expr.arguments)>0
                let a0v = expr.arguments[0] ?as ExprVar
                if a0v!=null && a0v.name==genName
                    return expr // already there
            if instructions |> key_exists(string(expr.name))
                var nexpre <- clone_expression(expr)
                var nexpr = nexpre as ExprCall
                var nvar <- new [[ExprVar() at=expr.at, name:=genName]]
                nexpr.arguments |> emplace ( nvar, 0 )
                astChanged = true
                return nexpre
        return expr

[macro_function]
def public append_code_geenerator(var blk:smart_ptr<Expression>)
    var mkblk = blk ?as ExprMakeBlock
    var iblk = mkblk._block ?as ExprBlock
    var astVisitor = new XybakVisitor(string(iblk.arguments[0].name))
    var astVisitorAdapter <- make_visitor(*astVisitor)
    visit(blk, astVisitorAdapter)
    astVisitorAdapter := null
    let result = astVisitor.astChanged
    unsafe
        delete astVisitor
    return result

[tag_function_macro(tag="xbyak_remove_gen")]
class XbyakRemoveGenMacro : AstFunctionAnnotation
    def override transform ( var call : smart_ptr<ExprCallFunc>; var errors : das_string ) : ExpressionPtr
        let last_arg_index = length(call.arguments)-1
        if !call.arguments[last_arg_index] is ExprMakeBlock
            compiling_program() |> macro_error(call.at,"expecting block")
            return [[ExpressionPtr]]
        var cblock <- clone_expression(call.arguments[last_arg_index])
        if append_code_geenerator(cblock)
            var ncall <- new [[ExprCall() at=call.at, name:=call.name]]
            for i in range(last_arg_index)
                ncall.arguments |> emplace_new <| clone_expression(call.arguments[i])
            ncall.arguments |> emplace(cblock)
            return ncall
        else
            cblock := null
            return [[ExpressionPtr]]
