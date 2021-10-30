
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
void Module_Xbyak::initFunctions_7() {
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
