
#include "daScript/misc/platform.h"
#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "dasXbyak.h"
using namespace das;
#if USE_GENERATED
#define GLOBAL_NAMESPACE    1
#include "module_xbyak.h"
#endif
namespace das {
void Module_Xbyak::initFunctions_5() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _fst_method_980 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fst>;
addExtern<DAS_CALL_METHOD(_fst_method_980)>(*this, lib, "fst",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fst>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fst_method_982 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fst>;
addExtern<DAS_CALL_METHOD(_fst_method_982)>(*this, lib, "fst",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fst>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstcw_method_984 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fstcw);
addExtern<DAS_CALL_METHOD(_fstcw_method_984)>(*this, lib, "fstcw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fstcw))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstenv_method_986 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fstenv);
addExtern<DAS_CALL_METHOD(_fstenv_method_986)>(*this, lib, "fstenv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fstenv))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstp_method_988 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstp>;
addExtern<DAS_CALL_METHOD(_fstp_method_988)>(*this, lib, "fstp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstp>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstp_method_990 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fstp>;
addExtern<DAS_CALL_METHOD(_fstp_method_990)>(*this, lib, "fstp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fstp>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstsw_method_992 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstsw>;
addExtern<DAS_CALL_METHOD(_fstsw_method_992)>(*this, lib, "fstsw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstsw>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstsw_method_994 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fstsw>;
addExtern<DAS_CALL_METHOD(_fstsw_method_994)>(*this, lib, "fstsw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fstsw>::invoke")
	->args({"self","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsub_method_996 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsub>;
addExtern<DAS_CALL_METHOD(_fsub_method_996)>(*this, lib, "fsub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsub>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsub_method_998 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>;
addExtern<DAS_CALL_METHOD(_fsub_method_998)>(*this, lib, "fsub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsub_method_1000 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>;
addExtern<DAS_CALL_METHOD(_fsub_method_1000)>(*this, lib, "fsub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubp_method_1002 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubp>;
addExtern<DAS_CALL_METHOD(_fsubp_method_1002)>(*this, lib, "fsubp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubp_method_1004 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>;
addExtern<DAS_CALL_METHOD(_fsubp_method_1004)>(*this, lib, "fsubp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubp_method_1006 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>;
addExtern<DAS_CALL_METHOD(_fsubp_method_1006)>(*this, lib, "fsubp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubr_method_1008 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsubr>;
addExtern<DAS_CALL_METHOD(_fsubr_method_1008)>(*this, lib, "fsubr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsubr>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubr_method_1010 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>;
addExtern<DAS_CALL_METHOD(_fsubr_method_1010)>(*this, lib, "fsubr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubr_method_1012 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>;
addExtern<DAS_CALL_METHOD(_fsubr_method_1012)>(*this, lib, "fsubr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubrp_method_1014 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubrp>;
addExtern<DAS_CALL_METHOD(_fsubrp_method_1014)>(*this, lib, "fsubrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubrp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubrp_method_1016 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>;
addExtern<DAS_CALL_METHOD(_fsubrp_method_1016)>(*this, lib, "fsubrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubrp_method_1018 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>;
addExtern<DAS_CALL_METHOD(_fsubrp_method_1018)>(*this, lib, "fsubrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ftst_method_1020 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ftst);
addExtern<DAS_CALL_METHOD(_ftst_method_1020)>(*this, lib, "ftst",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ftst))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucom_method_1022 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucom>;
addExtern<DAS_CALL_METHOD(_fucom_method_1022)>(*this, lib, "fucom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucom>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucom_method_1024 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucom>;
addExtern<DAS_CALL_METHOD(_fucom_method_1024)>(*this, lib, "fucom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucom>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomi_method_1026 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>;
addExtern<DAS_CALL_METHOD(_fucomi_method_1026)>(*this, lib, "fucomi",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomi_method_1028 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>;
addExtern<DAS_CALL_METHOD(_fucomi_method_1028)>(*this, lib, "fucomi",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomip_method_1030 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>;
addExtern<DAS_CALL_METHOD(_fucomip_method_1030)>(*this, lib, "fucomip",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomip_method_1032 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>;
addExtern<DAS_CALL_METHOD(_fucomip_method_1032)>(*this, lib, "fucomip",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomp_method_1034 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucomp>;
addExtern<DAS_CALL_METHOD(_fucomp_method_1034)>(*this, lib, "fucomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucomp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomp_method_1036 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomp>;
addExtern<DAS_CALL_METHOD(_fucomp_method_1036)>(*this, lib, "fucomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomp>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucompp_method_1038 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fucompp);
addExtern<DAS_CALL_METHOD(_fucompp_method_1038)>(*this, lib, "fucompp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fucompp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fwait_method_1040 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fwait);
addExtern<DAS_CALL_METHOD(_fwait_method_1040)>(*this, lib, "fwait",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fwait))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxam_method_1042 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fxam);
addExtern<DAS_CALL_METHOD(_fxam_method_1042)>(*this, lib, "fxam",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fxam))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxch_method_1044 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxch>;
addExtern<DAS_CALL_METHOD(_fxch_method_1044)>(*this, lib, "fxch",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxch>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxch_method_1046 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fxch>;
addExtern<DAS_CALL_METHOD(_fxch_method_1046)>(*this, lib, "fxch",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fxch>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxrstor_method_1048 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fxrstor);
addExtern<DAS_CALL_METHOD(_fxrstor_method_1048)>(*this, lib, "fxrstor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fxrstor))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxtract_method_1050 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fxtract);
addExtern<DAS_CALL_METHOD(_fxtract_method_1050)>(*this, lib, "fxtract",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fxtract))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fyl2x_method_1052 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fyl2x);
addExtern<DAS_CALL_METHOD(_fyl2x_method_1052)>(*this, lib, "fyl2x",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fyl2x))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fyl2xp1_method_1054 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fyl2xp1);
addExtern<DAS_CALL_METHOD(_fyl2xp1_method_1054)>(*this, lib, "fyl2xp1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fyl2xp1))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _gf2p8affineinvqb_method_1056 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::gf2p8affineinvqb);
addExtern<DAS_CALL_METHOD(_gf2p8affineinvqb_method_1056)>(*this, lib, "gf2p8affineinvqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::gf2p8affineinvqb))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _gf2p8affineqb_method_1058 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::gf2p8affineqb);
addExtern<DAS_CALL_METHOD(_gf2p8affineqb_method_1058)>(*this, lib, "gf2p8affineqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::gf2p8affineqb))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _gf2p8mulb_method_1060 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::gf2p8mulb);
addExtern<DAS_CALL_METHOD(_gf2p8mulb_method_1060)>(*this, lib, "gf2p8mulb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::gf2p8mulb))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _haddpd_method_1062 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::haddpd);
addExtern<DAS_CALL_METHOD(_haddpd_method_1062)>(*this, lib, "haddpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::haddpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _haddps_method_1064 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::haddps);
addExtern<DAS_CALL_METHOD(_haddps_method_1064)>(*this, lib, "haddps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::haddps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hsubpd_method_1066 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::hsubpd);
addExtern<DAS_CALL_METHOD(_hsubpd_method_1066)>(*this, lib, "hsubpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::hsubpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hsubps_method_1068 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::hsubps);
addExtern<DAS_CALL_METHOD(_hsubps_method_1068)>(*this, lib, "hsubps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::hsubps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _idiv_method_1070 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::idiv);
addExtern<DAS_CALL_METHOD(_idiv_method_1070)>(*this, lib, "idiv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::idiv))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _imul_method_1072 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>;
addExtern<DAS_CALL_METHOD(_imul_method_1072)>(*this, lib, "imul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _in__method_1074 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &),&Xbyak::CodeGenerator::in_>;
addExtern<DAS_CALL_METHOD(_in__method_1074)>(*this, lib, "in_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &),&Xbyak::CodeGenerator::in_>::invoke")
	->args({"self","a","d"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _in__method_1076 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::in_>;
addExtern<DAS_CALL_METHOD(_in__method_1076)>(*this, lib, "in_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::in_>::invoke")
	->args({"self","a","v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _inc_method_1078 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::inc);
addExtern<DAS_CALL_METHOD(_inc_method_1078)>(*this, lib, "inc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::inc))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _insertps_method_1080 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::insertps);
addExtern<DAS_CALL_METHOD(_insertps_method_1080)>(*this, lib, "insertps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::insertps))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _int3_method_1082 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::int3);
addExtern<DAS_CALL_METHOD(_int3_method_1082)>(*this, lib, "int3",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::int3))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _int__method_1084 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::int_);
addExtern<DAS_CALL_METHOD(_int__method_1084)>(*this, lib, "int_",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::int_))
	->args({"self","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1086 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1086)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1088 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1088)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1090 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1090)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1092 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1092)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1094 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1094)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1096 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1096)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1098 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1098)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1100 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1100)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1102 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1102)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1104 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1104)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1106 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1106)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1108 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1108)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1110 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1110)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1112 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1112)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1114 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1114)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1116 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1116)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1118 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1118)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1120 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1120)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1122 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1122)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1124 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1124)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1126 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1126)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1128 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1128)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1130 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1130)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1132 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1132)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1134 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1134)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1136 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1136)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1138 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1138)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1140 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1140)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1142 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1142)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1144 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1144)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1146 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1146)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1148 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1148)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1150 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1150)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1152 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1152)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1154 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1154)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1156 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1156)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1158 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1158)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1160 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1160)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1162 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1162)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1164 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1164)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1166 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1166)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1168 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1168)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1170 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1170)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1172 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1172)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnae_method_1174 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>;
addExtern<DAS_CALL_METHOD(_jnae_method_1174)>(*this, lib, "jnae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnae_method_1176 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>;
addExtern<DAS_CALL_METHOD(_jnae_method_1176)>(*this, lib, "jnae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnae_method_1178 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnae>;
addExtern<DAS_CALL_METHOD(_jnae_method_1178)>(*this, lib, "jnae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnae>::invoke")
	->args({"self","addr"})
;
#endif

#endif
#endif
}
}
