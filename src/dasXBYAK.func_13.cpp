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
void Module_dasXBYAK::initFunctions_13() {
	using _method_1187 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess >;
	addExtern<DAS_CALL_METHOD(_method_1187)>(*this,lib,"vcmptruess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1188 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd >;
	addExtern<DAS_CALL_METHOD(_method_1188)>(*this,lib,"vcmpunord_spd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1189 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps >;
	addExtern<DAS_CALL_METHOD(_method_1189)>(*this,lib,"vcmpunord_sps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1190 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd >;
	addExtern<DAS_CALL_METHOD(_method_1190)>(*this,lib,"vcmpunord_ssd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1191 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss >;
	addExtern<DAS_CALL_METHOD(_method_1191)>(*this,lib,"vcmpunord_sss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1192 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd >;
	addExtern<DAS_CALL_METHOD(_method_1192)>(*this,lib,"vcmpunordpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1193 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps >;
	addExtern<DAS_CALL_METHOD(_method_1193)>(*this,lib,"vcmpunordps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1194 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd >;
	addExtern<DAS_CALL_METHOD(_method_1194)>(*this,lib,"vcmpunordsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1195 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss >;
	addExtern<DAS_CALL_METHOD(_method_1195)>(*this,lib,"vcmpunordss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1196 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcomisd >;
	addExtern<DAS_CALL_METHOD(_method_1196)>(*this,lib,"vcomisd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcomisd >::invoke")
		->args({"self","xm","op"});
	using _method_1197 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcomiss >;
	addExtern<DAS_CALL_METHOD(_method_1197)>(*this,lib,"vcomiss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcomiss >::invoke")
		->args({"self","xm","op"});
	using _method_1198 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtdq2pd >;
	addExtern<DAS_CALL_METHOD(_method_1198)>(*this,lib,"vcvtdq2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtdq2pd >::invoke")
		->args({"self","x","op"});
	using _method_1199 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtdq2ps >;
	addExtern<DAS_CALL_METHOD(_method_1199)>(*this,lib,"vcvtdq2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtdq2ps >::invoke")
		->args({"self","xm","op"});
	using _method_1200 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2dq >;
	addExtern<DAS_CALL_METHOD(_method_1200)>(*this,lib,"vcvtpd2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2dq >::invoke")
		->args({"self","x","op"});
	using _method_1201 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2ps >;
	addExtern<DAS_CALL_METHOD(_method_1201)>(*this,lib,"vcvtpd2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2ps >::invoke")
		->args({"self","x","op"});
	using _method_1202 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2ps >;
	addExtern<DAS_CALL_METHOD(_method_1202)>(*this,lib,"vcvtph2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2ps >::invoke")
		->args({"self","x","op"});
	using _method_1203 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2dq >;
	addExtern<DAS_CALL_METHOD(_method_1203)>(*this,lib,"vcvtps2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2dq >::invoke")
		->args({"self","xm","op"});
	using _method_1204 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2pd >;
	addExtern<DAS_CALL_METHOD(_method_1204)>(*this,lib,"vcvtps2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2pd >::invoke")
		->args({"self","x","op"});
	using _method_1205 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vcvtps2ph >;
	addExtern<DAS_CALL_METHOD(_method_1205)>(*this,lib,"vcvtps2ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vcvtps2ph >::invoke")
		->args({"self","op","x","imm"});
	using _method_1206 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si >;
	addExtern<DAS_CALL_METHOD(_method_1206)>(*this,lib,"vcvtsd2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si >::invoke")
		->args({"self","r","op"});
	using _method_1207 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2ss >;
	addExtern<DAS_CALL_METHOD(_method_1207)>(*this,lib,"vcvtsd2ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1208 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsi2sd >;
	addExtern<DAS_CALL_METHOD(_method_1208)>(*this,lib,"vcvtsi2sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsi2sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1209 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsi2ss >;
	addExtern<DAS_CALL_METHOD(_method_1209)>(*this,lib,"vcvtsi2ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsi2ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1210 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2sd >;
	addExtern<DAS_CALL_METHOD(_method_1210)>(*this,lib,"vcvtss2sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1211 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si >;
	addExtern<DAS_CALL_METHOD(_method_1211)>(*this,lib,"vcvtss2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si >::invoke")
		->args({"self","r","op"});
	using _method_1212 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttpd2dq >;
	addExtern<DAS_CALL_METHOD(_method_1212)>(*this,lib,"vcvttpd2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttpd2dq >::invoke")
		->args({"self","x","op"});
	using _method_1213 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttps2dq >;
	addExtern<DAS_CALL_METHOD(_method_1213)>(*this,lib,"vcvttps2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttps2dq >::invoke")
		->args({"self","xm","op"});
	using _method_1214 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si >;
	addExtern<DAS_CALL_METHOD(_method_1214)>(*this,lib,"vcvttsd2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si >::invoke")
		->args({"self","r","op"});
	using _method_1215 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si >;
	addExtern<DAS_CALL_METHOD(_method_1215)>(*this,lib,"vcvttss2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si >::invoke")
		->args({"self","r","op"});
	using _method_1216 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivpd >;
	addExtern<DAS_CALL_METHOD(_method_1216)>(*this,lib,"vdivpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivpd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1217 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivps >;
	addExtern<DAS_CALL_METHOD(_method_1217)>(*this,lib,"vdivps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivps >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1218 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivsd >;
	addExtern<DAS_CALL_METHOD(_method_1218)>(*this,lib,"vdivsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivsd >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1219 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivss >;
	addExtern<DAS_CALL_METHOD(_method_1219)>(*this,lib,"vdivss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivss >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1220 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vdppd >;
	addExtern<DAS_CALL_METHOD(_method_1220)>(*this,lib,"vdppd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vdppd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1221 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vdpps >;
	addExtern<DAS_CALL_METHOD(_method_1221)>(*this,lib,"vdpps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vdpps >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1222 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextractf128 >;
	addExtern<DAS_CALL_METHOD(_method_1222)>(*this,lib,"vextractf128",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextractf128 >::invoke")
		->args({"self","op","y","imm"});
	using _method_1223 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextracti128 >;
	addExtern<DAS_CALL_METHOD(_method_1223)>(*this,lib,"vextracti128",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextracti128 >::invoke")
		->args({"self","op","y","imm"});
	using _method_1224 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vextractps >;
	addExtern<DAS_CALL_METHOD(_method_1224)>(*this,lib,"vextractps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::vextractps >::invoke")
		->args({"self","op","x","imm"});
	using _method_1225 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132pd >;
	addExtern<DAS_CALL_METHOD(_method_1225)>(*this,lib,"vfmadd132pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1226 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132ps >;
	addExtern<DAS_CALL_METHOD(_method_1226)>(*this,lib,"vfmadd132ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1227 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132sd >;
	addExtern<DAS_CALL_METHOD(_method_1227)>(*this,lib,"vfmadd132sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1228 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132ss >;
	addExtern<DAS_CALL_METHOD(_method_1228)>(*this,lib,"vfmadd132ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1229 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213pd >;
	addExtern<DAS_CALL_METHOD(_method_1229)>(*this,lib,"vfmadd213pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1230 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213ps >;
	addExtern<DAS_CALL_METHOD(_method_1230)>(*this,lib,"vfmadd213ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1231 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213sd >;
	addExtern<DAS_CALL_METHOD(_method_1231)>(*this,lib,"vfmadd213sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1232 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213ss >;
	addExtern<DAS_CALL_METHOD(_method_1232)>(*this,lib,"vfmadd213ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1233 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231pd >;
	addExtern<DAS_CALL_METHOD(_method_1233)>(*this,lib,"vfmadd231pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1234 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231ps >;
	addExtern<DAS_CALL_METHOD(_method_1234)>(*this,lib,"vfmadd231ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1235 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231sd >;
	addExtern<DAS_CALL_METHOD(_method_1235)>(*this,lib,"vfmadd231sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1236 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231ss >;
	addExtern<DAS_CALL_METHOD(_method_1236)>(*this,lib,"vfmadd231ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1237 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub132pd >;
	addExtern<DAS_CALL_METHOD(_method_1237)>(*this,lib,"vfmaddsub132pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub132pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1238 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub132ps >;
	addExtern<DAS_CALL_METHOD(_method_1238)>(*this,lib,"vfmaddsub132ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub132ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1239 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub213pd >;
	addExtern<DAS_CALL_METHOD(_method_1239)>(*this,lib,"vfmaddsub213pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub213pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1240 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub213ps >;
	addExtern<DAS_CALL_METHOD(_method_1240)>(*this,lib,"vfmaddsub213ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub213ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1241 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub231pd >;
	addExtern<DAS_CALL_METHOD(_method_1241)>(*this,lib,"vfmaddsub231pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub231pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1242 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub231ps >;
	addExtern<DAS_CALL_METHOD(_method_1242)>(*this,lib,"vfmaddsub231ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub231ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1243 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132pd >;
	addExtern<DAS_CALL_METHOD(_method_1243)>(*this,lib,"vfmsub132pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1244 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132ps >;
	addExtern<DAS_CALL_METHOD(_method_1244)>(*this,lib,"vfmsub132ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1245 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132sd >;
	addExtern<DAS_CALL_METHOD(_method_1245)>(*this,lib,"vfmsub132sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1246 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132ss >;
	addExtern<DAS_CALL_METHOD(_method_1246)>(*this,lib,"vfmsub132ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1247 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213pd >;
	addExtern<DAS_CALL_METHOD(_method_1247)>(*this,lib,"vfmsub213pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1248 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213ps >;
	addExtern<DAS_CALL_METHOD(_method_1248)>(*this,lib,"vfmsub213ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1249 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213sd >;
	addExtern<DAS_CALL_METHOD(_method_1249)>(*this,lib,"vfmsub213sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1250 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213ss >;
	addExtern<DAS_CALL_METHOD(_method_1250)>(*this,lib,"vfmsub213ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1251 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231pd >;
	addExtern<DAS_CALL_METHOD(_method_1251)>(*this,lib,"vfmsub231pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1252 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231ps >;
	addExtern<DAS_CALL_METHOD(_method_1252)>(*this,lib,"vfmsub231ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1253 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231sd >;
	addExtern<DAS_CALL_METHOD(_method_1253)>(*this,lib,"vfmsub231sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1254 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231ss >;
	addExtern<DAS_CALL_METHOD(_method_1254)>(*this,lib,"vfmsub231ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1255 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd132pd >;
	addExtern<DAS_CALL_METHOD(_method_1255)>(*this,lib,"vfmsubadd132pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd132pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1256 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd132ps >;
	addExtern<DAS_CALL_METHOD(_method_1256)>(*this,lib,"vfmsubadd132ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd132ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1257 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd213pd >;
	addExtern<DAS_CALL_METHOD(_method_1257)>(*this,lib,"vfmsubadd213pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd213pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1258 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd213ps >;
	addExtern<DAS_CALL_METHOD(_method_1258)>(*this,lib,"vfmsubadd213ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd213ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1259 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd231pd >;
	addExtern<DAS_CALL_METHOD(_method_1259)>(*this,lib,"vfmsubadd231pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd231pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1260 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd231ps >;
	addExtern<DAS_CALL_METHOD(_method_1260)>(*this,lib,"vfmsubadd231ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd231ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1261 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132pd >;
	addExtern<DAS_CALL_METHOD(_method_1261)>(*this,lib,"vfnmadd132pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1262 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132ps >;
	addExtern<DAS_CALL_METHOD(_method_1262)>(*this,lib,"vfnmadd132ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1263 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132sd >;
	addExtern<DAS_CALL_METHOD(_method_1263)>(*this,lib,"vfnmadd132sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1264 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132ss >;
	addExtern<DAS_CALL_METHOD(_method_1264)>(*this,lib,"vfnmadd132ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1265 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213pd >;
	addExtern<DAS_CALL_METHOD(_method_1265)>(*this,lib,"vfnmadd213pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1266 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213ps >;
	addExtern<DAS_CALL_METHOD(_method_1266)>(*this,lib,"vfnmadd213ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1267 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213sd >;
	addExtern<DAS_CALL_METHOD(_method_1267)>(*this,lib,"vfnmadd213sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1268 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213ss >;
	addExtern<DAS_CALL_METHOD(_method_1268)>(*this,lib,"vfnmadd213ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1269 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231pd >;
	addExtern<DAS_CALL_METHOD(_method_1269)>(*this,lib,"vfnmadd231pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1270 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231ps >;
	addExtern<DAS_CALL_METHOD(_method_1270)>(*this,lib,"vfnmadd231ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1271 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231sd >;
	addExtern<DAS_CALL_METHOD(_method_1271)>(*this,lib,"vfnmadd231sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1272 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231ss >;
	addExtern<DAS_CALL_METHOD(_method_1272)>(*this,lib,"vfnmadd231ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1273 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132pd >;
	addExtern<DAS_CALL_METHOD(_method_1273)>(*this,lib,"vfnmsub132pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1274 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132ps >;
	addExtern<DAS_CALL_METHOD(_method_1274)>(*this,lib,"vfnmsub132ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1275 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132sd >;
	addExtern<DAS_CALL_METHOD(_method_1275)>(*this,lib,"vfnmsub132sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1276 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132ss >;
	addExtern<DAS_CALL_METHOD(_method_1276)>(*this,lib,"vfnmsub132ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1277 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213pd >;
	addExtern<DAS_CALL_METHOD(_method_1277)>(*this,lib,"vfnmsub213pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1278 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213ps >;
	addExtern<DAS_CALL_METHOD(_method_1278)>(*this,lib,"vfnmsub213ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1279 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213sd >;
	addExtern<DAS_CALL_METHOD(_method_1279)>(*this,lib,"vfnmsub213sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1280 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213ss >;
	addExtern<DAS_CALL_METHOD(_method_1280)>(*this,lib,"vfnmsub213ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1281 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231pd >;
	addExtern<DAS_CALL_METHOD(_method_1281)>(*this,lib,"vfnmsub231pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1282 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231ps >;
	addExtern<DAS_CALL_METHOD(_method_1282)>(*this,lib,"vfnmsub231ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1283 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231sd >;
	addExtern<DAS_CALL_METHOD(_method_1283)>(*this,lib,"vfnmsub231sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1284 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231ss >;
	addExtern<DAS_CALL_METHOD(_method_1284)>(*this,lib,"vfnmsub231ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1285 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdpd >;
	addExtern<DAS_CALL_METHOD(_method_1285)>(*this,lib,"vgatherdpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdpd >::invoke")
		->args({"self","x1","addr","x2"});
	using _method_1286 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdps >;
	addExtern<DAS_CALL_METHOD(_method_1286)>(*this,lib,"vgatherdps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdps >::invoke")
		->args({"self","x1","addr","x2"});
}
}

