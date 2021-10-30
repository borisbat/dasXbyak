
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
void Module_Xbyak::initFunctions_8() {
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
#ifdef GLOBAL_NAMESPACE
using _vcmpeqps_method_3380 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps>;
addExtern<DAS_CALL_METHOD(_vcmpeqps_method_3380)>(*this, lib, "vcmpeqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqsd_method_3382 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd>;
addExtern<DAS_CALL_METHOD(_vcmpeqsd_method_3382)>(*this, lib, "vcmpeqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqss_method_3384 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss>;
addExtern<DAS_CALL_METHOD(_vcmpeqss_method_3384)>(*this, lib, "vcmpeqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_ospd_method_3386 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_ospd_method_3386)>(*this, lib, "vcmpfalse_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_osps_method_3388 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_osps_method_3388)>(*this, lib, "vcmpfalse_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_ossd_method_3390 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_ossd_method_3390)>(*this, lib, "vcmpfalse_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_osss_method_3392 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_osss_method_3392)>(*this, lib, "vcmpfalse_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsepd_method_3394 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd>;
addExtern<DAS_CALL_METHOD(_vcmpfalsepd_method_3394)>(*this, lib, "vcmpfalsepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalseps_method_3396 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps>;
addExtern<DAS_CALL_METHOD(_vcmpfalseps_method_3396)>(*this, lib, "vcmpfalseps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsesd_method_3398 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd>;
addExtern<DAS_CALL_METHOD(_vcmpfalsesd_method_3398)>(*this, lib, "vcmpfalsesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsess_method_3400 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess>;
addExtern<DAS_CALL_METHOD(_vcmpfalsess_method_3400)>(*this, lib, "vcmpfalsess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqpd_method_3402 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqpd_method_3402)>(*this, lib, "vcmpge_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqps_method_3404 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqps_method_3404)>(*this, lib, "vcmpge_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqsd_method_3406 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqsd_method_3406)>(*this, lib, "vcmpge_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqss_method_3408 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqss_method_3408)>(*this, lib, "vcmpge_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgepd_method_3410 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd>;
addExtern<DAS_CALL_METHOD(_vcmpgepd_method_3410)>(*this, lib, "vcmpgepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgeps_method_3412 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps>;
addExtern<DAS_CALL_METHOD(_vcmpgeps_method_3412)>(*this, lib, "vcmpgeps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgesd_method_3414 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd>;
addExtern<DAS_CALL_METHOD(_vcmpgesd_method_3414)>(*this, lib, "vcmpgesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgess_method_3416 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess>;
addExtern<DAS_CALL_METHOD(_vcmpgess_method_3416)>(*this, lib, "vcmpgess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqpd_method_3418 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqpd_method_3418)>(*this, lib, "vcmpgt_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqps_method_3420 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqps_method_3420)>(*this, lib, "vcmpgt_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqsd_method_3422 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqsd_method_3422)>(*this, lib, "vcmpgt_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqss_method_3424 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqss_method_3424)>(*this, lib, "vcmpgt_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtpd_method_3426 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd>;
addExtern<DAS_CALL_METHOD(_vcmpgtpd_method_3426)>(*this, lib, "vcmpgtpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtps_method_3428 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps>;
addExtern<DAS_CALL_METHOD(_vcmpgtps_method_3428)>(*this, lib, "vcmpgtps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtsd_method_3430 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd>;
addExtern<DAS_CALL_METHOD(_vcmpgtsd_method_3430)>(*this, lib, "vcmpgtsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtss_method_3432 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss>;
addExtern<DAS_CALL_METHOD(_vcmpgtss_method_3432)>(*this, lib, "vcmpgtss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqpd_method_3434 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmple_oqpd_method_3434)>(*this, lib, "vcmple_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqps_method_3436 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps>;
addExtern<DAS_CALL_METHOD(_vcmple_oqps_method_3436)>(*this, lib, "vcmple_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqsd_method_3438 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmple_oqsd_method_3438)>(*this, lib, "vcmple_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqss_method_3440 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss>;
addExtern<DAS_CALL_METHOD(_vcmple_oqss_method_3440)>(*this, lib, "vcmple_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplepd_method_3442 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd>;
addExtern<DAS_CALL_METHOD(_vcmplepd_method_3442)>(*this, lib, "vcmplepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpleps_method_3444 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps>;
addExtern<DAS_CALL_METHOD(_vcmpleps_method_3444)>(*this, lib, "vcmpleps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplesd_method_3446 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd>;
addExtern<DAS_CALL_METHOD(_vcmplesd_method_3446)>(*this, lib, "vcmplesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpless_method_3448 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless>;
addExtern<DAS_CALL_METHOD(_vcmpless_method_3448)>(*this, lib, "vcmpless",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqpd_method_3450 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqpd_method_3450)>(*this, lib, "vcmplt_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqps_method_3452 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqps_method_3452)>(*this, lib, "vcmplt_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqsd_method_3454 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqsd_method_3454)>(*this, lib, "vcmplt_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqss_method_3456 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqss_method_3456)>(*this, lib, "vcmplt_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltpd_method_3458 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd>;
addExtern<DAS_CALL_METHOD(_vcmpltpd_method_3458)>(*this, lib, "vcmpltpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltps_method_3460 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps>;
addExtern<DAS_CALL_METHOD(_vcmpltps_method_3460)>(*this, lib, "vcmpltps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltsd_method_3462 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd>;
addExtern<DAS_CALL_METHOD(_vcmpltsd_method_3462)>(*this, lib, "vcmpltsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltss_method_3464 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss>;
addExtern<DAS_CALL_METHOD(_vcmpltss_method_3464)>(*this, lib, "vcmpltss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqpd_method_3466 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqpd_method_3466)>(*this, lib, "vcmpneq_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqps_method_3468 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqps_method_3468)>(*this, lib, "vcmpneq_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqsd_method_3470 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqsd_method_3470)>(*this, lib, "vcmpneq_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqss_method_3472 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqss_method_3472)>(*this, lib, "vcmpneq_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ospd_method_3474 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ospd_method_3474)>(*this, lib, "vcmpneq_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_osps_method_3476 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_osps_method_3476)>(*this, lib, "vcmpneq_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ossd_method_3478 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ossd_method_3478)>(*this, lib, "vcmpneq_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_osss_method_3480 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_osss_method_3480)>(*this, lib, "vcmpneq_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_uspd_method_3482 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_uspd_method_3482)>(*this, lib, "vcmpneq_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_usps_method_3484 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_usps_method_3484)>(*this, lib, "vcmpneq_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ussd_method_3486 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ussd_method_3486)>(*this, lib, "vcmpneq_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_usss_method_3488 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_usss_method_3488)>(*this, lib, "vcmpneq_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqpd_method_3490 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd>;
addExtern<DAS_CALL_METHOD(_vcmpneqpd_method_3490)>(*this, lib, "vcmpneqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqps_method_3492 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps>;
addExtern<DAS_CALL_METHOD(_vcmpneqps_method_3492)>(*this, lib, "vcmpneqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqsd_method_3494 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd>;
addExtern<DAS_CALL_METHOD(_vcmpneqsd_method_3494)>(*this, lib, "vcmpneqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqss_method_3496 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss>;
addExtern<DAS_CALL_METHOD(_vcmpneqss_method_3496)>(*this, lib, "vcmpneqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqpd_method_3498 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqpd_method_3498)>(*this, lib, "vcmpnge_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqps_method_3500 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqps_method_3500)>(*this, lib, "vcmpnge_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqsd_method_3502 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqsd_method_3502)>(*this, lib, "vcmpnge_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqss_method_3504 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqss_method_3504)>(*this, lib, "vcmpnge_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngepd_method_3506 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd>;
addExtern<DAS_CALL_METHOD(_vcmpngepd_method_3506)>(*this, lib, "vcmpngepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngeps_method_3508 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps>;
addExtern<DAS_CALL_METHOD(_vcmpngeps_method_3508)>(*this, lib, "vcmpngeps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngesd_method_3510 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd>;
addExtern<DAS_CALL_METHOD(_vcmpngesd_method_3510)>(*this, lib, "vcmpngesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngess_method_3512 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess>;
addExtern<DAS_CALL_METHOD(_vcmpngess_method_3512)>(*this, lib, "vcmpngess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqpd_method_3514 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqpd_method_3514)>(*this, lib, "vcmpngt_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqps_method_3516 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqps_method_3516)>(*this, lib, "vcmpngt_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqsd_method_3518 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqsd_method_3518)>(*this, lib, "vcmpngt_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqss_method_3520 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqss_method_3520)>(*this, lib, "vcmpngt_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtpd_method_3522 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd>;
addExtern<DAS_CALL_METHOD(_vcmpngtpd_method_3522)>(*this, lib, "vcmpngtpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtps_method_3524 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps>;
addExtern<DAS_CALL_METHOD(_vcmpngtps_method_3524)>(*this, lib, "vcmpngtps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtsd_method_3526 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd>;
addExtern<DAS_CALL_METHOD(_vcmpngtsd_method_3526)>(*this, lib, "vcmpngtsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtss_method_3528 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss>;
addExtern<DAS_CALL_METHOD(_vcmpngtss_method_3528)>(*this, lib, "vcmpngtss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqpd_method_3530 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqpd_method_3530)>(*this, lib, "vcmpnle_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqps_method_3532 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqps_method_3532)>(*this, lib, "vcmpnle_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqsd_method_3534 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqsd_method_3534)>(*this, lib, "vcmpnle_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqss_method_3536 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqss_method_3536)>(*this, lib, "vcmpnle_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlepd_method_3538 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd>;
addExtern<DAS_CALL_METHOD(_vcmpnlepd_method_3538)>(*this, lib, "vcmpnlepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnleps_method_3540 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps>;
addExtern<DAS_CALL_METHOD(_vcmpnleps_method_3540)>(*this, lib, "vcmpnleps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlesd_method_3542 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd>;
addExtern<DAS_CALL_METHOD(_vcmpnlesd_method_3542)>(*this, lib, "vcmpnlesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnless_method_3544 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless>;
addExtern<DAS_CALL_METHOD(_vcmpnless_method_3544)>(*this, lib, "vcmpnless",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqpd_method_3546 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqpd_method_3546)>(*this, lib, "vcmpnlt_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqps_method_3548 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqps_method_3548)>(*this, lib, "vcmpnlt_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqsd_method_3550 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqsd_method_3550)>(*this, lib, "vcmpnlt_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqss_method_3552 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqss_method_3552)>(*this, lib, "vcmpnlt_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltpd_method_3554 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd>;
addExtern<DAS_CALL_METHOD(_vcmpnltpd_method_3554)>(*this, lib, "vcmpnltpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltps_method_3556 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps>;
addExtern<DAS_CALL_METHOD(_vcmpnltps_method_3556)>(*this, lib, "vcmpnltps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltsd_method_3558 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd>;
addExtern<DAS_CALL_METHOD(_vcmpnltsd_method_3558)>(*this, lib, "vcmpnltsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltss_method_3560 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss>;
addExtern<DAS_CALL_METHOD(_vcmpnltss_method_3560)>(*this, lib, "vcmpnltss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_spd_method_3562 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd>;
addExtern<DAS_CALL_METHOD(_vcmpord_spd_method_3562)>(*this, lib, "vcmpord_spd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_sps_method_3564 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps>;
addExtern<DAS_CALL_METHOD(_vcmpord_sps_method_3564)>(*this, lib, "vcmpord_sps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_ssd_method_3566 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd>;
addExtern<DAS_CALL_METHOD(_vcmpord_ssd_method_3566)>(*this, lib, "vcmpord_ssd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_sss_method_3568 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss>;
addExtern<DAS_CALL_METHOD(_vcmpord_sss_method_3568)>(*this, lib, "vcmpord_sss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordpd_method_3570 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd>;
addExtern<DAS_CALL_METHOD(_vcmpordpd_method_3570)>(*this, lib, "vcmpordpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordps_method_3572 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps>;
addExtern<DAS_CALL_METHOD(_vcmpordps_method_3572)>(*this, lib, "vcmpordps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordsd_method_3574 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd>;
addExtern<DAS_CALL_METHOD(_vcmpordsd_method_3574)>(*this, lib, "vcmpordsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordss_method_3576 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss>;
addExtern<DAS_CALL_METHOD(_vcmpordss_method_3576)>(*this, lib, "vcmpordss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmppd_method_3578 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmppd>;
addExtern<DAS_CALL_METHOD(_vcmppd_method_3578)>(*this, lib, "vcmppd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmppd>::invoke")
	->args({"self","k","x","op","imm"})
;
#endif

#endif
#endif
}
}
