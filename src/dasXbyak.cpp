#include "daScript/misc/platform.h"

#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "daScript/simulate/simulate_visit_op.h"

#include "dasXbyak.h"

using namespace das;

#if USE_GENERATED

#define GLOBAL_NAMESPACE

#include "module_xbyak.h"
#include "module_xbyak.enum.cpp_inc"
#include "module_xbyak.ann.cpp_inc"

namespace das {

    void das_L_str ( Xbyak::CodeGenerator & self, const char * label ) {
        self.L(label);
    }

    void das_L_lab ( Xbyak::CodeGenerator & self, Xbyak::Label & label ) {
        self.L(label);
    }

    Xbyak::Label * das_L ( Xbyak::CodeGenerator & self ) {
        auto label = new Xbyak::Label();
        self.L(*label);
        return label;
    }

    Xbyak::Address das_op_at_reg ( const Xbyak::AddressFrame & frame, const Xbyak::Reg & reg ) {
        return frame[reg];
    }

    Xbyak::Address das_op_at_regexp ( const Xbyak::AddressFrame & frame, const Xbyak::RegExp & reg ) {
        return frame[reg];
    }

    Xbyak::Address das_op_at_ptr ( const Xbyak::AddressFrame & frame, void * reg ) {
        return frame[reg];
    }

    Xbyak::RegExp das_op_mul_int ( const Xbyak::Reg & reg, int32_t value ) {
        return reg * value;
    }

    Xbyak::RegExp das_op_mul_uint ( const Xbyak::Reg & reg, uint32_t value ) {
        return reg * value;
    }

    Xbyak::RegExp das_op_add_reg ( const Xbyak::Reg & reg, const Xbyak::Reg & value ) {
        return reg + value;
    }

    Xbyak::RegExp das_op_add_int ( const Xbyak::Reg & reg, int32_t value ) {
        return reg + value;
    }

    Xbyak::RegExp das_op_add_uint ( const Xbyak::Reg & reg, uint32_t value ) {
        return reg + value;
    }

    Xbyak::RegExp das_op_sub_int ( const Xbyak::Reg & reg, int32_t value ) {
        return reg - value;
    }

    Xbyak::RegExp das_op_sub_uint ( const Xbyak::Reg & reg, uint32_t value ) {
        return reg - value;
    }

    typedef vec4f ( * JitFunction ) ( Context * , vec4f *, void * );

    float4 das_invoke_code ( const Xbyak::CodeGenerator & code, vec4f anything, void * cmres, Context * context ) {
        vec4f * arguments = cast<vec4f *>::to(anything);
        auto fun = code.getCode<JitFunction>();
        return fun ( context, arguments, cmres );
    }

    struct SimNode_Jit : SimNode {
        SimNode_Jit ( const LineInfo & at, JitFunction eval )
            : SimNode(at), func(eval) {}
        virtual SimNode * visit ( SimVisitor & vis ) override {
            uint64_t fptr = (uint64_t) func;
            V_BEGIN();
            V_OP(Jit);
            V_ARG(fptr);
            V_END();
        }
        virtual vec4f eval ( Context & context ) override {
            auto result = func(&context, context.abiArg, context.abiCMRES);
            context.result = result;
            return result;
        }
        JitFunction func = nullptr;
    };

    bool das_instrument_jit ( const Xbyak::CodeGenerator & code, const Func func, Context * context ) {
        auto simfn = func.PTR;
        if ( !simfn ) return false;
        auto gen = code.getCode<JitFunction>();
        auto node = context->code->makeNode<SimNode_Jit>(LineInfo(), gen);
        simfn->code = node;
        simfn->aot = false;
        simfn->aotFunction = nullptr;
        return true;
    }

    void * das_get_code_ptr ( const Xbyak::CodeGenerator & code ) {
        return (void *) code.getCode();
    }

    vec4f JIT_call_or_fastcall ( SimFunction * fn, vec4f * args, Context * context ) {
        return context->callOrFastcall(fn, args, nullptr);
    }

    uint64_t das_get_JIT_call_or_fastcall ( ) {
        return (uint64_t) &JIT_call_or_fastcall;
    }

    void JIT_exception ( const char * text, Context * context ) {
        context->throw_error(text);
    }

    uint64_t das_get_JIT_exception ( ) {
        return (uint64_t) &JIT_exception;
    }

    uint64_t das_get_SimFunction_by_MNH ( uint32_t MNH, Context * context ) {
        return (uint64_t) context->fnByMangledName(MNH);
    }

    uint64_t das_get_const_string_offset ( const char * text, Context * context, LineInfoArg * at ) {
        if ( !text ) context->throw_error_at(*at, "missing text");
        auto ptext = context->constStringHeap->allocateString(text);
        return (uint64_t) ptext;
    }
}

#endif

namespace das {

void setParents ( Module * mod, const char * child, const initializer_list<const char *> & parents ) {
    auto chA = mod->findAnnotation(child);
    DAS_VERIFYF(chA,"missing child annotation");
    DAS_VERIFYF(chA->rtti_isBasicStructureAnnotation(),"expecting basic structure annotation");
    auto bsaCh = (BasicStructureAnnotation *) chA.get();
    for ( auto parent : parents ) {
        auto chP = mod->findAnnotation(parent);
        DAS_VERIFYF(chP,"missing parent annotation");
        bsaCh->parents.push_back((TypeAnnotation *)chP.get());
    }
}

Module_Xbyak::Module_Xbyak() : Module("xbyak") {
    lib.addModule(this);
    lib.addBuiltInModule();
#if USE_GENERATED
    #include "module_xbyak.enum.inc"
    #include "module_xbyak.ann.inc"
    #ifdef XBYAK32
        addConstant<bool>(*this,"xbyak32",true);
        addConstant<bool>(*this,"xbyak64",false);
        addConstant<bool>(*this,"xbyak64win",false);
    #elif defined(XBYAK64_WIN)
        addConstant<bool>(*this,"xbyak32",false);
        addConstant<bool>(*this,"xbyak64",false);
        addConstant<bool>(*this,"xbyak64win",true);
    #else
        addConstant<bool>(*this,"xbyak32",false);
        addConstant<bool>(*this,"xbyak64",true);
        addConstant<bool>(*this,"xbyak64win",false);
    #endif
    setParents(this,"CodeGenerator",  {"CodeArray"});
    // regs
    setParents(this,"Address",  {"Operand"});
    setParents(this,"Reg",      {"Operand"});
    setParents(this,"Reg8",     {"Operand","Reg"});
    setParents(this,"Reg16",    {"Operand","Reg"});
    setParents(this,"Reg32e",   {"Operand","Reg"});
    setParents(this,"Reg32",    {"Operand","Reg","Reg32e"});
    setParents(this,"Reg64",    {"Operand","Reg","Reg32e","Reg32"});
    setParents(this,"Mmx",      {"Operand","Reg"});
    setParents(this,"Xmm",      {"Operand","Reg","Mmx"});
    // remainder of xbyak
    addExtern<DAS_BIND_FUN(das_L_str)>(*this, lib, "L",
        SideEffects::worstDefault, "das_L_str")
	        ->args({"self","label"});
    addExtern<DAS_BIND_FUN(das_L_lab)>(*this, lib, "L",
        SideEffects::worstDefault, "das_L_lab")
	        ->args({"self","label"});
    addExtern<DAS_BIND_FUN(das_L)>(*this, lib, "L",
        SideEffects::worstDefault, "das_L")
	        ->args({"self"});
    addExtern<DAS_BIND_FUN(das_op_at_reg),SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "[]",
        SideEffects::worstDefault, "das_op_at_reg")
	        ->args({"AddrFrame","address"});
    addExtern<DAS_BIND_FUN(das_op_at_regexp),SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "[]",
        SideEffects::worstDefault, "das_op_at_regexp")
	        ->args({"AddrFrame","address"});
    addExtern<DAS_BIND_FUN(das_op_at_ptr),SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "[]",
        SideEffects::worstDefault, "das_op_at_ptr")
	        ->args({"AddrFrame","address"});
    addExtern<DAS_BIND_FUN(das_op_mul_int),SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "*",
        SideEffects::worstDefault, "das_op_mul_int")
	        ->args({"Operand","constant"});
    addExtern<DAS_BIND_FUN(das_op_mul_uint),SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "*",
        SideEffects::worstDefault, "das_op_mul_uint")
	        ->args({"Operand","constant"});
    addExtern<DAS_BIND_FUN(das_op_add_reg),SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "+",
        SideEffects::worstDefault, "das_op_add_reg")
	        ->args({"Operand","constant"});
    addExtern<DAS_BIND_FUN(das_op_add_int),SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "+",
        SideEffects::worstDefault, "das_op_add_int")
	        ->args({"Operand","constant"});
    addExtern<DAS_BIND_FUN(das_op_add_uint),SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "+",
        SideEffects::worstDefault, "das_op_add_uint")
	        ->args({"Operand","constant"});
    addExtern<DAS_BIND_FUN(das_op_sub_int),SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "-",
        SideEffects::worstDefault, "das_op_sub_int")
	        ->args({"Operand","constant"});
    addExtern<DAS_BIND_FUN(das_op_sub_uint),SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "-",
        SideEffects::worstDefault, "das_op_sub_uint")
	        ->args({"Operand","constant"});
    // codogen and instruments
    addExtern<DAS_BIND_FUN(das_get_code_ptr)>(*this, lib, "get_code",
        SideEffects::worstDefault, "das_get_code_ptr");
    addExtern<DAS_BIND_FUN(das_invoke_code)>(*this, lib, "invoke_code",
        SideEffects::worstDefault, "das_invoke_code")
	        ->args({"code","arguments","cmres","context"})->unsafeOperation = true;
    addExtern<DAS_BIND_FUN(das_instrument_jit)>(*this, lib, "instrument_jit",
        SideEffects::worstDefault, "das_instrument_jit")
	        ->args({"code","function","context"})->unsafeOperation = true;
    // JIT helpers
    addExtern<DAS_BIND_FUN(das_get_SimFunction_by_MNH)>(*this, lib, "get_function_address",
        SideEffects::none, "das_get_SimFunction_by_MNH")
            ->args({"MNH","at"});
    addExtern<DAS_BIND_FUN(das_get_const_string_offset)>(*this, lib, "jit_generate_const_string",
        SideEffects::none, "das_get_const_string_offset")
            ->args({"text","context","at"});
    // JIT table
    addExtern<DAS_BIND_FUN(das_get_JIT_call_or_fastcall)>(*this, lib, "JIT_call_or_fastcall",
        SideEffects::none, "das_get_JIT_call_or_fastcall");
    addExtern<DAS_BIND_FUN(das_get_JIT_exception)>(*this, lib, "JIT_exception",
        SideEffects::none, "das_get_JIT_exception");

#if USE_GENERATED_SPLIT
    initFunctions_0();
    initFunctions_1();
    initFunctions_2();
    initFunctions_3();
    initFunctions_4();
    initFunctions_5();
    initFunctions_6();
    initFunctions_7();
    initFunctions_8();
    initFunctions_9();
    initFunctions_10();
    initFunctions_11();
#else
    #include "module_xbyak.method.inc"
    #include "module_xbyak.inc"
#endif
#endif
}

ModuleAotType Module_Xbyak::aotRequire ( TextWriter & tw ) const  {
    tw << "#include \"../modules/dasXbyak/src/dasXbyak.h\"\n";
    return ModuleAotType::cpp;
}

}

REGISTER_MODULE_IN_NAMESPACE(Module_Xbyak,das);

