
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
using _vp2intersectd_method_3980 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vp2intersectd);
addExtern<DAS_CALL_METHOD(_vp2intersectd_method_3980)>(*this, lib, "vp2intersectd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vp2intersectd))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vp2intersectq_method_3982 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vp2intersectq);
addExtern<DAS_CALL_METHOD(_vp2intersectq_method_3982)>(*this, lib, "vp2intersectq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vp2intersectq))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vp4dpwssd_method_3984 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vp4dpwssd);
addExtern<DAS_CALL_METHOD(_vp4dpwssd_method_3984)>(*this, lib, "vp4dpwssd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vp4dpwssd))
	->args({"self","z1","z2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vp4dpwssds_method_3986 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vp4dpwssds);
addExtern<DAS_CALL_METHOD(_vp4dpwssds_method_3986)>(*this, lib, "vp4dpwssds",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vp4dpwssds))
	->args({"self","z1","z2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpabsq_method_3988 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpabsq);
addExtern<DAS_CALL_METHOD(_vpabsq_method_3988)>(*this, lib, "vpabsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpabsq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpandd_method_3990 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpandd);
addExtern<DAS_CALL_METHOD(_vpandd_method_3990)>(*this, lib, "vpandd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpandd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpandnd_method_3992 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpandnd);
addExtern<DAS_CALL_METHOD(_vpandnd_method_3992)>(*this, lib, "vpandnd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpandnd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpandnq_method_3994 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpandnq);
addExtern<DAS_CALL_METHOD(_vpandnq_method_3994)>(*this, lib, "vpandnq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpandnq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpandq_method_3996 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpandq);
addExtern<DAS_CALL_METHOD(_vpandq_method_3996)>(*this, lib, "vpandq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpandq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendmb_method_3998 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendmb);
addExtern<DAS_CALL_METHOD(_vpblendmb_method_3998)>(*this, lib, "vpblendmb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendmb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendmd_method_4000 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendmd);
addExtern<DAS_CALL_METHOD(_vpblendmd_method_4000)>(*this, lib, "vpblendmd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendmd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendmq_method_4002 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendmq);
addExtern<DAS_CALL_METHOD(_vpblendmq_method_4002)>(*this, lib, "vpblendmq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendmq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendmw_method_4004 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendmw);
addExtern<DAS_CALL_METHOD(_vpblendmw_method_4004)>(*this, lib, "vpblendmw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendmw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastb_method_4006 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::vpbroadcastb>;
addExtern<DAS_CALL_METHOD(_vpbroadcastb_method_4006)>(*this, lib, "vpbroadcastb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::vpbroadcastb>::invoke")
	->args({"self","x","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastd_method_4008 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::vpbroadcastd>;
addExtern<DAS_CALL_METHOD(_vpbroadcastd_method_4008)>(*this, lib, "vpbroadcastd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::vpbroadcastd>::invoke")
	->args({"self","x","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastmb2q_method_4010 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpbroadcastmb2q);
addExtern<DAS_CALL_METHOD(_vpbroadcastmb2q_method_4010)>(*this, lib, "vpbroadcastmb2q",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpbroadcastmb2q))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastmw2d_method_4012 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpbroadcastmw2d);
addExtern<DAS_CALL_METHOD(_vpbroadcastmw2d_method_4012)>(*this, lib, "vpbroadcastmw2d",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpbroadcastmw2d))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastw_method_4014 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg16 &),&Xbyak::CodeGenerator::vpbroadcastw>;
addExtern<DAS_CALL_METHOD(_vpbroadcastw_method_4014)>(*this, lib, "vpbroadcastw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg16 &),&Xbyak::CodeGenerator::vpbroadcastw>::invoke")
	->args({"self","x","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpb_method_4016 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpb);
addExtern<DAS_CALL_METHOD(_vpcmpb_method_4016)>(*this, lib, "vpcmpb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpb))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpd_method_4018 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpd);
addExtern<DAS_CALL_METHOD(_vpcmpd_method_4018)>(*this, lib, "vpcmpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpd))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqb_method_4020 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb>;
addExtern<DAS_CALL_METHOD(_vpcmpeqb_method_4020)>(*this, lib, "vpcmpeqb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqd_method_4022 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd>;
addExtern<DAS_CALL_METHOD(_vpcmpeqd_method_4022)>(*this, lib, "vpcmpeqd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqq_method_4024 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq>;
addExtern<DAS_CALL_METHOD(_vpcmpeqq_method_4024)>(*this, lib, "vpcmpeqq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqw_method_4026 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw>;
addExtern<DAS_CALL_METHOD(_vpcmpeqw_method_4026)>(*this, lib, "vpcmpeqw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtb_method_4028 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb>;
addExtern<DAS_CALL_METHOD(_vpcmpgtb_method_4028)>(*this, lib, "vpcmpgtb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtd_method_4030 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd>;
addExtern<DAS_CALL_METHOD(_vpcmpgtd_method_4030)>(*this, lib, "vpcmpgtd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtq_method_4032 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq>;
addExtern<DAS_CALL_METHOD(_vpcmpgtq_method_4032)>(*this, lib, "vpcmpgtq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtw_method_4034 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw>;
addExtern<DAS_CALL_METHOD(_vpcmpgtw_method_4034)>(*this, lib, "vpcmpgtw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpq_method_4036 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpq);
addExtern<DAS_CALL_METHOD(_vpcmpq_method_4036)>(*this, lib, "vpcmpq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpq))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpub_method_4038 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpub);
addExtern<DAS_CALL_METHOD(_vpcmpub_method_4038)>(*this, lib, "vpcmpub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpub))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpud_method_4040 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpud);
addExtern<DAS_CALL_METHOD(_vpcmpud_method_4040)>(*this, lib, "vpcmpud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpud))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpuq_method_4042 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpuq);
addExtern<DAS_CALL_METHOD(_vpcmpuq_method_4042)>(*this, lib, "vpcmpuq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpuq))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpuw_method_4044 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpuw);
addExtern<DAS_CALL_METHOD(_vpcmpuw_method_4044)>(*this, lib, "vpcmpuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpuw))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpw_method_4046 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpw);
addExtern<DAS_CALL_METHOD(_vpcmpw_method_4046)>(*this, lib, "vpcmpw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpw))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcompressd_method_4048 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcompressd);
addExtern<DAS_CALL_METHOD(_vpcompressd_method_4048)>(*this, lib, "vpcompressd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcompressd))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcompressq_method_4050 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcompressq);
addExtern<DAS_CALL_METHOD(_vpcompressq_method_4050)>(*this, lib, "vpcompressq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcompressq))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpconflictd_method_4052 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpconflictd);
addExtern<DAS_CALL_METHOD(_vpconflictd_method_4052)>(*this, lib, "vpconflictd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpconflictd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpconflictq_method_4054 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpconflictq);
addExtern<DAS_CALL_METHOD(_vpconflictq_method_4054)>(*this, lib, "vpconflictq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpconflictq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermb_method_4056 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermb);
addExtern<DAS_CALL_METHOD(_vpermb_method_4056)>(*this, lib, "vpermb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2b_method_4058 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2b);
addExtern<DAS_CALL_METHOD(_vpermi2b_method_4058)>(*this, lib, "vpermi2b",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2b))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2d_method_4060 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2d);
addExtern<DAS_CALL_METHOD(_vpermi2d_method_4060)>(*this, lib, "vpermi2d",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2d))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2pd_method_4062 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2pd);
addExtern<DAS_CALL_METHOD(_vpermi2pd_method_4062)>(*this, lib, "vpermi2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2ps_method_4064 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2ps);
addExtern<DAS_CALL_METHOD(_vpermi2ps_method_4064)>(*this, lib, "vpermi2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2q_method_4066 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2q);
addExtern<DAS_CALL_METHOD(_vpermi2q_method_4066)>(*this, lib, "vpermi2q",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2q))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2w_method_4068 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2w);
addExtern<DAS_CALL_METHOD(_vpermi2w_method_4068)>(*this, lib, "vpermi2w",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2w))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2b_method_4070 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2b);
addExtern<DAS_CALL_METHOD(_vpermt2b_method_4070)>(*this, lib, "vpermt2b",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2b))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2d_method_4072 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2d);
addExtern<DAS_CALL_METHOD(_vpermt2d_method_4072)>(*this, lib, "vpermt2d",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2d))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2pd_method_4074 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2pd);
addExtern<DAS_CALL_METHOD(_vpermt2pd_method_4074)>(*this, lib, "vpermt2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2ps_method_4076 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2ps);
addExtern<DAS_CALL_METHOD(_vpermt2ps_method_4076)>(*this, lib, "vpermt2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2q_method_4078 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2q);
addExtern<DAS_CALL_METHOD(_vpermt2q_method_4078)>(*this, lib, "vpermt2q",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2q))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2w_method_4080 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2w);
addExtern<DAS_CALL_METHOD(_vpermt2w_method_4080)>(*this, lib, "vpermt2w",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2w))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermw_method_4082 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermw);
addExtern<DAS_CALL_METHOD(_vpermw_method_4082)>(*this, lib, "vpermw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpexpandb_method_4084 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpexpandb);
addExtern<DAS_CALL_METHOD(_vpexpandb_method_4084)>(*this, lib, "vpexpandb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpexpandb))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpexpandd_method_4086 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpexpandd);
addExtern<DAS_CALL_METHOD(_vpexpandd_method_4086)>(*this, lib, "vpexpandd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpexpandd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpexpandq_method_4088 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpexpandq);
addExtern<DAS_CALL_METHOD(_vpexpandq_method_4088)>(*this, lib, "vpexpandq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpexpandq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpexpandw_method_4090 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpexpandw);
addExtern<DAS_CALL_METHOD(_vpexpandw_method_4090)>(*this, lib, "vpexpandw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpexpandw))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherdd_method_4092 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdd>;
addExtern<DAS_CALL_METHOD(_vpgatherdd_method_4092)>(*this, lib, "vpgatherdd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdd>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherdq_method_4094 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdq>;
addExtern<DAS_CALL_METHOD(_vpgatherdq_method_4094)>(*this, lib, "vpgatherdq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdq>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherqd_method_4096 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqd>;
addExtern<DAS_CALL_METHOD(_vpgatherqd_method_4096)>(*this, lib, "vpgatherqd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqd>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherqq_method_4098 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqq>;
addExtern<DAS_CALL_METHOD(_vpgatherqq_method_4098)>(*this, lib, "vpgatherqq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqq>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vplzcntd_method_4100 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vplzcntd);
addExtern<DAS_CALL_METHOD(_vplzcntd_method_4100)>(*this, lib, "vplzcntd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vplzcntd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vplzcntq_method_4102 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vplzcntq);
addExtern<DAS_CALL_METHOD(_vplzcntq_method_4102)>(*this, lib, "vplzcntq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vplzcntq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmadd52huq_method_4104 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmadd52huq);
addExtern<DAS_CALL_METHOD(_vpmadd52huq_method_4104)>(*this, lib, "vpmadd52huq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmadd52huq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmadd52luq_method_4106 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmadd52luq);
addExtern<DAS_CALL_METHOD(_vpmadd52luq_method_4106)>(*this, lib, "vpmadd52luq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmadd52luq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxsq_method_4108 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxsq);
addExtern<DAS_CALL_METHOD(_vpmaxsq_method_4108)>(*this, lib, "vpmaxsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxsq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxuq_method_4110 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxuq);
addExtern<DAS_CALL_METHOD(_vpmaxuq_method_4110)>(*this, lib, "vpmaxuq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxuq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminsq_method_4112 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminsq);
addExtern<DAS_CALL_METHOD(_vpminsq_method_4112)>(*this, lib, "vpminsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminsq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminuq_method_4114 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminuq);
addExtern<DAS_CALL_METHOD(_vpminuq_method_4114)>(*this, lib, "vpminuq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminuq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovb2m_method_4116 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovb2m);
addExtern<DAS_CALL_METHOD(_vpmovb2m_method_4116)>(*this, lib, "vpmovb2m",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovb2m))
	->args({"self","k","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovd2m_method_4118 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovd2m);
addExtern<DAS_CALL_METHOD(_vpmovd2m_method_4118)>(*this, lib, "vpmovd2m",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovd2m))
	->args({"self","k","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovdb_method_4120 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovdb);
addExtern<DAS_CALL_METHOD(_vpmovdb_method_4120)>(*this, lib, "vpmovdb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovdb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovdw_method_4122 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovdw);
addExtern<DAS_CALL_METHOD(_vpmovdw_method_4122)>(*this, lib, "vpmovdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovdw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovm2b_method_4124 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovm2b);
addExtern<DAS_CALL_METHOD(_vpmovm2b_method_4124)>(*this, lib, "vpmovm2b",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovm2b))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovm2d_method_4126 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovm2d);
addExtern<DAS_CALL_METHOD(_vpmovm2d_method_4126)>(*this, lib, "vpmovm2d",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovm2d))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovm2q_method_4128 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovm2q);
addExtern<DAS_CALL_METHOD(_vpmovm2q_method_4128)>(*this, lib, "vpmovm2q",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovm2q))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovm2w_method_4130 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovm2w);
addExtern<DAS_CALL_METHOD(_vpmovm2w_method_4130)>(*this, lib, "vpmovm2w",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovm2w))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovq2m_method_4132 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovq2m);
addExtern<DAS_CALL_METHOD(_vpmovq2m_method_4132)>(*this, lib, "vpmovq2m",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovq2m))
	->args({"self","k","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovqb_method_4134 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovqb);
addExtern<DAS_CALL_METHOD(_vpmovqb_method_4134)>(*this, lib, "vpmovqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovqb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovqd_method_4136 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovqd);
addExtern<DAS_CALL_METHOD(_vpmovqd_method_4136)>(*this, lib, "vpmovqd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovqd))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovqw_method_4138 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovqw);
addExtern<DAS_CALL_METHOD(_vpmovqw_method_4138)>(*this, lib, "vpmovqw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovqw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsdb_method_4140 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsdb);
addExtern<DAS_CALL_METHOD(_vpmovsdb_method_4140)>(*this, lib, "vpmovsdb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsdb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsdw_method_4142 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsdw);
addExtern<DAS_CALL_METHOD(_vpmovsdw_method_4142)>(*this, lib, "vpmovsdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsdw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsqb_method_4144 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsqb);
addExtern<DAS_CALL_METHOD(_vpmovsqb_method_4144)>(*this, lib, "vpmovsqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsqb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsqd_method_4146 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsqd);
addExtern<DAS_CALL_METHOD(_vpmovsqd_method_4146)>(*this, lib, "vpmovsqd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsqd))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsqw_method_4148 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsqw);
addExtern<DAS_CALL_METHOD(_vpmovsqw_method_4148)>(*this, lib, "vpmovsqw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsqw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovswb_method_4150 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovswb);
addExtern<DAS_CALL_METHOD(_vpmovswb_method_4150)>(*this, lib, "vpmovswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovswb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovusdb_method_4152 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovusdb);
addExtern<DAS_CALL_METHOD(_vpmovusdb_method_4152)>(*this, lib, "vpmovusdb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovusdb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovusdw_method_4154 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovusdw);
addExtern<DAS_CALL_METHOD(_vpmovusdw_method_4154)>(*this, lib, "vpmovusdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovusdw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovusqb_method_4156 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovusqb);
addExtern<DAS_CALL_METHOD(_vpmovusqb_method_4156)>(*this, lib, "vpmovusqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovusqb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovusqd_method_4158 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovusqd);
addExtern<DAS_CALL_METHOD(_vpmovusqd_method_4158)>(*this, lib, "vpmovusqd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovusqd))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovusqw_method_4160 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovusqw);
addExtern<DAS_CALL_METHOD(_vpmovusqw_method_4160)>(*this, lib, "vpmovusqw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovusqw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovuswb_method_4162 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovuswb);
addExtern<DAS_CALL_METHOD(_vpmovuswb_method_4162)>(*this, lib, "vpmovuswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovuswb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovw2m_method_4164 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovw2m);
addExtern<DAS_CALL_METHOD(_vpmovw2m_method_4164)>(*this, lib, "vpmovw2m",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovw2m))
	->args({"self","k","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovwb_method_4166 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovwb);
addExtern<DAS_CALL_METHOD(_vpmovwb_method_4166)>(*this, lib, "vpmovwb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovwb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmullq_method_4168 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmullq);
addExtern<DAS_CALL_METHOD(_vpmullq_method_4168)>(*this, lib, "vpmullq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmullq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmultishiftqb_method_4170 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmultishiftqb);
addExtern<DAS_CALL_METHOD(_vpmultishiftqb_method_4170)>(*this, lib, "vpmultishiftqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmultishiftqb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpopcntb_method_4172 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpopcntb);
addExtern<DAS_CALL_METHOD(_vpopcntb_method_4172)>(*this, lib, "vpopcntb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpopcntb))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpopcntd_method_4174 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpopcntd);
addExtern<DAS_CALL_METHOD(_vpopcntd_method_4174)>(*this, lib, "vpopcntd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpopcntd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpopcntq_method_4176 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpopcntq);
addExtern<DAS_CALL_METHOD(_vpopcntq_method_4176)>(*this, lib, "vpopcntq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpopcntq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpopcntw_method_4178 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpopcntw);
addExtern<DAS_CALL_METHOD(_vpopcntw_method_4178)>(*this, lib, "vpopcntw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpopcntw))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpord_method_4180 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpord);
addExtern<DAS_CALL_METHOD(_vpord_method_4180)>(*this, lib, "vpord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpord))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vporq_method_4182 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vporq);
addExtern<DAS_CALL_METHOD(_vporq_method_4182)>(*this, lib, "vporq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vporq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprold_method_4184 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprold);
addExtern<DAS_CALL_METHOD(_vprold_method_4184)>(*this, lib, "vprold",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprold))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprolq_method_4186 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprolq);
addExtern<DAS_CALL_METHOD(_vprolq_method_4186)>(*this, lib, "vprolq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprolq))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprolvd_method_4188 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprolvd);
addExtern<DAS_CALL_METHOD(_vprolvd_method_4188)>(*this, lib, "vprolvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprolvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprolvq_method_4190 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprolvq);
addExtern<DAS_CALL_METHOD(_vprolvq_method_4190)>(*this, lib, "vprolvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprolvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprord_method_4192 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprord);
addExtern<DAS_CALL_METHOD(_vprord_method_4192)>(*this, lib, "vprord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprord))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprorq_method_4194 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprorq);
addExtern<DAS_CALL_METHOD(_vprorq_method_4194)>(*this, lib, "vprorq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprorq))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprorvd_method_4196 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprorvd);
addExtern<DAS_CALL_METHOD(_vprorvd_method_4196)>(*this, lib, "vprorvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprorvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprorvq_method_4198 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprorvq);
addExtern<DAS_CALL_METHOD(_vprorvq_method_4198)>(*this, lib, "vprorvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprorvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpscatterdd_method_4200 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpscatterdd);
addExtern<DAS_CALL_METHOD(_vpscatterdd_method_4200)>(*this, lib, "vpscatterdd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpscatterdd))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpscatterdq_method_4202 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpscatterdq);
addExtern<DAS_CALL_METHOD(_vpscatterdq_method_4202)>(*this, lib, "vpscatterdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpscatterdq))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpscatterqd_method_4204 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpscatterqd);
addExtern<DAS_CALL_METHOD(_vpscatterqd_method_4204)>(*this, lib, "vpscatterqd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpscatterqd))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpscatterqq_method_4206 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpscatterqq);
addExtern<DAS_CALL_METHOD(_vpscatterqq_method_4206)>(*this, lib, "vpscatterqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpscatterqq))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldd_method_4208 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldd);
addExtern<DAS_CALL_METHOD(_vpshldd_method_4208)>(*this, lib, "vpshldd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldq_method_4210 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldq);
addExtern<DAS_CALL_METHOD(_vpshldq_method_4210)>(*this, lib, "vpshldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldvd_method_4212 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldvd);
addExtern<DAS_CALL_METHOD(_vpshldvd_method_4212)>(*this, lib, "vpshldvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldvq_method_4214 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldvq);
addExtern<DAS_CALL_METHOD(_vpshldvq_method_4214)>(*this, lib, "vpshldvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldvw_method_4216 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldvw);
addExtern<DAS_CALL_METHOD(_vpshldvw_method_4216)>(*this, lib, "vpshldvw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldvw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldw_method_4218 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldw);
addExtern<DAS_CALL_METHOD(_vpshldw_method_4218)>(*this, lib, "vpshldw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdd_method_4220 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdd);
addExtern<DAS_CALL_METHOD(_vpshrdd_method_4220)>(*this, lib, "vpshrdd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdq_method_4222 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdq);
addExtern<DAS_CALL_METHOD(_vpshrdq_method_4222)>(*this, lib, "vpshrdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdvd_method_4224 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdvd);
addExtern<DAS_CALL_METHOD(_vpshrdvd_method_4224)>(*this, lib, "vpshrdvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdvq_method_4226 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdvq);
addExtern<DAS_CALL_METHOD(_vpshrdvq_method_4226)>(*this, lib, "vpshrdvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdvw_method_4228 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdvw);
addExtern<DAS_CALL_METHOD(_vpshrdvw_method_4228)>(*this, lib, "vpshrdvw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdvw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdw_method_4230 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdw);
addExtern<DAS_CALL_METHOD(_vpshrdw_method_4230)>(*this, lib, "vpshrdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshufbitqmb_method_4232 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshufbitqmb);
addExtern<DAS_CALL_METHOD(_vpshufbitqmb_method_4232)>(*this, lib, "vpshufbitqmb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshufbitqmb))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllvw_method_4234 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsllvw);
addExtern<DAS_CALL_METHOD(_vpsllvw_method_4234)>(*this, lib, "vpsllvw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsllvw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsraq_method_4236 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsraq>;
addExtern<DAS_CALL_METHOD(_vpsraq_method_4236)>(*this, lib, "vpsraq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsraq>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsraq_method_4238 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraq>;
addExtern<DAS_CALL_METHOD(_vpsraq_method_4238)>(*this, lib, "vpsraq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraq>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsravq_method_4240 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsravq);
addExtern<DAS_CALL_METHOD(_vpsravq_method_4240)>(*this, lib, "vpsravq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsravq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsravw_method_4242 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsravw);
addExtern<DAS_CALL_METHOD(_vpsravw_method_4242)>(*this, lib, "vpsravw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsravw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlvw_method_4244 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsrlvw);
addExtern<DAS_CALL_METHOD(_vpsrlvw_method_4244)>(*this, lib, "vpsrlvw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsrlvw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpternlogd_method_4246 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpternlogd);
addExtern<DAS_CALL_METHOD(_vpternlogd_method_4246)>(*this, lib, "vpternlogd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpternlogd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpternlogq_method_4248 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpternlogq);
addExtern<DAS_CALL_METHOD(_vpternlogq_method_4248)>(*this, lib, "vpternlogq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpternlogq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestmb_method_4250 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestmb);
addExtern<DAS_CALL_METHOD(_vptestmb_method_4250)>(*this, lib, "vptestmb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestmb))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestmd_method_4252 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestmd);
addExtern<DAS_CALL_METHOD(_vptestmd_method_4252)>(*this, lib, "vptestmd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestmd))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestmq_method_4254 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestmq);
addExtern<DAS_CALL_METHOD(_vptestmq_method_4254)>(*this, lib, "vptestmq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestmq))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestmw_method_4256 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestmw);
addExtern<DAS_CALL_METHOD(_vptestmw_method_4256)>(*this, lib, "vptestmw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestmw))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestnmb_method_4258 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestnmb);
addExtern<DAS_CALL_METHOD(_vptestnmb_method_4258)>(*this, lib, "vptestnmb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestnmb))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestnmd_method_4260 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestnmd);
addExtern<DAS_CALL_METHOD(_vptestnmd_method_4260)>(*this, lib, "vptestnmd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestnmd))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestnmq_method_4262 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestnmq);
addExtern<DAS_CALL_METHOD(_vptestnmq_method_4262)>(*this, lib, "vptestnmq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestnmq))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestnmw_method_4264 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestnmw);
addExtern<DAS_CALL_METHOD(_vptestnmw_method_4264)>(*this, lib, "vptestnmw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestnmw))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpxord_method_4266 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpxord);
addExtern<DAS_CALL_METHOD(_vpxord_method_4266)>(*this, lib, "vpxord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpxord))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpxorq_method_4268 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpxorq);
addExtern<DAS_CALL_METHOD(_vpxorq_method_4268)>(*this, lib, "vpxorq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpxorq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrangepd_method_4270 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrangepd);
addExtern<DAS_CALL_METHOD(_vrangepd_method_4270)>(*this, lib, "vrangepd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrangepd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrangeps_method_4272 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrangeps);
addExtern<DAS_CALL_METHOD(_vrangeps_method_4272)>(*this, lib, "vrangeps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrangeps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrangesd_method_4274 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrangesd);
addExtern<DAS_CALL_METHOD(_vrangesd_method_4274)>(*this, lib, "vrangesd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrangesd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrangess_method_4276 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrangess);
addExtern<DAS_CALL_METHOD(_vrangess_method_4276)>(*this, lib, "vrangess",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrangess))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp14pd_method_4278 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp14pd);
addExtern<DAS_CALL_METHOD(_vrcp14pd_method_4278)>(*this, lib, "vrcp14pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp14pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp14ps_method_4280 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp14ps);
addExtern<DAS_CALL_METHOD(_vrcp14ps_method_4280)>(*this, lib, "vrcp14ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp14ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp14sd_method_4282 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp14sd);
addExtern<DAS_CALL_METHOD(_vrcp14sd_method_4282)>(*this, lib, "vrcp14sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp14sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp14ss_method_4284 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp14ss);
addExtern<DAS_CALL_METHOD(_vrcp14ss_method_4284)>(*this, lib, "vrcp14ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp14ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp28pd_method_4286 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp28pd);
addExtern<DAS_CALL_METHOD(_vrcp28pd_method_4286)>(*this, lib, "vrcp28pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp28pd))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp28ps_method_4288 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp28ps);
addExtern<DAS_CALL_METHOD(_vrcp28ps_method_4288)>(*this, lib, "vrcp28ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp28ps))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp28sd_method_4290 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp28sd);
addExtern<DAS_CALL_METHOD(_vrcp28sd_method_4290)>(*this, lib, "vrcp28sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp28sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp28ss_method_4292 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp28ss);
addExtern<DAS_CALL_METHOD(_vrcp28ss_method_4292)>(*this, lib, "vrcp28ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp28ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcpph_method_4294 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcpph);
addExtern<DAS_CALL_METHOD(_vrcpph_method_4294)>(*this, lib, "vrcpph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcpph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcpsh_method_4296 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcpsh);
addExtern<DAS_CALL_METHOD(_vrcpsh_method_4296)>(*this, lib, "vrcpsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcpsh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreducepd_method_4298 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreducepd);
addExtern<DAS_CALL_METHOD(_vreducepd_method_4298)>(*this, lib, "vreducepd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreducepd))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreduceph_method_4300 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreduceph);
addExtern<DAS_CALL_METHOD(_vreduceph_method_4300)>(*this, lib, "vreduceph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreduceph))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreduceps_method_4302 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreduceps);
addExtern<DAS_CALL_METHOD(_vreduceps_method_4302)>(*this, lib, "vreduceps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreduceps))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreducesd_method_4304 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreducesd);
addExtern<DAS_CALL_METHOD(_vreducesd_method_4304)>(*this, lib, "vreducesd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreducesd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreducesh_method_4306 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreducesh);
addExtern<DAS_CALL_METHOD(_vreducesh_method_4306)>(*this, lib, "vreducesh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreducesh))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreducess_method_4308 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreducess);
addExtern<DAS_CALL_METHOD(_vreducess_method_4308)>(*this, lib, "vreducess",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreducess))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscalepd_method_4310 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscalepd);
addExtern<DAS_CALL_METHOD(_vrndscalepd_method_4310)>(*this, lib, "vrndscalepd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscalepd))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscaleph_method_4312 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscaleph);
addExtern<DAS_CALL_METHOD(_vrndscaleph_method_4312)>(*this, lib, "vrndscaleph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscaleph))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscaleps_method_4314 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscaleps);
addExtern<DAS_CALL_METHOD(_vrndscaleps_method_4314)>(*this, lib, "vrndscaleps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscaleps))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscalesd_method_4316 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscalesd);
addExtern<DAS_CALL_METHOD(_vrndscalesd_method_4316)>(*this, lib, "vrndscalesd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscalesd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscalesh_method_4318 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscalesh);
addExtern<DAS_CALL_METHOD(_vrndscalesh_method_4318)>(*this, lib, "vrndscalesh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscalesh))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscaless_method_4320 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscaless);
addExtern<DAS_CALL_METHOD(_vrndscaless_method_4320)>(*this, lib, "vrndscaless",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscaless))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt14pd_method_4322 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt14pd);
addExtern<DAS_CALL_METHOD(_vrsqrt14pd_method_4322)>(*this, lib, "vrsqrt14pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt14pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt14ps_method_4324 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt14ps);
addExtern<DAS_CALL_METHOD(_vrsqrt14ps_method_4324)>(*this, lib, "vrsqrt14ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt14ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt14sd_method_4326 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt14sd);
addExtern<DAS_CALL_METHOD(_vrsqrt14sd_method_4326)>(*this, lib, "vrsqrt14sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt14sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt14ss_method_4328 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt14ss);
addExtern<DAS_CALL_METHOD(_vrsqrt14ss_method_4328)>(*this, lib, "vrsqrt14ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt14ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt28pd_method_4330 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt28pd);
addExtern<DAS_CALL_METHOD(_vrsqrt28pd_method_4330)>(*this, lib, "vrsqrt28pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt28pd))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt28ps_method_4332 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt28ps);
addExtern<DAS_CALL_METHOD(_vrsqrt28ps_method_4332)>(*this, lib, "vrsqrt28ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt28ps))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt28sd_method_4334 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt28sd);
addExtern<DAS_CALL_METHOD(_vrsqrt28sd_method_4334)>(*this, lib, "vrsqrt28sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt28sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt28ss_method_4336 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt28ss);
addExtern<DAS_CALL_METHOD(_vrsqrt28ss_method_4336)>(*this, lib, "vrsqrt28ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt28ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrtph_method_4338 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrtph);
addExtern<DAS_CALL_METHOD(_vrsqrtph_method_4338)>(*this, lib, "vrsqrtph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrtph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrtsh_method_4340 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrtsh);
addExtern<DAS_CALL_METHOD(_vrsqrtsh_method_4340)>(*this, lib, "vrsqrtsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrtsh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefpd_method_4342 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefpd);
addExtern<DAS_CALL_METHOD(_vscalefpd_method_4342)>(*this, lib, "vscalefpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefpd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefph_method_4344 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefph);
addExtern<DAS_CALL_METHOD(_vscalefph_method_4344)>(*this, lib, "vscalefph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefps_method_4346 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefps);
addExtern<DAS_CALL_METHOD(_vscalefps_method_4346)>(*this, lib, "vscalefps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefsd_method_4348 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefsd);
addExtern<DAS_CALL_METHOD(_vscalefsd_method_4348)>(*this, lib, "vscalefsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefsd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefsh_method_4350 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefsh);
addExtern<DAS_CALL_METHOD(_vscalefsh_method_4350)>(*this, lib, "vscalefsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefsh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefss_method_4352 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefss);
addExtern<DAS_CALL_METHOD(_vscalefss_method_4352)>(*this, lib, "vscalefss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterdpd_method_4354 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterdpd);
addExtern<DAS_CALL_METHOD(_vscatterdpd_method_4354)>(*this, lib, "vscatterdpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterdpd))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterdps_method_4356 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterdps);
addExtern<DAS_CALL_METHOD(_vscatterdps_method_4356)>(*this, lib, "vscatterdps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterdps))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf0dpd_method_4358 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf0dpd);
addExtern<DAS_CALL_METHOD(_vscatterpf0dpd_method_4358)>(*this, lib, "vscatterpf0dpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf0dpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf0dps_method_4360 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf0dps);
addExtern<DAS_CALL_METHOD(_vscatterpf0dps_method_4360)>(*this, lib, "vscatterpf0dps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf0dps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf0qpd_method_4362 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf0qpd);
addExtern<DAS_CALL_METHOD(_vscatterpf0qpd_method_4362)>(*this, lib, "vscatterpf0qpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf0qpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf0qps_method_4364 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf0qps);
addExtern<DAS_CALL_METHOD(_vscatterpf0qps_method_4364)>(*this, lib, "vscatterpf0qps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf0qps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf1dpd_method_4366 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf1dpd);
addExtern<DAS_CALL_METHOD(_vscatterpf1dpd_method_4366)>(*this, lib, "vscatterpf1dpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf1dpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf1dps_method_4368 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf1dps);
addExtern<DAS_CALL_METHOD(_vscatterpf1dps_method_4368)>(*this, lib, "vscatterpf1dps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf1dps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf1qpd_method_4370 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf1qpd);
addExtern<DAS_CALL_METHOD(_vscatterpf1qpd_method_4370)>(*this, lib, "vscatterpf1qpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf1qpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf1qps_method_4372 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf1qps);
addExtern<DAS_CALL_METHOD(_vscatterpf1qps_method_4372)>(*this, lib, "vscatterpf1qps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf1qps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterqpd_method_4374 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterqpd);
addExtern<DAS_CALL_METHOD(_vscatterqpd_method_4374)>(*this, lib, "vscatterqpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterqpd))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterqps_method_4376 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterqps);
addExtern<DAS_CALL_METHOD(_vscatterqps_method_4376)>(*this, lib, "vscatterqps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterqps))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vshuff32x4_method_4378 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshuff32x4);
addExtern<DAS_CALL_METHOD(_vshuff32x4_method_4378)>(*this, lib, "vshuff32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshuff32x4))
	->args({"self","y1","y2","op","imm"})
;
#endif

#endif
#endif
}
}
