// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "dasXBYAK.h"
#include "need_dasXBYAK.h"
namespace das {
void Module_dasXBYAK::initFunctions_6() {
	using _method_487 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnstenv >;
	addExtern<DAS_CALL_METHOD(_method_487)>(*this,lib,"fnstenv",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnstenv >::invoke")
		->args({"self","addr"});
	using _method_488 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnstsw >;
	addExtern<DAS_CALL_METHOD(_method_488)>(*this,lib,"fnstsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnstsw >::invoke")
		->args({"self","addr"});
	using _method_489 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fnstsw >;
	addExtern<DAS_CALL_METHOD(_method_489)>(*this,lib,"fnstsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fnstsw >::invoke")
		->args({"self","r"});
	using _method_490 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fpatan >;
	addExtern<DAS_CALL_METHOD(_method_490)>(*this,lib,"fpatan",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fpatan >::invoke")
		->args({"self"});
	using _method_491 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fprem >;
	addExtern<DAS_CALL_METHOD(_method_491)>(*this,lib,"fprem",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fprem >::invoke")
		->args({"self"});
	using _method_492 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fprem1 >;
	addExtern<DAS_CALL_METHOD(_method_492)>(*this,lib,"fprem1",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fprem1 >::invoke")
		->args({"self"});
	using _method_493 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fptan >;
	addExtern<DAS_CALL_METHOD(_method_493)>(*this,lib,"fptan",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fptan >::invoke")
		->args({"self"});
	using _method_494 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::frndint >;
	addExtern<DAS_CALL_METHOD(_method_494)>(*this,lib,"frndint",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::frndint >::invoke")
		->args({"self"});
	using _method_495 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::frstor >;
	addExtern<DAS_CALL_METHOD(_method_495)>(*this,lib,"frstor",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::frstor >::invoke")
		->args({"self","addr"});
	using _method_496 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsave >;
	addExtern<DAS_CALL_METHOD(_method_496)>(*this,lib,"fsave",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsave >::invoke")
		->args({"self","addr"});
	using _method_497 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fscale >;
	addExtern<DAS_CALL_METHOD(_method_497)>(*this,lib,"fscale",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fscale >::invoke")
		->args({"self"});
	using _method_498 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsin >;
	addExtern<DAS_CALL_METHOD(_method_498)>(*this,lib,"fsin",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsin >::invoke")
		->args({"self"});
	using _method_499 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsincos >;
	addExtern<DAS_CALL_METHOD(_method_499)>(*this,lib,"fsincos",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsincos >::invoke")
		->args({"self"});
	using _method_500 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsqrt >;
	addExtern<DAS_CALL_METHOD(_method_500)>(*this,lib,"fsqrt",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsqrt >::invoke")
		->args({"self"});
	using _method_501 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fst >;
	addExtern<DAS_CALL_METHOD(_method_501)>(*this,lib,"fst",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fst >::invoke")
		->args({"self","addr"});
	using _method_502 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fst >;
	addExtern<DAS_CALL_METHOD(_method_502)>(*this,lib,"fst",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fst >::invoke")
		->args({"self","reg"});
	using _method_503 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstcw >;
	addExtern<DAS_CALL_METHOD(_method_503)>(*this,lib,"fstcw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstcw >::invoke")
		->args({"self","addr"});
	using _method_504 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstenv >;
	addExtern<DAS_CALL_METHOD(_method_504)>(*this,lib,"fstenv",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstenv >::invoke")
		->args({"self","addr"});
	using _method_505 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstp >;
	addExtern<DAS_CALL_METHOD(_method_505)>(*this,lib,"fstp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstp >::invoke")
		->args({"self","addr"});
	using _method_506 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fstp >;
	addExtern<DAS_CALL_METHOD(_method_506)>(*this,lib,"fstp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fstp >::invoke")
		->args({"self","reg"});
	using _method_507 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstsw >;
	addExtern<DAS_CALL_METHOD(_method_507)>(*this,lib,"fstsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstsw >::invoke")
		->args({"self","addr"});
	using _method_508 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fstsw >;
	addExtern<DAS_CALL_METHOD(_method_508)>(*this,lib,"fstsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fstsw >::invoke")
		->args({"self","r"});
	using _method_509 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsub >;
	addExtern<DAS_CALL_METHOD(_method_509)>(*this,lib,"fsub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsub >::invoke")
		->args({"self","addr"});
	using _method_510 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub >;
	addExtern<DAS_CALL_METHOD(_method_510)>(*this,lib,"fsub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub >::invoke")
		->args({"self","reg1"});
	using _method_511 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub >;
	addExtern<DAS_CALL_METHOD(_method_511)>(*this,lib,"fsub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub >::invoke")
		->args({"self","reg1","reg2"});
	using _method_512 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubp >;
	addExtern<DAS_CALL_METHOD(_method_512)>(*this,lib,"fsubp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubp >::invoke")
		->args({"self"});
	using _method_513 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp >;
	addExtern<DAS_CALL_METHOD(_method_513)>(*this,lib,"fsubp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp >::invoke")
		->args({"self","reg1"});
	using _method_514 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp >;
	addExtern<DAS_CALL_METHOD(_method_514)>(*this,lib,"fsubp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp >::invoke")
		->args({"self","reg1","reg2"});
	using _method_515 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsubr >;
	addExtern<DAS_CALL_METHOD(_method_515)>(*this,lib,"fsubr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsubr >::invoke")
		->args({"self","addr"});
	using _method_516 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr >;
	addExtern<DAS_CALL_METHOD(_method_516)>(*this,lib,"fsubr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr >::invoke")
		->args({"self","reg1"});
	using _method_517 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr >;
	addExtern<DAS_CALL_METHOD(_method_517)>(*this,lib,"fsubr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr >::invoke")
		->args({"self","reg1","reg2"});
	using _method_518 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubrp >;
	addExtern<DAS_CALL_METHOD(_method_518)>(*this,lib,"fsubrp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubrp >::invoke")
		->args({"self"});
	using _method_519 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp >;
	addExtern<DAS_CALL_METHOD(_method_519)>(*this,lib,"fsubrp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp >::invoke")
		->args({"self","reg1"});
	using _method_520 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp >;
	addExtern<DAS_CALL_METHOD(_method_520)>(*this,lib,"fsubrp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp >::invoke")
		->args({"self","reg1","reg2"});
	using _method_521 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::ftst >;
	addExtern<DAS_CALL_METHOD(_method_521)>(*this,lib,"ftst",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::ftst >::invoke")
		->args({"self"});
	using _method_522 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucom >;
	addExtern<DAS_CALL_METHOD(_method_522)>(*this,lib,"fucom",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucom >::invoke")
		->args({"self"});
	using _method_523 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucom >;
	addExtern<DAS_CALL_METHOD(_method_523)>(*this,lib,"fucom",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucom >::invoke")
		->args({"self","reg"});
	using _method_524 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi >;
	addExtern<DAS_CALL_METHOD(_method_524)>(*this,lib,"fucomi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi >::invoke")
		->args({"self","reg1"});
	using _method_525 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi >;
	addExtern<DAS_CALL_METHOD(_method_525)>(*this,lib,"fucomi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi >::invoke")
		->args({"self","reg1","reg2"});
	using _method_526 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip >;
	addExtern<DAS_CALL_METHOD(_method_526)>(*this,lib,"fucomip",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip >::invoke")
		->args({"self","reg1"});
	using _method_527 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip >;
	addExtern<DAS_CALL_METHOD(_method_527)>(*this,lib,"fucomip",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip >::invoke")
		->args({"self","reg1","reg2"});
	using _method_528 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucomp >;
	addExtern<DAS_CALL_METHOD(_method_528)>(*this,lib,"fucomp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucomp >::invoke")
		->args({"self"});
	using _method_529 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomp >;
	addExtern<DAS_CALL_METHOD(_method_529)>(*this,lib,"fucomp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomp >::invoke")
		->args({"self","reg"});
	using _method_530 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucompp >;
	addExtern<DAS_CALL_METHOD(_method_530)>(*this,lib,"fucompp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucompp >::invoke")
		->args({"self"});
	using _method_531 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fwait >;
	addExtern<DAS_CALL_METHOD(_method_531)>(*this,lib,"fwait",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fwait >::invoke")
		->args({"self"});
	using _method_532 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxam >;
	addExtern<DAS_CALL_METHOD(_method_532)>(*this,lib,"fxam",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxam >::invoke")
		->args({"self"});
	using _method_533 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxch >;
	addExtern<DAS_CALL_METHOD(_method_533)>(*this,lib,"fxch",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxch >::invoke")
		->args({"self"});
	using _method_534 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fxch >;
	addExtern<DAS_CALL_METHOD(_method_534)>(*this,lib,"fxch",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fxch >::invoke")
		->args({"self","reg"});
	using _method_535 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fxrstor >;
	addExtern<DAS_CALL_METHOD(_method_535)>(*this,lib,"fxrstor",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fxrstor >::invoke")
		->args({"self","addr"});
	using _method_536 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxtract >;
	addExtern<DAS_CALL_METHOD(_method_536)>(*this,lib,"fxtract",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxtract >::invoke")
		->args({"self"});
	using _method_537 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fyl2x >;
	addExtern<DAS_CALL_METHOD(_method_537)>(*this,lib,"fyl2x",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fyl2x >::invoke")
		->args({"self"});
	using _method_538 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fyl2xp1 >;
	addExtern<DAS_CALL_METHOD(_method_538)>(*this,lib,"fyl2xp1",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fyl2xp1 >::invoke")
		->args({"self"});
	using _method_539 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::gf2p8affineinvqb >;
	addExtern<DAS_CALL_METHOD(_method_539)>(*this,lib,"gf2p8affineinvqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::gf2p8affineinvqb >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_540 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::gf2p8affineqb >;
	addExtern<DAS_CALL_METHOD(_method_540)>(*this,lib,"gf2p8affineqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::gf2p8affineqb >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_541 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::gf2p8mulb >;
	addExtern<DAS_CALL_METHOD(_method_541)>(*this,lib,"gf2p8mulb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::gf2p8mulb >::invoke")
		->args({"self","xmm","op"});
	using _method_542 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::haddpd >;
	addExtern<DAS_CALL_METHOD(_method_542)>(*this,lib,"haddpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::haddpd >::invoke")
		->args({"self","xmm","op"});
	using _method_543 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::haddps >;
	addExtern<DAS_CALL_METHOD(_method_543)>(*this,lib,"haddps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::haddps >::invoke")
		->args({"self","xmm","op"});
	using _method_544 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::hsubpd >;
	addExtern<DAS_CALL_METHOD(_method_544)>(*this,lib,"hsubpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::hsubpd >::invoke")
		->args({"self","xmm","op"});
	using _method_545 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::hsubps >;
	addExtern<DAS_CALL_METHOD(_method_545)>(*this,lib,"hsubps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::hsubps >::invoke")
		->args({"self","xmm","op"});
	using _method_546 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::idiv >;
	addExtern<DAS_CALL_METHOD(_method_546)>(*this,lib,"idiv",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::idiv >::invoke")
		->args({"self","op"});
	using _method_547 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::imul >;
	addExtern<DAS_CALL_METHOD(_method_547)>(*this,lib,"imul",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::imul >::invoke")
		->args({"self","op"});
	using _method_548 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &),&Xbyak::CodeGenerator::in_ >;
	addExtern<DAS_CALL_METHOD(_method_548)>(*this,lib,"in_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &),&Xbyak::CodeGenerator::in_ >::invoke")
		->args({"self","a","d"});
	using _method_549 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,unsigned char),&Xbyak::CodeGenerator::in_ >;
	addExtern<DAS_CALL_METHOD(_method_549)>(*this,lib,"in_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,unsigned char),&Xbyak::CodeGenerator::in_ >::invoke")
		->args({"self","a","v"});
	using _method_550 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::inc >;
	addExtern<DAS_CALL_METHOD(_method_550)>(*this,lib,"inc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::inc >::invoke")
		->args({"self","op"});
	using _method_551 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::insertps >;
	addExtern<DAS_CALL_METHOD(_method_551)>(*this,lib,"insertps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::insertps >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_552 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::int3 >;
	addExtern<DAS_CALL_METHOD(_method_552)>(*this,lib,"int3",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::int3 >::invoke")
		->args({"self"});
	using _method_553 = das::das_call_member< void (Xbyak::CodeGenerator::*)(unsigned char),&Xbyak::CodeGenerator::int_ >;
	addExtern<DAS_CALL_METHOD(_method_553)>(*this,lib,"int_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(unsigned char),&Xbyak::CodeGenerator::int_ >::invoke")
		->args({"self","x"});
	using _method_554 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja >;
	addExtern<DAS_CALL_METHOD(_method_554)>(*this,lib,"ja",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja >::invoke")
		->args({"self","label","type"});
	using _method_555 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja >;
	addExtern<DAS_CALL_METHOD(_method_555)>(*this,lib,"ja",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja >::invoke")
		->args({"self","label","type"});
	using _method_556 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::ja >;
	addExtern<DAS_CALL_METHOD(_method_556)>(*this,lib,"ja",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::ja >::invoke")
		->args({"self","addr"});
	using _method_557 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja >;
	addExtern<DAS_CALL_METHOD(_method_557)>(*this,lib,"ja",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja >::invoke")
		->args({"self","label","type"});
	using _method_558 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae >;
	addExtern<DAS_CALL_METHOD(_method_558)>(*this,lib,"jae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae >::invoke")
		->args({"self","label","type"});
	using _method_559 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae >;
	addExtern<DAS_CALL_METHOD(_method_559)>(*this,lib,"jae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae >::invoke")
		->args({"self","label","type"});
	using _method_560 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jae >;
	addExtern<DAS_CALL_METHOD(_method_560)>(*this,lib,"jae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jae >::invoke")
		->args({"self","addr"});
	using _method_561 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae >;
	addExtern<DAS_CALL_METHOD(_method_561)>(*this,lib,"jae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae >::invoke")
		->args({"self","label","type"});
	using _method_562 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb >;
	addExtern<DAS_CALL_METHOD(_method_562)>(*this,lib,"jb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb >::invoke")
		->args({"self","label","type"});
	using _method_563 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb >;
	addExtern<DAS_CALL_METHOD(_method_563)>(*this,lib,"jb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb >::invoke")
		->args({"self","label","type"});
	using _method_564 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jb >;
	addExtern<DAS_CALL_METHOD(_method_564)>(*this,lib,"jb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jb >::invoke")
		->args({"self","addr"});
	using _method_565 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb >;
	addExtern<DAS_CALL_METHOD(_method_565)>(*this,lib,"jb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb >::invoke")
		->args({"self","label","type"});
	using _method_566 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe >;
	addExtern<DAS_CALL_METHOD(_method_566)>(*this,lib,"jbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe >::invoke")
		->args({"self","label","type"});
	using _method_567 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe >;
	addExtern<DAS_CALL_METHOD(_method_567)>(*this,lib,"jbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe >::invoke")
		->args({"self","label","type"});
	using _method_568 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jbe >;
	addExtern<DAS_CALL_METHOD(_method_568)>(*this,lib,"jbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jbe >::invoke")
		->args({"self","addr"});
	using _method_569 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe >;
	addExtern<DAS_CALL_METHOD(_method_569)>(*this,lib,"jbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe >::invoke")
		->args({"self","label","type"});
	using _method_570 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc >;
	addExtern<DAS_CALL_METHOD(_method_570)>(*this,lib,"jc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc >::invoke")
		->args({"self","label","type"});
	using _method_571 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc >;
	addExtern<DAS_CALL_METHOD(_method_571)>(*this,lib,"jc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc >::invoke")
		->args({"self","label","type"});
	using _method_572 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jc >;
	addExtern<DAS_CALL_METHOD(_method_572)>(*this,lib,"jc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jc >::invoke")
		->args({"self","addr"});
	using _method_573 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc >;
	addExtern<DAS_CALL_METHOD(_method_573)>(*this,lib,"jc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc >::invoke")
		->args({"self","label","type"});
	using _method_574 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je >;
	addExtern<DAS_CALL_METHOD(_method_574)>(*this,lib,"je",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je >::invoke")
		->args({"self","label","type"});
	using _method_575 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je >;
	addExtern<DAS_CALL_METHOD(_method_575)>(*this,lib,"je",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je >::invoke")
		->args({"self","label","type"});
	using _method_576 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::je >;
	addExtern<DAS_CALL_METHOD(_method_576)>(*this,lib,"je",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::je >::invoke")
		->args({"self","addr"});
	using _method_577 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je >;
	addExtern<DAS_CALL_METHOD(_method_577)>(*this,lib,"je",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je >::invoke")
		->args({"self","label","type"});
	using _method_578 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg >;
	addExtern<DAS_CALL_METHOD(_method_578)>(*this,lib,"jg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg >::invoke")
		->args({"self","label","type"});
	using _method_579 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg >;
	addExtern<DAS_CALL_METHOD(_method_579)>(*this,lib,"jg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg >::invoke")
		->args({"self","label","type"});
	using _method_580 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jg >;
	addExtern<DAS_CALL_METHOD(_method_580)>(*this,lib,"jg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jg >::invoke")
		->args({"self","addr"});
	using _method_581 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg >;
	addExtern<DAS_CALL_METHOD(_method_581)>(*this,lib,"jg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg >::invoke")
		->args({"self","label","type"});
	using _method_582 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge >;
	addExtern<DAS_CALL_METHOD(_method_582)>(*this,lib,"jge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge >::invoke")
		->args({"self","label","type"});
	using _method_583 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge >;
	addExtern<DAS_CALL_METHOD(_method_583)>(*this,lib,"jge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge >::invoke")
		->args({"self","label","type"});
	using _method_584 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jge >;
	addExtern<DAS_CALL_METHOD(_method_584)>(*this,lib,"jge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jge >::invoke")
		->args({"self","addr"});
	using _method_585 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge >;
	addExtern<DAS_CALL_METHOD(_method_585)>(*this,lib,"jge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge >::invoke")
		->args({"self","label","type"});
	using _method_586 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl >;
	addExtern<DAS_CALL_METHOD(_method_586)>(*this,lib,"jl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl >::invoke")
		->args({"self","label","type"});
}
}

