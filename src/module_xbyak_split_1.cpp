
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
void Module_Xbyak::initFunctions_1() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _push_method_380 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::push>;
addExtern<DAS_CALL_METHOD(_push_method_380)>(*this, lib, "push",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::push>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pop_method_382 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::pop>;
addExtern<DAS_CALL_METHOD(_pop_method_382)>(*this, lib, "pop",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::pop>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _push_method_384 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::AddressFrame &, uint32_t),&Xbyak::CodeGenerator::push>;
addExtern<DAS_CALL_METHOD(_push_method_384)>(*this, lib, "push",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::AddressFrame &, uint32_t),&Xbyak::CodeGenerator::push>::invoke")
	->args({"self","af","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _push_method_386 = das::das_call_member<void (Xbyak::CodeGenerator::*)(uint32_t),&Xbyak::CodeGenerator::push>;
addExtern<DAS_CALL_METHOD(_push_method_386)>(*this, lib, "push",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(uint32_t),&Xbyak::CodeGenerator::push>::invoke")
	->args({"self","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_method_388 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::mov>;
addExtern<DAS_CALL_METHOD(_mov_method_388)>(*this, lib, "mov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::mov>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_method_390 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint64_t),&Xbyak::CodeGenerator::mov>;
addExtern<DAS_CALL_METHOD(_mov_method_390)>(*this, lib, "mov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint64_t),&Xbyak::CodeGenerator::mov>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_method_392 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::CodeGenerator::NativeReg &, const Xbyak::Label &),&Xbyak::CodeGenerator::mov>;
addExtern<DAS_CALL_METHOD(_mov_method_392)>(*this, lib, "mov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::CodeGenerator::NativeReg &, const Xbyak::Label &),&Xbyak::CodeGenerator::mov>::invoke")
	->args({"self","reg","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xchg_method_394 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xchg);
addExtern<DAS_CALL_METHOD(_xchg_method_394)>(*this, lib, "xchg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xchg))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _push_method_396 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::push>;
addExtern<DAS_CALL_METHOD(_push_method_396)>(*this, lib, "push",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::push>::invoke")
	->args({"self","seg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pop_method_398 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::pop>;
addExtern<DAS_CALL_METHOD(_pop_method_398)>(*this, lib, "pop",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::pop>::invoke")
	->args({"self","seg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _putSeg_method_400 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::putSeg);
addExtern<DAS_CALL_METHOD(_putSeg_method_400)>(*this, lib, "putSeg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::putSeg))
	->args({"self","seg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_method_402 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Segment &),&Xbyak::CodeGenerator::mov>;
addExtern<DAS_CALL_METHOD(_mov_method_402)>(*this, lib, "mov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Segment &),&Xbyak::CodeGenerator::mov>::invoke")
	->args({"self","op","seg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_method_404 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &, const Xbyak::Operand &),&Xbyak::CodeGenerator::mov>;
addExtern<DAS_CALL_METHOD(_mov_method_404)>(*this, lib, "mov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &, const Xbyak::Operand &),&Xbyak::CodeGenerator::mov>::invoke")
	->args({"self","seg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _reset_method_406 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::reset);
addExtern<DAS_CALL_METHOD(_reset_method_406)>(*this, lib, "reset",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::reset))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasUndefinedLabel_method_408 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::hasUndefinedLabel);
addExtern<DAS_CALL_METHOD(_hasUndefinedLabel_method_408)>(*this, lib, "hasUndefinedLabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::hasUndefinedLabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ready_method_410 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ready);
addExtern<DAS_CALL_METHOD(_ready_method_410)>(*this, lib, "ready",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ready))
	->args({"self","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _readyRE_method_412 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::readyRE);
addExtern<DAS_CALL_METHOD(_readyRE_method_412)>(*this, lib, "readyRE",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::readyRE))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _nop_method_414 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::nop);
addExtern<DAS_CALL_METHOD(_nop_method_414)>(*this, lib, "nop",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::nop))
	->args({"self","size","useMultiByteNop"})
		->arg_init(2,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getVersionString_method_416 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::getVersionString);
addExtern<DAS_CALL_METHOD(_getVersionString_method_416)>(*this, lib, "getVersionString",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::getVersionString))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _adc_method_418 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::adc>;
addExtern<DAS_CALL_METHOD(_adc_method_418)>(*this, lib, "adc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::adc>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _adc_method_420 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::adc>;
addExtern<DAS_CALL_METHOD(_adc_method_420)>(*this, lib, "adc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::adc>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _adcx_method_422 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::adcx);
addExtern<DAS_CALL_METHOD(_adcx_method_422)>(*this, lib, "adcx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::adcx))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _add_method_424 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::add>;
addExtern<DAS_CALL_METHOD(_add_method_424)>(*this, lib, "add",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::add>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _add_method_426 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::add>;
addExtern<DAS_CALL_METHOD(_add_method_426)>(*this, lib, "add",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::add>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addpd_method_428 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addpd);
addExtern<DAS_CALL_METHOD(_addpd_method_428)>(*this, lib, "addpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addps_method_430 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addps);
addExtern<DAS_CALL_METHOD(_addps_method_430)>(*this, lib, "addps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addsd_method_432 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addsd);
addExtern<DAS_CALL_METHOD(_addsd_method_432)>(*this, lib, "addsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addss_method_434 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addss);
addExtern<DAS_CALL_METHOD(_addss_method_434)>(*this, lib, "addss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addsubpd_method_436 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addsubpd);
addExtern<DAS_CALL_METHOD(_addsubpd_method_436)>(*this, lib, "addsubpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addsubpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addsubps_method_438 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addsubps);
addExtern<DAS_CALL_METHOD(_addsubps_method_438)>(*this, lib, "addsubps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addsubps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _adox_method_440 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::adox);
addExtern<DAS_CALL_METHOD(_adox_method_440)>(*this, lib, "adox",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::adox))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aesdec_method_442 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aesdec);
addExtern<DAS_CALL_METHOD(_aesdec_method_442)>(*this, lib, "aesdec",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aesdec))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aesdeclast_method_444 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aesdeclast);
addExtern<DAS_CALL_METHOD(_aesdeclast_method_444)>(*this, lib, "aesdeclast",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aesdeclast))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aesenc_method_446 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aesenc);
addExtern<DAS_CALL_METHOD(_aesenc_method_446)>(*this, lib, "aesenc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aesenc))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aesenclast_method_448 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aesenclast);
addExtern<DAS_CALL_METHOD(_aesenclast_method_448)>(*this, lib, "aesenclast",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aesenclast))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aesimc_method_450 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aesimc);
addExtern<DAS_CALL_METHOD(_aesimc_method_450)>(*this, lib, "aesimc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aesimc))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aeskeygenassist_method_452 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aeskeygenassist);
addExtern<DAS_CALL_METHOD(_aeskeygenassist_method_452)>(*this, lib, "aeskeygenassist",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aeskeygenassist))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _and__method_454 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::and_>;
addExtern<DAS_CALL_METHOD(_and__method_454)>(*this, lib, "and_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::and_>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _and__method_456 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::and_>;
addExtern<DAS_CALL_METHOD(_and__method_456)>(*this, lib, "and_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::and_>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _andn_method_458 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::andn);
addExtern<DAS_CALL_METHOD(_andn_method_458)>(*this, lib, "andn",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::andn))
	->args({"self","r1","r2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _andnpd_method_460 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::andnpd);
addExtern<DAS_CALL_METHOD(_andnpd_method_460)>(*this, lib, "andnpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::andnpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _andnps_method_462 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::andnps);
addExtern<DAS_CALL_METHOD(_andnps_method_462)>(*this, lib, "andnps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::andnps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _andpd_method_464 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::andpd);
addExtern<DAS_CALL_METHOD(_andpd_method_464)>(*this, lib, "andpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::andpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _andps_method_466 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::andps);
addExtern<DAS_CALL_METHOD(_andps_method_466)>(*this, lib, "andps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::andps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bextr_method_468 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bextr);
addExtern<DAS_CALL_METHOD(_bextr_method_468)>(*this, lib, "bextr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bextr))
	->args({"self","r1","op","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blendpd_method_470 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blendpd);
addExtern<DAS_CALL_METHOD(_blendpd_method_470)>(*this, lib, "blendpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blendpd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blendps_method_472 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blendps);
addExtern<DAS_CALL_METHOD(_blendps_method_472)>(*this, lib, "blendps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blendps))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blendvpd_method_474 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blendvpd);
addExtern<DAS_CALL_METHOD(_blendvpd_method_474)>(*this, lib, "blendvpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blendvpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blendvps_method_476 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blendvps);
addExtern<DAS_CALL_METHOD(_blendvps_method_476)>(*this, lib, "blendvps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blendvps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blsi_method_478 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blsi);
addExtern<DAS_CALL_METHOD(_blsi_method_478)>(*this, lib, "blsi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blsi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blsmsk_method_480 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blsmsk);
addExtern<DAS_CALL_METHOD(_blsmsk_method_480)>(*this, lib, "blsmsk",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blsmsk))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blsr_method_482 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blsr);
addExtern<DAS_CALL_METHOD(_blsr_method_482)>(*this, lib, "blsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blsr))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bnd_method_484 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bnd);
addExtern<DAS_CALL_METHOD(_bnd_method_484)>(*this, lib, "bnd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bnd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndcl_method_486 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndcl);
addExtern<DAS_CALL_METHOD(_bndcl_method_486)>(*this, lib, "bndcl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndcl))
	->args({"self","bnd","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndcn_method_488 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndcn);
addExtern<DAS_CALL_METHOD(_bndcn_method_488)>(*this, lib, "bndcn",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndcn))
	->args({"self","bnd","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndcu_method_490 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndcu);
addExtern<DAS_CALL_METHOD(_bndcu_method_490)>(*this, lib, "bndcu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndcu))
	->args({"self","bnd","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndldx_method_492 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndldx);
addExtern<DAS_CALL_METHOD(_bndldx_method_492)>(*this, lib, "bndldx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndldx))
	->args({"self","bnd","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndmk_method_494 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndmk);
addExtern<DAS_CALL_METHOD(_bndmk_method_494)>(*this, lib, "bndmk",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndmk))
	->args({"self","bnd","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndmov_method_496 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::BoundsReg &),&Xbyak::CodeGenerator::bndmov>;
addExtern<DAS_CALL_METHOD(_bndmov_method_496)>(*this, lib, "bndmov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::BoundsReg &),&Xbyak::CodeGenerator::bndmov>::invoke")
	->args({"self","addr","bnd"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndmov_method_498 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &, const Xbyak::Operand &),&Xbyak::CodeGenerator::bndmov>;
addExtern<DAS_CALL_METHOD(_bndmov_method_498)>(*this, lib, "bndmov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &, const Xbyak::Operand &),&Xbyak::CodeGenerator::bndmov>::invoke")
	->args({"self","bnd","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndstx_method_500 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndstx);
addExtern<DAS_CALL_METHOD(_bndstx_method_500)>(*this, lib, "bndstx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndstx))
	->args({"self","addr","bnd"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bsf_method_502 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bsf);
addExtern<DAS_CALL_METHOD(_bsf_method_502)>(*this, lib, "bsf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bsf))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bsr_method_504 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bsr);
addExtern<DAS_CALL_METHOD(_bsr_method_504)>(*this, lib, "bsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bsr))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bswap_method_506 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bswap);
addExtern<DAS_CALL_METHOD(_bswap_method_506)>(*this, lib, "bswap",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bswap))
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bt_method_508 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::bt>;
addExtern<DAS_CALL_METHOD(_bt_method_508)>(*this, lib, "bt",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::bt>::invoke")
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bt_method_510 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::bt>;
addExtern<DAS_CALL_METHOD(_bt_method_510)>(*this, lib, "bt",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::bt>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _btc_method_512 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::btc>;
addExtern<DAS_CALL_METHOD(_btc_method_512)>(*this, lib, "btc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::btc>::invoke")
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _btc_method_514 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::btc>;
addExtern<DAS_CALL_METHOD(_btc_method_514)>(*this, lib, "btc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::btc>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _btr_method_516 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::btr>;
addExtern<DAS_CALL_METHOD(_btr_method_516)>(*this, lib, "btr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::btr>::invoke")
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _btr_method_518 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::btr>;
addExtern<DAS_CALL_METHOD(_btr_method_518)>(*this, lib, "btr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::btr>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bts_method_520 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::bts>;
addExtern<DAS_CALL_METHOD(_bts_method_520)>(*this, lib, "bts",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::bts>::invoke")
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bts_method_522 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::bts>;
addExtern<DAS_CALL_METHOD(_bts_method_522)>(*this, lib, "bts",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::bts>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bzhi_method_524 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bzhi);
addExtern<DAS_CALL_METHOD(_bzhi_method_524)>(*this, lib, "bzhi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bzhi))
	->args({"self","r1","op","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cbw_method_526 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cbw);
addExtern<DAS_CALL_METHOD(_cbw_method_526)>(*this, lib, "cbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cbw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cdq_method_528 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cdq);
addExtern<DAS_CALL_METHOD(_cdq_method_528)>(*this, lib, "cdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cdq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _clc_method_530 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::clc);
addExtern<DAS_CALL_METHOD(_clc_method_530)>(*this, lib, "clc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::clc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cld_method_532 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cld);
addExtern<DAS_CALL_METHOD(_cld_method_532)>(*this, lib, "cld",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cld))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _clflush_method_534 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::clflush);
addExtern<DAS_CALL_METHOD(_clflush_method_534)>(*this, lib, "clflush",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::clflush))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _clflushopt_method_536 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::clflushopt);
addExtern<DAS_CALL_METHOD(_clflushopt_method_536)>(*this, lib, "clflushopt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::clflushopt))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cli_method_538 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cli);
addExtern<DAS_CALL_METHOD(_cli_method_538)>(*this, lib, "cli",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cli))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _clzero_method_540 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::clzero);
addExtern<DAS_CALL_METHOD(_clzero_method_540)>(*this, lib, "clzero",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::clzero))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmc_method_542 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmc);
addExtern<DAS_CALL_METHOD(_cmc_method_542)>(*this, lib, "cmc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmova_method_544 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmova);
addExtern<DAS_CALL_METHOD(_cmova_method_544)>(*this, lib, "cmova",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmova))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovae_method_546 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovae);
addExtern<DAS_CALL_METHOD(_cmovae_method_546)>(*this, lib, "cmovae",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovae))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovb_method_548 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovb);
addExtern<DAS_CALL_METHOD(_cmovb_method_548)>(*this, lib, "cmovb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovb))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovbe_method_550 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovbe);
addExtern<DAS_CALL_METHOD(_cmovbe_method_550)>(*this, lib, "cmovbe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovbe))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovc_method_552 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovc);
addExtern<DAS_CALL_METHOD(_cmovc_method_552)>(*this, lib, "cmovc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovc))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmove_method_554 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmove);
addExtern<DAS_CALL_METHOD(_cmove_method_554)>(*this, lib, "cmove",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmove))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovg_method_556 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovg);
addExtern<DAS_CALL_METHOD(_cmovg_method_556)>(*this, lib, "cmovg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovg))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovge_method_558 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovge);
addExtern<DAS_CALL_METHOD(_cmovge_method_558)>(*this, lib, "cmovge",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovge))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovl_method_560 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovl);
addExtern<DAS_CALL_METHOD(_cmovl_method_560)>(*this, lib, "cmovl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovl))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovle_method_562 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovle);
addExtern<DAS_CALL_METHOD(_cmovle_method_562)>(*this, lib, "cmovle",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovle))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovna_method_564 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovna);
addExtern<DAS_CALL_METHOD(_cmovna_method_564)>(*this, lib, "cmovna",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovna))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnae_method_566 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnae);
addExtern<DAS_CALL_METHOD(_cmovnae_method_566)>(*this, lib, "cmovnae",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnae))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnb_method_568 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnb);
addExtern<DAS_CALL_METHOD(_cmovnb_method_568)>(*this, lib, "cmovnb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnb))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnbe_method_570 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnbe);
addExtern<DAS_CALL_METHOD(_cmovnbe_method_570)>(*this, lib, "cmovnbe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnbe))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnc_method_572 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnc);
addExtern<DAS_CALL_METHOD(_cmovnc_method_572)>(*this, lib, "cmovnc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnc))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovne_method_574 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovne);
addExtern<DAS_CALL_METHOD(_cmovne_method_574)>(*this, lib, "cmovne",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovne))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovng_method_576 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovng);
addExtern<DAS_CALL_METHOD(_cmovng_method_576)>(*this, lib, "cmovng",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovng))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnge_method_578 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnge);
addExtern<DAS_CALL_METHOD(_cmovnge_method_578)>(*this, lib, "cmovnge",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnge))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnl_method_580 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnl);
addExtern<DAS_CALL_METHOD(_cmovnl_method_580)>(*this, lib, "cmovnl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnl))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnle_method_582 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnle);
addExtern<DAS_CALL_METHOD(_cmovnle_method_582)>(*this, lib, "cmovnle",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnle))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovno_method_584 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovno);
addExtern<DAS_CALL_METHOD(_cmovno_method_584)>(*this, lib, "cmovno",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovno))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnp_method_586 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnp);
addExtern<DAS_CALL_METHOD(_cmovnp_method_586)>(*this, lib, "cmovnp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnp))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovns_method_588 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovns);
addExtern<DAS_CALL_METHOD(_cmovns_method_588)>(*this, lib, "cmovns",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovns))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnz_method_590 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnz);
addExtern<DAS_CALL_METHOD(_cmovnz_method_590)>(*this, lib, "cmovnz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnz))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovo_method_592 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovo);
addExtern<DAS_CALL_METHOD(_cmovo_method_592)>(*this, lib, "cmovo",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovo))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovp_method_594 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovp);
addExtern<DAS_CALL_METHOD(_cmovp_method_594)>(*this, lib, "cmovp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovp))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovpe_method_596 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovpe);
addExtern<DAS_CALL_METHOD(_cmovpe_method_596)>(*this, lib, "cmovpe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovpe))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovpo_method_598 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovpo);
addExtern<DAS_CALL_METHOD(_cmovpo_method_598)>(*this, lib, "cmovpo",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovpo))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovs_method_600 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovs);
addExtern<DAS_CALL_METHOD(_cmovs_method_600)>(*this, lib, "cmovs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovs))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovz_method_602 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovz);
addExtern<DAS_CALL_METHOD(_cmovz_method_602)>(*this, lib, "cmovz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovz))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmp_method_604 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::cmp>;
addExtern<DAS_CALL_METHOD(_cmp_method_604)>(*this, lib, "cmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::cmp>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmp_method_606 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::cmp>;
addExtern<DAS_CALL_METHOD(_cmp_method_606)>(*this, lib, "cmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::cmp>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpeqpd_method_608 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpeqpd);
addExtern<DAS_CALL_METHOD(_cmpeqpd_method_608)>(*this, lib, "cmpeqpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpeqpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpeqps_method_610 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpeqps);
addExtern<DAS_CALL_METHOD(_cmpeqps_method_610)>(*this, lib, "cmpeqps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpeqps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpeqsd_method_612 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpeqsd);
addExtern<DAS_CALL_METHOD(_cmpeqsd_method_612)>(*this, lib, "cmpeqsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpeqsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpeqss_method_614 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpeqss);
addExtern<DAS_CALL_METHOD(_cmpeqss_method_614)>(*this, lib, "cmpeqss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpeqss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmplepd_method_616 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmplepd);
addExtern<DAS_CALL_METHOD(_cmplepd_method_616)>(*this, lib, "cmplepd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmplepd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpleps_method_618 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpleps);
addExtern<DAS_CALL_METHOD(_cmpleps_method_618)>(*this, lib, "cmpleps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpleps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmplesd_method_620 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmplesd);
addExtern<DAS_CALL_METHOD(_cmplesd_method_620)>(*this, lib, "cmplesd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmplesd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpless_method_622 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpless);
addExtern<DAS_CALL_METHOD(_cmpless_method_622)>(*this, lib, "cmpless",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpless))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpltpd_method_624 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpltpd);
addExtern<DAS_CALL_METHOD(_cmpltpd_method_624)>(*this, lib, "cmpltpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpltpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpltps_method_626 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpltps);
addExtern<DAS_CALL_METHOD(_cmpltps_method_626)>(*this, lib, "cmpltps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpltps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpltsd_method_628 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpltsd);
addExtern<DAS_CALL_METHOD(_cmpltsd_method_628)>(*this, lib, "cmpltsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpltsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpltss_method_630 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpltss);
addExtern<DAS_CALL_METHOD(_cmpltss_method_630)>(*this, lib, "cmpltss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpltss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpneqpd_method_632 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpneqpd);
addExtern<DAS_CALL_METHOD(_cmpneqpd_method_632)>(*this, lib, "cmpneqpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpneqpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpneqps_method_634 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpneqps);
addExtern<DAS_CALL_METHOD(_cmpneqps_method_634)>(*this, lib, "cmpneqps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpneqps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpneqsd_method_636 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpneqsd);
addExtern<DAS_CALL_METHOD(_cmpneqsd_method_636)>(*this, lib, "cmpneqsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpneqsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpneqss_method_638 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpneqss);
addExtern<DAS_CALL_METHOD(_cmpneqss_method_638)>(*this, lib, "cmpneqss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpneqss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnlepd_method_640 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnlepd);
addExtern<DAS_CALL_METHOD(_cmpnlepd_method_640)>(*this, lib, "cmpnlepd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnlepd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnleps_method_642 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnleps);
addExtern<DAS_CALL_METHOD(_cmpnleps_method_642)>(*this, lib, "cmpnleps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnleps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnlesd_method_644 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnlesd);
addExtern<DAS_CALL_METHOD(_cmpnlesd_method_644)>(*this, lib, "cmpnlesd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnlesd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnless_method_646 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnless);
addExtern<DAS_CALL_METHOD(_cmpnless_method_646)>(*this, lib, "cmpnless",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnless))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnltpd_method_648 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnltpd);
addExtern<DAS_CALL_METHOD(_cmpnltpd_method_648)>(*this, lib, "cmpnltpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnltpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnltps_method_650 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnltps);
addExtern<DAS_CALL_METHOD(_cmpnltps_method_650)>(*this, lib, "cmpnltps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnltps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnltsd_method_652 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnltsd);
addExtern<DAS_CALL_METHOD(_cmpnltsd_method_652)>(*this, lib, "cmpnltsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnltsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnltss_method_654 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnltss);
addExtern<DAS_CALL_METHOD(_cmpnltss_method_654)>(*this, lib, "cmpnltss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnltss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpordpd_method_656 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpordpd);
addExtern<DAS_CALL_METHOD(_cmpordpd_method_656)>(*this, lib, "cmpordpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpordpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpordps_method_658 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpordps);
addExtern<DAS_CALL_METHOD(_cmpordps_method_658)>(*this, lib, "cmpordps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpordps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpordsd_method_660 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpordsd);
addExtern<DAS_CALL_METHOD(_cmpordsd_method_660)>(*this, lib, "cmpordsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpordsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpordss_method_662 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpordss);
addExtern<DAS_CALL_METHOD(_cmpordss_method_662)>(*this, lib, "cmpordss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpordss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmppd_method_664 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmppd);
addExtern<DAS_CALL_METHOD(_cmppd_method_664)>(*this, lib, "cmppd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmppd))
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpps_method_666 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpps);
addExtern<DAS_CALL_METHOD(_cmpps_method_666)>(*this, lib, "cmpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpps))
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpsb_method_668 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpsb);
addExtern<DAS_CALL_METHOD(_cmpsb_method_668)>(*this, lib, "cmpsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpsb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpsd_method_670 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsd>;
addExtern<DAS_CALL_METHOD(_cmpsd_method_670)>(*this, lib, "cmpsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsd>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpsd_method_672 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::cmpsd>;
addExtern<DAS_CALL_METHOD(_cmpsd_method_672)>(*this, lib, "cmpsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::cmpsd>::invoke")
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpss_method_674 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpss);
addExtern<DAS_CALL_METHOD(_cmpss_method_674)>(*this, lib, "cmpss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpss))
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpsw_method_676 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpsw);
addExtern<DAS_CALL_METHOD(_cmpsw_method_676)>(*this, lib, "cmpsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpsw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpunordpd_method_678 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpunordpd);
addExtern<DAS_CALL_METHOD(_cmpunordpd_method_678)>(*this, lib, "cmpunordpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpunordpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpunordps_method_680 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpunordps);
addExtern<DAS_CALL_METHOD(_cmpunordps_method_680)>(*this, lib, "cmpunordps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpunordps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpunordsd_method_682 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpunordsd);
addExtern<DAS_CALL_METHOD(_cmpunordsd_method_682)>(*this, lib, "cmpunordsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpunordsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpunordss_method_684 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpunordss);
addExtern<DAS_CALL_METHOD(_cmpunordss_method_684)>(*this, lib, "cmpunordss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpunordss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpxchg_method_686 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpxchg);
addExtern<DAS_CALL_METHOD(_cmpxchg_method_686)>(*this, lib, "cmpxchg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpxchg))
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpxchg8b_method_688 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpxchg8b);
addExtern<DAS_CALL_METHOD(_cmpxchg8b_method_688)>(*this, lib, "cmpxchg8b",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpxchg8b))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _comisd_method_690 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::comisd);
addExtern<DAS_CALL_METHOD(_comisd_method_690)>(*this, lib, "comisd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::comisd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _comiss_method_692 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::comiss);
addExtern<DAS_CALL_METHOD(_comiss_method_692)>(*this, lib, "comiss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::comiss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cpuid_method_694 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cpuid);
addExtern<DAS_CALL_METHOD(_cpuid_method_694)>(*this, lib, "cpuid",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cpuid))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _crc32_method_696 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::crc32);
addExtern<DAS_CALL_METHOD(_crc32_method_696)>(*this, lib, "crc32",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::crc32))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtdq2pd_method_698 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtdq2pd);
addExtern<DAS_CALL_METHOD(_cvtdq2pd_method_698)>(*this, lib, "cvtdq2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtdq2pd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtdq2ps_method_700 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtdq2ps);
addExtern<DAS_CALL_METHOD(_cvtdq2ps_method_700)>(*this, lib, "cvtdq2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtdq2ps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtpd2dq_method_702 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtpd2dq);
addExtern<DAS_CALL_METHOD(_cvtpd2dq_method_702)>(*this, lib, "cvtpd2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtpd2dq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtpd2pi_method_704 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtpd2pi);
addExtern<DAS_CALL_METHOD(_cvtpd2pi_method_704)>(*this, lib, "cvtpd2pi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtpd2pi))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtpd2ps_method_706 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtpd2ps);
addExtern<DAS_CALL_METHOD(_cvtpd2ps_method_706)>(*this, lib, "cvtpd2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtpd2ps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtpi2pd_method_708 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtpi2pd);
addExtern<DAS_CALL_METHOD(_cvtpi2pd_method_708)>(*this, lib, "cvtpi2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtpi2pd))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtpi2ps_method_710 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtpi2ps);
addExtern<DAS_CALL_METHOD(_cvtpi2ps_method_710)>(*this, lib, "cvtpi2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtpi2ps))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtps2dq_method_712 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtps2dq);
addExtern<DAS_CALL_METHOD(_cvtps2dq_method_712)>(*this, lib, "cvtps2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtps2dq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtps2pd_method_714 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtps2pd);
addExtern<DAS_CALL_METHOD(_cvtps2pd_method_714)>(*this, lib, "cvtps2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtps2pd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtps2pi_method_716 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtps2pi);
addExtern<DAS_CALL_METHOD(_cvtps2pi_method_716)>(*this, lib, "cvtps2pi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtps2pi))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtsd2si_method_718 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtsd2si);
addExtern<DAS_CALL_METHOD(_cvtsd2si_method_718)>(*this, lib, "cvtsd2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtsd2si))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtsd2ss_method_720 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtsd2ss);
addExtern<DAS_CALL_METHOD(_cvtsd2ss_method_720)>(*this, lib, "cvtsd2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtsd2ss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtsi2sd_method_722 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtsi2sd);
addExtern<DAS_CALL_METHOD(_cvtsi2sd_method_722)>(*this, lib, "cvtsi2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtsi2sd))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtsi2ss_method_724 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtsi2ss);
addExtern<DAS_CALL_METHOD(_cvtsi2ss_method_724)>(*this, lib, "cvtsi2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtsi2ss))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtss2sd_method_726 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtss2sd);
addExtern<DAS_CALL_METHOD(_cvtss2sd_method_726)>(*this, lib, "cvtss2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtss2sd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtss2si_method_728 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtss2si);
addExtern<DAS_CALL_METHOD(_cvtss2si_method_728)>(*this, lib, "cvtss2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtss2si))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttpd2dq_method_730 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttpd2dq);
addExtern<DAS_CALL_METHOD(_cvttpd2dq_method_730)>(*this, lib, "cvttpd2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttpd2dq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttpd2pi_method_732 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttpd2pi);
addExtern<DAS_CALL_METHOD(_cvttpd2pi_method_732)>(*this, lib, "cvttpd2pi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttpd2pi))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttps2dq_method_734 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttps2dq);
addExtern<DAS_CALL_METHOD(_cvttps2dq_method_734)>(*this, lib, "cvttps2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttps2dq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttps2pi_method_736 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttps2pi);
addExtern<DAS_CALL_METHOD(_cvttps2pi_method_736)>(*this, lib, "cvttps2pi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttps2pi))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttsd2si_method_738 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttsd2si);
addExtern<DAS_CALL_METHOD(_cvttsd2si_method_738)>(*this, lib, "cvttsd2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttsd2si))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttss2si_method_740 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttss2si);
addExtern<DAS_CALL_METHOD(_cvttss2si_method_740)>(*this, lib, "cvttss2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttss2si))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cwd_method_742 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cwd);
addExtern<DAS_CALL_METHOD(_cwd_method_742)>(*this, lib, "cwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cwd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cwde_method_744 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cwde);
addExtern<DAS_CALL_METHOD(_cwde_method_744)>(*this, lib, "cwde",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cwde))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dec_method_746 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::dec);
addExtern<DAS_CALL_METHOD(_dec_method_746)>(*this, lib, "dec",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::dec))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _div_method_748 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::div);
addExtern<DAS_CALL_METHOD(_div_method_748)>(*this, lib, "div",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::div))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _divpd_method_750 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::divpd);
addExtern<DAS_CALL_METHOD(_divpd_method_750)>(*this, lib, "divpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::divpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _divps_method_752 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::divps);
addExtern<DAS_CALL_METHOD(_divps_method_752)>(*this, lib, "divps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::divps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _divsd_method_754 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::divsd);
addExtern<DAS_CALL_METHOD(_divsd_method_754)>(*this, lib, "divsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::divsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _divss_method_756 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::divss);
addExtern<DAS_CALL_METHOD(_divss_method_756)>(*this, lib, "divss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::divss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dppd_method_758 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::dppd);
addExtern<DAS_CALL_METHOD(_dppd_method_758)>(*this, lib, "dppd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::dppd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dpps_method_760 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::dpps);
addExtern<DAS_CALL_METHOD(_dpps_method_760)>(*this, lib, "dpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::dpps))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _emms_method_762 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::emms);
addExtern<DAS_CALL_METHOD(_emms_method_762)>(*this, lib, "emms",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::emms))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _endbr32_method_764 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::endbr32);
addExtern<DAS_CALL_METHOD(_endbr32_method_764)>(*this, lib, "endbr32",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::endbr32))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _endbr64_method_766 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::endbr64);
addExtern<DAS_CALL_METHOD(_endbr64_method_766)>(*this, lib, "endbr64",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::endbr64))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _enter_method_768 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::enter);
addExtern<DAS_CALL_METHOD(_enter_method_768)>(*this, lib, "enter",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::enter))
	->args({"self","x","y"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _extractps_method_770 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::extractps);
addExtern<DAS_CALL_METHOD(_extractps_method_770)>(*this, lib, "extractps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::extractps))
	->args({"self","op","xmm","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _f2xm1_method_772 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::f2xm1);
addExtern<DAS_CALL_METHOD(_f2xm1_method_772)>(*this, lib, "f2xm1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::f2xm1))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fabs_method_774 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fabs);
addExtern<DAS_CALL_METHOD(_fabs_method_774)>(*this, lib, "fabs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fabs))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fadd_method_776 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fadd>;
addExtern<DAS_CALL_METHOD(_fadd_method_776)>(*this, lib, "fadd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fadd>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fadd_method_778 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd>;
addExtern<DAS_CALL_METHOD(_fadd_method_778)>(*this, lib, "fadd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd>::invoke")
	->args({"self","reg1"})
;
#endif

#endif
#endif
}
}
