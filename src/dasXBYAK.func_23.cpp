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
void Module_dasXBYAK::initFunctions_23() {
	using _method_2187 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefss >;
	addExtern<DAS_CALL_METHOD(_method_2187)>(*this,lib,"vscalefss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2188 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vscatterdpd >;
	addExtern<DAS_CALL_METHOD(_method_2188)>(*this,lib,"vscatterdpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vscatterdpd >::invoke")
		->args({"self","addr","x"});
	using _method_2189 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vscatterdps >;
	addExtern<DAS_CALL_METHOD(_method_2189)>(*this,lib,"vscatterdps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vscatterdps >::invoke")
		->args({"self","addr","x"});
	using _method_2190 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf0dpd >;
	addExtern<DAS_CALL_METHOD(_method_2190)>(*this,lib,"vscatterpf0dpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf0dpd >::invoke")
		->args({"self","addr"});
	using _method_2191 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf0dps >;
	addExtern<DAS_CALL_METHOD(_method_2191)>(*this,lib,"vscatterpf0dps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf0dps >::invoke")
		->args({"self","addr"});
	using _method_2192 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf0qpd >;
	addExtern<DAS_CALL_METHOD(_method_2192)>(*this,lib,"vscatterpf0qpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf0qpd >::invoke")
		->args({"self","addr"});
	using _method_2193 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf0qps >;
	addExtern<DAS_CALL_METHOD(_method_2193)>(*this,lib,"vscatterpf0qps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf0qps >::invoke")
		->args({"self","addr"});
	using _method_2194 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf1dpd >;
	addExtern<DAS_CALL_METHOD(_method_2194)>(*this,lib,"vscatterpf1dpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf1dpd >::invoke")
		->args({"self","addr"});
	using _method_2195 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf1dps >;
	addExtern<DAS_CALL_METHOD(_method_2195)>(*this,lib,"vscatterpf1dps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf1dps >::invoke")
		->args({"self","addr"});
	using _method_2196 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf1qpd >;
	addExtern<DAS_CALL_METHOD(_method_2196)>(*this,lib,"vscatterpf1qpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf1qpd >::invoke")
		->args({"self","addr"});
	using _method_2197 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf1qps >;
	addExtern<DAS_CALL_METHOD(_method_2197)>(*this,lib,"vscatterpf1qps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vscatterpf1qps >::invoke")
		->args({"self","addr"});
	using _method_2198 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vscatterqpd >;
	addExtern<DAS_CALL_METHOD(_method_2198)>(*this,lib,"vscatterqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vscatterqpd >::invoke")
		->args({"self","addr","x"});
	using _method_2199 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vscatterqps >;
	addExtern<DAS_CALL_METHOD(_method_2199)>(*this,lib,"vscatterqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vscatterqps >::invoke")
		->args({"self","addr","x"});
	using _method_2200 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshuff32x4 >;
	addExtern<DAS_CALL_METHOD(_method_2200)>(*this,lib,"vshuff32x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshuff32x4 >::invoke")
		->args({"self","y1","y2","op","imm"});
	using _method_2201 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshuff64x2 >;
	addExtern<DAS_CALL_METHOD(_method_2201)>(*this,lib,"vshuff64x2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshuff64x2 >::invoke")
		->args({"self","y1","y2","op","imm"});
	using _method_2202 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshufi32x4 >;
	addExtern<DAS_CALL_METHOD(_method_2202)>(*this,lib,"vshufi32x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshufi32x4 >::invoke")
		->args({"self","y1","y2","op","imm"});
	using _method_2203 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshufi64x2 >;
	addExtern<DAS_CALL_METHOD(_method_2203)>(*this,lib,"vshufi64x2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vshufi64x2 >::invoke")
		->args({"self","y1","y2","op","imm"});
	using _method_2204 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtph >;
	addExtern<DAS_CALL_METHOD(_method_2204)>(*this,lib,"vsqrtph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtph >::invoke")
		->args({"self","x","op"});
	using _method_2205 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtsh >;
	addExtern<DAS_CALL_METHOD(_method_2205)>(*this,lib,"vsqrtsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsqrtsh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2206 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubph >;
	addExtern<DAS_CALL_METHOD(_method_2206)>(*this,lib,"vsubph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubph >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_2207 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubsh >;
	addExtern<DAS_CALL_METHOD(_method_2207)>(*this,lib,"vsubsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vsubsh >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_2208 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vucomish >;
	addExtern<DAS_CALL_METHOD(_method_2208)>(*this,lib,"vucomish",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vucomish >::invoke")
		->args({"self","x","op"});
	using _method_2209 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Reg64 &),&Xbyak::CodeGenerator::kmovq >;
	addExtern<DAS_CALL_METHOD(_method_2209)>(*this,lib,"kmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Reg64 &),&Xbyak::CodeGenerator::kmovq >::invoke")
		->args({"self","k","r"});
	using _method_2210 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq >;
	addExtern<DAS_CALL_METHOD(_method_2210)>(*this,lib,"kmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq >::invoke")
		->args({"self","r","k"});
	using _method_2211 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vpbroadcastq >;
	addExtern<DAS_CALL_METHOD(_method_2211)>(*this,lib,"vpbroadcastq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vpbroadcastq >::invoke")
		->args({"self","x","r"});
	using _method_2212 = das::das_call_member< void (Xbyak::CodeGenerator::*)(unsigned long long,bool),&Xbyak::CodeGenerator::align >;
	addExtern<DAS_CALL_METHOD(_method_2212)>(*this,lib,"align",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(unsigned long long,bool),&Xbyak::CodeGenerator::align >::invoke")
		->args({"self","x","useMultiByteNop"});
}
}

