
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
void Module_Xbyak::initFunctions_21() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
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
