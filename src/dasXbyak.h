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
    void initFunctions_12();
    void initFunctions_13();
    void initFunctions_14();
    void initFunctions_15();
    void initFunctions_16();
    void initFunctions_17();
    void initFunctions_18();
    void initFunctions_19();
    void initFunctions_20();
    void initFunctions_21();
    void initFunctions_22();
protected:
    ModuleLibrary lib;
};

}
