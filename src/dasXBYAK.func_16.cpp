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
void Module_dasXBYAK::initFunctions_16() {
	using _method_1487 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpslldq >;
	addExtern<DAS_CALL_METHOD(_method_1487)>(*this,lib,"vpslldq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpslldq >::invoke")
		->args({"self","x","op","imm"});
	using _method_1488 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsllq >;
	addExtern<DAS_CALL_METHOD(_method_1488)>(*this,lib,"vpsllq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsllq >::invoke")
		->args({"self","x","op","imm"});
	using _method_1489 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllq >;
	addExtern<DAS_CALL_METHOD(_method_1489)>(*this,lib,"vpsllq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1490 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllvd >;
	addExtern<DAS_CALL_METHOD(_method_1490)>(*this,lib,"vpsllvd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllvd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1491 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllvq >;
	addExtern<DAS_CALL_METHOD(_method_1491)>(*this,lib,"vpsllvq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllvq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1492 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsllw >;
	addExtern<DAS_CALL_METHOD(_method_1492)>(*this,lib,"vpsllw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsllw >::invoke")
		->args({"self","x","op","imm"});
	using _method_1493 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllw >;
	addExtern<DAS_CALL_METHOD(_method_1493)>(*this,lib,"vpsllw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1494 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsrad >;
	addExtern<DAS_CALL_METHOD(_method_1494)>(*this,lib,"vpsrad",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsrad >::invoke")
		->args({"self","x","op","imm"});
	using _method_1495 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrad >;
	addExtern<DAS_CALL_METHOD(_method_1495)>(*this,lib,"vpsrad",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrad >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1496 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsravd >;
	addExtern<DAS_CALL_METHOD(_method_1496)>(*this,lib,"vpsravd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsravd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1497 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsraw >;
	addExtern<DAS_CALL_METHOD(_method_1497)>(*this,lib,"vpsraw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsraw >::invoke")
		->args({"self","x","op","imm"});
	using _method_1498 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraw >;
	addExtern<DAS_CALL_METHOD(_method_1498)>(*this,lib,"vpsraw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1499 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsrld >;
	addExtern<DAS_CALL_METHOD(_method_1499)>(*this,lib,"vpsrld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsrld >::invoke")
		->args({"self","x","op","imm"});
	using _method_1500 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrld >;
	addExtern<DAS_CALL_METHOD(_method_1500)>(*this,lib,"vpsrld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrld >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1501 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsrldq >;
	addExtern<DAS_CALL_METHOD(_method_1501)>(*this,lib,"vpsrldq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsrldq >::invoke")
		->args({"self","x","op","imm"});
	using _method_1502 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsrlq >;
	addExtern<DAS_CALL_METHOD(_method_1502)>(*this,lib,"vpsrlq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsrlq >::invoke")
		->args({"self","x","op","imm"});
	using _method_1503 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlq >;
	addExtern<DAS_CALL_METHOD(_method_1503)>(*this,lib,"vpsrlq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1504 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlvd >;
	addExtern<DAS_CALL_METHOD(_method_1504)>(*this,lib,"vpsrlvd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlvd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1505 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlvq >;
	addExtern<DAS_CALL_METHOD(_method_1505)>(*this,lib,"vpsrlvq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlvq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1506 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsrlw >;
	addExtern<DAS_CALL_METHOD(_method_1506)>(*this,lib,"vpsrlw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsrlw >::invoke")
		->args({"self","x","op","imm"});
	using _method_1507 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlw >;
	addExtern<DAS_CALL_METHOD(_method_1507)>(*this,lib,"vpsrlw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1508 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubb >;
	addExtern<DAS_CALL_METHOD(_method_1508)>(*this,lib,"vpsubb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1509 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubd >;
	addExtern<DAS_CALL_METHOD(_method_1509)>(*this,lib,"vpsubd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1510 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubq >;
	addExtern<DAS_CALL_METHOD(_method_1510)>(*this,lib,"vpsubq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1511 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubsb >;
	addExtern<DAS_CALL_METHOD(_method_1511)>(*this,lib,"vpsubsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubsb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1512 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubsw >;
	addExtern<DAS_CALL_METHOD(_method_1512)>(*this,lib,"vpsubsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubsw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1513 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubusb >;
	addExtern<DAS_CALL_METHOD(_method_1513)>(*this,lib,"vpsubusb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubusb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1514 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubusw >;
	addExtern<DAS_CALL_METHOD(_method_1514)>(*this,lib,"vpsubusw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubusw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1515 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubw >;
	addExtern<DAS_CALL_METHOD(_method_1515)>(*this,lib,"vpsubw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsubw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1516 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptest >;
	addExtern<DAS_CALL_METHOD(_method_1516)>(*this,lib,"vptest",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptest >::invoke")
		->args({"self","xm","op"});
	using _method_1517 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpckhbw >;
	addExtern<DAS_CALL_METHOD(_method_1517)>(*this,lib,"vpunpckhbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpckhbw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1518 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpckhdq >;
	addExtern<DAS_CALL_METHOD(_method_1518)>(*this,lib,"vpunpckhdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpckhdq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1519 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpckhqdq >;
	addExtern<DAS_CALL_METHOD(_method_1519)>(*this,lib,"vpunpckhqdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpckhqdq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1520 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpckhwd >;
	addExtern<DAS_CALL_METHOD(_method_1520)>(*this,lib,"vpunpckhwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpckhwd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1521 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpcklbw >;
	addExtern<DAS_CALL_METHOD(_method_1521)>(*this,lib,"vpunpcklbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpcklbw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1522 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpckldq >;
	addExtern<DAS_CALL_METHOD(_method_1522)>(*this,lib,"vpunpckldq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpckldq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1523 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpcklqdq >;
	addExtern<DAS_CALL_METHOD(_method_1523)>(*this,lib,"vpunpcklqdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpcklqdq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1524 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpcklwd >;
	addExtern<DAS_CALL_METHOD(_method_1524)>(*this,lib,"vpunpcklwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpunpcklwd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1525 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpxor >;
	addExtern<DAS_CALL_METHOD(_method_1525)>(*this,lib,"vpxor",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpxor >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1526 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcpps >;
	addExtern<DAS_CALL_METHOD(_method_1526)>(*this,lib,"vrcpps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcpps >::invoke")
		->args({"self","xm","op"});
	using _method_1527 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcpss >;
	addExtern<DAS_CALL_METHOD(_method_1527)>(*this,lib,"vrcpss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcpss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1528 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vroundpd >;
	addExtern<DAS_CALL_METHOD(_method_1528)>(*this,lib,"vroundpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vroundpd >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1529 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vroundps >;
	addExtern<DAS_CALL_METHOD(_method_1529)>(*this,lib,"vroundps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vroundps >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1530 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vroundsd >;
	addExtern<DAS_CALL_METHOD(_method_1530)>(*this,lib,"vroundsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vroundsd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1531 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vroundss >;
	addExtern<DAS_CALL_METHOD(_method_1531)>(*this,lib,"vroundss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vroundss >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1532 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrtps >;
	addExtern<DAS_CALL_METHOD(_method_1532)>(*this,lib,"vrsqrtps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrtps >::invoke")
		->args({"self","xm","op"});
	using _method_1533 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrtss >;
	addExtern<DAS_CALL_METHOD(_method_1533)>(*this,lib,"vrsqrtss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrtss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1534 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshufpd >;
	addExtern<DAS_CALL_METHOD(_method_1534)>(*this,lib,"vshufpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshufpd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1535 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshufps >;
	addExtern<DAS_CALL_METHOD(_method_1535)>(*this,lib,"vshufps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshufps >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1536 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtpd >;
	addExtern<DAS_CALL_METHOD(_method_1536)>(*this,lib,"vsqrtpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtpd >::invoke")
		->args({"self","xm","op"});
	using _method_1537 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtps >;
	addExtern<DAS_CALL_METHOD(_method_1537)>(*this,lib,"vsqrtps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtps >::invoke")
		->args({"self","xm","op"});
	using _method_1538 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtsd >;
	addExtern<DAS_CALL_METHOD(_method_1538)>(*this,lib,"vsqrtsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1539 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtss >;
	addExtern<DAS_CALL_METHOD(_method_1539)>(*this,lib,"vsqrtss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1540 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vstmxcsr >;
	addExtern<DAS_CALL_METHOD(_method_1540)>(*this,lib,"vstmxcsr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vstmxcsr >::invoke")
		->args({"self","addr"});
	using _method_1541 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubpd >;
	addExtern<DAS_CALL_METHOD(_method_1541)>(*this,lib,"vsubpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1542 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubps >;
	addExtern<DAS_CALL_METHOD(_method_1542)>(*this,lib,"vsubps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1543 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubsd >;
	addExtern<DAS_CALL_METHOD(_method_1543)>(*this,lib,"vsubsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubsd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1544 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubss >;
	addExtern<DAS_CALL_METHOD(_method_1544)>(*this,lib,"vsubss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubss >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1545 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vtestpd >;
	addExtern<DAS_CALL_METHOD(_method_1545)>(*this,lib,"vtestpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vtestpd >::invoke")
		->args({"self","xm","op"});
	using _method_1546 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vtestps >;
	addExtern<DAS_CALL_METHOD(_method_1546)>(*this,lib,"vtestps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vtestps >::invoke")
		->args({"self","xm","op"});
	using _method_1547 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vucomisd >;
	addExtern<DAS_CALL_METHOD(_method_1547)>(*this,lib,"vucomisd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vucomisd >::invoke")
		->args({"self","xm","op"});
	using _method_1548 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vucomiss >;
	addExtern<DAS_CALL_METHOD(_method_1548)>(*this,lib,"vucomiss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vucomiss >::invoke")
		->args({"self","xm","op"});
	using _method_1549 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vunpckhpd >;
	addExtern<DAS_CALL_METHOD(_method_1549)>(*this,lib,"vunpckhpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vunpckhpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1550 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vunpckhps >;
	addExtern<DAS_CALL_METHOD(_method_1550)>(*this,lib,"vunpckhps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vunpckhps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1551 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vunpcklpd >;
	addExtern<DAS_CALL_METHOD(_method_1551)>(*this,lib,"vunpcklpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vunpcklpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1552 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vunpcklps >;
	addExtern<DAS_CALL_METHOD(_method_1552)>(*this,lib,"vunpcklps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vunpcklps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1553 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vxorpd >;
	addExtern<DAS_CALL_METHOD(_method_1553)>(*this,lib,"vxorpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vxorpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1554 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vxorps >;
	addExtern<DAS_CALL_METHOD(_method_1554)>(*this,lib,"vxorps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vxorps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1555 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::vzeroall >;
	addExtern<DAS_CALL_METHOD(_method_1555)>(*this,lib,"vzeroall",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::vzeroall >::invoke")
		->args({"self"});
	using _method_1556 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::vzeroupper >;
	addExtern<DAS_CALL_METHOD(_method_1556)>(*this,lib,"vzeroupper",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::vzeroupper >::invoke")
		->args({"self"});
	using _method_1557 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::wait >;
	addExtern<DAS_CALL_METHOD(_method_1557)>(*this,lib,"wait",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::wait >::invoke")
		->args({"self"});
	using _method_1558 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::wbinvd >;
	addExtern<DAS_CALL_METHOD(_method_1558)>(*this,lib,"wbinvd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::wbinvd >::invoke")
		->args({"self"});
	using _method_1559 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::wrmsr >;
	addExtern<DAS_CALL_METHOD(_method_1559)>(*this,lib,"wrmsr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::wrmsr >::invoke")
		->args({"self"});
	using _method_1560 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::xadd >;
	addExtern<DAS_CALL_METHOD(_method_1560)>(*this,lib,"xadd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::xadd >::invoke")
		->args({"self","op","reg"});
	using _method_1561 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::xgetbv >;
	addExtern<DAS_CALL_METHOD(_method_1561)>(*this,lib,"xgetbv",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::xgetbv >::invoke")
		->args({"self"});
	using _method_1562 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::xlatb >;
	addExtern<DAS_CALL_METHOD(_method_1562)>(*this,lib,"xlatb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::xlatb >::invoke")
		->args({"self"});
	using _method_1563 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::xor_ >;
	addExtern<DAS_CALL_METHOD(_method_1563)>(*this,lib,"xor_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::xor_ >::invoke")
		->args({"self","op","imm"});
	using _method_1564 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::xor_ >;
	addExtern<DAS_CALL_METHOD(_method_1564)>(*this,lib,"xor_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::xor_ >::invoke")
		->args({"self","op1","op2"});
	using _method_1565 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::xorpd >;
	addExtern<DAS_CALL_METHOD(_method_1565)>(*this,lib,"xorpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::xorpd >::invoke")
		->args({"self","xmm","op"});
	using _method_1566 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::xorps >;
	addExtern<DAS_CALL_METHOD(_method_1566)>(*this,lib,"xorps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::xorps >::invoke")
		->args({"self","xmm","op"});
	using _method_1567 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::jecxz >;
	addExtern<DAS_CALL_METHOD(_method_1567)>(*this,lib,"jecxz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::jecxz >::invoke")
		->args({"self","label"});
	using _method_1568 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jecxz >;
	addExtern<DAS_CALL_METHOD(_method_1568)>(*this,lib,"jecxz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jecxz >::invoke")
		->args({"self","label"});
	using _method_1569 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::jrcxz >;
	addExtern<DAS_CALL_METHOD(_method_1569)>(*this,lib,"jrcxz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::jrcxz >::invoke")
		->args({"self","label"});
	using _method_1570 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jrcxz >;
	addExtern<DAS_CALL_METHOD(_method_1570)>(*this,lib,"jrcxz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jrcxz >::invoke")
		->args({"self","label"});
	using _method_1571 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cdqe >;
	addExtern<DAS_CALL_METHOD(_method_1571)>(*this,lib,"cdqe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cdqe >::invoke")
		->args({"self"});
	using _method_1572 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cqo >;
	addExtern<DAS_CALL_METHOD(_method_1572)>(*this,lib,"cqo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cqo >::invoke")
		->args({"self"});
	using _method_1573 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsq >;
	addExtern<DAS_CALL_METHOD(_method_1573)>(*this,lib,"cmpsq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsq >::invoke")
		->args({"self"});
	using _method_1574 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::popfq >;
	addExtern<DAS_CALL_METHOD(_method_1574)>(*this,lib,"popfq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::popfq >::invoke")
		->args({"self"});
	using _method_1575 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::pushfq >;
	addExtern<DAS_CALL_METHOD(_method_1575)>(*this,lib,"pushfq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::pushfq >::invoke")
		->args({"self"});
	using _method_1576 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lodsq >;
	addExtern<DAS_CALL_METHOD(_method_1576)>(*this,lib,"lodsq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lodsq >::invoke")
		->args({"self"});
	using _method_1577 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsq >;
	addExtern<DAS_CALL_METHOD(_method_1577)>(*this,lib,"movsq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsq >::invoke")
		->args({"self"});
	using _method_1578 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::scasq >;
	addExtern<DAS_CALL_METHOD(_method_1578)>(*this,lib,"scasq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::scasq >::invoke")
		->args({"self"});
	using _method_1579 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stosq >;
	addExtern<DAS_CALL_METHOD(_method_1579)>(*this,lib,"stosq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::stosq >::invoke")
		->args({"self"});
	using _method_1580 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::syscall >;
	addExtern<DAS_CALL_METHOD(_method_1580)>(*this,lib,"syscall",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::syscall >::invoke")
		->args({"self"});
	using _method_1581 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sysret >;
	addExtern<DAS_CALL_METHOD(_method_1581)>(*this,lib,"sysret",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sysret >::invoke")
		->args({"self"});
	using _method_1582 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::cmpxchg16b >;
	addExtern<DAS_CALL_METHOD(_method_1582)>(*this,lib,"cmpxchg16b",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::cmpxchg16b >::invoke")
		->args({"self","addr"});
	using _method_1583 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fxrstor64 >;
	addExtern<DAS_CALL_METHOD(_method_1583)>(*this,lib,"fxrstor64",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fxrstor64 >::invoke")
		->args({"self","addr"});
	using _method_1584 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq >;
	addExtern<DAS_CALL_METHOD(_method_1584)>(*this,lib,"movq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq >::invoke")
		->args({"self","reg","mmx"});
	using _method_1585 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Reg64 &),&Xbyak::CodeGenerator::movq >;
	addExtern<DAS_CALL_METHOD(_method_1585)>(*this,lib,"movq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Reg64 &),&Xbyak::CodeGenerator::movq >::invoke")
		->args({"self","mmx","reg"});
	using _method_1586 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movsxd >;
	addExtern<DAS_CALL_METHOD(_method_1586)>(*this,lib,"movsxd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movsxd >::invoke")
		->args({"self","reg","op"});
}
}

