
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
void Module_Xbyak::initFunctions_20() {
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

#endif
#endif
}
}
