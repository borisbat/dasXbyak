
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
void Module_Xbyak::initFunctions_10() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _shl_method_1980 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::shl>;
addExtern<DAS_CALL_METHOD(_shl_method_1980)>(*this, lib, "shl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::shl>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shld_method_1982 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shld>;
addExtern<DAS_CALL_METHOD(_shld_method_1982)>(*this, lib, "shld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shld>::invoke")
	->args({"self","op","reg","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shld_method_1984 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::shld>;
addExtern<DAS_CALL_METHOD(_shld_method_1984)>(*this, lib, "shld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::shld>::invoke")
	->args({"self","op","reg","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shlx_method_1986 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::shlx);
addExtern<DAS_CALL_METHOD(_shlx_method_1986)>(*this, lib, "shlx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::shlx))
	->args({"self","r1","op","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shr_method_1988 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shr>;
addExtern<DAS_CALL_METHOD(_shr_method_1988)>(*this, lib, "shr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shr>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shr_method_1990 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::shr>;
addExtern<DAS_CALL_METHOD(_shr_method_1990)>(*this, lib, "shr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::shr>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shrd_method_1992 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shrd>;
addExtern<DAS_CALL_METHOD(_shrd_method_1992)>(*this, lib, "shrd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shrd>::invoke")
	->args({"self","op","reg","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shrd_method_1994 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::shrd>;
addExtern<DAS_CALL_METHOD(_shrd_method_1994)>(*this, lib, "shrd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::shrd>::invoke")
	->args({"self","op","reg","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shrx_method_1996 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::shrx);
addExtern<DAS_CALL_METHOD(_shrx_method_1996)>(*this, lib, "shrx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::shrx))
	->args({"self","r1","op","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shufpd_method_1998 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::shufpd);
addExtern<DAS_CALL_METHOD(_shufpd_method_1998)>(*this, lib, "shufpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::shufpd))
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shufps_method_2000 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::shufps);
addExtern<DAS_CALL_METHOD(_shufps_method_2000)>(*this, lib, "shufps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::shufps))
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sqrtpd_method_2002 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sqrtpd);
addExtern<DAS_CALL_METHOD(_sqrtpd_method_2002)>(*this, lib, "sqrtpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sqrtpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sqrtps_method_2004 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sqrtps);
addExtern<DAS_CALL_METHOD(_sqrtps_method_2004)>(*this, lib, "sqrtps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sqrtps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sqrtsd_method_2006 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sqrtsd);
addExtern<DAS_CALL_METHOD(_sqrtsd_method_2006)>(*this, lib, "sqrtsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sqrtsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sqrtss_method_2008 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sqrtss);
addExtern<DAS_CALL_METHOD(_sqrtss_method_2008)>(*this, lib, "sqrtss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sqrtss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stac_method_2010 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stac);
addExtern<DAS_CALL_METHOD(_stac_method_2010)>(*this, lib, "stac",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stac))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stc_method_2012 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stc);
addExtern<DAS_CALL_METHOD(_stc_method_2012)>(*this, lib, "stc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _std_method_2014 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::std);
addExtern<DAS_CALL_METHOD(_std_method_2014)>(*this, lib, "std",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::std))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sti_method_2016 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sti);
addExtern<DAS_CALL_METHOD(_sti_method_2016)>(*this, lib, "sti",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sti))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stmxcsr_method_2018 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stmxcsr);
addExtern<DAS_CALL_METHOD(_stmxcsr_method_2018)>(*this, lib, "stmxcsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stmxcsr))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stosb_method_2020 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stosb);
addExtern<DAS_CALL_METHOD(_stosb_method_2020)>(*this, lib, "stosb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stosb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stosd_method_2022 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stosd);
addExtern<DAS_CALL_METHOD(_stosd_method_2022)>(*this, lib, "stosd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stosd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stosw_method_2024 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stosw);
addExtern<DAS_CALL_METHOD(_stosw_method_2024)>(*this, lib, "stosw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stosw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sub_method_2026 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::sub>;
addExtern<DAS_CALL_METHOD(_sub_method_2026)>(*this, lib, "sub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::sub>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sub_method_2028 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::sub>;
addExtern<DAS_CALL_METHOD(_sub_method_2028)>(*this, lib, "sub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::sub>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _subpd_method_2030 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::subpd);
addExtern<DAS_CALL_METHOD(_subpd_method_2030)>(*this, lib, "subpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::subpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _subps_method_2032 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::subps);
addExtern<DAS_CALL_METHOD(_subps_method_2032)>(*this, lib, "subps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::subps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _subsd_method_2034 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::subsd);
addExtern<DAS_CALL_METHOD(_subsd_method_2034)>(*this, lib, "subsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::subsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _subss_method_2036 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::subss);
addExtern<DAS_CALL_METHOD(_subss_method_2036)>(*this, lib, "subss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::subss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sysenter_method_2038 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sysenter);
addExtern<DAS_CALL_METHOD(_sysenter_method_2038)>(*this, lib, "sysenter",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sysenter))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sysexit_method_2040 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sysexit);
addExtern<DAS_CALL_METHOD(_sysexit_method_2040)>(*this, lib, "sysexit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sysexit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tzcnt_method_2042 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tzcnt);
addExtern<DAS_CALL_METHOD(_tzcnt_method_2042)>(*this, lib, "tzcnt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tzcnt))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ucomisd_method_2044 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ucomisd);
addExtern<DAS_CALL_METHOD(_ucomisd_method_2044)>(*this, lib, "ucomisd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ucomisd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ucomiss_method_2046 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ucomiss);
addExtern<DAS_CALL_METHOD(_ucomiss_method_2046)>(*this, lib, "ucomiss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ucomiss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ud2_method_2048 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ud2);
addExtern<DAS_CALL_METHOD(_ud2_method_2048)>(*this, lib, "ud2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ud2))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _unpckhpd_method_2050 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::unpckhpd);
addExtern<DAS_CALL_METHOD(_unpckhpd_method_2050)>(*this, lib, "unpckhpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::unpckhpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _unpckhps_method_2052 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::unpckhps);
addExtern<DAS_CALL_METHOD(_unpckhps_method_2052)>(*this, lib, "unpckhps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::unpckhps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _unpcklpd_method_2054 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::unpcklpd);
addExtern<DAS_CALL_METHOD(_unpcklpd_method_2054)>(*this, lib, "unpcklpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::unpcklpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _unpcklps_method_2056 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::unpcklps);
addExtern<DAS_CALL_METHOD(_unpcklps_method_2056)>(*this, lib, "unpcklps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::unpcklps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddpd_method_2058 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddpd);
addExtern<DAS_CALL_METHOD(_vaddpd_method_2058)>(*this, lib, "vaddpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddps_method_2060 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddps);
addExtern<DAS_CALL_METHOD(_vaddps_method_2060)>(*this, lib, "vaddps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddsd_method_2062 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddsd);
addExtern<DAS_CALL_METHOD(_vaddsd_method_2062)>(*this, lib, "vaddsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddss_method_2064 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddss);
addExtern<DAS_CALL_METHOD(_vaddss_method_2064)>(*this, lib, "vaddss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddsubpd_method_2066 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddsubpd);
addExtern<DAS_CALL_METHOD(_vaddsubpd_method_2066)>(*this, lib, "vaddsubpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddsubpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddsubps_method_2068 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddsubps);
addExtern<DAS_CALL_METHOD(_vaddsubps_method_2068)>(*this, lib, "vaddsubps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddsubps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaesdec_method_2070 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaesdec);
addExtern<DAS_CALL_METHOD(_vaesdec_method_2070)>(*this, lib, "vaesdec",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaesdec))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaesdeclast_method_2072 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaesdeclast);
addExtern<DAS_CALL_METHOD(_vaesdeclast_method_2072)>(*this, lib, "vaesdeclast",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaesdeclast))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaesenc_method_2074 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaesenc);
addExtern<DAS_CALL_METHOD(_vaesenc_method_2074)>(*this, lib, "vaesenc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaesenc))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaesenclast_method_2076 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaesenclast);
addExtern<DAS_CALL_METHOD(_vaesenclast_method_2076)>(*this, lib, "vaesenclast",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaesenclast))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaesimc_method_2078 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaesimc);
addExtern<DAS_CALL_METHOD(_vaesimc_method_2078)>(*this, lib, "vaesimc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaesimc))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaeskeygenassist_method_2080 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaeskeygenassist);
addExtern<DAS_CALL_METHOD(_vaeskeygenassist_method_2080)>(*this, lib, "vaeskeygenassist",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaeskeygenassist))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vandnpd_method_2082 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vandnpd);
addExtern<DAS_CALL_METHOD(_vandnpd_method_2082)>(*this, lib, "vandnpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vandnpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vandnps_method_2084 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vandnps);
addExtern<DAS_CALL_METHOD(_vandnps_method_2084)>(*this, lib, "vandnps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vandnps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vandpd_method_2086 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vandpd);
addExtern<DAS_CALL_METHOD(_vandpd_method_2086)>(*this, lib, "vandpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vandpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vandps_method_2088 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vandps);
addExtern<DAS_CALL_METHOD(_vandps_method_2088)>(*this, lib, "vandps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vandps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendpd_method_2090 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendpd);
addExtern<DAS_CALL_METHOD(_vblendpd_method_2090)>(*this, lib, "vblendpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendpd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendps_method_2092 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendps);
addExtern<DAS_CALL_METHOD(_vblendps_method_2092)>(*this, lib, "vblendps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendvpd_method_2094 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendvpd);
addExtern<DAS_CALL_METHOD(_vblendvpd_method_2094)>(*this, lib, "vblendvpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendvpd))
	->args({"self","x1","x2","op","x4"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendvps_method_2096 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendvps);
addExtern<DAS_CALL_METHOD(_vblendvps_method_2096)>(*this, lib, "vblendvps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendvps))
	->args({"self","x1","x2","op","x4"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf128_method_2098 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf128);
addExtern<DAS_CALL_METHOD(_vbroadcastf128_method_2098)>(*this, lib, "vbroadcastf128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf128))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti128_method_2100 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti128);
addExtern<DAS_CALL_METHOD(_vbroadcasti128_method_2100)>(*this, lib, "vbroadcasti128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti128))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastsd_method_2102 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastsd);
addExtern<DAS_CALL_METHOD(_vbroadcastsd_method_2102)>(*this, lib, "vbroadcastsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastsd))
	->args({"self","y","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastss_method_2104 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastss);
addExtern<DAS_CALL_METHOD(_vbroadcastss_method_2104)>(*this, lib, "vbroadcastss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ospd_method_2106 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ospd_method_2106)>(*this, lib, "vcmpeq_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_osps_method_2108 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_osps_method_2108)>(*this, lib, "vcmpeq_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ossd_method_2110 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ossd_method_2110)>(*this, lib, "vcmpeq_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_osss_method_2112 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_osss_method_2112)>(*this, lib, "vcmpeq_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqpd_method_2114 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqpd_method_2114)>(*this, lib, "vcmpeq_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqps_method_2116 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqps_method_2116)>(*this, lib, "vcmpeq_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqsd_method_2118 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqsd_method_2118)>(*this, lib, "vcmpeq_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqss_method_2120 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqss_method_2120)>(*this, lib, "vcmpeq_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uspd_method_2122 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uspd_method_2122)>(*this, lib, "vcmpeq_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_usps_method_2124 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_usps_method_2124)>(*this, lib, "vcmpeq_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ussd_method_2126 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ussd_method_2126)>(*this, lib, "vcmpeq_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_usss_method_2128 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_usss_method_2128)>(*this, lib, "vcmpeq_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqpd_method_2130 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd>;
addExtern<DAS_CALL_METHOD(_vcmpeqpd_method_2130)>(*this, lib, "vcmpeqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqps_method_2132 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps>;
addExtern<DAS_CALL_METHOD(_vcmpeqps_method_2132)>(*this, lib, "vcmpeqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqsd_method_2134 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd>;
addExtern<DAS_CALL_METHOD(_vcmpeqsd_method_2134)>(*this, lib, "vcmpeqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqss_method_2136 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss>;
addExtern<DAS_CALL_METHOD(_vcmpeqss_method_2136)>(*this, lib, "vcmpeqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_ospd_method_2138 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_ospd_method_2138)>(*this, lib, "vcmpfalse_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_osps_method_2140 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_osps_method_2140)>(*this, lib, "vcmpfalse_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_ossd_method_2142 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_ossd_method_2142)>(*this, lib, "vcmpfalse_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_osss_method_2144 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_osss_method_2144)>(*this, lib, "vcmpfalse_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsepd_method_2146 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd>;
addExtern<DAS_CALL_METHOD(_vcmpfalsepd_method_2146)>(*this, lib, "vcmpfalsepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalseps_method_2148 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps>;
addExtern<DAS_CALL_METHOD(_vcmpfalseps_method_2148)>(*this, lib, "vcmpfalseps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsesd_method_2150 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd>;
addExtern<DAS_CALL_METHOD(_vcmpfalsesd_method_2150)>(*this, lib, "vcmpfalsesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsess_method_2152 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess>;
addExtern<DAS_CALL_METHOD(_vcmpfalsess_method_2152)>(*this, lib, "vcmpfalsess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqpd_method_2154 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqpd_method_2154)>(*this, lib, "vcmpge_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqps_method_2156 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqps_method_2156)>(*this, lib, "vcmpge_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqsd_method_2158 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqsd_method_2158)>(*this, lib, "vcmpge_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqss_method_2160 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqss_method_2160)>(*this, lib, "vcmpge_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgepd_method_2162 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd>;
addExtern<DAS_CALL_METHOD(_vcmpgepd_method_2162)>(*this, lib, "vcmpgepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgeps_method_2164 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps>;
addExtern<DAS_CALL_METHOD(_vcmpgeps_method_2164)>(*this, lib, "vcmpgeps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgesd_method_2166 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd>;
addExtern<DAS_CALL_METHOD(_vcmpgesd_method_2166)>(*this, lib, "vcmpgesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgess_method_2168 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess>;
addExtern<DAS_CALL_METHOD(_vcmpgess_method_2168)>(*this, lib, "vcmpgess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqpd_method_2170 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqpd_method_2170)>(*this, lib, "vcmpgt_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqps_method_2172 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqps_method_2172)>(*this, lib, "vcmpgt_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqsd_method_2174 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqsd_method_2174)>(*this, lib, "vcmpgt_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqss_method_2176 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqss_method_2176)>(*this, lib, "vcmpgt_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtpd_method_2178 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd>;
addExtern<DAS_CALL_METHOD(_vcmpgtpd_method_2178)>(*this, lib, "vcmpgtpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif

#endif
#endif
}
}
