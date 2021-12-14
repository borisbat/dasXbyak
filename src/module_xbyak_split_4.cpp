
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
void Module_Xbyak::initFunctions_4() {
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

#endif
#endif
}
}
