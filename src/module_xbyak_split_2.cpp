
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
void Module_Xbyak::initFunctions_2() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _fadd_method_780 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd>;
addExtern<DAS_CALL_METHOD(_fadd_method_780)>(*this, lib, "fadd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _faddp_method_782 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::faddp>;
addExtern<DAS_CALL_METHOD(_faddp_method_782)>(*this, lib, "faddp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::faddp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _faddp_method_784 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp>;
addExtern<DAS_CALL_METHOD(_faddp_method_784)>(*this, lib, "faddp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _faddp_method_786 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp>;
addExtern<DAS_CALL_METHOD(_faddp_method_786)>(*this, lib, "faddp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fbld_method_788 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fbld);
addExtern<DAS_CALL_METHOD(_fbld_method_788)>(*this, lib, "fbld",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fbld))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fbstp_method_790 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fbstp);
addExtern<DAS_CALL_METHOD(_fbstp_method_790)>(*this, lib, "fbstp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fbstp))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fchs_method_792 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fchs);
addExtern<DAS_CALL_METHOD(_fchs_method_792)>(*this, lib, "fchs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fchs))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fclex_method_794 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fclex);
addExtern<DAS_CALL_METHOD(_fclex_method_794)>(*this, lib, "fclex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fclex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovb_method_796 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb>;
addExtern<DAS_CALL_METHOD(_fcmovb_method_796)>(*this, lib, "fcmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovb_method_798 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb>;
addExtern<DAS_CALL_METHOD(_fcmovb_method_798)>(*this, lib, "fcmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovbe_method_800 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe>;
addExtern<DAS_CALL_METHOD(_fcmovbe_method_800)>(*this, lib, "fcmovbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovbe_method_802 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe>;
addExtern<DAS_CALL_METHOD(_fcmovbe_method_802)>(*this, lib, "fcmovbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmove_method_804 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove>;
addExtern<DAS_CALL_METHOD(_fcmove_method_804)>(*this, lib, "fcmove",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmove_method_806 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove>;
addExtern<DAS_CALL_METHOD(_fcmove_method_806)>(*this, lib, "fcmove",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnb_method_808 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb>;
addExtern<DAS_CALL_METHOD(_fcmovnb_method_808)>(*this, lib, "fcmovnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnb_method_810 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb>;
addExtern<DAS_CALL_METHOD(_fcmovnb_method_810)>(*this, lib, "fcmovnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnbe_method_812 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe>;
addExtern<DAS_CALL_METHOD(_fcmovnbe_method_812)>(*this, lib, "fcmovnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnbe_method_814 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe>;
addExtern<DAS_CALL_METHOD(_fcmovnbe_method_814)>(*this, lib, "fcmovnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovne_method_816 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne>;
addExtern<DAS_CALL_METHOD(_fcmovne_method_816)>(*this, lib, "fcmovne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovne_method_818 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne>;
addExtern<DAS_CALL_METHOD(_fcmovne_method_818)>(*this, lib, "fcmovne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnu_method_820 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu>;
addExtern<DAS_CALL_METHOD(_fcmovnu_method_820)>(*this, lib, "fcmovnu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnu_method_822 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu>;
addExtern<DAS_CALL_METHOD(_fcmovnu_method_822)>(*this, lib, "fcmovnu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovu_method_824 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu>;
addExtern<DAS_CALL_METHOD(_fcmovu_method_824)>(*this, lib, "fcmovu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovu_method_826 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu>;
addExtern<DAS_CALL_METHOD(_fcmovu_method_826)>(*this, lib, "fcmovu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcom_method_828 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcom>;
addExtern<DAS_CALL_METHOD(_fcom_method_828)>(*this, lib, "fcom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcom>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcom_method_830 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcom>;
addExtern<DAS_CALL_METHOD(_fcom_method_830)>(*this, lib, "fcom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcom>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcom_method_832 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcom>;
addExtern<DAS_CALL_METHOD(_fcom_method_832)>(*this, lib, "fcom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcom>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomi_method_834 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi>;
addExtern<DAS_CALL_METHOD(_fcomi_method_834)>(*this, lib, "fcomi",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomi_method_836 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi>;
addExtern<DAS_CALL_METHOD(_fcomi_method_836)>(*this, lib, "fcomi",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomip_method_838 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip>;
addExtern<DAS_CALL_METHOD(_fcomip_method_838)>(*this, lib, "fcomip",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomip_method_840 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip>;
addExtern<DAS_CALL_METHOD(_fcomip_method_840)>(*this, lib, "fcomip",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomp_method_842 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcomp>;
addExtern<DAS_CALL_METHOD(_fcomp_method_842)>(*this, lib, "fcomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcomp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomp_method_844 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcomp>;
addExtern<DAS_CALL_METHOD(_fcomp_method_844)>(*this, lib, "fcomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcomp>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomp_method_846 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomp>;
addExtern<DAS_CALL_METHOD(_fcomp_method_846)>(*this, lib, "fcomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomp>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcompp_method_848 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fcompp);
addExtern<DAS_CALL_METHOD(_fcompp_method_848)>(*this, lib, "fcompp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fcompp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcos_method_850 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fcos);
addExtern<DAS_CALL_METHOD(_fcos_method_850)>(*this, lib, "fcos",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fcos))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdecstp_method_852 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fdecstp);
addExtern<DAS_CALL_METHOD(_fdecstp_method_852)>(*this, lib, "fdecstp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fdecstp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdiv_method_854 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdiv>;
addExtern<DAS_CALL_METHOD(_fdiv_method_854)>(*this, lib, "fdiv",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdiv>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdiv_method_856 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv>;
addExtern<DAS_CALL_METHOD(_fdiv_method_856)>(*this, lib, "fdiv",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdiv_method_858 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv>;
addExtern<DAS_CALL_METHOD(_fdiv_method_858)>(*this, lib, "fdiv",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivp_method_860 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivp>;
addExtern<DAS_CALL_METHOD(_fdivp_method_860)>(*this, lib, "fdivp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivp_method_862 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp>;
addExtern<DAS_CALL_METHOD(_fdivp_method_862)>(*this, lib, "fdivp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivp_method_864 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp>;
addExtern<DAS_CALL_METHOD(_fdivp_method_864)>(*this, lib, "fdivp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivr_method_866 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdivr>;
addExtern<DAS_CALL_METHOD(_fdivr_method_866)>(*this, lib, "fdivr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdivr>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivr_method_868 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr>;
addExtern<DAS_CALL_METHOD(_fdivr_method_868)>(*this, lib, "fdivr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivr_method_870 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr>;
addExtern<DAS_CALL_METHOD(_fdivr_method_870)>(*this, lib, "fdivr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivrp_method_872 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivrp>;
addExtern<DAS_CALL_METHOD(_fdivrp_method_872)>(*this, lib, "fdivrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivrp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivrp_method_874 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp>;
addExtern<DAS_CALL_METHOD(_fdivrp_method_874)>(*this, lib, "fdivrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivrp_method_876 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp>;
addExtern<DAS_CALL_METHOD(_fdivrp_method_876)>(*this, lib, "fdivrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ffree_method_878 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ffree);
addExtern<DAS_CALL_METHOD(_ffree_method_878)>(*this, lib, "ffree",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ffree))
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fiadd_method_880 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fiadd);
addExtern<DAS_CALL_METHOD(_fiadd_method_880)>(*this, lib, "fiadd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fiadd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ficom_method_882 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ficom);
addExtern<DAS_CALL_METHOD(_ficom_method_882)>(*this, lib, "ficom",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ficom))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ficomp_method_884 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ficomp);
addExtern<DAS_CALL_METHOD(_ficomp_method_884)>(*this, lib, "ficomp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ficomp))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fidiv_method_886 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fidiv);
addExtern<DAS_CALL_METHOD(_fidiv_method_886)>(*this, lib, "fidiv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fidiv))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fidivr_method_888 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fidivr);
addExtern<DAS_CALL_METHOD(_fidivr_method_888)>(*this, lib, "fidivr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fidivr))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fild_method_890 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fild);
addExtern<DAS_CALL_METHOD(_fild_method_890)>(*this, lib, "fild",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fild))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fimul_method_892 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fimul);
addExtern<DAS_CALL_METHOD(_fimul_method_892)>(*this, lib, "fimul",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fimul))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fincstp_method_894 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fincstp);
addExtern<DAS_CALL_METHOD(_fincstp_method_894)>(*this, lib, "fincstp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fincstp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _finit_method_896 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::finit);
addExtern<DAS_CALL_METHOD(_finit_method_896)>(*this, lib, "finit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::finit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fist_method_898 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fist);
addExtern<DAS_CALL_METHOD(_fist_method_898)>(*this, lib, "fist",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fist))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fistp_method_900 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fistp);
addExtern<DAS_CALL_METHOD(_fistp_method_900)>(*this, lib, "fistp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fistp))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fisttp_method_902 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fisttp);
addExtern<DAS_CALL_METHOD(_fisttp_method_902)>(*this, lib, "fisttp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fisttp))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fisub_method_904 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fisub);
addExtern<DAS_CALL_METHOD(_fisub_method_904)>(*this, lib, "fisub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fisub))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fisubr_method_906 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fisubr);
addExtern<DAS_CALL_METHOD(_fisubr_method_906)>(*this, lib, "fisubr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fisubr))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fld_method_908 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fld>;
addExtern<DAS_CALL_METHOD(_fld_method_908)>(*this, lib, "fld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fld>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fld_method_910 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fld>;
addExtern<DAS_CALL_METHOD(_fld_method_910)>(*this, lib, "fld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fld>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fld1_method_912 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fld1);
addExtern<DAS_CALL_METHOD(_fld1_method_912)>(*this, lib, "fld1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fld1))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldcw_method_914 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldcw);
addExtern<DAS_CALL_METHOD(_fldcw_method_914)>(*this, lib, "fldcw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldcw))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldenv_method_916 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldenv);
addExtern<DAS_CALL_METHOD(_fldenv_method_916)>(*this, lib, "fldenv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldenv))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldl2e_method_918 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldl2e);
addExtern<DAS_CALL_METHOD(_fldl2e_method_918)>(*this, lib, "fldl2e",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldl2e))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldl2t_method_920 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldl2t);
addExtern<DAS_CALL_METHOD(_fldl2t_method_920)>(*this, lib, "fldl2t",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldl2t))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldlg2_method_922 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldlg2);
addExtern<DAS_CALL_METHOD(_fldlg2_method_922)>(*this, lib, "fldlg2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldlg2))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldln2_method_924 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldln2);
addExtern<DAS_CALL_METHOD(_fldln2_method_924)>(*this, lib, "fldln2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldln2))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldpi_method_926 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldpi);
addExtern<DAS_CALL_METHOD(_fldpi_method_926)>(*this, lib, "fldpi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldpi))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldz_method_928 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldz);
addExtern<DAS_CALL_METHOD(_fldz_method_928)>(*this, lib, "fldz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldz))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmul_method_930 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fmul>;
addExtern<DAS_CALL_METHOD(_fmul_method_930)>(*this, lib, "fmul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fmul>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmul_method_932 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul>;
addExtern<DAS_CALL_METHOD(_fmul_method_932)>(*this, lib, "fmul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmul_method_934 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul>;
addExtern<DAS_CALL_METHOD(_fmul_method_934)>(*this, lib, "fmul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmulp_method_936 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fmulp>;
addExtern<DAS_CALL_METHOD(_fmulp_method_936)>(*this, lib, "fmulp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fmulp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmulp_method_938 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp>;
addExtern<DAS_CALL_METHOD(_fmulp_method_938)>(*this, lib, "fmulp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmulp_method_940 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp>;
addExtern<DAS_CALL_METHOD(_fmulp_method_940)>(*this, lib, "fmulp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnclex_method_942 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fnclex);
addExtern<DAS_CALL_METHOD(_fnclex_method_942)>(*this, lib, "fnclex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fnclex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fninit_method_944 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fninit);
addExtern<DAS_CALL_METHOD(_fninit_method_944)>(*this, lib, "fninit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fninit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnop_method_946 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fnop);
addExtern<DAS_CALL_METHOD(_fnop_method_946)>(*this, lib, "fnop",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fnop))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnsave_method_948 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fnsave);
addExtern<DAS_CALL_METHOD(_fnsave_method_948)>(*this, lib, "fnsave",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fnsave))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnstcw_method_950 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fnstcw);
addExtern<DAS_CALL_METHOD(_fnstcw_method_950)>(*this, lib, "fnstcw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fnstcw))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnstenv_method_952 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fnstenv);
addExtern<DAS_CALL_METHOD(_fnstenv_method_952)>(*this, lib, "fnstenv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fnstenv))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnstsw_method_954 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnstsw>;
addExtern<DAS_CALL_METHOD(_fnstsw_method_954)>(*this, lib, "fnstsw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnstsw>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnstsw_method_956 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fnstsw>;
addExtern<DAS_CALL_METHOD(_fnstsw_method_956)>(*this, lib, "fnstsw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fnstsw>::invoke")
	->args({"self","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fpatan_method_958 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fpatan);
addExtern<DAS_CALL_METHOD(_fpatan_method_958)>(*this, lib, "fpatan",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fpatan))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fprem_method_960 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fprem);
addExtern<DAS_CALL_METHOD(_fprem_method_960)>(*this, lib, "fprem",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fprem))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fprem1_method_962 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fprem1);
addExtern<DAS_CALL_METHOD(_fprem1_method_962)>(*this, lib, "fprem1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fprem1))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fptan_method_964 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fptan);
addExtern<DAS_CALL_METHOD(_fptan_method_964)>(*this, lib, "fptan",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fptan))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _frndint_method_966 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::frndint);
addExtern<DAS_CALL_METHOD(_frndint_method_966)>(*this, lib, "frndint",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::frndint))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _frstor_method_968 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::frstor);
addExtern<DAS_CALL_METHOD(_frstor_method_968)>(*this, lib, "frstor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::frstor))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsave_method_970 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fsave);
addExtern<DAS_CALL_METHOD(_fsave_method_970)>(*this, lib, "fsave",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fsave))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fscale_method_972 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fscale);
addExtern<DAS_CALL_METHOD(_fscale_method_972)>(*this, lib, "fscale",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fscale))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsin_method_974 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fsin);
addExtern<DAS_CALL_METHOD(_fsin_method_974)>(*this, lib, "fsin",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fsin))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsincos_method_976 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fsincos);
addExtern<DAS_CALL_METHOD(_fsincos_method_976)>(*this, lib, "fsincos",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fsincos))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsqrt_method_978 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fsqrt);
addExtern<DAS_CALL_METHOD(_fsqrt_method_978)>(*this, lib, "fsqrt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fsqrt))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fst_method_980 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fst>;
addExtern<DAS_CALL_METHOD(_fst_method_980)>(*this, lib, "fst",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fst>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fst_method_982 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fst>;
addExtern<DAS_CALL_METHOD(_fst_method_982)>(*this, lib, "fst",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fst>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstcw_method_984 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fstcw);
addExtern<DAS_CALL_METHOD(_fstcw_method_984)>(*this, lib, "fstcw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fstcw))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstenv_method_986 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fstenv);
addExtern<DAS_CALL_METHOD(_fstenv_method_986)>(*this, lib, "fstenv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fstenv))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstp_method_988 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstp>;
addExtern<DAS_CALL_METHOD(_fstp_method_988)>(*this, lib, "fstp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstp>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstp_method_990 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fstp>;
addExtern<DAS_CALL_METHOD(_fstp_method_990)>(*this, lib, "fstp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fstp>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstsw_method_992 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstsw>;
addExtern<DAS_CALL_METHOD(_fstsw_method_992)>(*this, lib, "fstsw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstsw>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstsw_method_994 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fstsw>;
addExtern<DAS_CALL_METHOD(_fstsw_method_994)>(*this, lib, "fstsw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fstsw>::invoke")
	->args({"self","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsub_method_996 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsub>;
addExtern<DAS_CALL_METHOD(_fsub_method_996)>(*this, lib, "fsub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsub>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsub_method_998 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>;
addExtern<DAS_CALL_METHOD(_fsub_method_998)>(*this, lib, "fsub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsub_method_1000 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>;
addExtern<DAS_CALL_METHOD(_fsub_method_1000)>(*this, lib, "fsub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubp_method_1002 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubp>;
addExtern<DAS_CALL_METHOD(_fsubp_method_1002)>(*this, lib, "fsubp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubp_method_1004 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>;
addExtern<DAS_CALL_METHOD(_fsubp_method_1004)>(*this, lib, "fsubp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubp_method_1006 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>;
addExtern<DAS_CALL_METHOD(_fsubp_method_1006)>(*this, lib, "fsubp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubr_method_1008 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsubr>;
addExtern<DAS_CALL_METHOD(_fsubr_method_1008)>(*this, lib, "fsubr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsubr>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubr_method_1010 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>;
addExtern<DAS_CALL_METHOD(_fsubr_method_1010)>(*this, lib, "fsubr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubr_method_1012 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>;
addExtern<DAS_CALL_METHOD(_fsubr_method_1012)>(*this, lib, "fsubr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubrp_method_1014 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubrp>;
addExtern<DAS_CALL_METHOD(_fsubrp_method_1014)>(*this, lib, "fsubrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubrp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubrp_method_1016 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>;
addExtern<DAS_CALL_METHOD(_fsubrp_method_1016)>(*this, lib, "fsubrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubrp_method_1018 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>;
addExtern<DAS_CALL_METHOD(_fsubrp_method_1018)>(*this, lib, "fsubrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ftst_method_1020 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ftst);
addExtern<DAS_CALL_METHOD(_ftst_method_1020)>(*this, lib, "ftst",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ftst))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucom_method_1022 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucom>;
addExtern<DAS_CALL_METHOD(_fucom_method_1022)>(*this, lib, "fucom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucom>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucom_method_1024 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucom>;
addExtern<DAS_CALL_METHOD(_fucom_method_1024)>(*this, lib, "fucom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucom>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomi_method_1026 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>;
addExtern<DAS_CALL_METHOD(_fucomi_method_1026)>(*this, lib, "fucomi",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomi_method_1028 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>;
addExtern<DAS_CALL_METHOD(_fucomi_method_1028)>(*this, lib, "fucomi",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomip_method_1030 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>;
addExtern<DAS_CALL_METHOD(_fucomip_method_1030)>(*this, lib, "fucomip",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomip_method_1032 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>;
addExtern<DAS_CALL_METHOD(_fucomip_method_1032)>(*this, lib, "fucomip",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomp_method_1034 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucomp>;
addExtern<DAS_CALL_METHOD(_fucomp_method_1034)>(*this, lib, "fucomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucomp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomp_method_1036 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomp>;
addExtern<DAS_CALL_METHOD(_fucomp_method_1036)>(*this, lib, "fucomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomp>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucompp_method_1038 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fucompp);
addExtern<DAS_CALL_METHOD(_fucompp_method_1038)>(*this, lib, "fucompp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fucompp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fwait_method_1040 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fwait);
addExtern<DAS_CALL_METHOD(_fwait_method_1040)>(*this, lib, "fwait",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fwait))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxam_method_1042 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fxam);
addExtern<DAS_CALL_METHOD(_fxam_method_1042)>(*this, lib, "fxam",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fxam))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxch_method_1044 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxch>;
addExtern<DAS_CALL_METHOD(_fxch_method_1044)>(*this, lib, "fxch",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxch>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxch_method_1046 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fxch>;
addExtern<DAS_CALL_METHOD(_fxch_method_1046)>(*this, lib, "fxch",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fxch>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxrstor_method_1048 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fxrstor);
addExtern<DAS_CALL_METHOD(_fxrstor_method_1048)>(*this, lib, "fxrstor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fxrstor))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxtract_method_1050 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fxtract);
addExtern<DAS_CALL_METHOD(_fxtract_method_1050)>(*this, lib, "fxtract",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fxtract))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fyl2x_method_1052 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fyl2x);
addExtern<DAS_CALL_METHOD(_fyl2x_method_1052)>(*this, lib, "fyl2x",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fyl2x))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fyl2xp1_method_1054 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fyl2xp1);
addExtern<DAS_CALL_METHOD(_fyl2xp1_method_1054)>(*this, lib, "fyl2xp1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fyl2xp1))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _gf2p8affineinvqb_method_1056 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::gf2p8affineinvqb);
addExtern<DAS_CALL_METHOD(_gf2p8affineinvqb_method_1056)>(*this, lib, "gf2p8affineinvqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::gf2p8affineinvqb))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _gf2p8affineqb_method_1058 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::gf2p8affineqb);
addExtern<DAS_CALL_METHOD(_gf2p8affineqb_method_1058)>(*this, lib, "gf2p8affineqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::gf2p8affineqb))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _gf2p8mulb_method_1060 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::gf2p8mulb);
addExtern<DAS_CALL_METHOD(_gf2p8mulb_method_1060)>(*this, lib, "gf2p8mulb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::gf2p8mulb))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _haddpd_method_1062 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::haddpd);
addExtern<DAS_CALL_METHOD(_haddpd_method_1062)>(*this, lib, "haddpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::haddpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _haddps_method_1064 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::haddps);
addExtern<DAS_CALL_METHOD(_haddps_method_1064)>(*this, lib, "haddps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::haddps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hsubpd_method_1066 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::hsubpd);
addExtern<DAS_CALL_METHOD(_hsubpd_method_1066)>(*this, lib, "hsubpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::hsubpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hsubps_method_1068 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::hsubps);
addExtern<DAS_CALL_METHOD(_hsubps_method_1068)>(*this, lib, "hsubps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::hsubps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _idiv_method_1070 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::idiv);
addExtern<DAS_CALL_METHOD(_idiv_method_1070)>(*this, lib, "idiv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::idiv))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _imul_method_1072 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>;
addExtern<DAS_CALL_METHOD(_imul_method_1072)>(*this, lib, "imul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _in__method_1074 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &),&Xbyak::CodeGenerator::in_>;
addExtern<DAS_CALL_METHOD(_in__method_1074)>(*this, lib, "in_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &),&Xbyak::CodeGenerator::in_>::invoke")
	->args({"self","a","d"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _in__method_1076 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::in_>;
addExtern<DAS_CALL_METHOD(_in__method_1076)>(*this, lib, "in_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::in_>::invoke")
	->args({"self","a","v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _inc_method_1078 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::inc);
addExtern<DAS_CALL_METHOD(_inc_method_1078)>(*this, lib, "inc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::inc))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _insertps_method_1080 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::insertps);
addExtern<DAS_CALL_METHOD(_insertps_method_1080)>(*this, lib, "insertps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::insertps))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _int3_method_1082 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::int3);
addExtern<DAS_CALL_METHOD(_int3_method_1082)>(*this, lib, "int3",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::int3))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _int__method_1084 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::int_);
addExtern<DAS_CALL_METHOD(_int__method_1084)>(*this, lib, "int_",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::int_))
	->args({"self","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1086 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1086)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1088 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1088)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1090 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1090)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1092 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1092)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1094 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1094)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1096 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1096)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1098 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1098)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1100 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1100)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1102 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1102)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1104 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1104)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1106 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1106)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1108 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1108)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1110 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1110)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1112 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1112)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1114 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1114)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1116 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1116)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1118 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1118)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1120 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1120)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1122 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1122)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1124 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1124)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1126 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1126)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1128 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1128)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1130 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1130)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1132 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1132)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1134 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1134)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1136 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1136)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1138 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1138)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1140 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1140)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1142 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1142)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1144 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1144)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1146 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1146)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1148 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1148)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1150 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1150)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1152 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1152)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1154 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1154)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1156 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1156)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1158 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1158)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1160 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1160)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1162 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1162)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1164 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1164)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1166 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1166)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1168 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1168)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1170 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1170)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1172 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1172)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnae_method_1174 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>;
addExtern<DAS_CALL_METHOD(_jnae_method_1174)>(*this, lib, "jnae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnae_method_1176 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>;
addExtern<DAS_CALL_METHOD(_jnae_method_1176)>(*this, lib, "jnae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnae_method_1178 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnae>;
addExtern<DAS_CALL_METHOD(_jnae_method_1178)>(*this, lib, "jnae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnae>::invoke")
	->args({"self","addr"})
;
#endif

#endif
#endif
}
}
