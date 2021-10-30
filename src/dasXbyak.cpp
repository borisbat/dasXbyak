#include "daScript/misc/platform.h"

#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "dasXbyak.h"

using namespace das;

namespace das {
    template <>
    struct cast_arg<string> {
        static __forceinline string to ( Context & ctx, SimNode * node ) {
            auto res = (std::string *) node->evalPtr(ctx);
            return *res;
        }
    };
}

#if USE_GENERATED

#define GLOBAL_NAMESPACE

#include "module_xbyak.h"
#include "module_xbyak.enum.cpp_inc"
#include "module_xbyak.ann.cpp_inc"

#endif

namespace das {

class Module_Xbyak : public Module {
public:
    Module_Xbyak() : Module("xbyak") {
        ModuleLibrary lib;
        lib.addModule(this);
        lib.addBuiltInModule();
#if USE_GENERATED
    #include "module_xbyak.enum.inc"
    #include "module_xbyak.ann.inc"
    #include "module_xbyak.method.inc"
    #include "module_xbyak.inc"
#endif
    }
    virtual ModuleAotType aotRequire ( TextWriter & tw ) const override {
        tw << "#include \"../modules/dasXbyak/src/dasXbyak.h\"\n";
        return ModuleAotType::cpp;
    }
};

}

REGISTER_MODULE_IN_NAMESPACE(Module_Xbyak,das);

