
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
void Module_Xbyak::initFunctions_11() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _vcmpgtps_method_2180 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps>;
addExtern<DAS_CALL_METHOD(_vcmpgtps_method_2180)>(*this, lib, "vcmpgtps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtsd_method_2182 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd>;
addExtern<DAS_CALL_METHOD(_vcmpgtsd_method_2182)>(*this, lib, "vcmpgtsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtss_method_2184 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss>;
addExtern<DAS_CALL_METHOD(_vcmpgtss_method_2184)>(*this, lib, "vcmpgtss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqpd_method_2186 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmple_oqpd_method_2186)>(*this, lib, "vcmple_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqps_method_2188 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps>;
addExtern<DAS_CALL_METHOD(_vcmple_oqps_method_2188)>(*this, lib, "vcmple_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqsd_method_2190 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmple_oqsd_method_2190)>(*this, lib, "vcmple_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqss_method_2192 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss>;
addExtern<DAS_CALL_METHOD(_vcmple_oqss_method_2192)>(*this, lib, "vcmple_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplepd_method_2194 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd>;
addExtern<DAS_CALL_METHOD(_vcmplepd_method_2194)>(*this, lib, "vcmplepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpleps_method_2196 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps>;
addExtern<DAS_CALL_METHOD(_vcmpleps_method_2196)>(*this, lib, "vcmpleps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplesd_method_2198 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd>;
addExtern<DAS_CALL_METHOD(_vcmplesd_method_2198)>(*this, lib, "vcmplesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpless_method_2200 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless>;
addExtern<DAS_CALL_METHOD(_vcmpless_method_2200)>(*this, lib, "vcmpless",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqpd_method_2202 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqpd_method_2202)>(*this, lib, "vcmplt_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqps_method_2204 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqps_method_2204)>(*this, lib, "vcmplt_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqsd_method_2206 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqsd_method_2206)>(*this, lib, "vcmplt_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqss_method_2208 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqss_method_2208)>(*this, lib, "vcmplt_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltpd_method_2210 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd>;
addExtern<DAS_CALL_METHOD(_vcmpltpd_method_2210)>(*this, lib, "vcmpltpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltps_method_2212 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps>;
addExtern<DAS_CALL_METHOD(_vcmpltps_method_2212)>(*this, lib, "vcmpltps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltsd_method_2214 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd>;
addExtern<DAS_CALL_METHOD(_vcmpltsd_method_2214)>(*this, lib, "vcmpltsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltss_method_2216 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss>;
addExtern<DAS_CALL_METHOD(_vcmpltss_method_2216)>(*this, lib, "vcmpltss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqpd_method_2218 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqpd_method_2218)>(*this, lib, "vcmpneq_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqps_method_2220 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqps_method_2220)>(*this, lib, "vcmpneq_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqsd_method_2222 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqsd_method_2222)>(*this, lib, "vcmpneq_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqss_method_2224 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqss_method_2224)>(*this, lib, "vcmpneq_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ospd_method_2226 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ospd_method_2226)>(*this, lib, "vcmpneq_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_osps_method_2228 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_osps_method_2228)>(*this, lib, "vcmpneq_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ossd_method_2230 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ossd_method_2230)>(*this, lib, "vcmpneq_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_osss_method_2232 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_osss_method_2232)>(*this, lib, "vcmpneq_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_uspd_method_2234 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_uspd_method_2234)>(*this, lib, "vcmpneq_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_usps_method_2236 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_usps_method_2236)>(*this, lib, "vcmpneq_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ussd_method_2238 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ussd_method_2238)>(*this, lib, "vcmpneq_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_usss_method_2240 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_usss_method_2240)>(*this, lib, "vcmpneq_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqpd_method_2242 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd>;
addExtern<DAS_CALL_METHOD(_vcmpneqpd_method_2242)>(*this, lib, "vcmpneqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqps_method_2244 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps>;
addExtern<DAS_CALL_METHOD(_vcmpneqps_method_2244)>(*this, lib, "vcmpneqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqsd_method_2246 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd>;
addExtern<DAS_CALL_METHOD(_vcmpneqsd_method_2246)>(*this, lib, "vcmpneqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqss_method_2248 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss>;
addExtern<DAS_CALL_METHOD(_vcmpneqss_method_2248)>(*this, lib, "vcmpneqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqpd_method_2250 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqpd_method_2250)>(*this, lib, "vcmpnge_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqps_method_2252 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqps_method_2252)>(*this, lib, "vcmpnge_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqsd_method_2254 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqsd_method_2254)>(*this, lib, "vcmpnge_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqss_method_2256 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqss_method_2256)>(*this, lib, "vcmpnge_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngepd_method_2258 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd>;
addExtern<DAS_CALL_METHOD(_vcmpngepd_method_2258)>(*this, lib, "vcmpngepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngeps_method_2260 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps>;
addExtern<DAS_CALL_METHOD(_vcmpngeps_method_2260)>(*this, lib, "vcmpngeps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngesd_method_2262 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd>;
addExtern<DAS_CALL_METHOD(_vcmpngesd_method_2262)>(*this, lib, "vcmpngesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngess_method_2264 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess>;
addExtern<DAS_CALL_METHOD(_vcmpngess_method_2264)>(*this, lib, "vcmpngess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqpd_method_2266 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqpd_method_2266)>(*this, lib, "vcmpngt_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqps_method_2268 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqps_method_2268)>(*this, lib, "vcmpngt_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqsd_method_2270 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqsd_method_2270)>(*this, lib, "vcmpngt_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqss_method_2272 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqss_method_2272)>(*this, lib, "vcmpngt_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtpd_method_2274 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd>;
addExtern<DAS_CALL_METHOD(_vcmpngtpd_method_2274)>(*this, lib, "vcmpngtpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtps_method_2276 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps>;
addExtern<DAS_CALL_METHOD(_vcmpngtps_method_2276)>(*this, lib, "vcmpngtps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtsd_method_2278 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd>;
addExtern<DAS_CALL_METHOD(_vcmpngtsd_method_2278)>(*this, lib, "vcmpngtsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtss_method_2280 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss>;
addExtern<DAS_CALL_METHOD(_vcmpngtss_method_2280)>(*this, lib, "vcmpngtss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqpd_method_2282 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqpd_method_2282)>(*this, lib, "vcmpnle_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqps_method_2284 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqps_method_2284)>(*this, lib, "vcmpnle_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqsd_method_2286 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqsd_method_2286)>(*this, lib, "vcmpnle_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqss_method_2288 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqss_method_2288)>(*this, lib, "vcmpnle_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlepd_method_2290 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd>;
addExtern<DAS_CALL_METHOD(_vcmpnlepd_method_2290)>(*this, lib, "vcmpnlepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnleps_method_2292 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps>;
addExtern<DAS_CALL_METHOD(_vcmpnleps_method_2292)>(*this, lib, "vcmpnleps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlesd_method_2294 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd>;
addExtern<DAS_CALL_METHOD(_vcmpnlesd_method_2294)>(*this, lib, "vcmpnlesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnless_method_2296 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless>;
addExtern<DAS_CALL_METHOD(_vcmpnless_method_2296)>(*this, lib, "vcmpnless",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqpd_method_2298 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqpd_method_2298)>(*this, lib, "vcmpnlt_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqps_method_2300 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqps_method_2300)>(*this, lib, "vcmpnlt_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqsd_method_2302 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqsd_method_2302)>(*this, lib, "vcmpnlt_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqss_method_2304 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqss_method_2304)>(*this, lib, "vcmpnlt_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltpd_method_2306 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd>;
addExtern<DAS_CALL_METHOD(_vcmpnltpd_method_2306)>(*this, lib, "vcmpnltpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltps_method_2308 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps>;
addExtern<DAS_CALL_METHOD(_vcmpnltps_method_2308)>(*this, lib, "vcmpnltps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltsd_method_2310 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd>;
addExtern<DAS_CALL_METHOD(_vcmpnltsd_method_2310)>(*this, lib, "vcmpnltsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltss_method_2312 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss>;
addExtern<DAS_CALL_METHOD(_vcmpnltss_method_2312)>(*this, lib, "vcmpnltss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_spd_method_2314 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd>;
addExtern<DAS_CALL_METHOD(_vcmpord_spd_method_2314)>(*this, lib, "vcmpord_spd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_sps_method_2316 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps>;
addExtern<DAS_CALL_METHOD(_vcmpord_sps_method_2316)>(*this, lib, "vcmpord_sps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_ssd_method_2318 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd>;
addExtern<DAS_CALL_METHOD(_vcmpord_ssd_method_2318)>(*this, lib, "vcmpord_ssd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_sss_method_2320 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss>;
addExtern<DAS_CALL_METHOD(_vcmpord_sss_method_2320)>(*this, lib, "vcmpord_sss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordpd_method_2322 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd>;
addExtern<DAS_CALL_METHOD(_vcmpordpd_method_2322)>(*this, lib, "vcmpordpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordps_method_2324 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps>;
addExtern<DAS_CALL_METHOD(_vcmpordps_method_2324)>(*this, lib, "vcmpordps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordsd_method_2326 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd>;
addExtern<DAS_CALL_METHOD(_vcmpordsd_method_2326)>(*this, lib, "vcmpordsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordss_method_2328 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss>;
addExtern<DAS_CALL_METHOD(_vcmpordss_method_2328)>(*this, lib, "vcmpordss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmppd_method_2330 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmppd>;
addExtern<DAS_CALL_METHOD(_vcmppd_method_2330)>(*this, lib, "vcmppd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmppd>::invoke")
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpps_method_2332 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpps>;
addExtern<DAS_CALL_METHOD(_vcmpps_method_2332)>(*this, lib, "vcmpps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpps>::invoke")
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpsd_method_2334 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpsd>;
addExtern<DAS_CALL_METHOD(_vcmpsd_method_2334)>(*this, lib, "vcmpsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpsd>::invoke")
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpss_method_2336 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpss>;
addExtern<DAS_CALL_METHOD(_vcmpss_method_2336)>(*this, lib, "vcmpss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpss>::invoke")
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_uspd_method_2338 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd>;
addExtern<DAS_CALL_METHOD(_vcmptrue_uspd_method_2338)>(*this, lib, "vcmptrue_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_usps_method_2340 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps>;
addExtern<DAS_CALL_METHOD(_vcmptrue_usps_method_2340)>(*this, lib, "vcmptrue_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_ussd_method_2342 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd>;
addExtern<DAS_CALL_METHOD(_vcmptrue_ussd_method_2342)>(*this, lib, "vcmptrue_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_usss_method_2344 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss>;
addExtern<DAS_CALL_METHOD(_vcmptrue_usss_method_2344)>(*this, lib, "vcmptrue_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruepd_method_2346 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd>;
addExtern<DAS_CALL_METHOD(_vcmptruepd_method_2346)>(*this, lib, "vcmptruepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrueps_method_2348 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps>;
addExtern<DAS_CALL_METHOD(_vcmptrueps_method_2348)>(*this, lib, "vcmptrueps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruesd_method_2350 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd>;
addExtern<DAS_CALL_METHOD(_vcmptruesd_method_2350)>(*this, lib, "vcmptruesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruess_method_2352 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess>;
addExtern<DAS_CALL_METHOD(_vcmptruess_method_2352)>(*this, lib, "vcmptruess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_spd_method_2354 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd>;
addExtern<DAS_CALL_METHOD(_vcmpunord_spd_method_2354)>(*this, lib, "vcmpunord_spd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_sps_method_2356 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps>;
addExtern<DAS_CALL_METHOD(_vcmpunord_sps_method_2356)>(*this, lib, "vcmpunord_sps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_ssd_method_2358 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd>;
addExtern<DAS_CALL_METHOD(_vcmpunord_ssd_method_2358)>(*this, lib, "vcmpunord_ssd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_sss_method_2360 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss>;
addExtern<DAS_CALL_METHOD(_vcmpunord_sss_method_2360)>(*this, lib, "vcmpunord_sss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordpd_method_2362 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd>;
addExtern<DAS_CALL_METHOD(_vcmpunordpd_method_2362)>(*this, lib, "vcmpunordpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordps_method_2364 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps>;
addExtern<DAS_CALL_METHOD(_vcmpunordps_method_2364)>(*this, lib, "vcmpunordps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordsd_method_2366 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd>;
addExtern<DAS_CALL_METHOD(_vcmpunordsd_method_2366)>(*this, lib, "vcmpunordsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordss_method_2368 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss>;
addExtern<DAS_CALL_METHOD(_vcmpunordss_method_2368)>(*this, lib, "vcmpunordss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcomisd_method_2370 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcomisd);
addExtern<DAS_CALL_METHOD(_vcomisd_method_2370)>(*this, lib, "vcomisd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcomisd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcomiss_method_2372 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcomiss);
addExtern<DAS_CALL_METHOD(_vcomiss_method_2372)>(*this, lib, "vcomiss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcomiss))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtdq2pd_method_2374 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtdq2pd);
addExtern<DAS_CALL_METHOD(_vcvtdq2pd_method_2374)>(*this, lib, "vcvtdq2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtdq2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtdq2ps_method_2376 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtdq2ps);
addExtern<DAS_CALL_METHOD(_vcvtdq2ps_method_2376)>(*this, lib, "vcvtdq2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtdq2ps))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2dq_method_2378 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2dq);
addExtern<DAS_CALL_METHOD(_vcvtpd2dq_method_2378)>(*this, lib, "vcvtpd2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2dq))
	->args({"self","x","op"})
;
#endif

#endif
#endif
}
}
