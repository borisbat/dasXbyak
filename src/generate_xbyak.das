require fio
require strings
require daslib/strings_boost
require daslib/cpp_gen


[export]
def main
    // configure
    blocked_type_names <- [{auto[]
        "GLFWcharfun"
    }]

    blocked_functions <- [{auto[]
        "Xbyak::CodeArray::getCode";
        "Xbyak::CodeArray::getCurr";
        "Xbyak::CodeGenerator::L";
        "Xbyak::Operand::setIdx";
        "Xbyak::LabelManager::getId";
        "Xbyak::LabelManager::incRefCount";
        "Xbyak::LabelManager::decRefCount";
        "Xbyak::LabelManager::resetLabelPtrList";
        "Xbyak::CodeArray::isAllocType";
        "Xbyak::CodeArray::useProtect";
        "Xbyak::CodeArray::growMemory";
        "Xbyak::CodeArray::calcJmpAddress";
        "Xbyak::CodeArray::AddrInfo";
        "Xbyak::CodeArray::AddrInfo::getVal";
        "operator delete";
        "operator new";
        "__security_init_cookie";
        "__security_check_cookie"
    }]

/*
    cmres_functions <- [{auto[]
        "ImGui_ImplVulkanH_SelectSurfaceFormat"
    }]
*/
    blocked_enumerations <- [{auto[]
        "Xbyak::CodeGenerator::AVXtype";
        "Xbyak::CodeArray::Type";
        "STUB_STUB_STUB"
    }]


    is_function_blocked <- @ <| ( fn:string ) : bool
        return false

    is_struct_blocked <- @ <| ( st:string ) : bool
        if st=="AddrInfo"
            return true
        if st=="SlabelVal"
            return true
        if st=="SlabelState"
            return true
        if st=="ClabelVal"
            return true
        return false

    var args <- get_command_line_arguments()
    generate_split_functions = true
    g_split_factor = 100    // there are TONES of functions
    split_prefix = "{args[4]}_split"

    split_cpp_prefix="
#include \"daScript\/misc\/platform.h\"
#include \"daScript\/daScript.h\"
#include \"daScript\/ast\/ast_typefactory_bind.h\"
#include \"dasXbyak.h\"
using namespace das;
#if USE_GENERATED
#define GLOBAL_NAMESPACE    1
#include \"module_xbyak.h\"
#endif
namespace das \{
void Module_Xbyak::initFunctions_$$$() \{
#if USE_GENERATED
#if USE_GENERATED_SPLIT
"

    split_cpp_suffix="
#endif
#endif
}
}
"
    // generate
    allow_extern_c = true
    bindHeaders(args[3], args[4])

