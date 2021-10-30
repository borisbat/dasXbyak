
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
void Module_Xbyak::initFunctions_11() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _vshuff64x2_method_4380 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshuff64x2);
addExtern<DAS_CALL_METHOD(_vshuff64x2_method_4380)>(*this, lib, "vshuff64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshuff64x2))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vshufi32x4_method_4382 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshufi32x4);
addExtern<DAS_CALL_METHOD(_vshufi32x4_method_4382)>(*this, lib, "vshufi32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshufi32x4))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vshufi64x2_method_4384 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshufi64x2);
addExtern<DAS_CALL_METHOD(_vshufi64x2_method_4384)>(*this, lib, "vshufi64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshufi64x2))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtph_method_4386 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtph);
addExtern<DAS_CALL_METHOD(_vsqrtph_method_4386)>(*this, lib, "vsqrtph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtsh_method_4388 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtsh);
addExtern<DAS_CALL_METHOD(_vsqrtsh_method_4388)>(*this, lib, "vsqrtsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtsh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubph_method_4390 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubph);
addExtern<DAS_CALL_METHOD(_vsubph_method_4390)>(*this, lib, "vsubph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubsh_method_4392 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubsh);
addExtern<DAS_CALL_METHOD(_vsubsh_method_4392)>(*this, lib, "vsubsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubsh))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vucomish_method_4394 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vucomish);
addExtern<DAS_CALL_METHOD(_vucomish_method_4394)>(*this, lib, "vucomish",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vucomish))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovq_method_4396 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::kmovq>;
addExtern<DAS_CALL_METHOD(_kmovq_method_4396)>(*this, lib, "kmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::kmovq>::invoke")
	->args({"self","k","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovq_method_4398 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq>;
addExtern<DAS_CALL_METHOD(_kmovq_method_4398)>(*this, lib, "kmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq>::invoke")
	->args({"self","r","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastq_method_4400 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vpbroadcastq>;
addExtern<DAS_CALL_METHOD(_vpbroadcastq_method_4400)>(*this, lib, "vpbroadcastq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vpbroadcastq>::invoke")
	->args({"self","x","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _align_method_4402 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::align);
addExtern<DAS_CALL_METHOD(_align_method_4402)>(*this, lib, "align",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::align))
	->args({"self","x","useMultiByteNop"})
		->arg_init(2,make_smart<ExprConstBool>(true))
;
#endif

#endif
#endif
}
}
