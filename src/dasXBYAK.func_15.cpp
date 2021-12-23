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
void Module_dasXBYAK::initFunctions_15() {
	using _method_1387 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastd >;
	addExtern<DAS_CALL_METHOD(_method_1387)>(*this,lib,"vpbroadcastd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastd >::invoke")
		->args({"self","x","op"});
	using _method_1388 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastq >;
	addExtern<DAS_CALL_METHOD(_method_1388)>(*this,lib,"vpbroadcastq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastq >::invoke")
		->args({"self","x","op"});
	using _method_1389 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastw >;
	addExtern<DAS_CALL_METHOD(_method_1389)>(*this,lib,"vpbroadcastw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastw >::invoke")
		->args({"self","x","op"});
	using _method_1390 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpclmulqdq >;
	addExtern<DAS_CALL_METHOD(_method_1390)>(*this,lib,"vpclmulqdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpclmulqdq >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1391 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb >;
	addExtern<DAS_CALL_METHOD(_method_1391)>(*this,lib,"vpcmpeqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1392 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd >;
	addExtern<DAS_CALL_METHOD(_method_1392)>(*this,lib,"vpcmpeqd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1393 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq >;
	addExtern<DAS_CALL_METHOD(_method_1393)>(*this,lib,"vpcmpeqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1394 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw >;
	addExtern<DAS_CALL_METHOD(_method_1394)>(*this,lib,"vpcmpeqw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1395 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpestri >;
	addExtern<DAS_CALL_METHOD(_method_1395)>(*this,lib,"vpcmpestri",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpestri >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1396 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpestrm >;
	addExtern<DAS_CALL_METHOD(_method_1396)>(*this,lib,"vpcmpestrm",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpestrm >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1397 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb >;
	addExtern<DAS_CALL_METHOD(_method_1397)>(*this,lib,"vpcmpgtb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1398 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd >;
	addExtern<DAS_CALL_METHOD(_method_1398)>(*this,lib,"vpcmpgtd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1399 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq >;
	addExtern<DAS_CALL_METHOD(_method_1399)>(*this,lib,"vpcmpgtq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1400 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw >;
	addExtern<DAS_CALL_METHOD(_method_1400)>(*this,lib,"vpcmpgtw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1401 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpistri >;
	addExtern<DAS_CALL_METHOD(_method_1401)>(*this,lib,"vpcmpistri",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpistri >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1402 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpistrm >;
	addExtern<DAS_CALL_METHOD(_method_1402)>(*this,lib,"vpcmpistrm",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpistrm >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1403 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,Xbyak::PreferredEncoding),&Xbyak::CodeGenerator::vpdpbusd >;
	addExtern<DAS_CALL_METHOD(_method_1403)>(*this,lib,"vpdpbusd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,Xbyak::PreferredEncoding),&Xbyak::CodeGenerator::vpdpbusd >::invoke")
		->args({"self","x1","x2","op","encoding"});
	using _method_1404 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,Xbyak::PreferredEncoding),&Xbyak::CodeGenerator::vpdpbusds >;
	addExtern<DAS_CALL_METHOD(_method_1404)>(*this,lib,"vpdpbusds",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,Xbyak::PreferredEncoding),&Xbyak::CodeGenerator::vpdpbusds >::invoke")
		->args({"self","x1","x2","op","encoding"});
	using _method_1405 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,Xbyak::PreferredEncoding),&Xbyak::CodeGenerator::vpdpwssd >;
	addExtern<DAS_CALL_METHOD(_method_1405)>(*this,lib,"vpdpwssd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,Xbyak::PreferredEncoding),&Xbyak::CodeGenerator::vpdpwssd >::invoke")
		->args({"self","x1","x2","op","encoding"});
	using _method_1406 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,Xbyak::PreferredEncoding),&Xbyak::CodeGenerator::vpdpwssds >;
	addExtern<DAS_CALL_METHOD(_method_1406)>(*this,lib,"vpdpwssds",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,Xbyak::PreferredEncoding),&Xbyak::CodeGenerator::vpdpwssds >::invoke")
		->args({"self","x1","x2","op","encoding"});
	using _method_1407 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vperm2f128 >;
	addExtern<DAS_CALL_METHOD(_method_1407)>(*this,lib,"vperm2f128",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vperm2f128 >::invoke")
		->args({"self","y1","y2","op","imm"});
	using _method_1408 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vperm2i128 >;
	addExtern<DAS_CALL_METHOD(_method_1408)>(*this,lib,"vperm2i128",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vperm2i128 >::invoke")
		->args({"self","y1","y2","op","imm"});
	using _method_1409 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermd >;
	addExtern<DAS_CALL_METHOD(_method_1409)>(*this,lib,"vpermd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermd >::invoke")
		->args({"self","y1","y2","op"});
	using _method_1410 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilpd >;
	addExtern<DAS_CALL_METHOD(_method_1410)>(*this,lib,"vpermilpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1411 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpermilpd >;
	addExtern<DAS_CALL_METHOD(_method_1411)>(*this,lib,"vpermilpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpermilpd >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1412 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilps >;
	addExtern<DAS_CALL_METHOD(_method_1412)>(*this,lib,"vpermilps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1413 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpermilps >;
	addExtern<DAS_CALL_METHOD(_method_1413)>(*this,lib,"vpermilps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpermilps >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1414 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpermpd >;
	addExtern<DAS_CALL_METHOD(_method_1414)>(*this,lib,"vpermpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpermpd >::invoke")
		->args({"self","y","op","imm"});
	using _method_1415 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermpd >;
	addExtern<DAS_CALL_METHOD(_method_1415)>(*this,lib,"vpermpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermpd >::invoke")
		->args({"self","y1","y2","op"});
	using _method_1416 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermps >;
	addExtern<DAS_CALL_METHOD(_method_1416)>(*this,lib,"vpermps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermps >::invoke")
		->args({"self","y1","y2","op"});
	using _method_1417 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpermq >;
	addExtern<DAS_CALL_METHOD(_method_1417)>(*this,lib,"vpermq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpermq >::invoke")
		->args({"self","y","op","imm"});
	using _method_1418 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermq >;
	addExtern<DAS_CALL_METHOD(_method_1418)>(*this,lib,"vpermq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermq >::invoke")
		->args({"self","y1","y2","op"});
	using _method_1419 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vpextrb >;
	addExtern<DAS_CALL_METHOD(_method_1419)>(*this,lib,"vpextrb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vpextrb >::invoke")
		->args({"self","op","x","imm"});
	using _method_1420 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vpextrd >;
	addExtern<DAS_CALL_METHOD(_method_1420)>(*this,lib,"vpextrd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vpextrd >::invoke")
		->args({"self","op","x","imm"});
	using _method_1421 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vpextrq >;
	addExtern<DAS_CALL_METHOD(_method_1421)>(*this,lib,"vpextrq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vpextrq >::invoke")
		->args({"self","op","x","imm"});
	using _method_1422 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vpextrw >;
	addExtern<DAS_CALL_METHOD(_method_1422)>(*this,lib,"vpextrw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vpextrw >::invoke")
		->args({"self","op","x","imm"});
	using _method_1423 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdd >;
	addExtern<DAS_CALL_METHOD(_method_1423)>(*this,lib,"vpgatherdd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdd >::invoke")
		->args({"self","x1","addr","x2"});
	using _method_1424 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdq >;
	addExtern<DAS_CALL_METHOD(_method_1424)>(*this,lib,"vpgatherdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdq >::invoke")
		->args({"self","x1","addr","x2"});
	using _method_1425 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqd >;
	addExtern<DAS_CALL_METHOD(_method_1425)>(*this,lib,"vpgatherqd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqd >::invoke")
		->args({"self","x1","addr","x2"});
	using _method_1426 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqq >;
	addExtern<DAS_CALL_METHOD(_method_1426)>(*this,lib,"vpgatherqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqq >::invoke")
		->args({"self","x1","addr","x2"});
	using _method_1427 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphaddd >;
	addExtern<DAS_CALL_METHOD(_method_1427)>(*this,lib,"vphaddd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphaddd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1428 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphaddsw >;
	addExtern<DAS_CALL_METHOD(_method_1428)>(*this,lib,"vphaddsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphaddsw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1429 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphaddw >;
	addExtern<DAS_CALL_METHOD(_method_1429)>(*this,lib,"vphaddw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphaddw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1430 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphminposuw >;
	addExtern<DAS_CALL_METHOD(_method_1430)>(*this,lib,"vphminposuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphminposuw >::invoke")
		->args({"self","xm","op"});
	using _method_1431 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphsubd >;
	addExtern<DAS_CALL_METHOD(_method_1431)>(*this,lib,"vphsubd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphsubd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1432 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphsubsw >;
	addExtern<DAS_CALL_METHOD(_method_1432)>(*this,lib,"vphsubsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphsubsw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1433 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphsubw >;
	addExtern<DAS_CALL_METHOD(_method_1433)>(*this,lib,"vphsubw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vphsubw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1434 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpinsrb >;
	addExtern<DAS_CALL_METHOD(_method_1434)>(*this,lib,"vpinsrb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpinsrb >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1435 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpinsrd >;
	addExtern<DAS_CALL_METHOD(_method_1435)>(*this,lib,"vpinsrd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpinsrd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1436 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpinsrq >;
	addExtern<DAS_CALL_METHOD(_method_1436)>(*this,lib,"vpinsrq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpinsrq >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1437 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpinsrw >;
	addExtern<DAS_CALL_METHOD(_method_1437)>(*this,lib,"vpinsrw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpinsrw >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1438 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaddubsw >;
	addExtern<DAS_CALL_METHOD(_method_1438)>(*this,lib,"vpmaddubsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaddubsw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1439 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaddwd >;
	addExtern<DAS_CALL_METHOD(_method_1439)>(*this,lib,"vpmaddwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaddwd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1440 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovd >;
	addExtern<DAS_CALL_METHOD(_method_1440)>(*this,lib,"vpmaskmovd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovd >::invoke")
		->args({"self","addr","x1","x2"});
	using _method_1441 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovd >;
	addExtern<DAS_CALL_METHOD(_method_1441)>(*this,lib,"vpmaskmovd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovd >::invoke")
		->args({"self","x1","x2","addr"});
	using _method_1442 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovq >;
	addExtern<DAS_CALL_METHOD(_method_1442)>(*this,lib,"vpmaskmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovq >::invoke")
		->args({"self","addr","x1","x2"});
	using _method_1443 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovq >;
	addExtern<DAS_CALL_METHOD(_method_1443)>(*this,lib,"vpmaskmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovq >::invoke")
		->args({"self","x1","x2","addr"});
	using _method_1444 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxsb >;
	addExtern<DAS_CALL_METHOD(_method_1444)>(*this,lib,"vpmaxsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxsb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1445 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxsd >;
	addExtern<DAS_CALL_METHOD(_method_1445)>(*this,lib,"vpmaxsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1446 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxsw >;
	addExtern<DAS_CALL_METHOD(_method_1446)>(*this,lib,"vpmaxsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxsw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1447 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxub >;
	addExtern<DAS_CALL_METHOD(_method_1447)>(*this,lib,"vpmaxub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxub >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1448 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxud >;
	addExtern<DAS_CALL_METHOD(_method_1448)>(*this,lib,"vpmaxud",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxud >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1449 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxuw >;
	addExtern<DAS_CALL_METHOD(_method_1449)>(*this,lib,"vpmaxuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxuw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1450 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminsb >;
	addExtern<DAS_CALL_METHOD(_method_1450)>(*this,lib,"vpminsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminsb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1451 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminsd >;
	addExtern<DAS_CALL_METHOD(_method_1451)>(*this,lib,"vpminsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1452 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminsw >;
	addExtern<DAS_CALL_METHOD(_method_1452)>(*this,lib,"vpminsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminsw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1453 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminub >;
	addExtern<DAS_CALL_METHOD(_method_1453)>(*this,lib,"vpminub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminub >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1454 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminud >;
	addExtern<DAS_CALL_METHOD(_method_1454)>(*this,lib,"vpminud",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminud >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1455 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminuw >;
	addExtern<DAS_CALL_METHOD(_method_1455)>(*this,lib,"vpminuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminuw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1456 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovmskb >;
	addExtern<DAS_CALL_METHOD(_method_1456)>(*this,lib,"vpmovmskb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovmskb >::invoke")
		->args({"self","r","x"});
	using _method_1457 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxbd >;
	addExtern<DAS_CALL_METHOD(_method_1457)>(*this,lib,"vpmovsxbd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxbd >::invoke")
		->args({"self","xm","op"});
	using _method_1458 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxbq >;
	addExtern<DAS_CALL_METHOD(_method_1458)>(*this,lib,"vpmovsxbq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxbq >::invoke")
		->args({"self","xm","op"});
	using _method_1459 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxbw >;
	addExtern<DAS_CALL_METHOD(_method_1459)>(*this,lib,"vpmovsxbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxbw >::invoke")
		->args({"self","xm","op"});
	using _method_1460 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxdq >;
	addExtern<DAS_CALL_METHOD(_method_1460)>(*this,lib,"vpmovsxdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxdq >::invoke")
		->args({"self","xm","op"});
	using _method_1461 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxwd >;
	addExtern<DAS_CALL_METHOD(_method_1461)>(*this,lib,"vpmovsxwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxwd >::invoke")
		->args({"self","xm","op"});
	using _method_1462 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxwq >;
	addExtern<DAS_CALL_METHOD(_method_1462)>(*this,lib,"vpmovsxwq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovsxwq >::invoke")
		->args({"self","xm","op"});
	using _method_1463 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxbd >;
	addExtern<DAS_CALL_METHOD(_method_1463)>(*this,lib,"vpmovzxbd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxbd >::invoke")
		->args({"self","xm","op"});
	using _method_1464 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxbq >;
	addExtern<DAS_CALL_METHOD(_method_1464)>(*this,lib,"vpmovzxbq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxbq >::invoke")
		->args({"self","xm","op"});
	using _method_1465 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxbw >;
	addExtern<DAS_CALL_METHOD(_method_1465)>(*this,lib,"vpmovzxbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxbw >::invoke")
		->args({"self","xm","op"});
	using _method_1466 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxdq >;
	addExtern<DAS_CALL_METHOD(_method_1466)>(*this,lib,"vpmovzxdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxdq >::invoke")
		->args({"self","xm","op"});
	using _method_1467 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxwd >;
	addExtern<DAS_CALL_METHOD(_method_1467)>(*this,lib,"vpmovzxwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxwd >::invoke")
		->args({"self","xm","op"});
	using _method_1468 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxwq >;
	addExtern<DAS_CALL_METHOD(_method_1468)>(*this,lib,"vpmovzxwq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmovzxwq >::invoke")
		->args({"self","xm","op"});
	using _method_1469 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmuldq >;
	addExtern<DAS_CALL_METHOD(_method_1469)>(*this,lib,"vpmuldq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmuldq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1470 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmulhrsw >;
	addExtern<DAS_CALL_METHOD(_method_1470)>(*this,lib,"vpmulhrsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmulhrsw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1471 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmulhuw >;
	addExtern<DAS_CALL_METHOD(_method_1471)>(*this,lib,"vpmulhuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmulhuw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1472 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmulhw >;
	addExtern<DAS_CALL_METHOD(_method_1472)>(*this,lib,"vpmulhw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmulhw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1473 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmulld >;
	addExtern<DAS_CALL_METHOD(_method_1473)>(*this,lib,"vpmulld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmulld >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1474 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmullw >;
	addExtern<DAS_CALL_METHOD(_method_1474)>(*this,lib,"vpmullw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmullw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1475 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmuludq >;
	addExtern<DAS_CALL_METHOD(_method_1475)>(*this,lib,"vpmuludq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmuludq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1476 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpor >;
	addExtern<DAS_CALL_METHOD(_method_1476)>(*this,lib,"vpor",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpor >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1477 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsadbw >;
	addExtern<DAS_CALL_METHOD(_method_1477)>(*this,lib,"vpsadbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsadbw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1478 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshufb >;
	addExtern<DAS_CALL_METHOD(_method_1478)>(*this,lib,"vpshufb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshufb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1479 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshufd >;
	addExtern<DAS_CALL_METHOD(_method_1479)>(*this,lib,"vpshufd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshufd >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1480 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshufhw >;
	addExtern<DAS_CALL_METHOD(_method_1480)>(*this,lib,"vpshufhw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshufhw >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1481 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshuflw >;
	addExtern<DAS_CALL_METHOD(_method_1481)>(*this,lib,"vpshuflw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshuflw >::invoke")
		->args({"self","xm","op","imm"});
	using _method_1482 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsignb >;
	addExtern<DAS_CALL_METHOD(_method_1482)>(*this,lib,"vpsignb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsignb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1483 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsignd >;
	addExtern<DAS_CALL_METHOD(_method_1483)>(*this,lib,"vpsignd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsignd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1484 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsignw >;
	addExtern<DAS_CALL_METHOD(_method_1484)>(*this,lib,"vpsignw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsignw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1485 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpslld >;
	addExtern<DAS_CALL_METHOD(_method_1485)>(*this,lib,"vpslld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpslld >::invoke")
		->args({"self","x","op","imm"});
	using _method_1486 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpslld >;
	addExtern<DAS_CALL_METHOD(_method_1486)>(*this,lib,"vpslld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpslld >::invoke")
		->args({"self","x1","x2","op"});
}
}

