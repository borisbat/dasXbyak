
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
void Module_Xbyak::initFunctions_6() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _jnae_method_1180 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>;
addExtern<DAS_CALL_METHOD(_jnae_method_1180)>(*this, lib, "jnae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnb_method_1182 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>;
addExtern<DAS_CALL_METHOD(_jnb_method_1182)>(*this, lib, "jnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnb_method_1184 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>;
addExtern<DAS_CALL_METHOD(_jnb_method_1184)>(*this, lib, "jnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnb_method_1186 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnb>;
addExtern<DAS_CALL_METHOD(_jnb_method_1186)>(*this, lib, "jnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnb>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnb_method_1188 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>;
addExtern<DAS_CALL_METHOD(_jnb_method_1188)>(*this, lib, "jnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnbe_method_1190 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>;
addExtern<DAS_CALL_METHOD(_jnbe_method_1190)>(*this, lib, "jnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnbe_method_1192 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>;
addExtern<DAS_CALL_METHOD(_jnbe_method_1192)>(*this, lib, "jnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnbe_method_1194 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnbe>;
addExtern<DAS_CALL_METHOD(_jnbe_method_1194)>(*this, lib, "jnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnbe>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnbe_method_1196 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>;
addExtern<DAS_CALL_METHOD(_jnbe_method_1196)>(*this, lib, "jnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnc_method_1198 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>;
addExtern<DAS_CALL_METHOD(_jnc_method_1198)>(*this, lib, "jnc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnc_method_1200 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>;
addExtern<DAS_CALL_METHOD(_jnc_method_1200)>(*this, lib, "jnc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnc_method_1202 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnc>;
addExtern<DAS_CALL_METHOD(_jnc_method_1202)>(*this, lib, "jnc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnc>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnc_method_1204 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>;
addExtern<DAS_CALL_METHOD(_jnc_method_1204)>(*this, lib, "jnc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jne_method_1206 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>;
addExtern<DAS_CALL_METHOD(_jne_method_1206)>(*this, lib, "jne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jne_method_1208 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>;
addExtern<DAS_CALL_METHOD(_jne_method_1208)>(*this, lib, "jne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jne_method_1210 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jne>;
addExtern<DAS_CALL_METHOD(_jne_method_1210)>(*this, lib, "jne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jne>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jne_method_1212 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>;
addExtern<DAS_CALL_METHOD(_jne_method_1212)>(*this, lib, "jne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jng_method_1214 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>;
addExtern<DAS_CALL_METHOD(_jng_method_1214)>(*this, lib, "jng",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jng_method_1216 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>;
addExtern<DAS_CALL_METHOD(_jng_method_1216)>(*this, lib, "jng",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jng_method_1218 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jng>;
addExtern<DAS_CALL_METHOD(_jng_method_1218)>(*this, lib, "jng",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jng>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jng_method_1220 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>;
addExtern<DAS_CALL_METHOD(_jng_method_1220)>(*this, lib, "jng",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnge_method_1222 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>;
addExtern<DAS_CALL_METHOD(_jnge_method_1222)>(*this, lib, "jnge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnge_method_1224 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>;
addExtern<DAS_CALL_METHOD(_jnge_method_1224)>(*this, lib, "jnge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnge_method_1226 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnge>;
addExtern<DAS_CALL_METHOD(_jnge_method_1226)>(*this, lib, "jnge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnge>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnge_method_1228 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>;
addExtern<DAS_CALL_METHOD(_jnge_method_1228)>(*this, lib, "jnge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnl_method_1230 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>;
addExtern<DAS_CALL_METHOD(_jnl_method_1230)>(*this, lib, "jnl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnl_method_1232 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>;
addExtern<DAS_CALL_METHOD(_jnl_method_1232)>(*this, lib, "jnl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnl_method_1234 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnl>;
addExtern<DAS_CALL_METHOD(_jnl_method_1234)>(*this, lib, "jnl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnl>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnl_method_1236 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>;
addExtern<DAS_CALL_METHOD(_jnl_method_1236)>(*this, lib, "jnl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnle_method_1238 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>;
addExtern<DAS_CALL_METHOD(_jnle_method_1238)>(*this, lib, "jnle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnle_method_1240 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>;
addExtern<DAS_CALL_METHOD(_jnle_method_1240)>(*this, lib, "jnle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnle_method_1242 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnle>;
addExtern<DAS_CALL_METHOD(_jnle_method_1242)>(*this, lib, "jnle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnle>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnle_method_1244 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>;
addExtern<DAS_CALL_METHOD(_jnle_method_1244)>(*this, lib, "jnle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jno_method_1246 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>;
addExtern<DAS_CALL_METHOD(_jno_method_1246)>(*this, lib, "jno",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jno_method_1248 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>;
addExtern<DAS_CALL_METHOD(_jno_method_1248)>(*this, lib, "jno",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jno_method_1250 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jno>;
addExtern<DAS_CALL_METHOD(_jno_method_1250)>(*this, lib, "jno",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jno>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jno_method_1252 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>;
addExtern<DAS_CALL_METHOD(_jno_method_1252)>(*this, lib, "jno",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnp_method_1254 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>;
addExtern<DAS_CALL_METHOD(_jnp_method_1254)>(*this, lib, "jnp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnp_method_1256 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>;
addExtern<DAS_CALL_METHOD(_jnp_method_1256)>(*this, lib, "jnp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnp_method_1258 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnp>;
addExtern<DAS_CALL_METHOD(_jnp_method_1258)>(*this, lib, "jnp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnp>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnp_method_1260 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>;
addExtern<DAS_CALL_METHOD(_jnp_method_1260)>(*this, lib, "jnp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jns_method_1262 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>;
addExtern<DAS_CALL_METHOD(_jns_method_1262)>(*this, lib, "jns",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jns_method_1264 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>;
addExtern<DAS_CALL_METHOD(_jns_method_1264)>(*this, lib, "jns",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jns_method_1266 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jns>;
addExtern<DAS_CALL_METHOD(_jns_method_1266)>(*this, lib, "jns",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jns>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jns_method_1268 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>;
addExtern<DAS_CALL_METHOD(_jns_method_1268)>(*this, lib, "jns",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnz_method_1270 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>;
addExtern<DAS_CALL_METHOD(_jnz_method_1270)>(*this, lib, "jnz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnz_method_1272 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>;
addExtern<DAS_CALL_METHOD(_jnz_method_1272)>(*this, lib, "jnz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnz_method_1274 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnz>;
addExtern<DAS_CALL_METHOD(_jnz_method_1274)>(*this, lib, "jnz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnz>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnz_method_1276 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>;
addExtern<DAS_CALL_METHOD(_jnz_method_1276)>(*this, lib, "jnz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jo_method_1278 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>;
addExtern<DAS_CALL_METHOD(_jo_method_1278)>(*this, lib, "jo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jo_method_1280 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>;
addExtern<DAS_CALL_METHOD(_jo_method_1280)>(*this, lib, "jo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jo_method_1282 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jo>;
addExtern<DAS_CALL_METHOD(_jo_method_1282)>(*this, lib, "jo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jo>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jo_method_1284 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>;
addExtern<DAS_CALL_METHOD(_jo_method_1284)>(*this, lib, "jo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jp_method_1286 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>;
addExtern<DAS_CALL_METHOD(_jp_method_1286)>(*this, lib, "jp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jp_method_1288 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>;
addExtern<DAS_CALL_METHOD(_jp_method_1288)>(*this, lib, "jp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jp_method_1290 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jp>;
addExtern<DAS_CALL_METHOD(_jp_method_1290)>(*this, lib, "jp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jp>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jp_method_1292 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>;
addExtern<DAS_CALL_METHOD(_jp_method_1292)>(*this, lib, "jp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpe_method_1294 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>;
addExtern<DAS_CALL_METHOD(_jpe_method_1294)>(*this, lib, "jpe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpe_method_1296 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>;
addExtern<DAS_CALL_METHOD(_jpe_method_1296)>(*this, lib, "jpe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpe_method_1298 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpe>;
addExtern<DAS_CALL_METHOD(_jpe_method_1298)>(*this, lib, "jpe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpe>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpe_method_1300 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>;
addExtern<DAS_CALL_METHOD(_jpe_method_1300)>(*this, lib, "jpe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpo_method_1302 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>;
addExtern<DAS_CALL_METHOD(_jpo_method_1302)>(*this, lib, "jpo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpo_method_1304 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>;
addExtern<DAS_CALL_METHOD(_jpo_method_1304)>(*this, lib, "jpo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpo_method_1306 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpo>;
addExtern<DAS_CALL_METHOD(_jpo_method_1306)>(*this, lib, "jpo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpo>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpo_method_1308 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>;
addExtern<DAS_CALL_METHOD(_jpo_method_1308)>(*this, lib, "jpo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _js_method_1310 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>;
addExtern<DAS_CALL_METHOD(_js_method_1310)>(*this, lib, "js",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _js_method_1312 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>;
addExtern<DAS_CALL_METHOD(_js_method_1312)>(*this, lib, "js",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _js_method_1314 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::js>;
addExtern<DAS_CALL_METHOD(_js_method_1314)>(*this, lib, "js",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::js>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _js_method_1316 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>;
addExtern<DAS_CALL_METHOD(_js_method_1316)>(*this, lib, "js",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jz_method_1318 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>;
addExtern<DAS_CALL_METHOD(_jz_method_1318)>(*this, lib, "jz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jz_method_1320 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>;
addExtern<DAS_CALL_METHOD(_jz_method_1320)>(*this, lib, "jz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jz_method_1322 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jz>;
addExtern<DAS_CALL_METHOD(_jz_method_1322)>(*this, lib, "jz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jz>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jz_method_1324 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>;
addExtern<DAS_CALL_METHOD(_jz_method_1324)>(*this, lib, "jz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lahf_method_1326 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lahf);
addExtern<DAS_CALL_METHOD(_lahf_method_1326)>(*this, lib, "lahf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lahf))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lddqu_method_1328 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lddqu);
addExtern<DAS_CALL_METHOD(_lddqu_method_1328)>(*this, lib, "lddqu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lddqu))
	->args({"self","xmm","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ldmxcsr_method_1330 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ldmxcsr);
addExtern<DAS_CALL_METHOD(_ldmxcsr_method_1330)>(*this, lib, "ldmxcsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ldmxcsr))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lea_method_1332 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lea);
addExtern<DAS_CALL_METHOD(_lea_method_1332)>(*this, lib, "lea",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lea))
	->args({"self","reg","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _leave_method_1334 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::leave);
addExtern<DAS_CALL_METHOD(_leave_method_1334)>(*this, lib, "leave",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::leave))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lfence_method_1336 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lfence);
addExtern<DAS_CALL_METHOD(_lfence_method_1336)>(*this, lib, "lfence",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lfence))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lfs_method_1338 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lfs);
addExtern<DAS_CALL_METHOD(_lfs_method_1338)>(*this, lib, "lfs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lfs))
	->args({"self","reg","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lgs_method_1340 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lgs);
addExtern<DAS_CALL_METHOD(_lgs_method_1340)>(*this, lib, "lgs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lgs))
	->args({"self","reg","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lock_method_1342 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lock);
addExtern<DAS_CALL_METHOD(_lock_method_1342)>(*this, lib, "lock",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lock))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lodsb_method_1344 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lodsb);
addExtern<DAS_CALL_METHOD(_lodsb_method_1344)>(*this, lib, "lodsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lodsb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lodsd_method_1346 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lodsd);
addExtern<DAS_CALL_METHOD(_lodsd_method_1346)>(*this, lib, "lodsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lodsd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lodsw_method_1348 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lodsw);
addExtern<DAS_CALL_METHOD(_lodsw_method_1348)>(*this, lib, "lodsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lodsw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loop_method_1350 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loop>;
addExtern<DAS_CALL_METHOD(_loop_method_1350)>(*this, lib, "loop",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loop>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loop_method_1352 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loop>;
addExtern<DAS_CALL_METHOD(_loop_method_1352)>(*this, lib, "loop",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loop>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loop_method_1354 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loop>;
addExtern<DAS_CALL_METHOD(_loop_method_1354)>(*this, lib, "loop",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loop>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loope_method_1356 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loope>;
addExtern<DAS_CALL_METHOD(_loope_method_1356)>(*this, lib, "loope",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loope>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loope_method_1358 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loope>;
addExtern<DAS_CALL_METHOD(_loope_method_1358)>(*this, lib, "loope",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loope>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loope_method_1360 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loope>;
addExtern<DAS_CALL_METHOD(_loope_method_1360)>(*this, lib, "loope",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loope>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loopne_method_1362 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loopne>;
addExtern<DAS_CALL_METHOD(_loopne_method_1362)>(*this, lib, "loopne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loopne>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loopne_method_1364 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loopne>;
addExtern<DAS_CALL_METHOD(_loopne_method_1364)>(*this, lib, "loopne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loopne>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loopne_method_1366 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loopne>;
addExtern<DAS_CALL_METHOD(_loopne_method_1366)>(*this, lib, "loopne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loopne>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lss_method_1368 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lss);
addExtern<DAS_CALL_METHOD(_lss_method_1368)>(*this, lib, "lss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lss))
	->args({"self","reg","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lzcnt_method_1370 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lzcnt);
addExtern<DAS_CALL_METHOD(_lzcnt_method_1370)>(*this, lib, "lzcnt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lzcnt))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _maskmovdqu_method_1372 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maskmovdqu);
addExtern<DAS_CALL_METHOD(_maskmovdqu_method_1372)>(*this, lib, "maskmovdqu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maskmovdqu))
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _maskmovq_method_1374 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maskmovq);
addExtern<DAS_CALL_METHOD(_maskmovq_method_1374)>(*this, lib, "maskmovq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maskmovq))
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _maxpd_method_1376 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maxpd);
addExtern<DAS_CALL_METHOD(_maxpd_method_1376)>(*this, lib, "maxpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maxpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _maxps_method_1378 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maxps);
addExtern<DAS_CALL_METHOD(_maxps_method_1378)>(*this, lib, "maxps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maxps))
	->args({"self","xmm","op"})
;
#endif

#endif
#endif
}
}
