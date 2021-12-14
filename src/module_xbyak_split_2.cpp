
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
void Module_Xbyak::initFunctions_2() {
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

#endif
#endif
}
}
