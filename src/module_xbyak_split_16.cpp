
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
void Module_Xbyak::initFunctions_16() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _tilezero_method_3180 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tilezero);
addExtern<DAS_CALL_METHOD(_tilezero_method_3180)>(*this, lib, "tilezero",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tilezero))
	->args({"self","Tmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tdpbssd_method_3182 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tdpbssd);
addExtern<DAS_CALL_METHOD(_tdpbssd_method_3182)>(*this, lib, "tdpbssd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tdpbssd))
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tdpbsud_method_3184 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tdpbsud);
addExtern<DAS_CALL_METHOD(_tdpbsud_method_3184)>(*this, lib, "tdpbsud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tdpbsud))
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tdpbusd_method_3186 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tdpbusd);
addExtern<DAS_CALL_METHOD(_tdpbusd_method_3186)>(*this, lib, "tdpbusd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tdpbusd))
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tdpbuud_method_3188 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tdpbuud);
addExtern<DAS_CALL_METHOD(_tdpbuud_method_3188)>(*this, lib, "tdpbuud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tdpbuud))
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tdpbf16ps_method_3190 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tdpbf16ps);
addExtern<DAS_CALL_METHOD(_tdpbf16ps_method_3190)>(*this, lib, "tdpbf16ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tdpbf16ps))
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kaddb_method_3192 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kaddb);
addExtern<DAS_CALL_METHOD(_kaddb_method_3192)>(*this, lib, "kaddb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kaddb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kaddd_method_3194 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kaddd);
addExtern<DAS_CALL_METHOD(_kaddd_method_3194)>(*this, lib, "kaddd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kaddd))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kaddq_method_3196 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kaddq);
addExtern<DAS_CALL_METHOD(_kaddq_method_3196)>(*this, lib, "kaddq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kaddq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kaddw_method_3198 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kaddw);
addExtern<DAS_CALL_METHOD(_kaddw_method_3198)>(*this, lib, "kaddw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kaddw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandb_method_3200 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandb);
addExtern<DAS_CALL_METHOD(_kandb_method_3200)>(*this, lib, "kandb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandd_method_3202 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandd);
addExtern<DAS_CALL_METHOD(_kandd_method_3202)>(*this, lib, "kandd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandd))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandnb_method_3204 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandnb);
addExtern<DAS_CALL_METHOD(_kandnb_method_3204)>(*this, lib, "kandnb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandnb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandnd_method_3206 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandnd);
addExtern<DAS_CALL_METHOD(_kandnd_method_3206)>(*this, lib, "kandnd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandnd))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandnq_method_3208 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandnq);
addExtern<DAS_CALL_METHOD(_kandnq_method_3208)>(*this, lib, "kandnq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandnq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandnw_method_3210 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandnw);
addExtern<DAS_CALL_METHOD(_kandnw_method_3210)>(*this, lib, "kandnw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandnw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandq_method_3212 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandq);
addExtern<DAS_CALL_METHOD(_kandq_method_3212)>(*this, lib, "kandq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandw_method_3214 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandw);
addExtern<DAS_CALL_METHOD(_kandw_method_3214)>(*this, lib, "kandw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovb_method_3216 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb>;
addExtern<DAS_CALL_METHOD(_kmovb_method_3216)>(*this, lib, "kmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb>::invoke")
	->args({"self","addr","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovb_method_3218 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovb>;
addExtern<DAS_CALL_METHOD(_kmovb_method_3218)>(*this, lib, "kmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovb>::invoke")
	->args({"self","k","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovb_method_3220 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovb>;
addExtern<DAS_CALL_METHOD(_kmovb_method_3220)>(*this, lib, "kmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovb>::invoke")
	->args({"self","k","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovb_method_3222 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb>;
addExtern<DAS_CALL_METHOD(_kmovb_method_3222)>(*this, lib, "kmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb>::invoke")
	->args({"self","r","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovd_method_3224 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd>;
addExtern<DAS_CALL_METHOD(_kmovd_method_3224)>(*this, lib, "kmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd>::invoke")
	->args({"self","addr","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovd_method_3226 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovd>;
addExtern<DAS_CALL_METHOD(_kmovd_method_3226)>(*this, lib, "kmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovd>::invoke")
	->args({"self","k","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovd_method_3228 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovd>;
addExtern<DAS_CALL_METHOD(_kmovd_method_3228)>(*this, lib, "kmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovd>::invoke")
	->args({"self","k","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovd_method_3230 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd>;
addExtern<DAS_CALL_METHOD(_kmovd_method_3230)>(*this, lib, "kmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd>::invoke")
	->args({"self","r","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovq_method_3232 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq>;
addExtern<DAS_CALL_METHOD(_kmovq_method_3232)>(*this, lib, "kmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq>::invoke")
	->args({"self","addr","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovq_method_3234 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovq>;
addExtern<DAS_CALL_METHOD(_kmovq_method_3234)>(*this, lib, "kmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovq>::invoke")
	->args({"self","k","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovw_method_3236 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw>;
addExtern<DAS_CALL_METHOD(_kmovw_method_3236)>(*this, lib, "kmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw>::invoke")
	->args({"self","addr","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovw_method_3238 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovw>;
addExtern<DAS_CALL_METHOD(_kmovw_method_3238)>(*this, lib, "kmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovw>::invoke")
	->args({"self","k","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovw_method_3240 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovw>;
addExtern<DAS_CALL_METHOD(_kmovw_method_3240)>(*this, lib, "kmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovw>::invoke")
	->args({"self","k","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovw_method_3242 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw>;
addExtern<DAS_CALL_METHOD(_kmovw_method_3242)>(*this, lib, "kmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw>::invoke")
	->args({"self","r","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _knotb_method_3244 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::knotb);
addExtern<DAS_CALL_METHOD(_knotb_method_3244)>(*this, lib, "knotb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::knotb))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _knotd_method_3246 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::knotd);
addExtern<DAS_CALL_METHOD(_knotd_method_3246)>(*this, lib, "knotd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::knotd))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _knotq_method_3248 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::knotq);
addExtern<DAS_CALL_METHOD(_knotq_method_3248)>(*this, lib, "knotq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::knotq))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _knotw_method_3250 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::knotw);
addExtern<DAS_CALL_METHOD(_knotw_method_3250)>(*this, lib, "knotw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::knotw))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _korb_method_3252 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::korb);
addExtern<DAS_CALL_METHOD(_korb_method_3252)>(*this, lib, "korb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::korb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kord_method_3254 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kord);
addExtern<DAS_CALL_METHOD(_kord_method_3254)>(*this, lib, "kord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kord))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _korq_method_3256 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::korq);
addExtern<DAS_CALL_METHOD(_korq_method_3256)>(*this, lib, "korq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::korq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kortestb_method_3258 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kortestb);
addExtern<DAS_CALL_METHOD(_kortestb_method_3258)>(*this, lib, "kortestb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kortestb))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kortestd_method_3260 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kortestd);
addExtern<DAS_CALL_METHOD(_kortestd_method_3260)>(*this, lib, "kortestd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kortestd))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kortestq_method_3262 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kortestq);
addExtern<DAS_CALL_METHOD(_kortestq_method_3262)>(*this, lib, "kortestq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kortestq))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kortestw_method_3264 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kortestw);
addExtern<DAS_CALL_METHOD(_kortestw_method_3264)>(*this, lib, "kortestw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kortestw))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _korw_method_3266 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::korw);
addExtern<DAS_CALL_METHOD(_korw_method_3266)>(*this, lib, "korw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::korw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftlb_method_3268 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftlb);
addExtern<DAS_CALL_METHOD(_kshiftlb_method_3268)>(*this, lib, "kshiftlb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftlb))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftld_method_3270 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftld);
addExtern<DAS_CALL_METHOD(_kshiftld_method_3270)>(*this, lib, "kshiftld",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftld))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftlq_method_3272 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftlq);
addExtern<DAS_CALL_METHOD(_kshiftlq_method_3272)>(*this, lib, "kshiftlq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftlq))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftlw_method_3274 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftlw);
addExtern<DAS_CALL_METHOD(_kshiftlw_method_3274)>(*this, lib, "kshiftlw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftlw))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftrb_method_3276 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftrb);
addExtern<DAS_CALL_METHOD(_kshiftrb_method_3276)>(*this, lib, "kshiftrb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftrb))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftrd_method_3278 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftrd);
addExtern<DAS_CALL_METHOD(_kshiftrd_method_3278)>(*this, lib, "kshiftrd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftrd))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftrq_method_3280 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftrq);
addExtern<DAS_CALL_METHOD(_kshiftrq_method_3280)>(*this, lib, "kshiftrq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftrq))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftrw_method_3282 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftrw);
addExtern<DAS_CALL_METHOD(_kshiftrw_method_3282)>(*this, lib, "kshiftrw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftrw))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ktestb_method_3284 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ktestb);
addExtern<DAS_CALL_METHOD(_ktestb_method_3284)>(*this, lib, "ktestb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ktestb))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ktestd_method_3286 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ktestd);
addExtern<DAS_CALL_METHOD(_ktestd_method_3286)>(*this, lib, "ktestd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ktestd))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ktestq_method_3288 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ktestq);
addExtern<DAS_CALL_METHOD(_ktestq_method_3288)>(*this, lib, "ktestq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ktestq))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ktestw_method_3290 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ktestw);
addExtern<DAS_CALL_METHOD(_ktestw_method_3290)>(*this, lib, "ktestw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ktestw))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kunpckbw_method_3292 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kunpckbw);
addExtern<DAS_CALL_METHOD(_kunpckbw_method_3292)>(*this, lib, "kunpckbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kunpckbw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kunpckdq_method_3294 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kunpckdq);
addExtern<DAS_CALL_METHOD(_kunpckdq_method_3294)>(*this, lib, "kunpckdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kunpckdq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kunpckwd_method_3296 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kunpckwd);
addExtern<DAS_CALL_METHOD(_kunpckwd_method_3296)>(*this, lib, "kunpckwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kunpckwd))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxnorb_method_3298 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxnorb);
addExtern<DAS_CALL_METHOD(_kxnorb_method_3298)>(*this, lib, "kxnorb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxnorb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxnord_method_3300 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxnord);
addExtern<DAS_CALL_METHOD(_kxnord_method_3300)>(*this, lib, "kxnord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxnord))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxnorq_method_3302 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxnorq);
addExtern<DAS_CALL_METHOD(_kxnorq_method_3302)>(*this, lib, "kxnorq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxnorq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxnorw_method_3304 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxnorw);
addExtern<DAS_CALL_METHOD(_kxnorw_method_3304)>(*this, lib, "kxnorw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxnorw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxorb_method_3306 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxorb);
addExtern<DAS_CALL_METHOD(_kxorb_method_3306)>(*this, lib, "kxorb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxorb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxord_method_3308 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxord);
addExtern<DAS_CALL_METHOD(_kxord_method_3308)>(*this, lib, "kxord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxord))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxorq_method_3310 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxorq);
addExtern<DAS_CALL_METHOD(_kxorq_method_3310)>(*this, lib, "kxorq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxorq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxorw_method_3312 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxorw);
addExtern<DAS_CALL_METHOD(_kxorw_method_3312)>(*this, lib, "kxorw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxorw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _v4fmaddps_method_3314 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::v4fmaddps);
addExtern<DAS_CALL_METHOD(_v4fmaddps_method_3314)>(*this, lib, "v4fmaddps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::v4fmaddps))
	->args({"self","z1","z2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _v4fmaddss_method_3316 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::v4fmaddss);
addExtern<DAS_CALL_METHOD(_v4fmaddss_method_3316)>(*this, lib, "v4fmaddss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::v4fmaddss))
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _v4fnmaddps_method_3318 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::v4fnmaddps);
addExtern<DAS_CALL_METHOD(_v4fnmaddps_method_3318)>(*this, lib, "v4fnmaddps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::v4fnmaddps))
	->args({"self","z1","z2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _v4fnmaddss_method_3320 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::v4fnmaddss);
addExtern<DAS_CALL_METHOD(_v4fnmaddss_method_3320)>(*this, lib, "v4fnmaddss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::v4fnmaddss))
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddph_method_3322 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddph);
addExtern<DAS_CALL_METHOD(_vaddph_method_3322)>(*this, lib, "vaddph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddsh_method_3324 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddsh);
addExtern<DAS_CALL_METHOD(_vaddsh_method_3324)>(*this, lib, "vaddsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddsh))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _valignd_method_3326 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::valignd);
addExtern<DAS_CALL_METHOD(_valignd_method_3326)>(*this, lib, "valignd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::valignd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _valignq_method_3328 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::valignq);
addExtern<DAS_CALL_METHOD(_valignq_method_3328)>(*this, lib, "valignq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::valignq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendmpd_method_3330 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendmpd);
addExtern<DAS_CALL_METHOD(_vblendmpd_method_3330)>(*this, lib, "vblendmpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendmpd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendmps_method_3332 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendmps);
addExtern<DAS_CALL_METHOD(_vblendmps_method_3332)>(*this, lib, "vblendmps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendmps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf32x2_method_3334 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf32x2);
addExtern<DAS_CALL_METHOD(_vbroadcastf32x2_method_3334)>(*this, lib, "vbroadcastf32x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf32x2))
	->args({"self","y","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf32x4_method_3336 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf32x4);
addExtern<DAS_CALL_METHOD(_vbroadcastf32x4_method_3336)>(*this, lib, "vbroadcastf32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf32x4))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf32x8_method_3338 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf32x8);
addExtern<DAS_CALL_METHOD(_vbroadcastf32x8_method_3338)>(*this, lib, "vbroadcastf32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf32x8))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf64x2_method_3340 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf64x2);
addExtern<DAS_CALL_METHOD(_vbroadcastf64x2_method_3340)>(*this, lib, "vbroadcastf64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf64x2))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf64x4_method_3342 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf64x4);
addExtern<DAS_CALL_METHOD(_vbroadcastf64x4_method_3342)>(*this, lib, "vbroadcastf64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf64x4))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti32x2_method_3344 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti32x2);
addExtern<DAS_CALL_METHOD(_vbroadcasti32x2_method_3344)>(*this, lib, "vbroadcasti32x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti32x2))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti32x4_method_3346 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti32x4);
addExtern<DAS_CALL_METHOD(_vbroadcasti32x4_method_3346)>(*this, lib, "vbroadcasti32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti32x4))
	->args({"self","y","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti32x8_method_3348 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti32x8);
addExtern<DAS_CALL_METHOD(_vbroadcasti32x8_method_3348)>(*this, lib, "vbroadcasti32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti32x8))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti64x2_method_3350 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti64x2);
addExtern<DAS_CALL_METHOD(_vbroadcasti64x2_method_3350)>(*this, lib, "vbroadcasti64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti64x2))
	->args({"self","y","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti64x4_method_3352 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti64x4);
addExtern<DAS_CALL_METHOD(_vbroadcasti64x4_method_3352)>(*this, lib, "vbroadcasti64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti64x4))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ospd_method_3354 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ospd_method_3354)>(*this, lib, "vcmpeq_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_osps_method_3356 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_osps_method_3356)>(*this, lib, "vcmpeq_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ossd_method_3358 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ossd_method_3358)>(*this, lib, "vcmpeq_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_osss_method_3360 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_osss_method_3360)>(*this, lib, "vcmpeq_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqpd_method_3362 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqpd_method_3362)>(*this, lib, "vcmpeq_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqps_method_3364 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqps_method_3364)>(*this, lib, "vcmpeq_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqsd_method_3366 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqsd_method_3366)>(*this, lib, "vcmpeq_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqss_method_3368 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqss_method_3368)>(*this, lib, "vcmpeq_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uspd_method_3370 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uspd_method_3370)>(*this, lib, "vcmpeq_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_usps_method_3372 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_usps_method_3372)>(*this, lib, "vcmpeq_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ussd_method_3374 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ussd_method_3374)>(*this, lib, "vcmpeq_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_usss_method_3376 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_usss_method_3376)>(*this, lib, "vcmpeq_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqpd_method_3378 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd>;
addExtern<DAS_CALL_METHOD(_vcmpeqpd_method_3378)>(*this, lib, "vcmpeqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif

#endif
#endif
}
}
