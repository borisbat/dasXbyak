#include "daScript/misc/platform.h"

#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

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
}

#endif

namespace das {

void setParents ( Module * mod, const char * child, const char * parent ) {
    auto chA = mod->findAnnotation(child);
    DAS_ASSERTF(chA,"missing child annotation");
    auto chP = mod->findAnnotation(parent);
    DAS_ASSERTF(chP,"missing parent annotation");
    auto bsaCh = (BasicStructureAnnotation *) chA.get();
    bsaCh->parents.push_back((TypeAnnotation *)chP.get());
}

Module_Xbyak::Module_Xbyak() : Module("xbyak") {
    lib.addModule(this);
    lib.addBuiltInModule();
#if USE_GENERATED
    #include "module_xbyak.enum.inc"
    #include "module_xbyak.ann.inc"

    setParents(this,"Reg","Operand");

    setParents(this,"Reg8","Reg");

    setParents(this,"Reg16","Reg");

    setParents(this,"Reg32e","Reg");

    setParents(this,"Reg32","Reg32e");
    setParents(this,"Reg32","Operand");

    setParents(this,"Reg64","Reg32e");

    addExtern<DAS_BIND_FUN(das_L_str)>(*this, lib, "L",SideEffects::worstDefault, "das_L_str")
	    ->args({"self","label"});
    addExtern<DAS_BIND_FUN(das_L_lab)>(*this, lib, "L",SideEffects::worstDefault, "das_L_lab")
	    ->args({"self","label"});
    addExtern<DAS_BIND_FUN(das_L)>(*this, lib, "L",SideEffects::worstDefault, "das_L")
	    ->args({"self"});


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

