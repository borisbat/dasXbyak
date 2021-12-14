
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
void Module_Xbyak::initFunctions_12() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2ps_method_2380 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2ps);
addExtern<DAS_CALL_METHOD(_vcvtpd2ps_method_2380)>(*this, lib, "vcvtpd2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2ps_method_2382 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2ps);
addExtern<DAS_CALL_METHOD(_vcvtph2ps_method_2382)>(*this, lib, "vcvtph2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2dq_method_2384 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2dq);
addExtern<DAS_CALL_METHOD(_vcvtps2dq_method_2384)>(*this, lib, "vcvtps2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2dq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2pd_method_2386 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2pd);
addExtern<DAS_CALL_METHOD(_vcvtps2pd_method_2386)>(*this, lib, "vcvtps2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2ph_method_2388 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2ph);
addExtern<DAS_CALL_METHOD(_vcvtps2ph_method_2388)>(*this, lib, "vcvtps2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2ph))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsd2si_method_2390 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si>;
addExtern<DAS_CALL_METHOD(_vcvtsd2si_method_2390)>(*this, lib, "vcvtsd2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsd2ss_method_2392 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsd2ss);
addExtern<DAS_CALL_METHOD(_vcvtsd2ss_method_2392)>(*this, lib, "vcvtsd2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsd2ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsi2sd_method_2394 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsi2sd);
addExtern<DAS_CALL_METHOD(_vcvtsi2sd_method_2394)>(*this, lib, "vcvtsi2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsi2sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsi2ss_method_2396 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsi2ss);
addExtern<DAS_CALL_METHOD(_vcvtsi2ss_method_2396)>(*this, lib, "vcvtsi2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsi2ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtss2sd_method_2398 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtss2sd);
addExtern<DAS_CALL_METHOD(_vcvtss2sd_method_2398)>(*this, lib, "vcvtss2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtss2sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtss2si_method_2400 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si>;
addExtern<DAS_CALL_METHOD(_vcvtss2si_method_2400)>(*this, lib, "vcvtss2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttpd2dq_method_2402 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttpd2dq);
addExtern<DAS_CALL_METHOD(_vcvttpd2dq_method_2402)>(*this, lib, "vcvttpd2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttpd2dq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttps2dq_method_2404 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttps2dq);
addExtern<DAS_CALL_METHOD(_vcvttps2dq_method_2404)>(*this, lib, "vcvttps2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttps2dq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttsd2si_method_2406 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si>;
addExtern<DAS_CALL_METHOD(_vcvttsd2si_method_2406)>(*this, lib, "vcvttsd2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttss2si_method_2408 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si>;
addExtern<DAS_CALL_METHOD(_vcvttss2si_method_2408)>(*this, lib, "vcvttss2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivpd_method_2410 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivpd);
addExtern<DAS_CALL_METHOD(_vdivpd_method_2410)>(*this, lib, "vdivpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivps_method_2412 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivps);
addExtern<DAS_CALL_METHOD(_vdivps_method_2412)>(*this, lib, "vdivps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivsd_method_2414 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivsd);
addExtern<DAS_CALL_METHOD(_vdivsd_method_2414)>(*this, lib, "vdivsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivss_method_2416 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivss);
addExtern<DAS_CALL_METHOD(_vdivss_method_2416)>(*this, lib, "vdivss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdppd_method_2418 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdppd);
addExtern<DAS_CALL_METHOD(_vdppd_method_2418)>(*this, lib, "vdppd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdppd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdpps_method_2420 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdpps);
addExtern<DAS_CALL_METHOD(_vdpps_method_2420)>(*this, lib, "vdpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdpps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractf128_method_2422 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractf128);
addExtern<DAS_CALL_METHOD(_vextractf128_method_2422)>(*this, lib, "vextractf128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractf128))
	->args({"self","op","y","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextracti128_method_2424 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextracti128);
addExtern<DAS_CALL_METHOD(_vextracti128_method_2424)>(*this, lib, "vextracti128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextracti128))
	->args({"self","op","y","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractps_method_2426 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractps);
addExtern<DAS_CALL_METHOD(_vextractps_method_2426)>(*this, lib, "vextractps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractps))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132pd_method_2428 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132pd);
addExtern<DAS_CALL_METHOD(_vfmadd132pd_method_2428)>(*this, lib, "vfmadd132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132ps_method_2430 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132ps);
addExtern<DAS_CALL_METHOD(_vfmadd132ps_method_2430)>(*this, lib, "vfmadd132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132sd_method_2432 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132sd);
addExtern<DAS_CALL_METHOD(_vfmadd132sd_method_2432)>(*this, lib, "vfmadd132sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132ss_method_2434 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132ss);
addExtern<DAS_CALL_METHOD(_vfmadd132ss_method_2434)>(*this, lib, "vfmadd132ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213pd_method_2436 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213pd);
addExtern<DAS_CALL_METHOD(_vfmadd213pd_method_2436)>(*this, lib, "vfmadd213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213ps_method_2438 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213ps);
addExtern<DAS_CALL_METHOD(_vfmadd213ps_method_2438)>(*this, lib, "vfmadd213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213sd_method_2440 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213sd);
addExtern<DAS_CALL_METHOD(_vfmadd213sd_method_2440)>(*this, lib, "vfmadd213sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213ss_method_2442 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213ss);
addExtern<DAS_CALL_METHOD(_vfmadd213ss_method_2442)>(*this, lib, "vfmadd213ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231pd_method_2444 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231pd);
addExtern<DAS_CALL_METHOD(_vfmadd231pd_method_2444)>(*this, lib, "vfmadd231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231ps_method_2446 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231ps);
addExtern<DAS_CALL_METHOD(_vfmadd231ps_method_2446)>(*this, lib, "vfmadd231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231sd_method_2448 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231sd);
addExtern<DAS_CALL_METHOD(_vfmadd231sd_method_2448)>(*this, lib, "vfmadd231sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231ss_method_2450 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231ss);
addExtern<DAS_CALL_METHOD(_vfmadd231ss_method_2450)>(*this, lib, "vfmadd231ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub132pd_method_2452 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub132pd);
addExtern<DAS_CALL_METHOD(_vfmaddsub132pd_method_2452)>(*this, lib, "vfmaddsub132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub132ps_method_2454 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub132ps);
addExtern<DAS_CALL_METHOD(_vfmaddsub132ps_method_2454)>(*this, lib, "vfmaddsub132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub213pd_method_2456 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub213pd);
addExtern<DAS_CALL_METHOD(_vfmaddsub213pd_method_2456)>(*this, lib, "vfmaddsub213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub213ps_method_2458 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub213ps);
addExtern<DAS_CALL_METHOD(_vfmaddsub213ps_method_2458)>(*this, lib, "vfmaddsub213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub231pd_method_2460 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub231pd);
addExtern<DAS_CALL_METHOD(_vfmaddsub231pd_method_2460)>(*this, lib, "vfmaddsub231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub231ps_method_2462 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub231ps);
addExtern<DAS_CALL_METHOD(_vfmaddsub231ps_method_2462)>(*this, lib, "vfmaddsub231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132pd_method_2464 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132pd);
addExtern<DAS_CALL_METHOD(_vfmsub132pd_method_2464)>(*this, lib, "vfmsub132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132ps_method_2466 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132ps);
addExtern<DAS_CALL_METHOD(_vfmsub132ps_method_2466)>(*this, lib, "vfmsub132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132sd_method_2468 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132sd);
addExtern<DAS_CALL_METHOD(_vfmsub132sd_method_2468)>(*this, lib, "vfmsub132sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132ss_method_2470 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132ss);
addExtern<DAS_CALL_METHOD(_vfmsub132ss_method_2470)>(*this, lib, "vfmsub132ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213pd_method_2472 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213pd);
addExtern<DAS_CALL_METHOD(_vfmsub213pd_method_2472)>(*this, lib, "vfmsub213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213ps_method_2474 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213ps);
addExtern<DAS_CALL_METHOD(_vfmsub213ps_method_2474)>(*this, lib, "vfmsub213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213sd_method_2476 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213sd);
addExtern<DAS_CALL_METHOD(_vfmsub213sd_method_2476)>(*this, lib, "vfmsub213sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213ss_method_2478 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213ss);
addExtern<DAS_CALL_METHOD(_vfmsub213ss_method_2478)>(*this, lib, "vfmsub213ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231pd_method_2480 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231pd);
addExtern<DAS_CALL_METHOD(_vfmsub231pd_method_2480)>(*this, lib, "vfmsub231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231ps_method_2482 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231ps);
addExtern<DAS_CALL_METHOD(_vfmsub231ps_method_2482)>(*this, lib, "vfmsub231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231sd_method_2484 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231sd);
addExtern<DAS_CALL_METHOD(_vfmsub231sd_method_2484)>(*this, lib, "vfmsub231sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231ss_method_2486 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231ss);
addExtern<DAS_CALL_METHOD(_vfmsub231ss_method_2486)>(*this, lib, "vfmsub231ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd132pd_method_2488 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd132pd);
addExtern<DAS_CALL_METHOD(_vfmsubadd132pd_method_2488)>(*this, lib, "vfmsubadd132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd132ps_method_2490 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd132ps);
addExtern<DAS_CALL_METHOD(_vfmsubadd132ps_method_2490)>(*this, lib, "vfmsubadd132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd213pd_method_2492 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd213pd);
addExtern<DAS_CALL_METHOD(_vfmsubadd213pd_method_2492)>(*this, lib, "vfmsubadd213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd213ps_method_2494 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd213ps);
addExtern<DAS_CALL_METHOD(_vfmsubadd213ps_method_2494)>(*this, lib, "vfmsubadd213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd231pd_method_2496 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd231pd);
addExtern<DAS_CALL_METHOD(_vfmsubadd231pd_method_2496)>(*this, lib, "vfmsubadd231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd231ps_method_2498 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd231ps);
addExtern<DAS_CALL_METHOD(_vfmsubadd231ps_method_2498)>(*this, lib, "vfmsubadd231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132pd_method_2500 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132pd);
addExtern<DAS_CALL_METHOD(_vfnmadd132pd_method_2500)>(*this, lib, "vfnmadd132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132ps_method_2502 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132ps);
addExtern<DAS_CALL_METHOD(_vfnmadd132ps_method_2502)>(*this, lib, "vfnmadd132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132sd_method_2504 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132sd);
addExtern<DAS_CALL_METHOD(_vfnmadd132sd_method_2504)>(*this, lib, "vfnmadd132sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132ss_method_2506 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132ss);
addExtern<DAS_CALL_METHOD(_vfnmadd132ss_method_2506)>(*this, lib, "vfnmadd132ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213pd_method_2508 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213pd);
addExtern<DAS_CALL_METHOD(_vfnmadd213pd_method_2508)>(*this, lib, "vfnmadd213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213ps_method_2510 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213ps);
addExtern<DAS_CALL_METHOD(_vfnmadd213ps_method_2510)>(*this, lib, "vfnmadd213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213sd_method_2512 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213sd);
addExtern<DAS_CALL_METHOD(_vfnmadd213sd_method_2512)>(*this, lib, "vfnmadd213sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213ss_method_2514 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213ss);
addExtern<DAS_CALL_METHOD(_vfnmadd213ss_method_2514)>(*this, lib, "vfnmadd213ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231pd_method_2516 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231pd);
addExtern<DAS_CALL_METHOD(_vfnmadd231pd_method_2516)>(*this, lib, "vfnmadd231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231ps_method_2518 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231ps);
addExtern<DAS_CALL_METHOD(_vfnmadd231ps_method_2518)>(*this, lib, "vfnmadd231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231sd_method_2520 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231sd);
addExtern<DAS_CALL_METHOD(_vfnmadd231sd_method_2520)>(*this, lib, "vfnmadd231sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231ss_method_2522 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231ss);
addExtern<DAS_CALL_METHOD(_vfnmadd231ss_method_2522)>(*this, lib, "vfnmadd231ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132pd_method_2524 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132pd);
addExtern<DAS_CALL_METHOD(_vfnmsub132pd_method_2524)>(*this, lib, "vfnmsub132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132ps_method_2526 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132ps);
addExtern<DAS_CALL_METHOD(_vfnmsub132ps_method_2526)>(*this, lib, "vfnmsub132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132sd_method_2528 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132sd);
addExtern<DAS_CALL_METHOD(_vfnmsub132sd_method_2528)>(*this, lib, "vfnmsub132sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132ss_method_2530 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132ss);
addExtern<DAS_CALL_METHOD(_vfnmsub132ss_method_2530)>(*this, lib, "vfnmsub132ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213pd_method_2532 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213pd);
addExtern<DAS_CALL_METHOD(_vfnmsub213pd_method_2532)>(*this, lib, "vfnmsub213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213ps_method_2534 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213ps);
addExtern<DAS_CALL_METHOD(_vfnmsub213ps_method_2534)>(*this, lib, "vfnmsub213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213sd_method_2536 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213sd);
addExtern<DAS_CALL_METHOD(_vfnmsub213sd_method_2536)>(*this, lib, "vfnmsub213sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213ss_method_2538 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213ss);
addExtern<DAS_CALL_METHOD(_vfnmsub213ss_method_2538)>(*this, lib, "vfnmsub213ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231pd_method_2540 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231pd);
addExtern<DAS_CALL_METHOD(_vfnmsub231pd_method_2540)>(*this, lib, "vfnmsub231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231ps_method_2542 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231ps);
addExtern<DAS_CALL_METHOD(_vfnmsub231ps_method_2542)>(*this, lib, "vfnmsub231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231sd_method_2544 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231sd);
addExtern<DAS_CALL_METHOD(_vfnmsub231sd_method_2544)>(*this, lib, "vfnmsub231sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231ss_method_2546 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231ss);
addExtern<DAS_CALL_METHOD(_vfnmsub231ss_method_2546)>(*this, lib, "vfnmsub231ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherdpd_method_2548 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdpd>;
addExtern<DAS_CALL_METHOD(_vgatherdpd_method_2548)>(*this, lib, "vgatherdpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdpd>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherdps_method_2550 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdps>;
addExtern<DAS_CALL_METHOD(_vgatherdps_method_2550)>(*this, lib, "vgatherdps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdps>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherqpd_method_2552 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqpd>;
addExtern<DAS_CALL_METHOD(_vgatherqpd_method_2552)>(*this, lib, "vgatherqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqpd>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherqps_method_2554 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqps>;
addExtern<DAS_CALL_METHOD(_vgatherqps_method_2554)>(*this, lib, "vgatherqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqps>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgf2p8affineinvqb_method_2556 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgf2p8affineinvqb);
addExtern<DAS_CALL_METHOD(_vgf2p8affineinvqb_method_2556)>(*this, lib, "vgf2p8affineinvqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgf2p8affineinvqb))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgf2p8affineqb_method_2558 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgf2p8affineqb);
addExtern<DAS_CALL_METHOD(_vgf2p8affineqb_method_2558)>(*this, lib, "vgf2p8affineqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgf2p8affineqb))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgf2p8mulb_method_2560 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgf2p8mulb);
addExtern<DAS_CALL_METHOD(_vgf2p8mulb_method_2560)>(*this, lib, "vgf2p8mulb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgf2p8mulb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vhaddpd_method_2562 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vhaddpd);
addExtern<DAS_CALL_METHOD(_vhaddpd_method_2562)>(*this, lib, "vhaddpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vhaddpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vhaddps_method_2564 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vhaddps);
addExtern<DAS_CALL_METHOD(_vhaddps_method_2564)>(*this, lib, "vhaddps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vhaddps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vhsubpd_method_2566 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vhsubpd);
addExtern<DAS_CALL_METHOD(_vhsubpd_method_2566)>(*this, lib, "vhsubpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vhsubpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vhsubps_method_2568 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vhsubps);
addExtern<DAS_CALL_METHOD(_vhsubps_method_2568)>(*this, lib, "vhsubps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vhsubps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertf128_method_2570 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertf128);
addExtern<DAS_CALL_METHOD(_vinsertf128_method_2570)>(*this, lib, "vinsertf128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertf128))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinserti128_method_2572 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinserti128);
addExtern<DAS_CALL_METHOD(_vinserti128_method_2572)>(*this, lib, "vinserti128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinserti128))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertps_method_2574 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertps);
addExtern<DAS_CALL_METHOD(_vinsertps_method_2574)>(*this, lib, "vinsertps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vlddqu_method_2576 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vlddqu);
addExtern<DAS_CALL_METHOD(_vlddqu_method_2576)>(*this, lib, "vlddqu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vlddqu))
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vldmxcsr_method_2578 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vldmxcsr);
addExtern<DAS_CALL_METHOD(_vldmxcsr_method_2578)>(*this, lib, "vldmxcsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vldmxcsr))
	->args({"self","addr"})
;
#endif

#endif
#endif
}
}
