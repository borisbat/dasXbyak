
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
void Module_Xbyak::initFunctions_13() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _vmaskmovdqu_method_2580 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaskmovdqu);
addExtern<DAS_CALL_METHOD(_vmaskmovdqu_method_2580)>(*this, lib, "vmaskmovdqu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaskmovdqu))
	->args({"self","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaskmovpd_method_2582 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovpd>;
addExtern<DAS_CALL_METHOD(_vmaskmovpd_method_2582)>(*this, lib, "vmaskmovpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovpd>::invoke")
	->args({"self","addr","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaskmovpd_method_2584 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovpd>;
addExtern<DAS_CALL_METHOD(_vmaskmovpd_method_2584)>(*this, lib, "vmaskmovpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovpd>::invoke")
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaskmovps_method_2586 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovps>;
addExtern<DAS_CALL_METHOD(_vmaskmovps_method_2586)>(*this, lib, "vmaskmovps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovps>::invoke")
	->args({"self","addr","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaskmovps_method_2588 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovps>;
addExtern<DAS_CALL_METHOD(_vmaskmovps_method_2588)>(*this, lib, "vmaskmovps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovps>::invoke")
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxpd_method_2590 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxpd);
addExtern<DAS_CALL_METHOD(_vmaxpd_method_2590)>(*this, lib, "vmaxpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxps_method_2592 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxps);
addExtern<DAS_CALL_METHOD(_vmaxps_method_2592)>(*this, lib, "vmaxps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxsd_method_2594 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxsd);
addExtern<DAS_CALL_METHOD(_vmaxsd_method_2594)>(*this, lib, "vmaxsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxss_method_2596 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxss);
addExtern<DAS_CALL_METHOD(_vmaxss_method_2596)>(*this, lib, "vmaxss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminpd_method_2598 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminpd);
addExtern<DAS_CALL_METHOD(_vminpd_method_2598)>(*this, lib, "vminpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminps_method_2600 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminps);
addExtern<DAS_CALL_METHOD(_vminps_method_2600)>(*this, lib, "vminps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminsd_method_2602 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminsd);
addExtern<DAS_CALL_METHOD(_vminsd_method_2602)>(*this, lib, "vminsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminss_method_2604 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminss);
addExtern<DAS_CALL_METHOD(_vminss_method_2604)>(*this, lib, "vminss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovapd_method_2606 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovapd>;
addExtern<DAS_CALL_METHOD(_vmovapd_method_2606)>(*this, lib, "vmovapd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovapd>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovapd_method_2608 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovapd>;
addExtern<DAS_CALL_METHOD(_vmovapd_method_2608)>(*this, lib, "vmovapd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovapd>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovaps_method_2610 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovaps>;
addExtern<DAS_CALL_METHOD(_vmovaps_method_2610)>(*this, lib, "vmovaps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovaps>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovaps_method_2612 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovaps>;
addExtern<DAS_CALL_METHOD(_vmovaps_method_2612)>(*this, lib, "vmovaps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovaps>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovd_method_2614 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovd>;
addExtern<DAS_CALL_METHOD(_vmovd_method_2614)>(*this, lib, "vmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovd>::invoke")
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovd_method_2616 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovd>;
addExtern<DAS_CALL_METHOD(_vmovd_method_2616)>(*this, lib, "vmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovd>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovddup_method_2618 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovddup);
addExtern<DAS_CALL_METHOD(_vmovddup_method_2618)>(*this, lib, "vmovddup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovddup))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa_method_2620 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa>;
addExtern<DAS_CALL_METHOD(_vmovdqa_method_2620)>(*this, lib, "vmovdqa",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa_method_2622 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa>;
addExtern<DAS_CALL_METHOD(_vmovdqa_method_2622)>(*this, lib, "vmovdqa",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu_method_2624 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu>;
addExtern<DAS_CALL_METHOD(_vmovdqu_method_2624)>(*this, lib, "vmovdqu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu_method_2626 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu>;
addExtern<DAS_CALL_METHOD(_vmovdqu_method_2626)>(*this, lib, "vmovdqu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovhlps_method_2628 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovhlps);
addExtern<DAS_CALL_METHOD(_vmovhlps_method_2628)>(*this, lib, "vmovhlps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovhlps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovhpd_method_2630 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhpd>;
addExtern<DAS_CALL_METHOD(_vmovhpd_method_2630)>(*this, lib, "vmovhpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhpd>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovhpd_method_2632 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhpd>;
addExtern<DAS_CALL_METHOD(_vmovhpd_method_2632)>(*this, lib, "vmovhpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhpd>::invoke")
	->args({"self","x","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovhps_method_2634 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhps>;
addExtern<DAS_CALL_METHOD(_vmovhps_method_2634)>(*this, lib, "vmovhps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhps>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovhps_method_2636 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhps>;
addExtern<DAS_CALL_METHOD(_vmovhps_method_2636)>(*this, lib, "vmovhps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhps>::invoke")
	->args({"self","x","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovlhps_method_2638 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovlhps);
addExtern<DAS_CALL_METHOD(_vmovlhps_method_2638)>(*this, lib, "vmovlhps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovlhps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovlpd_method_2640 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlpd>;
addExtern<DAS_CALL_METHOD(_vmovlpd_method_2640)>(*this, lib, "vmovlpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlpd>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovlpd_method_2642 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlpd>;
addExtern<DAS_CALL_METHOD(_vmovlpd_method_2642)>(*this, lib, "vmovlpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlpd>::invoke")
	->args({"self","x","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovlps_method_2644 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlps>;
addExtern<DAS_CALL_METHOD(_vmovlps_method_2644)>(*this, lib, "vmovlps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlps>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovlps_method_2646 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlps>;
addExtern<DAS_CALL_METHOD(_vmovlps_method_2646)>(*this, lib, "vmovlps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlps>::invoke")
	->args({"self","x","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovmskpd_method_2648 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovmskpd);
addExtern<DAS_CALL_METHOD(_vmovmskpd_method_2648)>(*this, lib, "vmovmskpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovmskpd))
	->args({"self","r","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovmskps_method_2650 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovmskps);
addExtern<DAS_CALL_METHOD(_vmovmskps_method_2650)>(*this, lib, "vmovmskps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovmskps))
	->args({"self","r","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovntdq_method_2652 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovntdq);
addExtern<DAS_CALL_METHOD(_vmovntdq_method_2652)>(*this, lib, "vmovntdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovntdq))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovntdqa_method_2654 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovntdqa);
addExtern<DAS_CALL_METHOD(_vmovntdqa_method_2654)>(*this, lib, "vmovntdqa",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovntdqa))
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovntpd_method_2656 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovntpd);
addExtern<DAS_CALL_METHOD(_vmovntpd_method_2656)>(*this, lib, "vmovntpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovntpd))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovntps_method_2658 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovntps);
addExtern<DAS_CALL_METHOD(_vmovntps_method_2658)>(*this, lib, "vmovntps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovntps))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovq_method_2660 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>;
addExtern<DAS_CALL_METHOD(_vmovq_method_2660)>(*this, lib, "vmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovq_method_2662 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovq>;
addExtern<DAS_CALL_METHOD(_vmovq_method_2662)>(*this, lib, "vmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovq>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovq_method_2664 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>;
addExtern<DAS_CALL_METHOD(_vmovq_method_2664)>(*this, lib, "vmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>::invoke")
	->args({"self","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsd_method_2666 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsd>;
addExtern<DAS_CALL_METHOD(_vmovsd_method_2666)>(*this, lib, "vmovsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsd>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsd_method_2668 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsd>;
addExtern<DAS_CALL_METHOD(_vmovsd_method_2668)>(*this, lib, "vmovsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsd>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsd_method_2670 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovsd>;
addExtern<DAS_CALL_METHOD(_vmovsd_method_2670)>(*this, lib, "vmovsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovshdup_method_2672 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovshdup);
addExtern<DAS_CALL_METHOD(_vmovshdup_method_2672)>(*this, lib, "vmovshdup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovshdup))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsldup_method_2674 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovsldup);
addExtern<DAS_CALL_METHOD(_vmovsldup_method_2674)>(*this, lib, "vmovsldup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovsldup))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovss_method_2676 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovss>;
addExtern<DAS_CALL_METHOD(_vmovss_method_2676)>(*this, lib, "vmovss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovss>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovss_method_2678 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovss>;
addExtern<DAS_CALL_METHOD(_vmovss_method_2678)>(*this, lib, "vmovss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovss>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovss_method_2680 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovss>;
addExtern<DAS_CALL_METHOD(_vmovss_method_2680)>(*this, lib, "vmovss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovupd_method_2682 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovupd>;
addExtern<DAS_CALL_METHOD(_vmovupd_method_2682)>(*this, lib, "vmovupd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovupd>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovupd_method_2684 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovupd>;
addExtern<DAS_CALL_METHOD(_vmovupd_method_2684)>(*this, lib, "vmovupd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovupd>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovups_method_2686 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovups>;
addExtern<DAS_CALL_METHOD(_vmovups_method_2686)>(*this, lib, "vmovups",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovups>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovups_method_2688 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovups>;
addExtern<DAS_CALL_METHOD(_vmovups_method_2688)>(*this, lib, "vmovups",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovups>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmpsadbw_method_2690 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmpsadbw);
addExtern<DAS_CALL_METHOD(_vmpsadbw_method_2690)>(*this, lib, "vmpsadbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmpsadbw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulpd_method_2692 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulpd);
addExtern<DAS_CALL_METHOD(_vmulpd_method_2692)>(*this, lib, "vmulpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulps_method_2694 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulps);
addExtern<DAS_CALL_METHOD(_vmulps_method_2694)>(*this, lib, "vmulps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulsd_method_2696 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulsd);
addExtern<DAS_CALL_METHOD(_vmulsd_method_2696)>(*this, lib, "vmulsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulss_method_2698 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulss);
addExtern<DAS_CALL_METHOD(_vmulss_method_2698)>(*this, lib, "vmulss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vorpd_method_2700 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vorpd);
addExtern<DAS_CALL_METHOD(_vorpd_method_2700)>(*this, lib, "vorpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vorpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vorps_method_2702 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vorps);
addExtern<DAS_CALL_METHOD(_vorps_method_2702)>(*this, lib, "vorps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vorps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpabsb_method_2704 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpabsb);
addExtern<DAS_CALL_METHOD(_vpabsb_method_2704)>(*this, lib, "vpabsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpabsb))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpabsd_method_2706 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpabsd);
addExtern<DAS_CALL_METHOD(_vpabsd_method_2706)>(*this, lib, "vpabsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpabsd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpabsw_method_2708 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpabsw);
addExtern<DAS_CALL_METHOD(_vpabsw_method_2708)>(*this, lib, "vpabsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpabsw))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpackssdw_method_2710 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpackssdw);
addExtern<DAS_CALL_METHOD(_vpackssdw_method_2710)>(*this, lib, "vpackssdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpackssdw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpacksswb_method_2712 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpacksswb);
addExtern<DAS_CALL_METHOD(_vpacksswb_method_2712)>(*this, lib, "vpacksswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpacksswb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpackusdw_method_2714 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpackusdw);
addExtern<DAS_CALL_METHOD(_vpackusdw_method_2714)>(*this, lib, "vpackusdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpackusdw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpackuswb_method_2716 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpackuswb);
addExtern<DAS_CALL_METHOD(_vpackuswb_method_2716)>(*this, lib, "vpackuswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpackuswb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddb_method_2718 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddb);
addExtern<DAS_CALL_METHOD(_vpaddb_method_2718)>(*this, lib, "vpaddb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddd_method_2720 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddd);
addExtern<DAS_CALL_METHOD(_vpaddd_method_2720)>(*this, lib, "vpaddd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddq_method_2722 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddq);
addExtern<DAS_CALL_METHOD(_vpaddq_method_2722)>(*this, lib, "vpaddq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddsb_method_2724 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddsb);
addExtern<DAS_CALL_METHOD(_vpaddsb_method_2724)>(*this, lib, "vpaddsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddsb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddsw_method_2726 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddsw);
addExtern<DAS_CALL_METHOD(_vpaddsw_method_2726)>(*this, lib, "vpaddsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddusb_method_2728 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddusb);
addExtern<DAS_CALL_METHOD(_vpaddusb_method_2728)>(*this, lib, "vpaddusb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddusb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddusw_method_2730 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddusw);
addExtern<DAS_CALL_METHOD(_vpaddusw_method_2730)>(*this, lib, "vpaddusw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddusw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddw_method_2732 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddw);
addExtern<DAS_CALL_METHOD(_vpaddw_method_2732)>(*this, lib, "vpaddw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpalignr_method_2734 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpalignr);
addExtern<DAS_CALL_METHOD(_vpalignr_method_2734)>(*this, lib, "vpalignr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpalignr))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpand_method_2736 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpand);
addExtern<DAS_CALL_METHOD(_vpand_method_2736)>(*this, lib, "vpand",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpand))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpandn_method_2738 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpandn);
addExtern<DAS_CALL_METHOD(_vpandn_method_2738)>(*this, lib, "vpandn",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpandn))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpavgb_method_2740 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpavgb);
addExtern<DAS_CALL_METHOD(_vpavgb_method_2740)>(*this, lib, "vpavgb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpavgb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpavgw_method_2742 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpavgw);
addExtern<DAS_CALL_METHOD(_vpavgw_method_2742)>(*this, lib, "vpavgw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpavgw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendd_method_2744 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendd);
addExtern<DAS_CALL_METHOD(_vpblendd_method_2744)>(*this, lib, "vpblendd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendvb_method_2746 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendvb);
addExtern<DAS_CALL_METHOD(_vpblendvb_method_2746)>(*this, lib, "vpblendvb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendvb))
	->args({"self","x1","x2","op","x4"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendw_method_2748 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendw);
addExtern<DAS_CALL_METHOD(_vpblendw_method_2748)>(*this, lib, "vpblendw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastb_method_2750 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastb>;
addExtern<DAS_CALL_METHOD(_vpbroadcastb_method_2750)>(*this, lib, "vpbroadcastb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastb>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastd_method_2752 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastd>;
addExtern<DAS_CALL_METHOD(_vpbroadcastd_method_2752)>(*this, lib, "vpbroadcastd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastd>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastq_method_2754 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastq>;
addExtern<DAS_CALL_METHOD(_vpbroadcastq_method_2754)>(*this, lib, "vpbroadcastq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastq>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastw_method_2756 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastw>;
addExtern<DAS_CALL_METHOD(_vpbroadcastw_method_2756)>(*this, lib, "vpbroadcastw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastw>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpclmulqdq_method_2758 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpclmulqdq);
addExtern<DAS_CALL_METHOD(_vpclmulqdq_method_2758)>(*this, lib, "vpclmulqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpclmulqdq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqb_method_2760 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb>;
addExtern<DAS_CALL_METHOD(_vpcmpeqb_method_2760)>(*this, lib, "vpcmpeqb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqd_method_2762 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd>;
addExtern<DAS_CALL_METHOD(_vpcmpeqd_method_2762)>(*this, lib, "vpcmpeqd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqq_method_2764 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq>;
addExtern<DAS_CALL_METHOD(_vpcmpeqq_method_2764)>(*this, lib, "vpcmpeqq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqw_method_2766 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw>;
addExtern<DAS_CALL_METHOD(_vpcmpeqw_method_2766)>(*this, lib, "vpcmpeqw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpestri_method_2768 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpestri);
addExtern<DAS_CALL_METHOD(_vpcmpestri_method_2768)>(*this, lib, "vpcmpestri",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpestri))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpestrm_method_2770 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpestrm);
addExtern<DAS_CALL_METHOD(_vpcmpestrm_method_2770)>(*this, lib, "vpcmpestrm",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpestrm))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtb_method_2772 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb>;
addExtern<DAS_CALL_METHOD(_vpcmpgtb_method_2772)>(*this, lib, "vpcmpgtb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtd_method_2774 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd>;
addExtern<DAS_CALL_METHOD(_vpcmpgtd_method_2774)>(*this, lib, "vpcmpgtd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtq_method_2776 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq>;
addExtern<DAS_CALL_METHOD(_vpcmpgtq_method_2776)>(*this, lib, "vpcmpgtq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtw_method_2778 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw>;
addExtern<DAS_CALL_METHOD(_vpcmpgtw_method_2778)>(*this, lib, "vpcmpgtw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw>::invoke")
	->args({"self","x1","x2","op"})
;
#endif

#endif
#endif
}
}
