
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
void Module_Xbyak::initFunctions_15() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _vpsrldq_method_2980 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsrldq);
addExtern<DAS_CALL_METHOD(_vpsrldq_method_2980)>(*this, lib, "vpsrldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsrldq))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlq_method_2982 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrlq>;
addExtern<DAS_CALL_METHOD(_vpsrlq_method_2982)>(*this, lib, "vpsrlq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrlq>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlq_method_2984 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlq>;
addExtern<DAS_CALL_METHOD(_vpsrlq_method_2984)>(*this, lib, "vpsrlq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlq>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlvd_method_2986 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsrlvd);
addExtern<DAS_CALL_METHOD(_vpsrlvd_method_2986)>(*this, lib, "vpsrlvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsrlvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlvq_method_2988 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsrlvq);
addExtern<DAS_CALL_METHOD(_vpsrlvq_method_2988)>(*this, lib, "vpsrlvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsrlvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlw_method_2990 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrlw>;
addExtern<DAS_CALL_METHOD(_vpsrlw_method_2990)>(*this, lib, "vpsrlw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrlw>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlw_method_2992 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlw>;
addExtern<DAS_CALL_METHOD(_vpsrlw_method_2992)>(*this, lib, "vpsrlw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlw>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubb_method_2994 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubb);
addExtern<DAS_CALL_METHOD(_vpsubb_method_2994)>(*this, lib, "vpsubb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubd_method_2996 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubd);
addExtern<DAS_CALL_METHOD(_vpsubd_method_2996)>(*this, lib, "vpsubd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubq_method_2998 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubq);
addExtern<DAS_CALL_METHOD(_vpsubq_method_2998)>(*this, lib, "vpsubq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubsb_method_3000 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubsb);
addExtern<DAS_CALL_METHOD(_vpsubsb_method_3000)>(*this, lib, "vpsubsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubsb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubsw_method_3002 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubsw);
addExtern<DAS_CALL_METHOD(_vpsubsw_method_3002)>(*this, lib, "vpsubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubusb_method_3004 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubusb);
addExtern<DAS_CALL_METHOD(_vpsubusb_method_3004)>(*this, lib, "vpsubusb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubusb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubusw_method_3006 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubusw);
addExtern<DAS_CALL_METHOD(_vpsubusw_method_3006)>(*this, lib, "vpsubusw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubusw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubw_method_3008 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubw);
addExtern<DAS_CALL_METHOD(_vpsubw_method_3008)>(*this, lib, "vpsubw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptest_method_3010 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptest);
addExtern<DAS_CALL_METHOD(_vptest_method_3010)>(*this, lib, "vptest",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptest))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpckhbw_method_3012 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpckhbw);
addExtern<DAS_CALL_METHOD(_vpunpckhbw_method_3012)>(*this, lib, "vpunpckhbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpckhbw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpckhdq_method_3014 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpckhdq);
addExtern<DAS_CALL_METHOD(_vpunpckhdq_method_3014)>(*this, lib, "vpunpckhdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpckhdq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpckhqdq_method_3016 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpckhqdq);
addExtern<DAS_CALL_METHOD(_vpunpckhqdq_method_3016)>(*this, lib, "vpunpckhqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpckhqdq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpckhwd_method_3018 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpckhwd);
addExtern<DAS_CALL_METHOD(_vpunpckhwd_method_3018)>(*this, lib, "vpunpckhwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpckhwd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpcklbw_method_3020 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpcklbw);
addExtern<DAS_CALL_METHOD(_vpunpcklbw_method_3020)>(*this, lib, "vpunpcklbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpcklbw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpckldq_method_3022 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpckldq);
addExtern<DAS_CALL_METHOD(_vpunpckldq_method_3022)>(*this, lib, "vpunpckldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpckldq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpcklqdq_method_3024 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpcklqdq);
addExtern<DAS_CALL_METHOD(_vpunpcklqdq_method_3024)>(*this, lib, "vpunpcklqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpcklqdq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpcklwd_method_3026 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpcklwd);
addExtern<DAS_CALL_METHOD(_vpunpcklwd_method_3026)>(*this, lib, "vpunpcklwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpcklwd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpxor_method_3028 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpxor);
addExtern<DAS_CALL_METHOD(_vpxor_method_3028)>(*this, lib, "vpxor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpxor))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcpps_method_3030 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcpps);
addExtern<DAS_CALL_METHOD(_vrcpps_method_3030)>(*this, lib, "vrcpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcpps))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcpss_method_3032 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcpss);
addExtern<DAS_CALL_METHOD(_vrcpss_method_3032)>(*this, lib, "vrcpss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcpss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vroundpd_method_3034 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vroundpd);
addExtern<DAS_CALL_METHOD(_vroundpd_method_3034)>(*this, lib, "vroundpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vroundpd))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vroundps_method_3036 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vroundps);
addExtern<DAS_CALL_METHOD(_vroundps_method_3036)>(*this, lib, "vroundps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vroundps))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vroundsd_method_3038 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vroundsd);
addExtern<DAS_CALL_METHOD(_vroundsd_method_3038)>(*this, lib, "vroundsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vroundsd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vroundss_method_3040 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vroundss);
addExtern<DAS_CALL_METHOD(_vroundss_method_3040)>(*this, lib, "vroundss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vroundss))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrtps_method_3042 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrtps);
addExtern<DAS_CALL_METHOD(_vrsqrtps_method_3042)>(*this, lib, "vrsqrtps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrtps))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrtss_method_3044 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrtss);
addExtern<DAS_CALL_METHOD(_vrsqrtss_method_3044)>(*this, lib, "vrsqrtss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrtss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vshufpd_method_3046 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshufpd);
addExtern<DAS_CALL_METHOD(_vshufpd_method_3046)>(*this, lib, "vshufpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshufpd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vshufps_method_3048 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshufps);
addExtern<DAS_CALL_METHOD(_vshufps_method_3048)>(*this, lib, "vshufps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshufps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtpd_method_3050 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtpd);
addExtern<DAS_CALL_METHOD(_vsqrtpd_method_3050)>(*this, lib, "vsqrtpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtpd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtps_method_3052 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtps);
addExtern<DAS_CALL_METHOD(_vsqrtps_method_3052)>(*this, lib, "vsqrtps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtps))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtsd_method_3054 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtsd);
addExtern<DAS_CALL_METHOD(_vsqrtsd_method_3054)>(*this, lib, "vsqrtsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtsd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtss_method_3056 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtss);
addExtern<DAS_CALL_METHOD(_vsqrtss_method_3056)>(*this, lib, "vsqrtss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vstmxcsr_method_3058 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vstmxcsr);
addExtern<DAS_CALL_METHOD(_vstmxcsr_method_3058)>(*this, lib, "vstmxcsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vstmxcsr))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubpd_method_3060 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubpd);
addExtern<DAS_CALL_METHOD(_vsubpd_method_3060)>(*this, lib, "vsubpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubps_method_3062 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubps);
addExtern<DAS_CALL_METHOD(_vsubps_method_3062)>(*this, lib, "vsubps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubsd_method_3064 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubsd);
addExtern<DAS_CALL_METHOD(_vsubsd_method_3064)>(*this, lib, "vsubsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubss_method_3066 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubss);
addExtern<DAS_CALL_METHOD(_vsubss_method_3066)>(*this, lib, "vsubss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vtestpd_method_3068 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vtestpd);
addExtern<DAS_CALL_METHOD(_vtestpd_method_3068)>(*this, lib, "vtestpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vtestpd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vtestps_method_3070 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vtestps);
addExtern<DAS_CALL_METHOD(_vtestps_method_3070)>(*this, lib, "vtestps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vtestps))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vucomisd_method_3072 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vucomisd);
addExtern<DAS_CALL_METHOD(_vucomisd_method_3072)>(*this, lib, "vucomisd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vucomisd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vucomiss_method_3074 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vucomiss);
addExtern<DAS_CALL_METHOD(_vucomiss_method_3074)>(*this, lib, "vucomiss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vucomiss))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vunpckhpd_method_3076 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vunpckhpd);
addExtern<DAS_CALL_METHOD(_vunpckhpd_method_3076)>(*this, lib, "vunpckhpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vunpckhpd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vunpckhps_method_3078 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vunpckhps);
addExtern<DAS_CALL_METHOD(_vunpckhps_method_3078)>(*this, lib, "vunpckhps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vunpckhps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vunpcklpd_method_3080 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vunpcklpd);
addExtern<DAS_CALL_METHOD(_vunpcklpd_method_3080)>(*this, lib, "vunpcklpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vunpcklpd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vunpcklps_method_3082 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vunpcklps);
addExtern<DAS_CALL_METHOD(_vunpcklps_method_3082)>(*this, lib, "vunpcklps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vunpcklps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vxorpd_method_3084 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vxorpd);
addExtern<DAS_CALL_METHOD(_vxorpd_method_3084)>(*this, lib, "vxorpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vxorpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vxorps_method_3086 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vxorps);
addExtern<DAS_CALL_METHOD(_vxorps_method_3086)>(*this, lib, "vxorps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vxorps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vzeroall_method_3088 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vzeroall);
addExtern<DAS_CALL_METHOD(_vzeroall_method_3088)>(*this, lib, "vzeroall",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vzeroall))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vzeroupper_method_3090 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vzeroupper);
addExtern<DAS_CALL_METHOD(_vzeroupper_method_3090)>(*this, lib, "vzeroupper",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vzeroupper))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _wait_method_3092 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::wait);
addExtern<DAS_CALL_METHOD(_wait_method_3092)>(*this, lib, "wait",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::wait))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _wbinvd_method_3094 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::wbinvd);
addExtern<DAS_CALL_METHOD(_wbinvd_method_3094)>(*this, lib, "wbinvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::wbinvd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _wrmsr_method_3096 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::wrmsr);
addExtern<DAS_CALL_METHOD(_wrmsr_method_3096)>(*this, lib, "wrmsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::wrmsr))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xadd_method_3098 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xadd);
addExtern<DAS_CALL_METHOD(_xadd_method_3098)>(*this, lib, "xadd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xadd))
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xgetbv_method_3100 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xgetbv);
addExtern<DAS_CALL_METHOD(_xgetbv_method_3100)>(*this, lib, "xgetbv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xgetbv))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xlatb_method_3102 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xlatb);
addExtern<DAS_CALL_METHOD(_xlatb_method_3102)>(*this, lib, "xlatb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xlatb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xor__method_3104 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::xor_>;
addExtern<DAS_CALL_METHOD(_xor__method_3104)>(*this, lib, "xor_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::xor_>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xor__method_3106 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::xor_>;
addExtern<DAS_CALL_METHOD(_xor__method_3106)>(*this, lib, "xor_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::xor_>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xorpd_method_3108 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xorpd);
addExtern<DAS_CALL_METHOD(_xorpd_method_3108)>(*this, lib, "xorpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xorpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xorps_method_3110 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xorps);
addExtern<DAS_CALL_METHOD(_xorps_method_3110)>(*this, lib, "xorps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xorps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jecxz_method_3112 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::jecxz>;
addExtern<DAS_CALL_METHOD(_jecxz_method_3112)>(*this, lib, "jecxz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::jecxz>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jecxz_method_3114 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jecxz>;
addExtern<DAS_CALL_METHOD(_jecxz_method_3114)>(*this, lib, "jecxz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jecxz>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jrcxz_method_3116 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::jrcxz>;
addExtern<DAS_CALL_METHOD(_jrcxz_method_3116)>(*this, lib, "jrcxz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::jrcxz>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jrcxz_method_3118 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jrcxz>;
addExtern<DAS_CALL_METHOD(_jrcxz_method_3118)>(*this, lib, "jrcxz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jrcxz>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cdqe_method_3120 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cdqe);
addExtern<DAS_CALL_METHOD(_cdqe_method_3120)>(*this, lib, "cdqe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cdqe))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cqo_method_3122 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cqo);
addExtern<DAS_CALL_METHOD(_cqo_method_3122)>(*this, lib, "cqo",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cqo))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpsq_method_3124 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpsq);
addExtern<DAS_CALL_METHOD(_cmpsq_method_3124)>(*this, lib, "cmpsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpsq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _popfq_method_3126 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::popfq);
addExtern<DAS_CALL_METHOD(_popfq_method_3126)>(*this, lib, "popfq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::popfq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pushfq_method_3128 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pushfq);
addExtern<DAS_CALL_METHOD(_pushfq_method_3128)>(*this, lib, "pushfq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pushfq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lodsq_method_3130 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lodsq);
addExtern<DAS_CALL_METHOD(_lodsq_method_3130)>(*this, lib, "lodsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lodsq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsq_method_3132 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsq);
addExtern<DAS_CALL_METHOD(_movsq_method_3132)>(*this, lib, "movsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _scasq_method_3134 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::scasq);
addExtern<DAS_CALL_METHOD(_scasq_method_3134)>(*this, lib, "scasq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::scasq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stosq_method_3136 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stosq);
addExtern<DAS_CALL_METHOD(_stosq_method_3136)>(*this, lib, "stosq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stosq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _syscall_method_3138 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::syscall);
addExtern<DAS_CALL_METHOD(_syscall_method_3138)>(*this, lib, "syscall",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::syscall))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sysret_method_3140 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sysret);
addExtern<DAS_CALL_METHOD(_sysret_method_3140)>(*this, lib, "sysret",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sysret))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpxchg16b_method_3142 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpxchg16b);
addExtern<DAS_CALL_METHOD(_cmpxchg16b_method_3142)>(*this, lib, "cmpxchg16b",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpxchg16b))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxrstor64_method_3144 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fxrstor64);
addExtern<DAS_CALL_METHOD(_fxrstor64_method_3144)>(*this, lib, "fxrstor64",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fxrstor64))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movq_method_3146 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq>;
addExtern<DAS_CALL_METHOD(_movq_method_3146)>(*this, lib, "movq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq>::invoke")
	->args({"self","reg","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movq_method_3148 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::movq>;
addExtern<DAS_CALL_METHOD(_movq_method_3148)>(*this, lib, "movq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::movq>::invoke")
	->args({"self","mmx","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsxd_method_3150 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsxd);
addExtern<DAS_CALL_METHOD(_movsxd_method_3150)>(*this, lib, "movsxd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsxd))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pextrq_method_3152 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pextrq);
addExtern<DAS_CALL_METHOD(_pextrq_method_3152)>(*this, lib, "pextrq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pextrq))
	->args({"self","op","xmm","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pinsrq_method_3154 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pinsrq);
addExtern<DAS_CALL_METHOD(_pinsrq_method_3154)>(*this, lib, "pinsrq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pinsrq))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtss2si_method_3156 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si>;
addExtern<DAS_CALL_METHOD(_vcvtss2si_method_3156)>(*this, lib, "vcvtss2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttss2si_method_3158 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si>;
addExtern<DAS_CALL_METHOD(_vcvttss2si_method_3158)>(*this, lib, "vcvttss2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsd2si_method_3160 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si>;
addExtern<DAS_CALL_METHOD(_vcvtsd2si_method_3160)>(*this, lib, "vcvtsd2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttsd2si_method_3162 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si>;
addExtern<DAS_CALL_METHOD(_vcvttsd2si_method_3162)>(*this, lib, "vcvttsd2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovq_method_3164 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vmovq>;
addExtern<DAS_CALL_METHOD(_vmovq_method_3164)>(*this, lib, "vmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vmovq>::invoke")
	->args({"self","x","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovq_method_3166 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>;
addExtern<DAS_CALL_METHOD(_vmovq_method_3166)>(*this, lib, "vmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>::invoke")
	->args({"self","r","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ldtilecfg_method_3168 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ldtilecfg);
addExtern<DAS_CALL_METHOD(_ldtilecfg_method_3168)>(*this, lib, "ldtilecfg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ldtilecfg))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sttilecfg_method_3170 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sttilecfg);
addExtern<DAS_CALL_METHOD(_sttilecfg_method_3170)>(*this, lib, "sttilecfg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sttilecfg))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tileloadd_method_3172 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tileloadd);
addExtern<DAS_CALL_METHOD(_tileloadd_method_3172)>(*this, lib, "tileloadd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tileloadd))
	->args({"self","tm","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tileloaddt1_method_3174 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tileloaddt1);
addExtern<DAS_CALL_METHOD(_tileloaddt1_method_3174)>(*this, lib, "tileloaddt1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tileloaddt1))
	->args({"self","tm","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tilerelease_method_3176 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tilerelease);
addExtern<DAS_CALL_METHOD(_tilerelease_method_3176)>(*this, lib, "tilerelease",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tilerelease))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tilestored_method_3178 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tilestored);
addExtern<DAS_CALL_METHOD(_tilestored_method_3178)>(*this, lib, "tilestored",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tilestored))
	->args({"self","addr","tm"})
;
#endif

#endif
#endif
}
}
