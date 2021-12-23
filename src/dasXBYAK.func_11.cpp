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
void Module_dasXBYAK::initFunctions_11() {
	using _method_987 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setp >;
	addExtern<DAS_CALL_METHOD(_method_987)>(*this,lib,"setp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setp >::invoke")
		->args({"self","op"});
	using _method_988 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setpe >;
	addExtern<DAS_CALL_METHOD(_method_988)>(*this,lib,"setpe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setpe >::invoke")
		->args({"self","op"});
	using _method_989 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setpo >;
	addExtern<DAS_CALL_METHOD(_method_989)>(*this,lib,"setpo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setpo >::invoke")
		->args({"self","op"});
	using _method_990 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::sets >;
	addExtern<DAS_CALL_METHOD(_method_990)>(*this,lib,"sets",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::sets >::invoke")
		->args({"self","op"});
	using _method_991 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setz >;
	addExtern<DAS_CALL_METHOD(_method_991)>(*this,lib,"setz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setz >::invoke")
		->args({"self","op"});
	using _method_992 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sfence >;
	addExtern<DAS_CALL_METHOD(_method_992)>(*this,lib,"sfence",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sfence >::invoke")
		->args({"self"});
	using _method_993 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha1msg1 >;
	addExtern<DAS_CALL_METHOD(_method_993)>(*this,lib,"sha1msg1",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha1msg1 >::invoke")
		->args({"self","xmm","op"});
	using _method_994 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha1msg2 >;
	addExtern<DAS_CALL_METHOD(_method_994)>(*this,lib,"sha1msg2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha1msg2 >::invoke")
		->args({"self","xmm","op"});
	using _method_995 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha1nexte >;
	addExtern<DAS_CALL_METHOD(_method_995)>(*this,lib,"sha1nexte",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha1nexte >::invoke")
		->args({"self","xmm","op"});
	using _method_996 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::sha1rnds4 >;
	addExtern<DAS_CALL_METHOD(_method_996)>(*this,lib,"sha1rnds4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::sha1rnds4 >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_997 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha256msg1 >;
	addExtern<DAS_CALL_METHOD(_method_997)>(*this,lib,"sha256msg1",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha256msg1 >::invoke")
		->args({"self","xmm","op"});
	using _method_998 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha256msg2 >;
	addExtern<DAS_CALL_METHOD(_method_998)>(*this,lib,"sha256msg2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha256msg2 >::invoke")
		->args({"self","xmm","op"});
	using _method_999 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha256rnds2 >;
	addExtern<DAS_CALL_METHOD(_method_999)>(*this,lib,"sha256rnds2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sha256rnds2 >::invoke")
		->args({"self","xmm","op"});
	using _method_1000 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shl >;
	addExtern<DAS_CALL_METHOD(_method_1000)>(*this,lib,"shl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shl >::invoke")
		->args({"self","op","_cl"});
	using _method_1001 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::shl >;
	addExtern<DAS_CALL_METHOD(_method_1001)>(*this,lib,"shl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::shl >::invoke")
		->args({"self","op","imm"});
	using _method_1002 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shld >;
	addExtern<DAS_CALL_METHOD(_method_1002)>(*this,lib,"shld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shld >::invoke")
		->args({"self","op","reg","_cl"});
	using _method_1003 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &,unsigned char),&Xbyak::CodeGenerator::shld >;
	addExtern<DAS_CALL_METHOD(_method_1003)>(*this,lib,"shld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &,unsigned char),&Xbyak::CodeGenerator::shld >::invoke")
		->args({"self","op","reg","imm"});
	using _method_1004 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::shlx >;
	addExtern<DAS_CALL_METHOD(_method_1004)>(*this,lib,"shlx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::shlx >::invoke")
		->args({"self","r1","op","r2"});
	using _method_1005 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shr >;
	addExtern<DAS_CALL_METHOD(_method_1005)>(*this,lib,"shr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shr >::invoke")
		->args({"self","op","_cl"});
	using _method_1006 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::shr >;
	addExtern<DAS_CALL_METHOD(_method_1006)>(*this,lib,"shr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::shr >::invoke")
		->args({"self","op","imm"});
	using _method_1007 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shrd >;
	addExtern<DAS_CALL_METHOD(_method_1007)>(*this,lib,"shrd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shrd >::invoke")
		->args({"self","op","reg","_cl"});
	using _method_1008 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &,unsigned char),&Xbyak::CodeGenerator::shrd >;
	addExtern<DAS_CALL_METHOD(_method_1008)>(*this,lib,"shrd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &,unsigned char),&Xbyak::CodeGenerator::shrd >::invoke")
		->args({"self","op","reg","imm"});
	using _method_1009 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::shrx >;
	addExtern<DAS_CALL_METHOD(_method_1009)>(*this,lib,"shrx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::shrx >::invoke")
		->args({"self","r1","op","r2"});
	using _method_1010 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::shufpd >;
	addExtern<DAS_CALL_METHOD(_method_1010)>(*this,lib,"shufpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::shufpd >::invoke")
		->args({"self","xmm","op","imm8"});
	using _method_1011 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::shufps >;
	addExtern<DAS_CALL_METHOD(_method_1011)>(*this,lib,"shufps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::shufps >::invoke")
		->args({"self","xmm","op","imm8"});
	using _method_1012 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sqrtpd >;
	addExtern<DAS_CALL_METHOD(_method_1012)>(*this,lib,"sqrtpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sqrtpd >::invoke")
		->args({"self","xmm","op"});
	using _method_1013 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sqrtps >;
	addExtern<DAS_CALL_METHOD(_method_1013)>(*this,lib,"sqrtps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sqrtps >::invoke")
		->args({"self","xmm","op"});
	using _method_1014 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sqrtsd >;
	addExtern<DAS_CALL_METHOD(_method_1014)>(*this,lib,"sqrtsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sqrtsd >::invoke")
		->args({"self","xmm","op"});
	using _method_1015 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sqrtss >;
	addExtern<DAS_CALL_METHOD(_method_1015)>(*this,lib,"sqrtss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sqrtss >::invoke")
		->args({"self","xmm","op"});
	using _method_1016 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stac >;
	addExtern<DAS_CALL_METHOD(_method_1016)>(*this,lib,"stac",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stac >::invoke")
		->args({"self"});
	using _method_1017 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stc >;
	addExtern<DAS_CALL_METHOD(_method_1017)>(*this,lib,"stc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stc >::invoke")
		->args({"self"});
	using _method_1018 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::std >;
	addExtern<DAS_CALL_METHOD(_method_1018)>(*this,lib,"std",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::std >::invoke")
		->args({"self"});
	using _method_1019 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sti >;
	addExtern<DAS_CALL_METHOD(_method_1019)>(*this,lib,"sti",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sti >::invoke")
		->args({"self"});
	using _method_1020 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::stmxcsr >;
	addExtern<DAS_CALL_METHOD(_method_1020)>(*this,lib,"stmxcsr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::stmxcsr >::invoke")
		->args({"self","addr"});
	using _method_1021 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stosb >;
	addExtern<DAS_CALL_METHOD(_method_1021)>(*this,lib,"stosb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stosb >::invoke")
		->args({"self"});
	using _method_1022 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stosd >;
	addExtern<DAS_CALL_METHOD(_method_1022)>(*this,lib,"stosd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stosd >::invoke")
		->args({"self"});
	using _method_1023 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stosw >;
	addExtern<DAS_CALL_METHOD(_method_1023)>(*this,lib,"stosw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stosw >::invoke")
		->args({"self"});
	using _method_1024 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::sub >;
	addExtern<DAS_CALL_METHOD(_method_1024)>(*this,lib,"sub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::sub >::invoke")
		->args({"self","op","imm"});
	using _method_1025 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sub >;
	addExtern<DAS_CALL_METHOD(_method_1025)>(*this,lib,"sub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sub >::invoke")
		->args({"self","op1","op2"});
	using _method_1026 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::subpd >;
	addExtern<DAS_CALL_METHOD(_method_1026)>(*this,lib,"subpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::subpd >::invoke")
		->args({"self","xmm","op"});
	using _method_1027 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::subps >;
	addExtern<DAS_CALL_METHOD(_method_1027)>(*this,lib,"subps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::subps >::invoke")
		->args({"self","xmm","op"});
	using _method_1028 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::subsd >;
	addExtern<DAS_CALL_METHOD(_method_1028)>(*this,lib,"subsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::subsd >::invoke")
		->args({"self","xmm","op"});
	using _method_1029 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::subss >;
	addExtern<DAS_CALL_METHOD(_method_1029)>(*this,lib,"subss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::subss >::invoke")
		->args({"self","xmm","op"});
	using _method_1030 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sysenter >;
	addExtern<DAS_CALL_METHOD(_method_1030)>(*this,lib,"sysenter",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sysenter >::invoke")
		->args({"self"});
	using _method_1031 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sysexit >;
	addExtern<DAS_CALL_METHOD(_method_1031)>(*this,lib,"sysexit",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sysexit >::invoke")
		->args({"self"});
	using _method_1032 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::tzcnt >;
	addExtern<DAS_CALL_METHOD(_method_1032)>(*this,lib,"tzcnt",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::tzcnt >::invoke")
		->args({"self","reg","op"});
	using _method_1033 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::ucomisd >;
	addExtern<DAS_CALL_METHOD(_method_1033)>(*this,lib,"ucomisd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::ucomisd >::invoke")
		->args({"self","xmm","op"});
	using _method_1034 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::ucomiss >;
	addExtern<DAS_CALL_METHOD(_method_1034)>(*this,lib,"ucomiss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::ucomiss >::invoke")
		->args({"self","xmm","op"});
	using _method_1035 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::ud2 >;
	addExtern<DAS_CALL_METHOD(_method_1035)>(*this,lib,"ud2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::ud2 >::invoke")
		->args({"self"});
	using _method_1036 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::unpckhpd >;
	addExtern<DAS_CALL_METHOD(_method_1036)>(*this,lib,"unpckhpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::unpckhpd >::invoke")
		->args({"self","xmm","op"});
	using _method_1037 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::unpckhps >;
	addExtern<DAS_CALL_METHOD(_method_1037)>(*this,lib,"unpckhps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::unpckhps >::invoke")
		->args({"self","xmm","op"});
	using _method_1038 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::unpcklpd >;
	addExtern<DAS_CALL_METHOD(_method_1038)>(*this,lib,"unpcklpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::unpcklpd >::invoke")
		->args({"self","xmm","op"});
	using _method_1039 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::unpcklps >;
	addExtern<DAS_CALL_METHOD(_method_1039)>(*this,lib,"unpcklps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::unpcklps >::invoke")
		->args({"self","xmm","op"});
	using _method_1040 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddpd >;
	addExtern<DAS_CALL_METHOD(_method_1040)>(*this,lib,"vaddpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1041 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddps >;
	addExtern<DAS_CALL_METHOD(_method_1041)>(*this,lib,"vaddps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1042 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddsd >;
	addExtern<DAS_CALL_METHOD(_method_1042)>(*this,lib,"vaddsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddsd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1043 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddss >;
	addExtern<DAS_CALL_METHOD(_method_1043)>(*this,lib,"vaddss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddss >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1044 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddsubpd >;
	addExtern<DAS_CALL_METHOD(_method_1044)>(*this,lib,"vaddsubpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddsubpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1045 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddsubps >;
	addExtern<DAS_CALL_METHOD(_method_1045)>(*this,lib,"vaddsubps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddsubps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1046 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaesdec >;
	addExtern<DAS_CALL_METHOD(_method_1046)>(*this,lib,"vaesdec",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaesdec >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1047 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaesdeclast >;
	addExtern<DAS_CALL_METHOD(_method_1047)>(*this,lib,"vaesdeclast",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaesdeclast >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1048 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaesenc >;
	addExtern<DAS_CALL_METHOD(_method_1048)>(*this,lib,"vaesenc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaesenc >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1049 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaesenclast >;
	addExtern<DAS_CALL_METHOD(_method_1049)>(*this,lib,"vaesenclast",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaesenclast >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1050 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaesimc >;
	addExtern<DAS_CALL_METHOD(_method_1050)>(*this,lib,"vaesimc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaesimc >::invoke")
		->args({"self","xm","op"});
	using _method_1051 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vaeskeygenassist >;
	addExtern<DAS_CALL_METHOD(_method_1051)>(*this,lib,"vaeskeygenassist",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vaeskeygenassist >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1052 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vandnpd >;
	addExtern<DAS_CALL_METHOD(_method_1052)>(*this,lib,"vandnpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vandnpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1053 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vandnps >;
	addExtern<DAS_CALL_METHOD(_method_1053)>(*this,lib,"vandnps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vandnps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1054 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vandpd >;
	addExtern<DAS_CALL_METHOD(_method_1054)>(*this,lib,"vandpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vandpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1055 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vandps >;
	addExtern<DAS_CALL_METHOD(_method_1055)>(*this,lib,"vandps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vandps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1056 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vblendpd >;
	addExtern<DAS_CALL_METHOD(_method_1056)>(*this,lib,"vblendpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vblendpd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1057 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vblendps >;
	addExtern<DAS_CALL_METHOD(_method_1057)>(*this,lib,"vblendps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vblendps >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1058 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vblendvpd >;
	addExtern<DAS_CALL_METHOD(_method_1058)>(*this,lib,"vblendvpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vblendvpd >::invoke")
		->args({"self","x1","x2","op","x4"});
	using _method_1059 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vblendvps >;
	addExtern<DAS_CALL_METHOD(_method_1059)>(*this,lib,"vblendvps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vblendvps >::invoke")
		->args({"self","x1","x2","op","x4"});
	using _method_1060 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcastf128 >;
	addExtern<DAS_CALL_METHOD(_method_1060)>(*this,lib,"vbroadcastf128",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcastf128 >::invoke")
		->args({"self","y","addr"});
	using _method_1061 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcasti128 >;
	addExtern<DAS_CALL_METHOD(_method_1061)>(*this,lib,"vbroadcasti128",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcasti128 >::invoke")
		->args({"self","y","addr"});
	using _method_1062 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcastsd >;
	addExtern<DAS_CALL_METHOD(_method_1062)>(*this,lib,"vbroadcastsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcastsd >::invoke")
		->args({"self","y","op"});
	using _method_1063 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcastss >;
	addExtern<DAS_CALL_METHOD(_method_1063)>(*this,lib,"vbroadcastss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcastss >::invoke")
		->args({"self","x","op"});
	using _method_1064 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd >;
	addExtern<DAS_CALL_METHOD(_method_1064)>(*this,lib,"vcmpeq_ospd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1065 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps >;
	addExtern<DAS_CALL_METHOD(_method_1065)>(*this,lib,"vcmpeq_osps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1066 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd >;
	addExtern<DAS_CALL_METHOD(_method_1066)>(*this,lib,"vcmpeq_ossd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1067 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss >;
	addExtern<DAS_CALL_METHOD(_method_1067)>(*this,lib,"vcmpeq_osss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1068 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1068)>(*this,lib,"vcmpeq_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1069 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1069)>(*this,lib,"vcmpeq_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1070 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1070)>(*this,lib,"vcmpeq_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1071 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1071)>(*this,lib,"vcmpeq_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1072 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd >;
	addExtern<DAS_CALL_METHOD(_method_1072)>(*this,lib,"vcmpeq_uspd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1073 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps >;
	addExtern<DAS_CALL_METHOD(_method_1073)>(*this,lib,"vcmpeq_usps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1074 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd >;
	addExtern<DAS_CALL_METHOD(_method_1074)>(*this,lib,"vcmpeq_ussd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1075 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss >;
	addExtern<DAS_CALL_METHOD(_method_1075)>(*this,lib,"vcmpeq_usss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1076 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd >;
	addExtern<DAS_CALL_METHOD(_method_1076)>(*this,lib,"vcmpeqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1077 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps >;
	addExtern<DAS_CALL_METHOD(_method_1077)>(*this,lib,"vcmpeqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1078 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd >;
	addExtern<DAS_CALL_METHOD(_method_1078)>(*this,lib,"vcmpeqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1079 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss >;
	addExtern<DAS_CALL_METHOD(_method_1079)>(*this,lib,"vcmpeqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1080 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd >;
	addExtern<DAS_CALL_METHOD(_method_1080)>(*this,lib,"vcmpfalse_ospd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1081 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps >;
	addExtern<DAS_CALL_METHOD(_method_1081)>(*this,lib,"vcmpfalse_osps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1082 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd >;
	addExtern<DAS_CALL_METHOD(_method_1082)>(*this,lib,"vcmpfalse_ossd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1083 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss >;
	addExtern<DAS_CALL_METHOD(_method_1083)>(*this,lib,"vcmpfalse_osss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1084 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd >;
	addExtern<DAS_CALL_METHOD(_method_1084)>(*this,lib,"vcmpfalsepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1085 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps >;
	addExtern<DAS_CALL_METHOD(_method_1085)>(*this,lib,"vcmpfalseps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1086 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd >;
	addExtern<DAS_CALL_METHOD(_method_1086)>(*this,lib,"vcmpfalsesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd >::invoke")
		->args({"self","x1","x2","op"});
}
}

