
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
void Module_Xbyak::initFunctions_18() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _vcmpph_method_3580 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcmpph);
addExtern<DAS_CALL_METHOD(_vcmpph_method_3580)>(*this, lib, "vcmpph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcmpph))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpps_method_3582 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpps>;
addExtern<DAS_CALL_METHOD(_vcmpps_method_3582)>(*this, lib, "vcmpps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpps>::invoke")
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpsd_method_3584 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpsd>;
addExtern<DAS_CALL_METHOD(_vcmpsd_method_3584)>(*this, lib, "vcmpsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpsd>::invoke")
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpsh_method_3586 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcmpsh);
addExtern<DAS_CALL_METHOD(_vcmpsh_method_3586)>(*this, lib, "vcmpsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcmpsh))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpss_method_3588 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpss>;
addExtern<DAS_CALL_METHOD(_vcmpss_method_3588)>(*this, lib, "vcmpss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpss>::invoke")
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_uspd_method_3590 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd>;
addExtern<DAS_CALL_METHOD(_vcmptrue_uspd_method_3590)>(*this, lib, "vcmptrue_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_usps_method_3592 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps>;
addExtern<DAS_CALL_METHOD(_vcmptrue_usps_method_3592)>(*this, lib, "vcmptrue_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_ussd_method_3594 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd>;
addExtern<DAS_CALL_METHOD(_vcmptrue_ussd_method_3594)>(*this, lib, "vcmptrue_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_usss_method_3596 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss>;
addExtern<DAS_CALL_METHOD(_vcmptrue_usss_method_3596)>(*this, lib, "vcmptrue_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruepd_method_3598 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd>;
addExtern<DAS_CALL_METHOD(_vcmptruepd_method_3598)>(*this, lib, "vcmptruepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrueps_method_3600 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps>;
addExtern<DAS_CALL_METHOD(_vcmptrueps_method_3600)>(*this, lib, "vcmptrueps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruesd_method_3602 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd>;
addExtern<DAS_CALL_METHOD(_vcmptruesd_method_3602)>(*this, lib, "vcmptruesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruess_method_3604 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess>;
addExtern<DAS_CALL_METHOD(_vcmptruess_method_3604)>(*this, lib, "vcmptruess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_spd_method_3606 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd>;
addExtern<DAS_CALL_METHOD(_vcmpunord_spd_method_3606)>(*this, lib, "vcmpunord_spd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_sps_method_3608 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps>;
addExtern<DAS_CALL_METHOD(_vcmpunord_sps_method_3608)>(*this, lib, "vcmpunord_sps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_ssd_method_3610 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd>;
addExtern<DAS_CALL_METHOD(_vcmpunord_ssd_method_3610)>(*this, lib, "vcmpunord_ssd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_sss_method_3612 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss>;
addExtern<DAS_CALL_METHOD(_vcmpunord_sss_method_3612)>(*this, lib, "vcmpunord_sss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordpd_method_3614 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd>;
addExtern<DAS_CALL_METHOD(_vcmpunordpd_method_3614)>(*this, lib, "vcmpunordpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordps_method_3616 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps>;
addExtern<DAS_CALL_METHOD(_vcmpunordps_method_3616)>(*this, lib, "vcmpunordps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordsd_method_3618 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd>;
addExtern<DAS_CALL_METHOD(_vcmpunordsd_method_3618)>(*this, lib, "vcmpunordsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordss_method_3620 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss>;
addExtern<DAS_CALL_METHOD(_vcmpunordss_method_3620)>(*this, lib, "vcmpunordss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcomish_method_3622 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcomish);
addExtern<DAS_CALL_METHOD(_vcomish_method_3622)>(*this, lib, "vcomish",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcomish))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcompressb_method_3624 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcompressb);
addExtern<DAS_CALL_METHOD(_vcompressb_method_3624)>(*this, lib, "vcompressb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcompressb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcompresspd_method_3626 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcompresspd);
addExtern<DAS_CALL_METHOD(_vcompresspd_method_3626)>(*this, lib, "vcompresspd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcompresspd))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcompressps_method_3628 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcompressps);
addExtern<DAS_CALL_METHOD(_vcompressps_method_3628)>(*this, lib, "vcompressps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcompressps))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcompressw_method_3630 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcompressw);
addExtern<DAS_CALL_METHOD(_vcompressw_method_3630)>(*this, lib, "vcompressw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcompressw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtdq2ph_method_3632 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtdq2ph);
addExtern<DAS_CALL_METHOD(_vcvtdq2ph_method_3632)>(*this, lib, "vcvtdq2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtdq2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtne2ps2bf16_method_3634 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtne2ps2bf16);
addExtern<DAS_CALL_METHOD(_vcvtne2ps2bf16_method_3634)>(*this, lib, "vcvtne2ps2bf16",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtne2ps2bf16))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtneps2bf16_method_3636 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtneps2bf16);
addExtern<DAS_CALL_METHOD(_vcvtneps2bf16_method_3636)>(*this, lib, "vcvtneps2bf16",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtneps2bf16))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2ph_method_3638 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2ph);
addExtern<DAS_CALL_METHOD(_vcvtpd2ph_method_3638)>(*this, lib, "vcvtpd2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2qq_method_3640 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2qq);
addExtern<DAS_CALL_METHOD(_vcvtpd2qq_method_3640)>(*this, lib, "vcvtpd2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2udq_method_3642 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2udq);
addExtern<DAS_CALL_METHOD(_vcvtpd2udq_method_3642)>(*this, lib, "vcvtpd2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2uqq_method_3644 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2uqq);
addExtern<DAS_CALL_METHOD(_vcvtpd2uqq_method_3644)>(*this, lib, "vcvtpd2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2dq_method_3646 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2dq);
addExtern<DAS_CALL_METHOD(_vcvtph2dq_method_3646)>(*this, lib, "vcvtph2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2dq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2pd_method_3648 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2pd);
addExtern<DAS_CALL_METHOD(_vcvtph2pd_method_3648)>(*this, lib, "vcvtph2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2psx_method_3650 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2psx);
addExtern<DAS_CALL_METHOD(_vcvtph2psx_method_3650)>(*this, lib, "vcvtph2psx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2psx))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2qq_method_3652 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2qq);
addExtern<DAS_CALL_METHOD(_vcvtph2qq_method_3652)>(*this, lib, "vcvtph2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2udq_method_3654 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2udq);
addExtern<DAS_CALL_METHOD(_vcvtph2udq_method_3654)>(*this, lib, "vcvtph2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2uqq_method_3656 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2uqq);
addExtern<DAS_CALL_METHOD(_vcvtph2uqq_method_3656)>(*this, lib, "vcvtph2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2uw_method_3658 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2uw);
addExtern<DAS_CALL_METHOD(_vcvtph2uw_method_3658)>(*this, lib, "vcvtph2uw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2uw))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2w_method_3660 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2w);
addExtern<DAS_CALL_METHOD(_vcvtph2w_method_3660)>(*this, lib, "vcvtph2w",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2w))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2phx_method_3662 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2phx);
addExtern<DAS_CALL_METHOD(_vcvtps2phx_method_3662)>(*this, lib, "vcvtps2phx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2phx))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2qq_method_3664 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2qq);
addExtern<DAS_CALL_METHOD(_vcvtps2qq_method_3664)>(*this, lib, "vcvtps2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2udq_method_3666 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2udq);
addExtern<DAS_CALL_METHOD(_vcvtps2udq_method_3666)>(*this, lib, "vcvtps2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2uqq_method_3668 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2uqq);
addExtern<DAS_CALL_METHOD(_vcvtps2uqq_method_3668)>(*this, lib, "vcvtps2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtqq2pd_method_3670 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtqq2pd);
addExtern<DAS_CALL_METHOD(_vcvtqq2pd_method_3670)>(*this, lib, "vcvtqq2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtqq2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtqq2ph_method_3672 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtqq2ph);
addExtern<DAS_CALL_METHOD(_vcvtqq2ph_method_3672)>(*this, lib, "vcvtqq2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtqq2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtqq2ps_method_3674 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtqq2ps);
addExtern<DAS_CALL_METHOD(_vcvtqq2ps_method_3674)>(*this, lib, "vcvtqq2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtqq2ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsd2sh_method_3676 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsd2sh);
addExtern<DAS_CALL_METHOD(_vcvtsd2sh_method_3676)>(*this, lib, "vcvtsd2sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsd2sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsd2usi_method_3678 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsd2usi);
addExtern<DAS_CALL_METHOD(_vcvtsd2usi_method_3678)>(*this, lib, "vcvtsd2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsd2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsh2sd_method_3680 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsh2sd);
addExtern<DAS_CALL_METHOD(_vcvtsh2sd_method_3680)>(*this, lib, "vcvtsh2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsh2sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsh2si_method_3682 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsh2si);
addExtern<DAS_CALL_METHOD(_vcvtsh2si_method_3682)>(*this, lib, "vcvtsh2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsh2si))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsh2ss_method_3684 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsh2ss);
addExtern<DAS_CALL_METHOD(_vcvtsh2ss_method_3684)>(*this, lib, "vcvtsh2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsh2ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsh2usi_method_3686 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsh2usi);
addExtern<DAS_CALL_METHOD(_vcvtsh2usi_method_3686)>(*this, lib, "vcvtsh2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsh2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsi2sh_method_3688 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsi2sh);
addExtern<DAS_CALL_METHOD(_vcvtsi2sh_method_3688)>(*this, lib, "vcvtsi2sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsi2sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtss2sh_method_3690 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtss2sh);
addExtern<DAS_CALL_METHOD(_vcvtss2sh_method_3690)>(*this, lib, "vcvtss2sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtss2sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtss2usi_method_3692 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtss2usi);
addExtern<DAS_CALL_METHOD(_vcvtss2usi_method_3692)>(*this, lib, "vcvtss2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtss2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttpd2qq_method_3694 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttpd2qq);
addExtern<DAS_CALL_METHOD(_vcvttpd2qq_method_3694)>(*this, lib, "vcvttpd2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttpd2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttpd2udq_method_3696 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttpd2udq);
addExtern<DAS_CALL_METHOD(_vcvttpd2udq_method_3696)>(*this, lib, "vcvttpd2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttpd2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttpd2uqq_method_3698 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttpd2uqq);
addExtern<DAS_CALL_METHOD(_vcvttpd2uqq_method_3698)>(*this, lib, "vcvttpd2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttpd2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2dq_method_3700 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2dq);
addExtern<DAS_CALL_METHOD(_vcvttph2dq_method_3700)>(*this, lib, "vcvttph2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2dq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2qq_method_3702 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2qq);
addExtern<DAS_CALL_METHOD(_vcvttph2qq_method_3702)>(*this, lib, "vcvttph2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2udq_method_3704 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2udq);
addExtern<DAS_CALL_METHOD(_vcvttph2udq_method_3704)>(*this, lib, "vcvttph2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2uqq_method_3706 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2uqq);
addExtern<DAS_CALL_METHOD(_vcvttph2uqq_method_3706)>(*this, lib, "vcvttph2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2uw_method_3708 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2uw);
addExtern<DAS_CALL_METHOD(_vcvttph2uw_method_3708)>(*this, lib, "vcvttph2uw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2uw))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2w_method_3710 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2w);
addExtern<DAS_CALL_METHOD(_vcvttph2w_method_3710)>(*this, lib, "vcvttph2w",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2w))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttps2qq_method_3712 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttps2qq);
addExtern<DAS_CALL_METHOD(_vcvttps2qq_method_3712)>(*this, lib, "vcvttps2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttps2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttps2udq_method_3714 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttps2udq);
addExtern<DAS_CALL_METHOD(_vcvttps2udq_method_3714)>(*this, lib, "vcvttps2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttps2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttps2uqq_method_3716 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttps2uqq);
addExtern<DAS_CALL_METHOD(_vcvttps2uqq_method_3716)>(*this, lib, "vcvttps2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttps2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttsd2usi_method_3718 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttsd2usi);
addExtern<DAS_CALL_METHOD(_vcvttsd2usi_method_3718)>(*this, lib, "vcvttsd2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttsd2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttsh2si_method_3720 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttsh2si);
addExtern<DAS_CALL_METHOD(_vcvttsh2si_method_3720)>(*this, lib, "vcvttsh2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttsh2si))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttsh2usi_method_3722 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttsh2usi);
addExtern<DAS_CALL_METHOD(_vcvttsh2usi_method_3722)>(*this, lib, "vcvttsh2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttsh2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttss2usi_method_3724 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttss2usi);
addExtern<DAS_CALL_METHOD(_vcvttss2usi_method_3724)>(*this, lib, "vcvttss2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttss2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtudq2pd_method_3726 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtudq2pd);
addExtern<DAS_CALL_METHOD(_vcvtudq2pd_method_3726)>(*this, lib, "vcvtudq2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtudq2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtudq2ph_method_3728 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtudq2ph);
addExtern<DAS_CALL_METHOD(_vcvtudq2ph_method_3728)>(*this, lib, "vcvtudq2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtudq2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtudq2ps_method_3730 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtudq2ps);
addExtern<DAS_CALL_METHOD(_vcvtudq2ps_method_3730)>(*this, lib, "vcvtudq2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtudq2ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtuqq2pd_method_3732 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtuqq2pd);
addExtern<DAS_CALL_METHOD(_vcvtuqq2pd_method_3732)>(*this, lib, "vcvtuqq2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtuqq2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtuqq2ph_method_3734 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtuqq2ph);
addExtern<DAS_CALL_METHOD(_vcvtuqq2ph_method_3734)>(*this, lib, "vcvtuqq2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtuqq2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtuqq2ps_method_3736 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtuqq2ps);
addExtern<DAS_CALL_METHOD(_vcvtuqq2ps_method_3736)>(*this, lib, "vcvtuqq2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtuqq2ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtusi2sd_method_3738 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtusi2sd);
addExtern<DAS_CALL_METHOD(_vcvtusi2sd_method_3738)>(*this, lib, "vcvtusi2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtusi2sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtusi2sh_method_3740 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtusi2sh);
addExtern<DAS_CALL_METHOD(_vcvtusi2sh_method_3740)>(*this, lib, "vcvtusi2sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtusi2sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtusi2ss_method_3742 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtusi2ss);
addExtern<DAS_CALL_METHOD(_vcvtusi2ss_method_3742)>(*this, lib, "vcvtusi2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtusi2ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtuw2ph_method_3744 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtuw2ph);
addExtern<DAS_CALL_METHOD(_vcvtuw2ph_method_3744)>(*this, lib, "vcvtuw2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtuw2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtw2ph_method_3746 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtw2ph);
addExtern<DAS_CALL_METHOD(_vcvtw2ph_method_3746)>(*this, lib, "vcvtw2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtw2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdbpsadbw_method_3748 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdbpsadbw);
addExtern<DAS_CALL_METHOD(_vdbpsadbw_method_3748)>(*this, lib, "vdbpsadbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdbpsadbw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivph_method_3750 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivph);
addExtern<DAS_CALL_METHOD(_vdivph_method_3750)>(*this, lib, "vdivph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivsh_method_3752 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivsh);
addExtern<DAS_CALL_METHOD(_vdivsh_method_3752)>(*this, lib, "vdivsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivsh))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdpbf16ps_method_3754 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdpbf16ps);
addExtern<DAS_CALL_METHOD(_vdpbf16ps_method_3754)>(*this, lib, "vdpbf16ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdpbf16ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vexp2pd_method_3756 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vexp2pd);
addExtern<DAS_CALL_METHOD(_vexp2pd_method_3756)>(*this, lib, "vexp2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vexp2pd))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vexp2ps_method_3758 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vexp2ps);
addExtern<DAS_CALL_METHOD(_vexp2ps_method_3758)>(*this, lib, "vexp2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vexp2ps))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vexpandpd_method_3760 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vexpandpd);
addExtern<DAS_CALL_METHOD(_vexpandpd_method_3760)>(*this, lib, "vexpandpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vexpandpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vexpandps_method_3762 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vexpandps);
addExtern<DAS_CALL_METHOD(_vexpandps_method_3762)>(*this, lib, "vexpandps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vexpandps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractf32x4_method_3764 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractf32x4);
addExtern<DAS_CALL_METHOD(_vextractf32x4_method_3764)>(*this, lib, "vextractf32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractf32x4))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractf32x8_method_3766 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractf32x8);
addExtern<DAS_CALL_METHOD(_vextractf32x8_method_3766)>(*this, lib, "vextractf32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractf32x8))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractf64x2_method_3768 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractf64x2);
addExtern<DAS_CALL_METHOD(_vextractf64x2_method_3768)>(*this, lib, "vextractf64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractf64x2))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractf64x4_method_3770 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractf64x4);
addExtern<DAS_CALL_METHOD(_vextractf64x4_method_3770)>(*this, lib, "vextractf64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractf64x4))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextracti32x4_method_3772 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextracti32x4);
addExtern<DAS_CALL_METHOD(_vextracti32x4_method_3772)>(*this, lib, "vextracti32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextracti32x4))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextracti32x8_method_3774 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextracti32x8);
addExtern<DAS_CALL_METHOD(_vextracti32x8_method_3774)>(*this, lib, "vextracti32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextracti32x8))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextracti64x2_method_3776 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextracti64x2);
addExtern<DAS_CALL_METHOD(_vextracti64x2_method_3776)>(*this, lib, "vextracti64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextracti64x2))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextracti64x4_method_3778 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextracti64x4);
addExtern<DAS_CALL_METHOD(_vextracti64x4_method_3778)>(*this, lib, "vextracti64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextracti64x4))
	->args({"self","op","r","imm"})
;
#endif

#endif
#endif
}
}
