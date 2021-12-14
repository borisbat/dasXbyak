
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
void Module_Xbyak::initFunctions_17() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
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
