#pragma once

#define USE_GENERATED           1
#define USE_GENERATED_SPLIT     1

#include "aot_xbyak.h"

namespace das {

class Module_Xbyak : public Module {
public:
    Module_Xbyak();
    virtual ModuleAotType aotRequire ( TextWriter & tw ) const override;
protected:
    void initFunctions_0();
    void initFunctions_1();
    void initFunctions_2();
    void initFunctions_3();
    void initFunctions_4();
    void initFunctions_5();
    void initFunctions_6();
    void initFunctions_7();
    void initFunctions_8();
    void initFunctions_9();
    void initFunctions_10();
    void initFunctions_11();
protected:
    ModuleLibrary lib;
};

}
