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
void Module_dasXBYAK::initFunctions_5() {
	using _method_387 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::divps >;
	addExtern<DAS_CALL_METHOD(_method_387)>(*this,lib,"divps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::divps >::invoke")
		->args({"self","xmm","op"});
	using _method_388 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::divsd >;
	addExtern<DAS_CALL_METHOD(_method_388)>(*this,lib,"divsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::divsd >::invoke")
		->args({"self","xmm","op"});
	using _method_389 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::divss >;
	addExtern<DAS_CALL_METHOD(_method_389)>(*this,lib,"divss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::divss >::invoke")
		->args({"self","xmm","op"});
	using _method_390 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::dppd >;
	addExtern<DAS_CALL_METHOD(_method_390)>(*this,lib,"dppd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::dppd >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_391 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::dpps >;
	addExtern<DAS_CALL_METHOD(_method_391)>(*this,lib,"dpps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::dpps >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_392 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::emms >;
	addExtern<DAS_CALL_METHOD(_method_392)>(*this,lib,"emms",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::emms >::invoke")
		->args({"self"});
	using _method_393 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::endbr32 >;
	addExtern<DAS_CALL_METHOD(_method_393)>(*this,lib,"endbr32",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::endbr32 >::invoke")
		->args({"self"});
	using _method_394 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::endbr64 >;
	addExtern<DAS_CALL_METHOD(_method_394)>(*this,lib,"endbr64",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::endbr64 >::invoke")
		->args({"self"});
	using _method_395 = das::das_call_member< void (Xbyak::CodeGenerator::*)(unsigned short,unsigned char),&Xbyak::CodeGenerator::enter >;
	addExtern<DAS_CALL_METHOD(_method_395)>(*this,lib,"enter",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(unsigned short,unsigned char),&Xbyak::CodeGenerator::enter >::invoke")
		->args({"self","x","y"});
	using _method_396 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::extractps >;
	addExtern<DAS_CALL_METHOD(_method_396)>(*this,lib,"extractps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::extractps >::invoke")
		->args({"self","op","xmm","imm"});
	using _method_397 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::f2xm1 >;
	addExtern<DAS_CALL_METHOD(_method_397)>(*this,lib,"f2xm1",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::f2xm1 >::invoke")
		->args({"self"});
	using _method_398 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fabs >;
	addExtern<DAS_CALL_METHOD(_method_398)>(*this,lib,"fabs",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fabs >::invoke")
		->args({"self"});
	using _method_399 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fadd >;
	addExtern<DAS_CALL_METHOD(_method_399)>(*this,lib,"fadd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fadd >::invoke")
		->args({"self","addr"});
	using _method_400 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd >;
	addExtern<DAS_CALL_METHOD(_method_400)>(*this,lib,"fadd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd >::invoke")
		->args({"self","reg1"});
	using _method_401 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd >;
	addExtern<DAS_CALL_METHOD(_method_401)>(*this,lib,"fadd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd >::invoke")
		->args({"self","reg1","reg2"});
	using _method_402 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::faddp >;
	addExtern<DAS_CALL_METHOD(_method_402)>(*this,lib,"faddp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::faddp >::invoke")
		->args({"self"});
	using _method_403 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp >;
	addExtern<DAS_CALL_METHOD(_method_403)>(*this,lib,"faddp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp >::invoke")
		->args({"self","reg1"});
	using _method_404 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp >;
	addExtern<DAS_CALL_METHOD(_method_404)>(*this,lib,"faddp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp >::invoke")
		->args({"self","reg1","reg2"});
	using _method_405 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fbld >;
	addExtern<DAS_CALL_METHOD(_method_405)>(*this,lib,"fbld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fbld >::invoke")
		->args({"self","addr"});
	using _method_406 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fbstp >;
	addExtern<DAS_CALL_METHOD(_method_406)>(*this,lib,"fbstp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fbstp >::invoke")
		->args({"self","addr"});
	using _method_407 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fchs >;
	addExtern<DAS_CALL_METHOD(_method_407)>(*this,lib,"fchs",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fchs >::invoke")
		->args({"self"});
	using _method_408 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fclex >;
	addExtern<DAS_CALL_METHOD(_method_408)>(*this,lib,"fclex",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fclex >::invoke")
		->args({"self"});
	using _method_409 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb >;
	addExtern<DAS_CALL_METHOD(_method_409)>(*this,lib,"fcmovb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb >::invoke")
		->args({"self","reg1"});
	using _method_410 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb >;
	addExtern<DAS_CALL_METHOD(_method_410)>(*this,lib,"fcmovb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb >::invoke")
		->args({"self","reg1","reg2"});
	using _method_411 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe >;
	addExtern<DAS_CALL_METHOD(_method_411)>(*this,lib,"fcmovbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe >::invoke")
		->args({"self","reg1"});
	using _method_412 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe >;
	addExtern<DAS_CALL_METHOD(_method_412)>(*this,lib,"fcmovbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe >::invoke")
		->args({"self","reg1","reg2"});
	using _method_413 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove >;
	addExtern<DAS_CALL_METHOD(_method_413)>(*this,lib,"fcmove",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove >::invoke")
		->args({"self","reg1"});
	using _method_414 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove >;
	addExtern<DAS_CALL_METHOD(_method_414)>(*this,lib,"fcmove",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove >::invoke")
		->args({"self","reg1","reg2"});
	using _method_415 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb >;
	addExtern<DAS_CALL_METHOD(_method_415)>(*this,lib,"fcmovnb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb >::invoke")
		->args({"self","reg1"});
	using _method_416 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb >;
	addExtern<DAS_CALL_METHOD(_method_416)>(*this,lib,"fcmovnb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb >::invoke")
		->args({"self","reg1","reg2"});
	using _method_417 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe >;
	addExtern<DAS_CALL_METHOD(_method_417)>(*this,lib,"fcmovnbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe >::invoke")
		->args({"self","reg1"});
	using _method_418 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe >;
	addExtern<DAS_CALL_METHOD(_method_418)>(*this,lib,"fcmovnbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe >::invoke")
		->args({"self","reg1","reg2"});
	using _method_419 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne >;
	addExtern<DAS_CALL_METHOD(_method_419)>(*this,lib,"fcmovne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne >::invoke")
		->args({"self","reg1"});
	using _method_420 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne >;
	addExtern<DAS_CALL_METHOD(_method_420)>(*this,lib,"fcmovne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne >::invoke")
		->args({"self","reg1","reg2"});
	using _method_421 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu >;
	addExtern<DAS_CALL_METHOD(_method_421)>(*this,lib,"fcmovnu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu >::invoke")
		->args({"self","reg1"});
	using _method_422 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu >;
	addExtern<DAS_CALL_METHOD(_method_422)>(*this,lib,"fcmovnu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu >::invoke")
		->args({"self","reg1","reg2"});
	using _method_423 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu >;
	addExtern<DAS_CALL_METHOD(_method_423)>(*this,lib,"fcmovu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu >::invoke")
		->args({"self","reg1"});
	using _method_424 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu >;
	addExtern<DAS_CALL_METHOD(_method_424)>(*this,lib,"fcmovu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu >::invoke")
		->args({"self","reg1","reg2"});
	using _method_425 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcom >;
	addExtern<DAS_CALL_METHOD(_method_425)>(*this,lib,"fcom",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcom >::invoke")
		->args({"self"});
	using _method_426 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcom >;
	addExtern<DAS_CALL_METHOD(_method_426)>(*this,lib,"fcom",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcom >::invoke")
		->args({"self","addr"});
	using _method_427 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcom >;
	addExtern<DAS_CALL_METHOD(_method_427)>(*this,lib,"fcom",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcom >::invoke")
		->args({"self","reg"});
	using _method_428 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi >;
	addExtern<DAS_CALL_METHOD(_method_428)>(*this,lib,"fcomi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi >::invoke")
		->args({"self","reg1"});
	using _method_429 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi >;
	addExtern<DAS_CALL_METHOD(_method_429)>(*this,lib,"fcomi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi >::invoke")
		->args({"self","reg1","reg2"});
	using _method_430 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip >;
	addExtern<DAS_CALL_METHOD(_method_430)>(*this,lib,"fcomip",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip >::invoke")
		->args({"self","reg1"});
	using _method_431 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip >;
	addExtern<DAS_CALL_METHOD(_method_431)>(*this,lib,"fcomip",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip >::invoke")
		->args({"self","reg1","reg2"});
	using _method_432 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcomp >;
	addExtern<DAS_CALL_METHOD(_method_432)>(*this,lib,"fcomp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcomp >::invoke")
		->args({"self"});
	using _method_433 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcomp >;
	addExtern<DAS_CALL_METHOD(_method_433)>(*this,lib,"fcomp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcomp >::invoke")
		->args({"self","addr"});
	using _method_434 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomp >;
	addExtern<DAS_CALL_METHOD(_method_434)>(*this,lib,"fcomp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomp >::invoke")
		->args({"self","reg"});
	using _method_435 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcompp >;
	addExtern<DAS_CALL_METHOD(_method_435)>(*this,lib,"fcompp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcompp >::invoke")
		->args({"self"});
	using _method_436 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcos >;
	addExtern<DAS_CALL_METHOD(_method_436)>(*this,lib,"fcos",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcos >::invoke")
		->args({"self"});
	using _method_437 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdecstp >;
	addExtern<DAS_CALL_METHOD(_method_437)>(*this,lib,"fdecstp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdecstp >::invoke")
		->args({"self"});
	using _method_438 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdiv >;
	addExtern<DAS_CALL_METHOD(_method_438)>(*this,lib,"fdiv",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdiv >::invoke")
		->args({"self","addr"});
	using _method_439 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv >;
	addExtern<DAS_CALL_METHOD(_method_439)>(*this,lib,"fdiv",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv >::invoke")
		->args({"self","reg1"});
	using _method_440 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv >;
	addExtern<DAS_CALL_METHOD(_method_440)>(*this,lib,"fdiv",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv >::invoke")
		->args({"self","reg1","reg2"});
	using _method_441 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivp >;
	addExtern<DAS_CALL_METHOD(_method_441)>(*this,lib,"fdivp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivp >::invoke")
		->args({"self"});
	using _method_442 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp >;
	addExtern<DAS_CALL_METHOD(_method_442)>(*this,lib,"fdivp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp >::invoke")
		->args({"self","reg1"});
	using _method_443 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp >;
	addExtern<DAS_CALL_METHOD(_method_443)>(*this,lib,"fdivp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp >::invoke")
		->args({"self","reg1","reg2"});
	using _method_444 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdivr >;
	addExtern<DAS_CALL_METHOD(_method_444)>(*this,lib,"fdivr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdivr >::invoke")
		->args({"self","addr"});
	using _method_445 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr >;
	addExtern<DAS_CALL_METHOD(_method_445)>(*this,lib,"fdivr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr >::invoke")
		->args({"self","reg1"});
	using _method_446 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr >;
	addExtern<DAS_CALL_METHOD(_method_446)>(*this,lib,"fdivr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr >::invoke")
		->args({"self","reg1","reg2"});
	using _method_447 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivrp >;
	addExtern<DAS_CALL_METHOD(_method_447)>(*this,lib,"fdivrp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivrp >::invoke")
		->args({"self"});
	using _method_448 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp >;
	addExtern<DAS_CALL_METHOD(_method_448)>(*this,lib,"fdivrp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp >::invoke")
		->args({"self","reg1"});
	using _method_449 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp >;
	addExtern<DAS_CALL_METHOD(_method_449)>(*this,lib,"fdivrp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp >::invoke")
		->args({"self","reg1","reg2"});
	using _method_450 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::ffree >;
	addExtern<DAS_CALL_METHOD(_method_450)>(*this,lib,"ffree",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::ffree >::invoke")
		->args({"self","reg"});
	using _method_451 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fiadd >;
	addExtern<DAS_CALL_METHOD(_method_451)>(*this,lib,"fiadd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fiadd >::invoke")
		->args({"self","addr"});
	using _method_452 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::ficom >;
	addExtern<DAS_CALL_METHOD(_method_452)>(*this,lib,"ficom",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::ficom >::invoke")
		->args({"self","addr"});
	using _method_453 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::ficomp >;
	addExtern<DAS_CALL_METHOD(_method_453)>(*this,lib,"ficomp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::ficomp >::invoke")
		->args({"self","addr"});
	using _method_454 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fidiv >;
	addExtern<DAS_CALL_METHOD(_method_454)>(*this,lib,"fidiv",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fidiv >::invoke")
		->args({"self","addr"});
	using _method_455 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fidivr >;
	addExtern<DAS_CALL_METHOD(_method_455)>(*this,lib,"fidivr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fidivr >::invoke")
		->args({"self","addr"});
	using _method_456 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fild >;
	addExtern<DAS_CALL_METHOD(_method_456)>(*this,lib,"fild",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fild >::invoke")
		->args({"self","addr"});
	using _method_457 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fimul >;
	addExtern<DAS_CALL_METHOD(_method_457)>(*this,lib,"fimul",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fimul >::invoke")
		->args({"self","addr"});
	using _method_458 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fincstp >;
	addExtern<DAS_CALL_METHOD(_method_458)>(*this,lib,"fincstp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fincstp >::invoke")
		->args({"self"});
	using _method_459 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::finit >;
	addExtern<DAS_CALL_METHOD(_method_459)>(*this,lib,"finit",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::finit >::invoke")
		->args({"self"});
	using _method_460 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fist >;
	addExtern<DAS_CALL_METHOD(_method_460)>(*this,lib,"fist",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fist >::invoke")
		->args({"self","addr"});
	using _method_461 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fistp >;
	addExtern<DAS_CALL_METHOD(_method_461)>(*this,lib,"fistp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fistp >::invoke")
		->args({"self","addr"});
	using _method_462 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fisttp >;
	addExtern<DAS_CALL_METHOD(_method_462)>(*this,lib,"fisttp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fisttp >::invoke")
		->args({"self","addr"});
	using _method_463 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fisub >;
	addExtern<DAS_CALL_METHOD(_method_463)>(*this,lib,"fisub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fisub >::invoke")
		->args({"self","addr"});
	using _method_464 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fisubr >;
	addExtern<DAS_CALL_METHOD(_method_464)>(*this,lib,"fisubr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fisubr >::invoke")
		->args({"self","addr"});
	using _method_465 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fld >;
	addExtern<DAS_CALL_METHOD(_method_465)>(*this,lib,"fld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fld >::invoke")
		->args({"self","addr"});
	using _method_466 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fld >;
	addExtern<DAS_CALL_METHOD(_method_466)>(*this,lib,"fld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fld >::invoke")
		->args({"self","reg"});
	using _method_467 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fld1 >;
	addExtern<DAS_CALL_METHOD(_method_467)>(*this,lib,"fld1",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fld1 >::invoke")
		->args({"self"});
	using _method_468 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fldcw >;
	addExtern<DAS_CALL_METHOD(_method_468)>(*this,lib,"fldcw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fldcw >::invoke")
		->args({"self","addr"});
	using _method_469 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fldenv >;
	addExtern<DAS_CALL_METHOD(_method_469)>(*this,lib,"fldenv",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fldenv >::invoke")
		->args({"self","addr"});
	using _method_470 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldl2e >;
	addExtern<DAS_CALL_METHOD(_method_470)>(*this,lib,"fldl2e",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldl2e >::invoke")
		->args({"self"});
	using _method_471 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldl2t >;
	addExtern<DAS_CALL_METHOD(_method_471)>(*this,lib,"fldl2t",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldl2t >::invoke")
		->args({"self"});
	using _method_472 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldlg2 >;
	addExtern<DAS_CALL_METHOD(_method_472)>(*this,lib,"fldlg2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldlg2 >::invoke")
		->args({"self"});
	using _method_473 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldln2 >;
	addExtern<DAS_CALL_METHOD(_method_473)>(*this,lib,"fldln2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldln2 >::invoke")
		->args({"self"});
	using _method_474 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldpi >;
	addExtern<DAS_CALL_METHOD(_method_474)>(*this,lib,"fldpi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldpi >::invoke")
		->args({"self"});
	using _method_475 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldz >;
	addExtern<DAS_CALL_METHOD(_method_475)>(*this,lib,"fldz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fldz >::invoke")
		->args({"self"});
	using _method_476 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fmul >;
	addExtern<DAS_CALL_METHOD(_method_476)>(*this,lib,"fmul",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fmul >::invoke")
		->args({"self","addr"});
	using _method_477 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul >;
	addExtern<DAS_CALL_METHOD(_method_477)>(*this,lib,"fmul",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul >::invoke")
		->args({"self","reg1"});
	using _method_478 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul >;
	addExtern<DAS_CALL_METHOD(_method_478)>(*this,lib,"fmul",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul >::invoke")
		->args({"self","reg1","reg2"});
	using _method_479 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fmulp >;
	addExtern<DAS_CALL_METHOD(_method_479)>(*this,lib,"fmulp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fmulp >::invoke")
		->args({"self"});
	using _method_480 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp >;
	addExtern<DAS_CALL_METHOD(_method_480)>(*this,lib,"fmulp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp >::invoke")
		->args({"self","reg1"});
	using _method_481 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp >;
	addExtern<DAS_CALL_METHOD(_method_481)>(*this,lib,"fmulp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp >::invoke")
		->args({"self","reg1","reg2"});
	using _method_482 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fnclex >;
	addExtern<DAS_CALL_METHOD(_method_482)>(*this,lib,"fnclex",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fnclex >::invoke")
		->args({"self"});
	using _method_483 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fninit >;
	addExtern<DAS_CALL_METHOD(_method_483)>(*this,lib,"fninit",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fninit >::invoke")
		->args({"self"});
	using _method_484 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fnop >;
	addExtern<DAS_CALL_METHOD(_method_484)>(*this,lib,"fnop",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fnop >::invoke")
		->args({"self"});
	using _method_485 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnsave >;
	addExtern<DAS_CALL_METHOD(_method_485)>(*this,lib,"fnsave",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnsave >::invoke")
		->args({"self","addr"});
	using _method_486 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnstcw >;
	addExtern<DAS_CALL_METHOD(_method_486)>(*this,lib,"fnstcw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnstcw >::invoke")
		->args({"self","addr"});
}
}

