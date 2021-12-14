
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
void Module_Xbyak::initFunctions_14() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _vpcmpistri_method_2780 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpistri);
addExtern<DAS_CALL_METHOD(_vpcmpistri_method_2780)>(*this, lib, "vpcmpistri",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpistri))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpistrm_method_2782 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpistrm);
addExtern<DAS_CALL_METHOD(_vpcmpistrm_method_2782)>(*this, lib, "vpcmpistrm",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpistrm))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpdpbusd_method_2784 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpdpbusd);
addExtern<DAS_CALL_METHOD(_vpdpbusd_method_2784)>(*this, lib, "vpdpbusd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpdpbusd))
	->args({"self","x1","x2","op","encoding"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpdpbusds_method_2786 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpdpbusds);
addExtern<DAS_CALL_METHOD(_vpdpbusds_method_2786)>(*this, lib, "vpdpbusds",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpdpbusds))
	->args({"self","x1","x2","op","encoding"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpdpwssd_method_2788 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpdpwssd);
addExtern<DAS_CALL_METHOD(_vpdpwssd_method_2788)>(*this, lib, "vpdpwssd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpdpwssd))
	->args({"self","x1","x2","op","encoding"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpdpwssds_method_2790 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpdpwssds);
addExtern<DAS_CALL_METHOD(_vpdpwssds_method_2790)>(*this, lib, "vpdpwssds",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpdpwssds))
	->args({"self","x1","x2","op","encoding"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vperm2f128_method_2792 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vperm2f128);
addExtern<DAS_CALL_METHOD(_vperm2f128_method_2792)>(*this, lib, "vperm2f128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vperm2f128))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vperm2i128_method_2794 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vperm2i128);
addExtern<DAS_CALL_METHOD(_vperm2i128_method_2794)>(*this, lib, "vperm2i128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vperm2i128))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermd_method_2796 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermd);
addExtern<DAS_CALL_METHOD(_vpermd_method_2796)>(*this, lib, "vpermd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermd))
	->args({"self","y1","y2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermilpd_method_2798 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilpd>;
addExtern<DAS_CALL_METHOD(_vpermilpd_method_2798)>(*this, lib, "vpermilpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermilpd_method_2800 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermilpd>;
addExtern<DAS_CALL_METHOD(_vpermilpd_method_2800)>(*this, lib, "vpermilpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermilpd>::invoke")
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermilps_method_2802 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilps>;
addExtern<DAS_CALL_METHOD(_vpermilps_method_2802)>(*this, lib, "vpermilps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermilps_method_2804 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermilps>;
addExtern<DAS_CALL_METHOD(_vpermilps_method_2804)>(*this, lib, "vpermilps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermilps>::invoke")
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermpd_method_2806 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermpd>;
addExtern<DAS_CALL_METHOD(_vpermpd_method_2806)>(*this, lib, "vpermpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermpd>::invoke")
	->args({"self","y","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermpd_method_2808 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Ymm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermpd>;
addExtern<DAS_CALL_METHOD(_vpermpd_method_2808)>(*this, lib, "vpermpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Ymm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermpd>::invoke")
	->args({"self","y1","y2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermps_method_2810 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermps);
addExtern<DAS_CALL_METHOD(_vpermps_method_2810)>(*this, lib, "vpermps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermps))
	->args({"self","y1","y2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermq_method_2812 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermq>;
addExtern<DAS_CALL_METHOD(_vpermq_method_2812)>(*this, lib, "vpermq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermq>::invoke")
	->args({"self","y","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermq_method_2814 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Ymm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermq>;
addExtern<DAS_CALL_METHOD(_vpermq_method_2814)>(*this, lib, "vpermq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Ymm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermq>::invoke")
	->args({"self","y1","y2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpextrb_method_2816 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpextrb);
addExtern<DAS_CALL_METHOD(_vpextrb_method_2816)>(*this, lib, "vpextrb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpextrb))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpextrd_method_2818 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpextrd);
addExtern<DAS_CALL_METHOD(_vpextrd_method_2818)>(*this, lib, "vpextrd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpextrd))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpextrq_method_2820 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpextrq);
addExtern<DAS_CALL_METHOD(_vpextrq_method_2820)>(*this, lib, "vpextrq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpextrq))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpextrw_method_2822 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpextrw);
addExtern<DAS_CALL_METHOD(_vpextrw_method_2822)>(*this, lib, "vpextrw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpextrw))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherdd_method_2824 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdd>;
addExtern<DAS_CALL_METHOD(_vpgatherdd_method_2824)>(*this, lib, "vpgatherdd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdd>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherdq_method_2826 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdq>;
addExtern<DAS_CALL_METHOD(_vpgatherdq_method_2826)>(*this, lib, "vpgatherdq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdq>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherqd_method_2828 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqd>;
addExtern<DAS_CALL_METHOD(_vpgatherqd_method_2828)>(*this, lib, "vpgatherqd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqd>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherqq_method_2830 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqq>;
addExtern<DAS_CALL_METHOD(_vpgatherqq_method_2830)>(*this, lib, "vpgatherqq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqq>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphaddd_method_2832 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphaddd);
addExtern<DAS_CALL_METHOD(_vphaddd_method_2832)>(*this, lib, "vphaddd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphaddd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphaddsw_method_2834 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphaddsw);
addExtern<DAS_CALL_METHOD(_vphaddsw_method_2834)>(*this, lib, "vphaddsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphaddsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphaddw_method_2836 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphaddw);
addExtern<DAS_CALL_METHOD(_vphaddw_method_2836)>(*this, lib, "vphaddw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphaddw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphminposuw_method_2838 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphminposuw);
addExtern<DAS_CALL_METHOD(_vphminposuw_method_2838)>(*this, lib, "vphminposuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphminposuw))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphsubd_method_2840 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphsubd);
addExtern<DAS_CALL_METHOD(_vphsubd_method_2840)>(*this, lib, "vphsubd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphsubd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphsubsw_method_2842 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphsubsw);
addExtern<DAS_CALL_METHOD(_vphsubsw_method_2842)>(*this, lib, "vphsubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphsubsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphsubw_method_2844 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphsubw);
addExtern<DAS_CALL_METHOD(_vphsubw_method_2844)>(*this, lib, "vphsubw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphsubw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpinsrb_method_2846 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpinsrb);
addExtern<DAS_CALL_METHOD(_vpinsrb_method_2846)>(*this, lib, "vpinsrb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpinsrb))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpinsrd_method_2848 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpinsrd);
addExtern<DAS_CALL_METHOD(_vpinsrd_method_2848)>(*this, lib, "vpinsrd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpinsrd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpinsrq_method_2850 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpinsrq);
addExtern<DAS_CALL_METHOD(_vpinsrq_method_2850)>(*this, lib, "vpinsrq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpinsrq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpinsrw_method_2852 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpinsrw);
addExtern<DAS_CALL_METHOD(_vpinsrw_method_2852)>(*this, lib, "vpinsrw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpinsrw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaddubsw_method_2854 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaddubsw);
addExtern<DAS_CALL_METHOD(_vpmaddubsw_method_2854)>(*this, lib, "vpmaddubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaddubsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaddwd_method_2856 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaddwd);
addExtern<DAS_CALL_METHOD(_vpmaddwd_method_2856)>(*this, lib, "vpmaddwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaddwd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaskmovd_method_2858 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovd>;
addExtern<DAS_CALL_METHOD(_vpmaskmovd_method_2858)>(*this, lib, "vpmaskmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovd>::invoke")
	->args({"self","addr","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaskmovd_method_2860 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovd>;
addExtern<DAS_CALL_METHOD(_vpmaskmovd_method_2860)>(*this, lib, "vpmaskmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovd>::invoke")
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaskmovq_method_2862 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovq>;
addExtern<DAS_CALL_METHOD(_vpmaskmovq_method_2862)>(*this, lib, "vpmaskmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovq>::invoke")
	->args({"self","addr","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaskmovq_method_2864 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovq>;
addExtern<DAS_CALL_METHOD(_vpmaskmovq_method_2864)>(*this, lib, "vpmaskmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovq>::invoke")
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxsb_method_2866 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxsb);
addExtern<DAS_CALL_METHOD(_vpmaxsb_method_2866)>(*this, lib, "vpmaxsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxsb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxsd_method_2868 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxsd);
addExtern<DAS_CALL_METHOD(_vpmaxsd_method_2868)>(*this, lib, "vpmaxsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxsd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxsw_method_2870 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxsw);
addExtern<DAS_CALL_METHOD(_vpmaxsw_method_2870)>(*this, lib, "vpmaxsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxub_method_2872 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxub);
addExtern<DAS_CALL_METHOD(_vpmaxub_method_2872)>(*this, lib, "vpmaxub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxub))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxud_method_2874 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxud);
addExtern<DAS_CALL_METHOD(_vpmaxud_method_2874)>(*this, lib, "vpmaxud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxud))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxuw_method_2876 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxuw);
addExtern<DAS_CALL_METHOD(_vpmaxuw_method_2876)>(*this, lib, "vpmaxuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxuw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminsb_method_2878 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminsb);
addExtern<DAS_CALL_METHOD(_vpminsb_method_2878)>(*this, lib, "vpminsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminsb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminsd_method_2880 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminsd);
addExtern<DAS_CALL_METHOD(_vpminsd_method_2880)>(*this, lib, "vpminsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminsd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminsw_method_2882 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminsw);
addExtern<DAS_CALL_METHOD(_vpminsw_method_2882)>(*this, lib, "vpminsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminub_method_2884 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminub);
addExtern<DAS_CALL_METHOD(_vpminub_method_2884)>(*this, lib, "vpminub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminub))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminud_method_2886 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminud);
addExtern<DAS_CALL_METHOD(_vpminud_method_2886)>(*this, lib, "vpminud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminud))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminuw_method_2888 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminuw);
addExtern<DAS_CALL_METHOD(_vpminuw_method_2888)>(*this, lib, "vpminuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminuw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovmskb_method_2890 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovmskb);
addExtern<DAS_CALL_METHOD(_vpmovmskb_method_2890)>(*this, lib, "vpmovmskb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovmskb))
	->args({"self","r","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxbd_method_2892 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxbd);
addExtern<DAS_CALL_METHOD(_vpmovsxbd_method_2892)>(*this, lib, "vpmovsxbd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxbd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxbq_method_2894 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxbq);
addExtern<DAS_CALL_METHOD(_vpmovsxbq_method_2894)>(*this, lib, "vpmovsxbq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxbq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxbw_method_2896 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxbw);
addExtern<DAS_CALL_METHOD(_vpmovsxbw_method_2896)>(*this, lib, "vpmovsxbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxbw))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxdq_method_2898 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxdq);
addExtern<DAS_CALL_METHOD(_vpmovsxdq_method_2898)>(*this, lib, "vpmovsxdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxdq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxwd_method_2900 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxwd);
addExtern<DAS_CALL_METHOD(_vpmovsxwd_method_2900)>(*this, lib, "vpmovsxwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxwd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxwq_method_2902 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxwq);
addExtern<DAS_CALL_METHOD(_vpmovsxwq_method_2902)>(*this, lib, "vpmovsxwq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxwq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxbd_method_2904 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxbd);
addExtern<DAS_CALL_METHOD(_vpmovzxbd_method_2904)>(*this, lib, "vpmovzxbd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxbd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxbq_method_2906 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxbq);
addExtern<DAS_CALL_METHOD(_vpmovzxbq_method_2906)>(*this, lib, "vpmovzxbq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxbq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxbw_method_2908 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxbw);
addExtern<DAS_CALL_METHOD(_vpmovzxbw_method_2908)>(*this, lib, "vpmovzxbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxbw))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxdq_method_2910 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxdq);
addExtern<DAS_CALL_METHOD(_vpmovzxdq_method_2910)>(*this, lib, "vpmovzxdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxdq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxwd_method_2912 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxwd);
addExtern<DAS_CALL_METHOD(_vpmovzxwd_method_2912)>(*this, lib, "vpmovzxwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxwd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxwq_method_2914 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxwq);
addExtern<DAS_CALL_METHOD(_vpmovzxwq_method_2914)>(*this, lib, "vpmovzxwq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxwq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmuldq_method_2916 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmuldq);
addExtern<DAS_CALL_METHOD(_vpmuldq_method_2916)>(*this, lib, "vpmuldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmuldq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmulhrsw_method_2918 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmulhrsw);
addExtern<DAS_CALL_METHOD(_vpmulhrsw_method_2918)>(*this, lib, "vpmulhrsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmulhrsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmulhuw_method_2920 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmulhuw);
addExtern<DAS_CALL_METHOD(_vpmulhuw_method_2920)>(*this, lib, "vpmulhuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmulhuw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmulhw_method_2922 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmulhw);
addExtern<DAS_CALL_METHOD(_vpmulhw_method_2922)>(*this, lib, "vpmulhw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmulhw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmulld_method_2924 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmulld);
addExtern<DAS_CALL_METHOD(_vpmulld_method_2924)>(*this, lib, "vpmulld",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmulld))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmullw_method_2926 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmullw);
addExtern<DAS_CALL_METHOD(_vpmullw_method_2926)>(*this, lib, "vpmullw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmullw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmuludq_method_2928 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmuludq);
addExtern<DAS_CALL_METHOD(_vpmuludq_method_2928)>(*this, lib, "vpmuludq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmuludq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpor_method_2930 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpor);
addExtern<DAS_CALL_METHOD(_vpor_method_2930)>(*this, lib, "vpor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpor))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsadbw_method_2932 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsadbw);
addExtern<DAS_CALL_METHOD(_vpsadbw_method_2932)>(*this, lib, "vpsadbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsadbw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshufb_method_2934 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshufb);
addExtern<DAS_CALL_METHOD(_vpshufb_method_2934)>(*this, lib, "vpshufb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshufb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshufd_method_2936 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshufd);
addExtern<DAS_CALL_METHOD(_vpshufd_method_2936)>(*this, lib, "vpshufd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshufd))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshufhw_method_2938 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshufhw);
addExtern<DAS_CALL_METHOD(_vpshufhw_method_2938)>(*this, lib, "vpshufhw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshufhw))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshuflw_method_2940 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshuflw);
addExtern<DAS_CALL_METHOD(_vpshuflw_method_2940)>(*this, lib, "vpshuflw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshuflw))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsignb_method_2942 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsignb);
addExtern<DAS_CALL_METHOD(_vpsignb_method_2942)>(*this, lib, "vpsignb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsignb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsignd_method_2944 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsignd);
addExtern<DAS_CALL_METHOD(_vpsignd_method_2944)>(*this, lib, "vpsignd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsignd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsignw_method_2946 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsignw);
addExtern<DAS_CALL_METHOD(_vpsignw_method_2946)>(*this, lib, "vpsignw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsignw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpslld_method_2948 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpslld>;
addExtern<DAS_CALL_METHOD(_vpslld_method_2948)>(*this, lib, "vpslld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpslld>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpslld_method_2950 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpslld>;
addExtern<DAS_CALL_METHOD(_vpslld_method_2950)>(*this, lib, "vpslld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpslld>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpslldq_method_2952 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpslldq);
addExtern<DAS_CALL_METHOD(_vpslldq_method_2952)>(*this, lib, "vpslldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpslldq))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllq_method_2954 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsllq>;
addExtern<DAS_CALL_METHOD(_vpsllq_method_2954)>(*this, lib, "vpsllq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsllq>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllq_method_2956 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllq>;
addExtern<DAS_CALL_METHOD(_vpsllq_method_2956)>(*this, lib, "vpsllq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllq>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllvd_method_2958 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsllvd);
addExtern<DAS_CALL_METHOD(_vpsllvd_method_2958)>(*this, lib, "vpsllvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsllvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllvq_method_2960 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsllvq);
addExtern<DAS_CALL_METHOD(_vpsllvq_method_2960)>(*this, lib, "vpsllvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsllvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllw_method_2962 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsllw>;
addExtern<DAS_CALL_METHOD(_vpsllw_method_2962)>(*this, lib, "vpsllw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsllw>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllw_method_2964 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllw>;
addExtern<DAS_CALL_METHOD(_vpsllw_method_2964)>(*this, lib, "vpsllw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllw>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrad_method_2966 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrad>;
addExtern<DAS_CALL_METHOD(_vpsrad_method_2966)>(*this, lib, "vpsrad",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrad>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrad_method_2968 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrad>;
addExtern<DAS_CALL_METHOD(_vpsrad_method_2968)>(*this, lib, "vpsrad",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrad>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsravd_method_2970 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsravd);
addExtern<DAS_CALL_METHOD(_vpsravd_method_2970)>(*this, lib, "vpsravd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsravd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsraw_method_2972 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsraw>;
addExtern<DAS_CALL_METHOD(_vpsraw_method_2972)>(*this, lib, "vpsraw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsraw>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsraw_method_2974 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraw>;
addExtern<DAS_CALL_METHOD(_vpsraw_method_2974)>(*this, lib, "vpsraw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraw>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrld_method_2976 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrld>;
addExtern<DAS_CALL_METHOD(_vpsrld_method_2976)>(*this, lib, "vpsrld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrld>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrld_method_2978 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrld>;
addExtern<DAS_CALL_METHOD(_vpsrld_method_2978)>(*this, lib, "vpsrld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrld>::invoke")
	->args({"self","x1","x2","op"})
;
#endif

#endif
#endif
}
}
