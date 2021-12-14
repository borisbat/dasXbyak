
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
void Module_Xbyak::initFunctions_19() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _vfcmaddcph_method_3780 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfcmaddcph);
addExtern<DAS_CALL_METHOD(_vfcmaddcph_method_3780)>(*this, lib, "vfcmaddcph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfcmaddcph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfcmulcph_method_3782 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfcmulcph);
addExtern<DAS_CALL_METHOD(_vfcmulcph_method_3782)>(*this, lib, "vfcmulcph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfcmulcph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfixupimmpd_method_3784 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfixupimmpd);
addExtern<DAS_CALL_METHOD(_vfixupimmpd_method_3784)>(*this, lib, "vfixupimmpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfixupimmpd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfixupimmps_method_3786 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfixupimmps);
addExtern<DAS_CALL_METHOD(_vfixupimmps_method_3786)>(*this, lib, "vfixupimmps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfixupimmps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfixupimmsd_method_3788 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfixupimmsd);
addExtern<DAS_CALL_METHOD(_vfixupimmsd_method_3788)>(*this, lib, "vfixupimmsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfixupimmsd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfixupimmss_method_3790 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfixupimmss);
addExtern<DAS_CALL_METHOD(_vfixupimmss_method_3790)>(*this, lib, "vfixupimmss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfixupimmss))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132ph_method_3792 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132ph);
addExtern<DAS_CALL_METHOD(_vfmadd132ph_method_3792)>(*this, lib, "vfmadd132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132sh_method_3794 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132sh);
addExtern<DAS_CALL_METHOD(_vfmadd132sh_method_3794)>(*this, lib, "vfmadd132sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213ph_method_3796 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213ph);
addExtern<DAS_CALL_METHOD(_vfmadd213ph_method_3796)>(*this, lib, "vfmadd213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213sh_method_3798 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213sh);
addExtern<DAS_CALL_METHOD(_vfmadd213sh_method_3798)>(*this, lib, "vfmadd213sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231ph_method_3800 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231ph);
addExtern<DAS_CALL_METHOD(_vfmadd231ph_method_3800)>(*this, lib, "vfmadd231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231sh_method_3802 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231sh);
addExtern<DAS_CALL_METHOD(_vfmadd231sh_method_3802)>(*this, lib, "vfmadd231sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddcph_method_3804 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddcph);
addExtern<DAS_CALL_METHOD(_vfmaddcph_method_3804)>(*this, lib, "vfmaddcph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddcph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub132ph_method_3806 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub132ph);
addExtern<DAS_CALL_METHOD(_vfmaddsub132ph_method_3806)>(*this, lib, "vfmaddsub132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub213ph_method_3808 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub213ph);
addExtern<DAS_CALL_METHOD(_vfmaddsub213ph_method_3808)>(*this, lib, "vfmaddsub213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub231ph_method_3810 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub231ph);
addExtern<DAS_CALL_METHOD(_vfmaddsub231ph_method_3810)>(*this, lib, "vfmaddsub231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132ph_method_3812 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132ph);
addExtern<DAS_CALL_METHOD(_vfmsub132ph_method_3812)>(*this, lib, "vfmsub132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132sh_method_3814 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132sh);
addExtern<DAS_CALL_METHOD(_vfmsub132sh_method_3814)>(*this, lib, "vfmsub132sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213ph_method_3816 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213ph);
addExtern<DAS_CALL_METHOD(_vfmsub213ph_method_3816)>(*this, lib, "vfmsub213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213sh_method_3818 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213sh);
addExtern<DAS_CALL_METHOD(_vfmsub213sh_method_3818)>(*this, lib, "vfmsub213sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231ph_method_3820 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231ph);
addExtern<DAS_CALL_METHOD(_vfmsub231ph_method_3820)>(*this, lib, "vfmsub231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231sh_method_3822 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231sh);
addExtern<DAS_CALL_METHOD(_vfmsub231sh_method_3822)>(*this, lib, "vfmsub231sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd132ph_method_3824 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd132ph);
addExtern<DAS_CALL_METHOD(_vfmsubadd132ph_method_3824)>(*this, lib, "vfmsubadd132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd213ph_method_3826 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd213ph);
addExtern<DAS_CALL_METHOD(_vfmsubadd213ph_method_3826)>(*this, lib, "vfmsubadd213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd231ph_method_3828 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd231ph);
addExtern<DAS_CALL_METHOD(_vfmsubadd231ph_method_3828)>(*this, lib, "vfmsubadd231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmulcph_method_3830 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmulcph);
addExtern<DAS_CALL_METHOD(_vfmulcph_method_3830)>(*this, lib, "vfmulcph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmulcph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132ph_method_3832 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132ph);
addExtern<DAS_CALL_METHOD(_vfnmadd132ph_method_3832)>(*this, lib, "vfnmadd132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132sh_method_3834 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132sh);
addExtern<DAS_CALL_METHOD(_vfnmadd132sh_method_3834)>(*this, lib, "vfnmadd132sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213ph_method_3836 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213ph);
addExtern<DAS_CALL_METHOD(_vfnmadd213ph_method_3836)>(*this, lib, "vfnmadd213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213sh_method_3838 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213sh);
addExtern<DAS_CALL_METHOD(_vfnmadd213sh_method_3838)>(*this, lib, "vfnmadd213sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231ph_method_3840 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231ph);
addExtern<DAS_CALL_METHOD(_vfnmadd231ph_method_3840)>(*this, lib, "vfnmadd231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231sh_method_3842 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231sh);
addExtern<DAS_CALL_METHOD(_vfnmadd231sh_method_3842)>(*this, lib, "vfnmadd231sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132ph_method_3844 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132ph);
addExtern<DAS_CALL_METHOD(_vfnmsub132ph_method_3844)>(*this, lib, "vfnmsub132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132sh_method_3846 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132sh);
addExtern<DAS_CALL_METHOD(_vfnmsub132sh_method_3846)>(*this, lib, "vfnmsub132sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213ph_method_3848 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213ph);
addExtern<DAS_CALL_METHOD(_vfnmsub213ph_method_3848)>(*this, lib, "vfnmsub213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213sh_method_3850 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213sh);
addExtern<DAS_CALL_METHOD(_vfnmsub213sh_method_3850)>(*this, lib, "vfnmsub213sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231ph_method_3852 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231ph);
addExtern<DAS_CALL_METHOD(_vfnmsub231ph_method_3852)>(*this, lib, "vfnmsub231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231sh_method_3854 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231sh);
addExtern<DAS_CALL_METHOD(_vfnmsub231sh_method_3854)>(*this, lib, "vfnmsub231sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclasspd_method_3856 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclasspd);
addExtern<DAS_CALL_METHOD(_vfpclasspd_method_3856)>(*this, lib, "vfpclasspd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclasspd))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclassph_method_3858 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclassph);
addExtern<DAS_CALL_METHOD(_vfpclassph_method_3858)>(*this, lib, "vfpclassph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclassph))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclassps_method_3860 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclassps);
addExtern<DAS_CALL_METHOD(_vfpclassps_method_3860)>(*this, lib, "vfpclassps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclassps))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclasssd_method_3862 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclasssd);
addExtern<DAS_CALL_METHOD(_vfpclasssd_method_3862)>(*this, lib, "vfpclasssd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclasssd))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclasssh_method_3864 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclasssh);
addExtern<DAS_CALL_METHOD(_vfpclasssh_method_3864)>(*this, lib, "vfpclasssh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclasssh))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclassss_method_3866 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclassss);
addExtern<DAS_CALL_METHOD(_vfpclassss_method_3866)>(*this, lib, "vfpclassss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclassss))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherdpd_method_3868 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdpd>;
addExtern<DAS_CALL_METHOD(_vgatherdpd_method_3868)>(*this, lib, "vgatherdpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdpd>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherdps_method_3870 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdps>;
addExtern<DAS_CALL_METHOD(_vgatherdps_method_3870)>(*this, lib, "vgatherdps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdps>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf0dpd_method_3872 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf0dpd);
addExtern<DAS_CALL_METHOD(_vgatherpf0dpd_method_3872)>(*this, lib, "vgatherpf0dpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf0dpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf0dps_method_3874 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf0dps);
addExtern<DAS_CALL_METHOD(_vgatherpf0dps_method_3874)>(*this, lib, "vgatherpf0dps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf0dps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf0qpd_method_3876 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf0qpd);
addExtern<DAS_CALL_METHOD(_vgatherpf0qpd_method_3876)>(*this, lib, "vgatherpf0qpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf0qpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf0qps_method_3878 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf0qps);
addExtern<DAS_CALL_METHOD(_vgatherpf0qps_method_3878)>(*this, lib, "vgatherpf0qps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf0qps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf1dpd_method_3880 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf1dpd);
addExtern<DAS_CALL_METHOD(_vgatherpf1dpd_method_3880)>(*this, lib, "vgatherpf1dpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf1dpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf1dps_method_3882 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf1dps);
addExtern<DAS_CALL_METHOD(_vgatherpf1dps_method_3882)>(*this, lib, "vgatherpf1dps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf1dps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf1qpd_method_3884 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf1qpd);
addExtern<DAS_CALL_METHOD(_vgatherpf1qpd_method_3884)>(*this, lib, "vgatherpf1qpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf1qpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf1qps_method_3886 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf1qps);
addExtern<DAS_CALL_METHOD(_vgatherpf1qps_method_3886)>(*this, lib, "vgatherpf1qps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf1qps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherqpd_method_3888 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqpd>;
addExtern<DAS_CALL_METHOD(_vgatherqpd_method_3888)>(*this, lib, "vgatherqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqpd>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherqps_method_3890 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqps>;
addExtern<DAS_CALL_METHOD(_vgatherqps_method_3890)>(*this, lib, "vgatherqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqps>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexppd_method_3892 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexppd);
addExtern<DAS_CALL_METHOD(_vgetexppd_method_3892)>(*this, lib, "vgetexppd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexppd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexpph_method_3894 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexpph);
addExtern<DAS_CALL_METHOD(_vgetexpph_method_3894)>(*this, lib, "vgetexpph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexpph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexpps_method_3896 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexpps);
addExtern<DAS_CALL_METHOD(_vgetexpps_method_3896)>(*this, lib, "vgetexpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexpps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexpsd_method_3898 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexpsd);
addExtern<DAS_CALL_METHOD(_vgetexpsd_method_3898)>(*this, lib, "vgetexpsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexpsd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexpsh_method_3900 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexpsh);
addExtern<DAS_CALL_METHOD(_vgetexpsh_method_3900)>(*this, lib, "vgetexpsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexpsh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexpss_method_3902 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexpss);
addExtern<DAS_CALL_METHOD(_vgetexpss_method_3902)>(*this, lib, "vgetexpss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexpss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantpd_method_3904 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantpd);
addExtern<DAS_CALL_METHOD(_vgetmantpd_method_3904)>(*this, lib, "vgetmantpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantpd))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantph_method_3906 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantph);
addExtern<DAS_CALL_METHOD(_vgetmantph_method_3906)>(*this, lib, "vgetmantph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantph))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantps_method_3908 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantps);
addExtern<DAS_CALL_METHOD(_vgetmantps_method_3908)>(*this, lib, "vgetmantps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantps))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantsd_method_3910 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantsd);
addExtern<DAS_CALL_METHOD(_vgetmantsd_method_3910)>(*this, lib, "vgetmantsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantsd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantsh_method_3912 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantsh);
addExtern<DAS_CALL_METHOD(_vgetmantsh_method_3912)>(*this, lib, "vgetmantsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantsh))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantss_method_3914 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantss);
addExtern<DAS_CALL_METHOD(_vgetmantss_method_3914)>(*this, lib, "vgetmantss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantss))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertf32x4_method_3916 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertf32x4);
addExtern<DAS_CALL_METHOD(_vinsertf32x4_method_3916)>(*this, lib, "vinsertf32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertf32x4))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertf32x8_method_3918 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertf32x8);
addExtern<DAS_CALL_METHOD(_vinsertf32x8_method_3918)>(*this, lib, "vinsertf32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertf32x8))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertf64x2_method_3920 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertf64x2);
addExtern<DAS_CALL_METHOD(_vinsertf64x2_method_3920)>(*this, lib, "vinsertf64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertf64x2))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertf64x4_method_3922 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertf64x4);
addExtern<DAS_CALL_METHOD(_vinsertf64x4_method_3922)>(*this, lib, "vinsertf64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertf64x4))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinserti32x4_method_3924 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinserti32x4);
addExtern<DAS_CALL_METHOD(_vinserti32x4_method_3924)>(*this, lib, "vinserti32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinserti32x4))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinserti32x8_method_3926 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinserti32x8);
addExtern<DAS_CALL_METHOD(_vinserti32x8_method_3926)>(*this, lib, "vinserti32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinserti32x8))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinserti64x2_method_3928 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinserti64x2);
addExtern<DAS_CALL_METHOD(_vinserti64x2_method_3928)>(*this, lib, "vinserti64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinserti64x2))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinserti64x4_method_3930 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinserti64x4);
addExtern<DAS_CALL_METHOD(_vinserti64x4_method_3930)>(*this, lib, "vinserti64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinserti64x4))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxph_method_3932 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxph);
addExtern<DAS_CALL_METHOD(_vmaxph_method_3932)>(*this, lib, "vmaxph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxsh_method_3934 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxsh);
addExtern<DAS_CALL_METHOD(_vmaxsh_method_3934)>(*this, lib, "vmaxsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxsh))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminph_method_3936 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminph);
addExtern<DAS_CALL_METHOD(_vminph_method_3936)>(*this, lib, "vminph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminsh_method_3938 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminsh);
addExtern<DAS_CALL_METHOD(_vminsh_method_3938)>(*this, lib, "vminsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminsh))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa32_method_3940 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa32>;
addExtern<DAS_CALL_METHOD(_vmovdqa32_method_3940)>(*this, lib, "vmovdqa32",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa32>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa32_method_3942 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa32>;
addExtern<DAS_CALL_METHOD(_vmovdqa32_method_3942)>(*this, lib, "vmovdqa32",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa32>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa64_method_3944 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa64>;
addExtern<DAS_CALL_METHOD(_vmovdqa64_method_3944)>(*this, lib, "vmovdqa64",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa64>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa64_method_3946 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa64>;
addExtern<DAS_CALL_METHOD(_vmovdqa64_method_3946)>(*this, lib, "vmovdqa64",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa64>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu16_method_3948 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu16>;
addExtern<DAS_CALL_METHOD(_vmovdqu16_method_3948)>(*this, lib, "vmovdqu16",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu16>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu16_method_3950 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu16>;
addExtern<DAS_CALL_METHOD(_vmovdqu16_method_3950)>(*this, lib, "vmovdqu16",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu16>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu32_method_3952 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu32>;
addExtern<DAS_CALL_METHOD(_vmovdqu32_method_3952)>(*this, lib, "vmovdqu32",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu32>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu32_method_3954 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu32>;
addExtern<DAS_CALL_METHOD(_vmovdqu32_method_3954)>(*this, lib, "vmovdqu32",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu32>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu64_method_3956 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu64>;
addExtern<DAS_CALL_METHOD(_vmovdqu64_method_3956)>(*this, lib, "vmovdqu64",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu64>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu64_method_3958 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu64>;
addExtern<DAS_CALL_METHOD(_vmovdqu64_method_3958)>(*this, lib, "vmovdqu64",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu64>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu8_method_3960 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu8>;
addExtern<DAS_CALL_METHOD(_vmovdqu8_method_3960)>(*this, lib, "vmovdqu8",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu8>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu8_method_3962 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu8>;
addExtern<DAS_CALL_METHOD(_vmovdqu8_method_3962)>(*this, lib, "vmovdqu8",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu8>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsh_method_3964 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh>;
addExtern<DAS_CALL_METHOD(_vmovsh_method_3964)>(*this, lib, "vmovsh",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsh_method_3966 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsh>;
addExtern<DAS_CALL_METHOD(_vmovsh_method_3966)>(*this, lib, "vmovsh",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsh>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsh_method_3968 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh>;
addExtern<DAS_CALL_METHOD(_vmovsh_method_3968)>(*this, lib, "vmovsh",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh>::invoke")
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovw_method_3970 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw>;
addExtern<DAS_CALL_METHOD(_vmovw_method_3970)>(*this, lib, "vmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovw_method_3972 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw>;
addExtern<DAS_CALL_METHOD(_vmovw_method_3972)>(*this, lib, "vmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw>::invoke")
	->args({"self","r","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovw_method_3974 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovw>;
addExtern<DAS_CALL_METHOD(_vmovw_method_3974)>(*this, lib, "vmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovw>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulph_method_3976 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulph);
addExtern<DAS_CALL_METHOD(_vmulph_method_3976)>(*this, lib, "vmulph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulsh_method_3978 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulsh);
addExtern<DAS_CALL_METHOD(_vmulsh_method_3978)>(*this, lib, "vmulsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulsh))
	->args({"self","xmm","op1","op2"})
;
#endif

#endif
#endif
}
}
