
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
void Module_Xbyak::initFunctions_9() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _psrlw_method_1780 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlw>;
addExtern<DAS_CALL_METHOD(_psrlw_method_1780)>(*this, lib, "psrlw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlw>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrlw_method_1782 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrlw>;
addExtern<DAS_CALL_METHOD(_psrlw_method_1782)>(*this, lib, "psrlw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrlw>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubb_method_1784 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubb);
addExtern<DAS_CALL_METHOD(_psubb_method_1784)>(*this, lib, "psubb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubd_method_1786 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubd);
addExtern<DAS_CALL_METHOD(_psubd_method_1786)>(*this, lib, "psubd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubq_method_1788 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubq);
addExtern<DAS_CALL_METHOD(_psubq_method_1788)>(*this, lib, "psubq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubsb_method_1790 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubsb);
addExtern<DAS_CALL_METHOD(_psubsb_method_1790)>(*this, lib, "psubsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubsb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubsw_method_1792 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubsw);
addExtern<DAS_CALL_METHOD(_psubsw_method_1792)>(*this, lib, "psubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubusb_method_1794 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubusb);
addExtern<DAS_CALL_METHOD(_psubusb_method_1794)>(*this, lib, "psubusb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubusb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubusw_method_1796 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubusw);
addExtern<DAS_CALL_METHOD(_psubusw_method_1796)>(*this, lib, "psubusw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubusw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubw_method_1798 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubw);
addExtern<DAS_CALL_METHOD(_psubw_method_1798)>(*this, lib, "psubw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ptest_method_1800 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ptest);
addExtern<DAS_CALL_METHOD(_ptest_method_1800)>(*this, lib, "ptest",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ptest))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhbw_method_1802 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhbw);
addExtern<DAS_CALL_METHOD(_punpckhbw_method_1802)>(*this, lib, "punpckhbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhbw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhdq_method_1804 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhdq);
addExtern<DAS_CALL_METHOD(_punpckhdq_method_1804)>(*this, lib, "punpckhdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhdq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhqdq_method_1806 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhqdq);
addExtern<DAS_CALL_METHOD(_punpckhqdq_method_1806)>(*this, lib, "punpckhqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhqdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhwd_method_1808 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhwd);
addExtern<DAS_CALL_METHOD(_punpckhwd_method_1808)>(*this, lib, "punpckhwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhwd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpcklbw_method_1810 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpcklbw);
addExtern<DAS_CALL_METHOD(_punpcklbw_method_1810)>(*this, lib, "punpcklbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpcklbw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckldq_method_1812 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckldq);
addExtern<DAS_CALL_METHOD(_punpckldq_method_1812)>(*this, lib, "punpckldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckldq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpcklqdq_method_1814 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpcklqdq);
addExtern<DAS_CALL_METHOD(_punpcklqdq_method_1814)>(*this, lib, "punpcklqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpcklqdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpcklwd_method_1816 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpcklwd);
addExtern<DAS_CALL_METHOD(_punpcklwd_method_1816)>(*this, lib, "punpcklwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpcklwd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pushf_method_1818 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pushf);
addExtern<DAS_CALL_METHOD(_pushf_method_1818)>(*this, lib, "pushf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pushf))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pxor_method_1820 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pxor);
addExtern<DAS_CALL_METHOD(_pxor_method_1820)>(*this, lib, "pxor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pxor))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcl_method_1822 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcl>;
addExtern<DAS_CALL_METHOD(_rcl_method_1822)>(*this, lib, "rcl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcl>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcl_method_1824 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcl>;
addExtern<DAS_CALL_METHOD(_rcl_method_1824)>(*this, lib, "rcl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcl>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcpps_method_1826 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rcpps);
addExtern<DAS_CALL_METHOD(_rcpps_method_1826)>(*this, lib, "rcpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rcpps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcpss_method_1828 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rcpss);
addExtern<DAS_CALL_METHOD(_rcpss_method_1828)>(*this, lib, "rcpss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rcpss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcr_method_1830 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcr>;
addExtern<DAS_CALL_METHOD(_rcr_method_1830)>(*this, lib, "rcr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcr>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcr_method_1832 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcr>;
addExtern<DAS_CALL_METHOD(_rcr_method_1832)>(*this, lib, "rcr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcr>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdmsr_method_1834 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdmsr);
addExtern<DAS_CALL_METHOD(_rdmsr_method_1834)>(*this, lib, "rdmsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdmsr))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdpmc_method_1836 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdpmc);
addExtern<DAS_CALL_METHOD(_rdpmc_method_1836)>(*this, lib, "rdpmc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdpmc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdrand_method_1838 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdrand);
addExtern<DAS_CALL_METHOD(_rdrand_method_1838)>(*this, lib, "rdrand",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdrand))
	->args({"self","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdseed_method_1840 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdseed);
addExtern<DAS_CALL_METHOD(_rdseed_method_1840)>(*this, lib, "rdseed",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdseed))
	->args({"self","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdtsc_method_1842 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdtsc);
addExtern<DAS_CALL_METHOD(_rdtsc_method_1842)>(*this, lib, "rdtsc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdtsc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdtscp_method_1844 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdtscp);
addExtern<DAS_CALL_METHOD(_rdtscp_method_1844)>(*this, lib, "rdtscp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdtscp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rep_method_1846 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rep);
addExtern<DAS_CALL_METHOD(_rep_method_1846)>(*this, lib, "rep",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rep))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repe_method_1848 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repe);
addExtern<DAS_CALL_METHOD(_repe_method_1848)>(*this, lib, "repe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repe))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repne_method_1850 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repne);
addExtern<DAS_CALL_METHOD(_repne_method_1850)>(*this, lib, "repne",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repne))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repnz_method_1852 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repnz);
addExtern<DAS_CALL_METHOD(_repnz_method_1852)>(*this, lib, "repnz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repnz))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repz_method_1854 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repz);
addExtern<DAS_CALL_METHOD(_repz_method_1854)>(*this, lib, "repz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repz))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ret_method_1856 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ret);
addExtern<DAS_CALL_METHOD(_ret_method_1856)>(*this, lib, "ret",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ret))
	->args({"self","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rol_method_1858 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rol>;
addExtern<DAS_CALL_METHOD(_rol_method_1858)>(*this, lib, "rol",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rol>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rol_method_1860 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rol>;
addExtern<DAS_CALL_METHOD(_rol_method_1860)>(*this, lib, "rol",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rol>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ror_method_1862 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::ror>;
addExtern<DAS_CALL_METHOD(_ror_method_1862)>(*this, lib, "ror",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::ror>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ror_method_1864 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::ror>;
addExtern<DAS_CALL_METHOD(_ror_method_1864)>(*this, lib, "ror",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::ror>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rorx_method_1866 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rorx);
addExtern<DAS_CALL_METHOD(_rorx_method_1866)>(*this, lib, "rorx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rorx))
	->args({"self","r","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundpd_method_1868 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundpd);
addExtern<DAS_CALL_METHOD(_roundpd_method_1868)>(*this, lib, "roundpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundpd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundps_method_1870 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundps);
addExtern<DAS_CALL_METHOD(_roundps_method_1870)>(*this, lib, "roundps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundps))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundsd_method_1872 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundsd);
addExtern<DAS_CALL_METHOD(_roundsd_method_1872)>(*this, lib, "roundsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundsd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundss_method_1874 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundss);
addExtern<DAS_CALL_METHOD(_roundss_method_1874)>(*this, lib, "roundss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundss))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rsqrtps_method_1876 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rsqrtps);
addExtern<DAS_CALL_METHOD(_rsqrtps_method_1876)>(*this, lib, "rsqrtps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rsqrtps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rsqrtss_method_1878 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rsqrtss);
addExtern<DAS_CALL_METHOD(_rsqrtss_method_1878)>(*this, lib, "rsqrtss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rsqrtss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sahf_method_1880 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sahf);
addExtern<DAS_CALL_METHOD(_sahf_method_1880)>(*this, lib, "sahf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sahf))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sal_method_1882 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sal>;
addExtern<DAS_CALL_METHOD(_sal_method_1882)>(*this, lib, "sal",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sal>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sal_method_1884 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sal>;
addExtern<DAS_CALL_METHOD(_sal_method_1884)>(*this, lib, "sal",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sal>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sar_method_1886 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sar>;
addExtern<DAS_CALL_METHOD(_sar_method_1886)>(*this, lib, "sar",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sar>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sar_method_1888 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sar>;
addExtern<DAS_CALL_METHOD(_sar_method_1888)>(*this, lib, "sar",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sar>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sarx_method_1890 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sarx);
addExtern<DAS_CALL_METHOD(_sarx_method_1890)>(*this, lib, "sarx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sarx))
	->args({"self","r1","op","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sbb_method_1892 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::sbb>;
addExtern<DAS_CALL_METHOD(_sbb_method_1892)>(*this, lib, "sbb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::sbb>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sbb_method_1894 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::sbb>;
addExtern<DAS_CALL_METHOD(_sbb_method_1894)>(*this, lib, "sbb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::sbb>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _scasb_method_1896 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::scasb);
addExtern<DAS_CALL_METHOD(_scasb_method_1896)>(*this, lib, "scasb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::scasb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _scasd_method_1898 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::scasd);
addExtern<DAS_CALL_METHOD(_scasd_method_1898)>(*this, lib, "scasd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::scasd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _scasw_method_1900 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::scasw);
addExtern<DAS_CALL_METHOD(_scasw_method_1900)>(*this, lib, "scasw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::scasw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _seta_method_1902 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::seta);
addExtern<DAS_CALL_METHOD(_seta_method_1902)>(*this, lib, "seta",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::seta))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setae_method_1904 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setae);
addExtern<DAS_CALL_METHOD(_setae_method_1904)>(*this, lib, "setae",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setae))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setb_method_1906 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setb);
addExtern<DAS_CALL_METHOD(_setb_method_1906)>(*this, lib, "setb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setb))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setbe_method_1908 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setbe);
addExtern<DAS_CALL_METHOD(_setbe_method_1908)>(*this, lib, "setbe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setbe))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setc_method_1910 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setc);
addExtern<DAS_CALL_METHOD(_setc_method_1910)>(*this, lib, "setc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setc))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sete_method_1912 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sete);
addExtern<DAS_CALL_METHOD(_sete_method_1912)>(*this, lib, "sete",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sete))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setg_method_1914 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setg);
addExtern<DAS_CALL_METHOD(_setg_method_1914)>(*this, lib, "setg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setg))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setge_method_1916 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setge);
addExtern<DAS_CALL_METHOD(_setge_method_1916)>(*this, lib, "setge",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setge))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setl_method_1918 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setl);
addExtern<DAS_CALL_METHOD(_setl_method_1918)>(*this, lib, "setl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setl))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setle_method_1920 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setle);
addExtern<DAS_CALL_METHOD(_setle_method_1920)>(*this, lib, "setle",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setle))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setna_method_1922 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setna);
addExtern<DAS_CALL_METHOD(_setna_method_1922)>(*this, lib, "setna",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setna))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnae_method_1924 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnae);
addExtern<DAS_CALL_METHOD(_setnae_method_1924)>(*this, lib, "setnae",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnae))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnb_method_1926 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnb);
addExtern<DAS_CALL_METHOD(_setnb_method_1926)>(*this, lib, "setnb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnb))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnbe_method_1928 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnbe);
addExtern<DAS_CALL_METHOD(_setnbe_method_1928)>(*this, lib, "setnbe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnbe))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnc_method_1930 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnc);
addExtern<DAS_CALL_METHOD(_setnc_method_1930)>(*this, lib, "setnc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnc))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setne_method_1932 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setne);
addExtern<DAS_CALL_METHOD(_setne_method_1932)>(*this, lib, "setne",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setne))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setng_method_1934 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setng);
addExtern<DAS_CALL_METHOD(_setng_method_1934)>(*this, lib, "setng",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setng))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnge_method_1936 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnge);
addExtern<DAS_CALL_METHOD(_setnge_method_1936)>(*this, lib, "setnge",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnge))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnl_method_1938 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnl);
addExtern<DAS_CALL_METHOD(_setnl_method_1938)>(*this, lib, "setnl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnl))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnle_method_1940 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnle);
addExtern<DAS_CALL_METHOD(_setnle_method_1940)>(*this, lib, "setnle",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnle))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setno_method_1942 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setno);
addExtern<DAS_CALL_METHOD(_setno_method_1942)>(*this, lib, "setno",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setno))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnp_method_1944 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnp);
addExtern<DAS_CALL_METHOD(_setnp_method_1944)>(*this, lib, "setnp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnp))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setns_method_1946 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setns);
addExtern<DAS_CALL_METHOD(_setns_method_1946)>(*this, lib, "setns",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setns))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnz_method_1948 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnz);
addExtern<DAS_CALL_METHOD(_setnz_method_1948)>(*this, lib, "setnz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnz))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _seto_method_1950 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::seto);
addExtern<DAS_CALL_METHOD(_seto_method_1950)>(*this, lib, "seto",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::seto))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setp_method_1952 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setp);
addExtern<DAS_CALL_METHOD(_setp_method_1952)>(*this, lib, "setp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setp))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setpe_method_1954 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setpe);
addExtern<DAS_CALL_METHOD(_setpe_method_1954)>(*this, lib, "setpe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setpe))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setpo_method_1956 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setpo);
addExtern<DAS_CALL_METHOD(_setpo_method_1956)>(*this, lib, "setpo",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setpo))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sets_method_1958 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sets);
addExtern<DAS_CALL_METHOD(_sets_method_1958)>(*this, lib, "sets",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sets))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setz_method_1960 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setz);
addExtern<DAS_CALL_METHOD(_setz_method_1960)>(*this, lib, "setz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setz))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sfence_method_1962 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sfence);
addExtern<DAS_CALL_METHOD(_sfence_method_1962)>(*this, lib, "sfence",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sfence))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1msg1_method_1964 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1msg1);
addExtern<DAS_CALL_METHOD(_sha1msg1_method_1964)>(*this, lib, "sha1msg1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1msg1))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1msg2_method_1966 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1msg2);
addExtern<DAS_CALL_METHOD(_sha1msg2_method_1966)>(*this, lib, "sha1msg2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1msg2))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1nexte_method_1968 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1nexte);
addExtern<DAS_CALL_METHOD(_sha1nexte_method_1968)>(*this, lib, "sha1nexte",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1nexte))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1rnds4_method_1970 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1rnds4);
addExtern<DAS_CALL_METHOD(_sha1rnds4_method_1970)>(*this, lib, "sha1rnds4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1rnds4))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha256msg1_method_1972 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha256msg1);
addExtern<DAS_CALL_METHOD(_sha256msg1_method_1972)>(*this, lib, "sha256msg1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha256msg1))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha256msg2_method_1974 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha256msg2);
addExtern<DAS_CALL_METHOD(_sha256msg2_method_1974)>(*this, lib, "sha256msg2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha256msg2))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha256rnds2_method_1976 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha256rnds2);
addExtern<DAS_CALL_METHOD(_sha256rnds2_method_1976)>(*this, lib, "sha256rnds2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha256rnds2))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shl_method_1978 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shl>;
addExtern<DAS_CALL_METHOD(_shl_method_1978)>(*this, lib, "shl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shl>::invoke")
	->args({"self","op","_cl"})
;
#endif

#endif
#endif
}
}
