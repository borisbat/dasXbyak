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
void Module_dasXBYAK::initFunctions_12() {
	using _method_1087 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess >;
	addExtern<DAS_CALL_METHOD(_method_1087)>(*this,lib,"vcmpfalsess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1088 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd >;
	addExtern<DAS_CALL_METHOD(_method_1088)>(*this,lib,"vcmpge_oqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1089 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps >;
	addExtern<DAS_CALL_METHOD(_method_1089)>(*this,lib,"vcmpge_oqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1090 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd >;
	addExtern<DAS_CALL_METHOD(_method_1090)>(*this,lib,"vcmpge_oqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1091 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss >;
	addExtern<DAS_CALL_METHOD(_method_1091)>(*this,lib,"vcmpge_oqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1092 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd >;
	addExtern<DAS_CALL_METHOD(_method_1092)>(*this,lib,"vcmpgepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1093 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps >;
	addExtern<DAS_CALL_METHOD(_method_1093)>(*this,lib,"vcmpgeps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1094 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd >;
	addExtern<DAS_CALL_METHOD(_method_1094)>(*this,lib,"vcmpgesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1095 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess >;
	addExtern<DAS_CALL_METHOD(_method_1095)>(*this,lib,"vcmpgess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1096 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd >;
	addExtern<DAS_CALL_METHOD(_method_1096)>(*this,lib,"vcmpgt_oqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1097 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps >;
	addExtern<DAS_CALL_METHOD(_method_1097)>(*this,lib,"vcmpgt_oqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1098 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd >;
	addExtern<DAS_CALL_METHOD(_method_1098)>(*this,lib,"vcmpgt_oqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1099 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss >;
	addExtern<DAS_CALL_METHOD(_method_1099)>(*this,lib,"vcmpgt_oqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1100 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd >;
	addExtern<DAS_CALL_METHOD(_method_1100)>(*this,lib,"vcmpgtpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1101 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps >;
	addExtern<DAS_CALL_METHOD(_method_1101)>(*this,lib,"vcmpgtps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1102 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd >;
	addExtern<DAS_CALL_METHOD(_method_1102)>(*this,lib,"vcmpgtsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1103 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss >;
	addExtern<DAS_CALL_METHOD(_method_1103)>(*this,lib,"vcmpgtss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1104 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd >;
	addExtern<DAS_CALL_METHOD(_method_1104)>(*this,lib,"vcmple_oqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1105 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps >;
	addExtern<DAS_CALL_METHOD(_method_1105)>(*this,lib,"vcmple_oqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1106 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd >;
	addExtern<DAS_CALL_METHOD(_method_1106)>(*this,lib,"vcmple_oqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1107 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss >;
	addExtern<DAS_CALL_METHOD(_method_1107)>(*this,lib,"vcmple_oqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1108 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd >;
	addExtern<DAS_CALL_METHOD(_method_1108)>(*this,lib,"vcmplepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1109 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps >;
	addExtern<DAS_CALL_METHOD(_method_1109)>(*this,lib,"vcmpleps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1110 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd >;
	addExtern<DAS_CALL_METHOD(_method_1110)>(*this,lib,"vcmplesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1111 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless >;
	addExtern<DAS_CALL_METHOD(_method_1111)>(*this,lib,"vcmpless",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1112 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd >;
	addExtern<DAS_CALL_METHOD(_method_1112)>(*this,lib,"vcmplt_oqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1113 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps >;
	addExtern<DAS_CALL_METHOD(_method_1113)>(*this,lib,"vcmplt_oqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1114 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd >;
	addExtern<DAS_CALL_METHOD(_method_1114)>(*this,lib,"vcmplt_oqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1115 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss >;
	addExtern<DAS_CALL_METHOD(_method_1115)>(*this,lib,"vcmplt_oqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1116 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd >;
	addExtern<DAS_CALL_METHOD(_method_1116)>(*this,lib,"vcmpltpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1117 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps >;
	addExtern<DAS_CALL_METHOD(_method_1117)>(*this,lib,"vcmpltps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1118 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd >;
	addExtern<DAS_CALL_METHOD(_method_1118)>(*this,lib,"vcmpltsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1119 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss >;
	addExtern<DAS_CALL_METHOD(_method_1119)>(*this,lib,"vcmpltss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1120 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd >;
	addExtern<DAS_CALL_METHOD(_method_1120)>(*this,lib,"vcmpneq_oqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1121 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps >;
	addExtern<DAS_CALL_METHOD(_method_1121)>(*this,lib,"vcmpneq_oqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1122 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd >;
	addExtern<DAS_CALL_METHOD(_method_1122)>(*this,lib,"vcmpneq_oqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1123 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss >;
	addExtern<DAS_CALL_METHOD(_method_1123)>(*this,lib,"vcmpneq_oqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1124 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd >;
	addExtern<DAS_CALL_METHOD(_method_1124)>(*this,lib,"vcmpneq_ospd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1125 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps >;
	addExtern<DAS_CALL_METHOD(_method_1125)>(*this,lib,"vcmpneq_osps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1126 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd >;
	addExtern<DAS_CALL_METHOD(_method_1126)>(*this,lib,"vcmpneq_ossd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1127 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss >;
	addExtern<DAS_CALL_METHOD(_method_1127)>(*this,lib,"vcmpneq_osss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1128 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd >;
	addExtern<DAS_CALL_METHOD(_method_1128)>(*this,lib,"vcmpneq_uspd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1129 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps >;
	addExtern<DAS_CALL_METHOD(_method_1129)>(*this,lib,"vcmpneq_usps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1130 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd >;
	addExtern<DAS_CALL_METHOD(_method_1130)>(*this,lib,"vcmpneq_ussd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1131 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss >;
	addExtern<DAS_CALL_METHOD(_method_1131)>(*this,lib,"vcmpneq_usss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1132 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd >;
	addExtern<DAS_CALL_METHOD(_method_1132)>(*this,lib,"vcmpneqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1133 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps >;
	addExtern<DAS_CALL_METHOD(_method_1133)>(*this,lib,"vcmpneqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1134 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd >;
	addExtern<DAS_CALL_METHOD(_method_1134)>(*this,lib,"vcmpneqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1135 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss >;
	addExtern<DAS_CALL_METHOD(_method_1135)>(*this,lib,"vcmpneqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1136 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1136)>(*this,lib,"vcmpnge_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1137 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1137)>(*this,lib,"vcmpnge_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1138 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1138)>(*this,lib,"vcmpnge_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1139 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1139)>(*this,lib,"vcmpnge_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1140 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd >;
	addExtern<DAS_CALL_METHOD(_method_1140)>(*this,lib,"vcmpngepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1141 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps >;
	addExtern<DAS_CALL_METHOD(_method_1141)>(*this,lib,"vcmpngeps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1142 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd >;
	addExtern<DAS_CALL_METHOD(_method_1142)>(*this,lib,"vcmpngesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1143 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess >;
	addExtern<DAS_CALL_METHOD(_method_1143)>(*this,lib,"vcmpngess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1144 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1144)>(*this,lib,"vcmpngt_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1145 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1145)>(*this,lib,"vcmpngt_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1146 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1146)>(*this,lib,"vcmpngt_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1147 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1147)>(*this,lib,"vcmpngt_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1148 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd >;
	addExtern<DAS_CALL_METHOD(_method_1148)>(*this,lib,"vcmpngtpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1149 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps >;
	addExtern<DAS_CALL_METHOD(_method_1149)>(*this,lib,"vcmpngtps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1150 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd >;
	addExtern<DAS_CALL_METHOD(_method_1150)>(*this,lib,"vcmpngtsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1151 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss >;
	addExtern<DAS_CALL_METHOD(_method_1151)>(*this,lib,"vcmpngtss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1152 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1152)>(*this,lib,"vcmpnle_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1153 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1153)>(*this,lib,"vcmpnle_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1154 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1154)>(*this,lib,"vcmpnle_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1155 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1155)>(*this,lib,"vcmpnle_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1156 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd >;
	addExtern<DAS_CALL_METHOD(_method_1156)>(*this,lib,"vcmpnlepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1157 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps >;
	addExtern<DAS_CALL_METHOD(_method_1157)>(*this,lib,"vcmpnleps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1158 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd >;
	addExtern<DAS_CALL_METHOD(_method_1158)>(*this,lib,"vcmpnlesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1159 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless >;
	addExtern<DAS_CALL_METHOD(_method_1159)>(*this,lib,"vcmpnless",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1160 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1160)>(*this,lib,"vcmpnlt_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1161 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1161)>(*this,lib,"vcmpnlt_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1162 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1162)>(*this,lib,"vcmpnlt_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1163 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1163)>(*this,lib,"vcmpnlt_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1164 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd >;
	addExtern<DAS_CALL_METHOD(_method_1164)>(*this,lib,"vcmpnltpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1165 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps >;
	addExtern<DAS_CALL_METHOD(_method_1165)>(*this,lib,"vcmpnltps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1166 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd >;
	addExtern<DAS_CALL_METHOD(_method_1166)>(*this,lib,"vcmpnltsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1167 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss >;
	addExtern<DAS_CALL_METHOD(_method_1167)>(*this,lib,"vcmpnltss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1168 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd >;
	addExtern<DAS_CALL_METHOD(_method_1168)>(*this,lib,"vcmpord_spd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1169 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps >;
	addExtern<DAS_CALL_METHOD(_method_1169)>(*this,lib,"vcmpord_sps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1170 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd >;
	addExtern<DAS_CALL_METHOD(_method_1170)>(*this,lib,"vcmpord_ssd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1171 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss >;
	addExtern<DAS_CALL_METHOD(_method_1171)>(*this,lib,"vcmpord_sss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1172 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd >;
	addExtern<DAS_CALL_METHOD(_method_1172)>(*this,lib,"vcmpordpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1173 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps >;
	addExtern<DAS_CALL_METHOD(_method_1173)>(*this,lib,"vcmpordps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1174 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd >;
	addExtern<DAS_CALL_METHOD(_method_1174)>(*this,lib,"vcmpordsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1175 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss >;
	addExtern<DAS_CALL_METHOD(_method_1175)>(*this,lib,"vcmpordss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1176 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmppd >;
	addExtern<DAS_CALL_METHOD(_method_1176)>(*this,lib,"vcmppd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmppd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1177 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpps >;
	addExtern<DAS_CALL_METHOD(_method_1177)>(*this,lib,"vcmpps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpps >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1178 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpsd >;
	addExtern<DAS_CALL_METHOD(_method_1178)>(*this,lib,"vcmpsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpsd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1179 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpss >;
	addExtern<DAS_CALL_METHOD(_method_1179)>(*this,lib,"vcmpss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpss >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1180 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd >;
	addExtern<DAS_CALL_METHOD(_method_1180)>(*this,lib,"vcmptrue_uspd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1181 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps >;
	addExtern<DAS_CALL_METHOD(_method_1181)>(*this,lib,"vcmptrue_usps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1182 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd >;
	addExtern<DAS_CALL_METHOD(_method_1182)>(*this,lib,"vcmptrue_ussd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1183 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss >;
	addExtern<DAS_CALL_METHOD(_method_1183)>(*this,lib,"vcmptrue_usss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1184 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd >;
	addExtern<DAS_CALL_METHOD(_method_1184)>(*this,lib,"vcmptruepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1185 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps >;
	addExtern<DAS_CALL_METHOD(_method_1185)>(*this,lib,"vcmptrueps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1186 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd >;
	addExtern<DAS_CALL_METHOD(_method_1186)>(*this,lib,"vcmptruesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd >::invoke")
		->args({"self","x1","x2","op"});
}
}

