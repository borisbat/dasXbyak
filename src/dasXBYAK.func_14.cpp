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
void Module_dasXBYAK::initFunctions_14() {
	using _method_1287 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqpd >;
	addExtern<DAS_CALL_METHOD(_method_1287)>(*this,lib,"vgatherqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqpd >::invoke")
		->args({"self","x1","addr","x2"});
	using _method_1288 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqps >;
	addExtern<DAS_CALL_METHOD(_method_1288)>(*this,lib,"vgatherqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqps >::invoke")
		->args({"self","x1","addr","x2"});
	using _method_1289 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgf2p8affineinvqb >;
	addExtern<DAS_CALL_METHOD(_method_1289)>(*this,lib,"vgf2p8affineinvqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgf2p8affineinvqb >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1290 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgf2p8affineqb >;
	addExtern<DAS_CALL_METHOD(_method_1290)>(*this,lib,"vgf2p8affineqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgf2p8affineqb >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1291 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgf2p8mulb >;
	addExtern<DAS_CALL_METHOD(_method_1291)>(*this,lib,"vgf2p8mulb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgf2p8mulb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1292 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vhaddpd >;
	addExtern<DAS_CALL_METHOD(_method_1292)>(*this,lib,"vhaddpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vhaddpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1293 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vhaddps >;
	addExtern<DAS_CALL_METHOD(_method_1293)>(*this,lib,"vhaddps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vhaddps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1294 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vhsubpd >;
	addExtern<DAS_CALL_METHOD(_method_1294)>(*this,lib,"vhsubpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vhsubpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1295 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vhsubps >;
	addExtern<DAS_CALL_METHOD(_method_1295)>(*this,lib,"vhsubps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vhsubps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1296 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertf128 >;
	addExtern<DAS_CALL_METHOD(_method_1296)>(*this,lib,"vinsertf128",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertf128 >::invoke")
		->args({"self","y1","y2","op","imm"});
	using _method_1297 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinserti128 >;
	addExtern<DAS_CALL_METHOD(_method_1297)>(*this,lib,"vinserti128",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinserti128 >::invoke")
		->args({"self","y1","y2","op","imm"});
	using _method_1298 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertps >;
	addExtern<DAS_CALL_METHOD(_method_1298)>(*this,lib,"vinsertps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertps >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1299 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vlddqu >;
	addExtern<DAS_CALL_METHOD(_method_1299)>(*this,lib,"vlddqu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vlddqu >::invoke")
		->args({"self","x","addr"});
	using _method_1300 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vldmxcsr >;
	addExtern<DAS_CALL_METHOD(_method_1300)>(*this,lib,"vldmxcsr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vldmxcsr >::invoke")
		->args({"self","addr"});
	using _method_1301 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovdqu >;
	addExtern<DAS_CALL_METHOD(_method_1301)>(*this,lib,"vmaskmovdqu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovdqu >::invoke")
		->args({"self","x1","x2"});
	using _method_1302 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovpd >;
	addExtern<DAS_CALL_METHOD(_method_1302)>(*this,lib,"vmaskmovpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovpd >::invoke")
		->args({"self","addr","x1","x2"});
	using _method_1303 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovpd >;
	addExtern<DAS_CALL_METHOD(_method_1303)>(*this,lib,"vmaskmovpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovpd >::invoke")
		->args({"self","x1","x2","addr"});
	using _method_1304 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovps >;
	addExtern<DAS_CALL_METHOD(_method_1304)>(*this,lib,"vmaskmovps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovps >::invoke")
		->args({"self","addr","x1","x2"});
	using _method_1305 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovps >;
	addExtern<DAS_CALL_METHOD(_method_1305)>(*this,lib,"vmaskmovps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovps >::invoke")
		->args({"self","x1","x2","addr"});
	using _method_1306 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxpd >;
	addExtern<DAS_CALL_METHOD(_method_1306)>(*this,lib,"vmaxpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1307 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxps >;
	addExtern<DAS_CALL_METHOD(_method_1307)>(*this,lib,"vmaxps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1308 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxsd >;
	addExtern<DAS_CALL_METHOD(_method_1308)>(*this,lib,"vmaxsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxsd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1309 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxss >;
	addExtern<DAS_CALL_METHOD(_method_1309)>(*this,lib,"vmaxss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxss >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1310 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminpd >;
	addExtern<DAS_CALL_METHOD(_method_1310)>(*this,lib,"vminpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1311 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminps >;
	addExtern<DAS_CALL_METHOD(_method_1311)>(*this,lib,"vminps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1312 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminsd >;
	addExtern<DAS_CALL_METHOD(_method_1312)>(*this,lib,"vminsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminsd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1313 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminss >;
	addExtern<DAS_CALL_METHOD(_method_1313)>(*this,lib,"vminss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminss >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1314 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovapd >;
	addExtern<DAS_CALL_METHOD(_method_1314)>(*this,lib,"vmovapd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovapd >::invoke")
		->args({"self","addr","xmm"});
	using _method_1315 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovapd >;
	addExtern<DAS_CALL_METHOD(_method_1315)>(*this,lib,"vmovapd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovapd >::invoke")
		->args({"self","xm","op"});
	using _method_1316 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovaps >;
	addExtern<DAS_CALL_METHOD(_method_1316)>(*this,lib,"vmovaps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovaps >::invoke")
		->args({"self","addr","xmm"});
	using _method_1317 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovaps >;
	addExtern<DAS_CALL_METHOD(_method_1317)>(*this,lib,"vmovaps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovaps >::invoke")
		->args({"self","xm","op"});
	using _method_1318 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovd >;
	addExtern<DAS_CALL_METHOD(_method_1318)>(*this,lib,"vmovd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovd >::invoke")
		->args({"self","op","x"});
	using _method_1319 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovd >;
	addExtern<DAS_CALL_METHOD(_method_1319)>(*this,lib,"vmovd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovd >::invoke")
		->args({"self","x","op"});
	using _method_1320 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovddup >;
	addExtern<DAS_CALL_METHOD(_method_1320)>(*this,lib,"vmovddup",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovddup >::invoke")
		->args({"self","xm","op"});
	using _method_1321 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa >;
	addExtern<DAS_CALL_METHOD(_method_1321)>(*this,lib,"vmovdqa",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa >::invoke")
		->args({"self","addr","xmm"});
	using _method_1322 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa >;
	addExtern<DAS_CALL_METHOD(_method_1322)>(*this,lib,"vmovdqa",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa >::invoke")
		->args({"self","xm","op"});
	using _method_1323 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu >;
	addExtern<DAS_CALL_METHOD(_method_1323)>(*this,lib,"vmovdqu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu >::invoke")
		->args({"self","addr","xmm"});
	using _method_1324 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu >;
	addExtern<DAS_CALL_METHOD(_method_1324)>(*this,lib,"vmovdqu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu >::invoke")
		->args({"self","xm","op"});
	using _method_1325 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhlps >;
	addExtern<DAS_CALL_METHOD(_method_1325)>(*this,lib,"vmovhlps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhlps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1326 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhpd >;
	addExtern<DAS_CALL_METHOD(_method_1326)>(*this,lib,"vmovhpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhpd >::invoke")
		->args({"self","addr","x"});
	using _method_1327 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhpd >;
	addExtern<DAS_CALL_METHOD(_method_1327)>(*this,lib,"vmovhpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhpd >::invoke")
		->args({"self","x","op1","op2"});
	using _method_1328 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhps >;
	addExtern<DAS_CALL_METHOD(_method_1328)>(*this,lib,"vmovhps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhps >::invoke")
		->args({"self","addr","x"});
	using _method_1329 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhps >;
	addExtern<DAS_CALL_METHOD(_method_1329)>(*this,lib,"vmovhps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhps >::invoke")
		->args({"self","x","op1","op2"});
	using _method_1330 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlhps >;
	addExtern<DAS_CALL_METHOD(_method_1330)>(*this,lib,"vmovlhps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlhps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1331 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlpd >;
	addExtern<DAS_CALL_METHOD(_method_1331)>(*this,lib,"vmovlpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlpd >::invoke")
		->args({"self","addr","x"});
	using _method_1332 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlpd >;
	addExtern<DAS_CALL_METHOD(_method_1332)>(*this,lib,"vmovlpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlpd >::invoke")
		->args({"self","x","op1","op2"});
	using _method_1333 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlps >;
	addExtern<DAS_CALL_METHOD(_method_1333)>(*this,lib,"vmovlps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlps >::invoke")
		->args({"self","addr","x"});
	using _method_1334 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlps >;
	addExtern<DAS_CALL_METHOD(_method_1334)>(*this,lib,"vmovlps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlps >::invoke")
		->args({"self","x","op1","op2"});
	using _method_1335 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovmskpd >;
	addExtern<DAS_CALL_METHOD(_method_1335)>(*this,lib,"vmovmskpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovmskpd >::invoke")
		->args({"self","r","x"});
	using _method_1336 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovmskps >;
	addExtern<DAS_CALL_METHOD(_method_1336)>(*this,lib,"vmovmskps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovmskps >::invoke")
		->args({"self","r","x"});
	using _method_1337 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovntdq >;
	addExtern<DAS_CALL_METHOD(_method_1337)>(*this,lib,"vmovntdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovntdq >::invoke")
		->args({"self","addr","x"});
	using _method_1338 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmovntdqa >;
	addExtern<DAS_CALL_METHOD(_method_1338)>(*this,lib,"vmovntdqa",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmovntdqa >::invoke")
		->args({"self","x","addr"});
	using _method_1339 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovntpd >;
	addExtern<DAS_CALL_METHOD(_method_1339)>(*this,lib,"vmovntpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovntpd >::invoke")
		->args({"self","addr","x"});
	using _method_1340 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovntps >;
	addExtern<DAS_CALL_METHOD(_method_1340)>(*this,lib,"vmovntps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovntps >::invoke")
		->args({"self","addr","x"});
	using _method_1341 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq >;
	addExtern<DAS_CALL_METHOD(_method_1341)>(*this,lib,"vmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq >::invoke")
		->args({"self","addr","x"});
	using _method_1342 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmovq >;
	addExtern<DAS_CALL_METHOD(_method_1342)>(*this,lib,"vmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmovq >::invoke")
		->args({"self","x","addr"});
	using _method_1343 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq >;
	addExtern<DAS_CALL_METHOD(_method_1343)>(*this,lib,"vmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq >::invoke")
		->args({"self","x1","x2"});
	using _method_1344 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsd >;
	addExtern<DAS_CALL_METHOD(_method_1344)>(*this,lib,"vmovsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsd >::invoke")
		->args({"self","addr","x"});
	using _method_1345 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsd >;
	addExtern<DAS_CALL_METHOD(_method_1345)>(*this,lib,"vmovsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsd >::invoke")
		->args({"self","x","addr"});
	using _method_1346 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovsd >;
	addExtern<DAS_CALL_METHOD(_method_1346)>(*this,lib,"vmovsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1347 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovshdup >;
	addExtern<DAS_CALL_METHOD(_method_1347)>(*this,lib,"vmovshdup",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovshdup >::invoke")
		->args({"self","xm","op"});
	using _method_1348 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovsldup >;
	addExtern<DAS_CALL_METHOD(_method_1348)>(*this,lib,"vmovsldup",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovsldup >::invoke")
		->args({"self","xm","op"});
	using _method_1349 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovss >;
	addExtern<DAS_CALL_METHOD(_method_1349)>(*this,lib,"vmovss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovss >::invoke")
		->args({"self","addr","x"});
	using _method_1350 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmovss >;
	addExtern<DAS_CALL_METHOD(_method_1350)>(*this,lib,"vmovss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmovss >::invoke")
		->args({"self","x","addr"});
	using _method_1351 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovss >;
	addExtern<DAS_CALL_METHOD(_method_1351)>(*this,lib,"vmovss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1352 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovupd >;
	addExtern<DAS_CALL_METHOD(_method_1352)>(*this,lib,"vmovupd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovupd >::invoke")
		->args({"self","addr","xmm"});
	using _method_1353 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovupd >;
	addExtern<DAS_CALL_METHOD(_method_1353)>(*this,lib,"vmovupd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovupd >::invoke")
		->args({"self","xm","op"});
	using _method_1354 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovups >;
	addExtern<DAS_CALL_METHOD(_method_1354)>(*this,lib,"vmovups",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovups >::invoke")
		->args({"self","addr","xmm"});
	using _method_1355 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovups >;
	addExtern<DAS_CALL_METHOD(_method_1355)>(*this,lib,"vmovups",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovups >::invoke")
		->args({"self","xm","op"});
	using _method_1356 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vmpsadbw >;
	addExtern<DAS_CALL_METHOD(_method_1356)>(*this,lib,"vmpsadbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vmpsadbw >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1357 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulpd >;
	addExtern<DAS_CALL_METHOD(_method_1357)>(*this,lib,"vmulpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1358 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulps >;
	addExtern<DAS_CALL_METHOD(_method_1358)>(*this,lib,"vmulps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1359 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulsd >;
	addExtern<DAS_CALL_METHOD(_method_1359)>(*this,lib,"vmulsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulsd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1360 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulss >;
	addExtern<DAS_CALL_METHOD(_method_1360)>(*this,lib,"vmulss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulss >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1361 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vorpd >;
	addExtern<DAS_CALL_METHOD(_method_1361)>(*this,lib,"vorpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vorpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1362 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vorps >;
	addExtern<DAS_CALL_METHOD(_method_1362)>(*this,lib,"vorps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vorps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1363 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpabsb >;
	addExtern<DAS_CALL_METHOD(_method_1363)>(*this,lib,"vpabsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpabsb >::invoke")
		->args({"self","xm","op"});
	using _method_1364 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpabsd >;
	addExtern<DAS_CALL_METHOD(_method_1364)>(*this,lib,"vpabsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpabsd >::invoke")
		->args({"self","xm","op"});
	using _method_1365 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpabsw >;
	addExtern<DAS_CALL_METHOD(_method_1365)>(*this,lib,"vpabsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpabsw >::invoke")
		->args({"self","xm","op"});
	using _method_1366 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpackssdw >;
	addExtern<DAS_CALL_METHOD(_method_1366)>(*this,lib,"vpackssdw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpackssdw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1367 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpacksswb >;
	addExtern<DAS_CALL_METHOD(_method_1367)>(*this,lib,"vpacksswb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpacksswb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1368 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpackusdw >;
	addExtern<DAS_CALL_METHOD(_method_1368)>(*this,lib,"vpackusdw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpackusdw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1369 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpackuswb >;
	addExtern<DAS_CALL_METHOD(_method_1369)>(*this,lib,"vpackuswb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpackuswb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1370 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddb >;
	addExtern<DAS_CALL_METHOD(_method_1370)>(*this,lib,"vpaddb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1371 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddd >;
	addExtern<DAS_CALL_METHOD(_method_1371)>(*this,lib,"vpaddd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1372 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddq >;
	addExtern<DAS_CALL_METHOD(_method_1372)>(*this,lib,"vpaddq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1373 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddsb >;
	addExtern<DAS_CALL_METHOD(_method_1373)>(*this,lib,"vpaddsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddsb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1374 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddsw >;
	addExtern<DAS_CALL_METHOD(_method_1374)>(*this,lib,"vpaddsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddsw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1375 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddusb >;
	addExtern<DAS_CALL_METHOD(_method_1375)>(*this,lib,"vpaddusb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddusb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1376 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddusw >;
	addExtern<DAS_CALL_METHOD(_method_1376)>(*this,lib,"vpaddusw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddusw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1377 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddw >;
	addExtern<DAS_CALL_METHOD(_method_1377)>(*this,lib,"vpaddw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpaddw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1378 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpalignr >;
	addExtern<DAS_CALL_METHOD(_method_1378)>(*this,lib,"vpalignr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpalignr >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1379 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpand >;
	addExtern<DAS_CALL_METHOD(_method_1379)>(*this,lib,"vpand",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpand >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1380 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpandn >;
	addExtern<DAS_CALL_METHOD(_method_1380)>(*this,lib,"vpandn",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpandn >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1381 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpavgb >;
	addExtern<DAS_CALL_METHOD(_method_1381)>(*this,lib,"vpavgb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpavgb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1382 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpavgw >;
	addExtern<DAS_CALL_METHOD(_method_1382)>(*this,lib,"vpavgw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpavgw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1383 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpblendd >;
	addExtern<DAS_CALL_METHOD(_method_1383)>(*this,lib,"vpblendd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpblendd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1384 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpblendvb >;
	addExtern<DAS_CALL_METHOD(_method_1384)>(*this,lib,"vpblendvb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpblendvb >::invoke")
		->args({"self","x1","x2","op","x4"});
	using _method_1385 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpblendw >;
	addExtern<DAS_CALL_METHOD(_method_1385)>(*this,lib,"vpblendw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpblendw >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1386 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastb >;
	addExtern<DAS_CALL_METHOD(_method_1386)>(*this,lib,"vpbroadcastb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastb >::invoke")
		->args({"self","x","op"});
}
}

