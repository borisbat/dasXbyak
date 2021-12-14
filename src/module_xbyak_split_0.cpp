
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
void Module_Xbyak::initFunctions_0() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::AlignedMalloc)>(*this, lib, "AlignedMalloc",SideEffects::worstDefault, "Xbyak::AlignedMalloc")
	->args({"size","alignment"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::ConvertErrorToString)>(*this, lib, "ConvertErrorToString",SideEffects::worstDefault, "Xbyak::ConvertErrorToString")
	->args({"err"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::inner::IsInInt32)>(*this, lib, "IsInInt32",SideEffects::worstDefault, "Xbyak::inner::IsInInt32")
	->args({"x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::GetError)>(*this, lib, "GetError",SideEffects::worstDefault, "Xbyak::GetError")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::local::GetErrorRef), SimNode_ExtFuncCallRef>(*this, lib, "GetErrorRef",SideEffects::worstDefault, "Xbyak::local::GetErrorRef")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(__report_gsfailure)>(*this, lib, "__report_gsfailure",SideEffects::worstDefault, "__report_gsfailure")
	->args({"_StackCookie"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::ClearError)>(*this, lib, "ClearError",SideEffects::worstDefault, "Xbyak::ClearError")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::AlignedFree)>(*this, lib, "AlignedFree",SideEffects::worstDefault, "Xbyak::AlignedFree")
	->args({"p"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::local::SetError)>(*this, lib, "SetError",SideEffects::worstDefault, "Xbyak::local::SetError")
	->args({"err"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::inner::IsInDisp8)>(*this, lib, "IsInDisp8",SideEffects::worstDefault, "Xbyak::inner::IsInDisp8")
	->args({"x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::inner::VerifyInInt32)>(*this, lib, "VerifyInInt32",SideEffects::worstDefault, "Xbyak::inner::VerifyInInt32")
	->args({"x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getKind_method_2 = DAS_CALL_MEMBER(Xbyak::Operand::getKind);
addExtern<DAS_CALL_METHOD(_getKind_method_2)>(*this, lib, "getKind",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getKind))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getIdx_method_4 = DAS_CALL_MEMBER(Xbyak::Operand::getIdx);
addExtern<DAS_CALL_METHOD(_getIdx_method_4)>(*this, lib, "getIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isNone_method_6 = DAS_CALL_MEMBER(Xbyak::Operand::isNone);
addExtern<DAS_CALL_METHOD(_isNone_method_6)>(*this, lib, "isNone",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isNone))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isMMX_method_8 = DAS_CALL_MEMBER(Xbyak::Operand::isMMX);
addExtern<DAS_CALL_METHOD(_isMMX_method_8)>(*this, lib, "isMMX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isMMX))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isXMM_method_10 = DAS_CALL_MEMBER(Xbyak::Operand::isXMM);
addExtern<DAS_CALL_METHOD(_isXMM_method_10)>(*this, lib, "isXMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isXMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isYMM_method_12 = DAS_CALL_MEMBER(Xbyak::Operand::isYMM);
addExtern<DAS_CALL_METHOD(_isYMM_method_12)>(*this, lib, "isYMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isYMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isZMM_method_14 = DAS_CALL_MEMBER(Xbyak::Operand::isZMM);
addExtern<DAS_CALL_METHOD(_isZMM_method_14)>(*this, lib, "isZMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isZMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isTMM_method_16 = DAS_CALL_MEMBER(Xbyak::Operand::isTMM);
addExtern<DAS_CALL_METHOD(_isTMM_method_16)>(*this, lib, "isTMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isTMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isXMEM_method_18 = DAS_CALL_MEMBER(Xbyak::Operand::isXMEM);
addExtern<DAS_CALL_METHOD(_isXMEM_method_18)>(*this, lib, "isXMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isXMEM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isYMEM_method_20 = DAS_CALL_MEMBER(Xbyak::Operand::isYMEM);
addExtern<DAS_CALL_METHOD(_isYMEM_method_20)>(*this, lib, "isYMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isYMEM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isZMEM_method_22 = DAS_CALL_MEMBER(Xbyak::Operand::isZMEM);
addExtern<DAS_CALL_METHOD(_isZMEM_method_22)>(*this, lib, "isZMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isZMEM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isOPMASK_method_24 = DAS_CALL_MEMBER(Xbyak::Operand::isOPMASK);
addExtern<DAS_CALL_METHOD(_isOPMASK_method_24)>(*this, lib, "isOPMASK",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isOPMASK))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isBNDREG_method_26 = DAS_CALL_MEMBER(Xbyak::Operand::isBNDREG);
addExtern<DAS_CALL_METHOD(_isBNDREG_method_26)>(*this, lib, "isBNDREG",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isBNDREG))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isREG_method_28 = DAS_CALL_MEMBER(Xbyak::Operand::isREG);
addExtern<DAS_CALL_METHOD(_isREG_method_28)>(*this, lib, "isREG",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isREG))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isMEM_method_30 = DAS_CALL_MEMBER(Xbyak::Operand::isMEM);
addExtern<DAS_CALL_METHOD(_isMEM_method_30)>(*this, lib, "isMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isMEM))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isFPU_method_32 = DAS_CALL_MEMBER(Xbyak::Operand::isFPU);
addExtern<DAS_CALL_METHOD(_isFPU_method_32)>(*this, lib, "isFPU",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isFPU))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isExt8bit_method_34 = DAS_CALL_MEMBER(Xbyak::Operand::isExt8bit);
addExtern<DAS_CALL_METHOD(_isExt8bit_method_34)>(*this, lib, "isExt8bit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isExt8bit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isExtIdx_method_36 = DAS_CALL_MEMBER(Xbyak::Operand::isExtIdx);
addExtern<DAS_CALL_METHOD(_isExtIdx_method_36)>(*this, lib, "isExtIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isExtIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isExtIdx2_method_38 = DAS_CALL_MEMBER(Xbyak::Operand::isExtIdx2);
addExtern<DAS_CALL_METHOD(_isExtIdx2_method_38)>(*this, lib, "isExtIdx2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isExtIdx2))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasEvex_method_40 = DAS_CALL_MEMBER(Xbyak::Operand::hasEvex);
addExtern<DAS_CALL_METHOD(_hasEvex_method_40)>(*this, lib, "hasEvex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::hasEvex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasRex_method_42 = DAS_CALL_MEMBER(Xbyak::Operand::hasRex);
addExtern<DAS_CALL_METHOD(_hasRex_method_42)>(*this, lib, "hasRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::hasRex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasZero_method_44 = DAS_CALL_MEMBER(Xbyak::Operand::hasZero);
addExtern<DAS_CALL_METHOD(_hasZero_method_44)>(*this, lib, "hasZero",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::hasZero))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getOpmaskIdx_method_46 = DAS_CALL_MEMBER(Xbyak::Operand::getOpmaskIdx);
addExtern<DAS_CALL_METHOD(_getOpmaskIdx_method_46)>(*this, lib, "getOpmaskIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getOpmaskIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRounding_method_48 = DAS_CALL_MEMBER(Xbyak::Operand::getRounding);
addExtern<DAS_CALL_METHOD(_getRounding_method_48)>(*this, lib, "getRounding",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getRounding))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setKind_method_50 = DAS_CALL_MEMBER(Xbyak::Operand::setKind);
addExtern<DAS_CALL_METHOD(_setKind_method_50)>(*this, lib, "setKind",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setKind))
	->args({"self","kind"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setBit_method_52 = DAS_CALL_MEMBER(Xbyak::Operand::setBit);
addExtern<DAS_CALL_METHOD(_setBit_method_52)>(*this, lib, "setBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setBit))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setOpmaskIdx_method_54 = DAS_CALL_MEMBER(Xbyak::Operand::setOpmaskIdx);
addExtern<DAS_CALL_METHOD(_setOpmaskIdx_method_54)>(*this, lib, "setOpmaskIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setOpmaskIdx))
	->args({"self","idx","arg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setRounding_method_56 = DAS_CALL_MEMBER(Xbyak::Operand::setRounding);
addExtern<DAS_CALL_METHOD(_setRounding_method_56)>(*this, lib, "setRounding",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setRounding))
	->args({"self","idx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setZero_method_58 = DAS_CALL_MEMBER(Xbyak::Operand::setZero);
addExtern<DAS_CALL_METHOD(_setZero_method_58)>(*this, lib, "setZero",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setZero))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isHigh8bit_method_60 = DAS_CALL_MEMBER(Xbyak::Operand::isHigh8bit);
addExtern<DAS_CALL_METHOD(_isHigh8bit_method_60)>(*this, lib, "isHigh8bit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isHigh8bit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _is_method_62 = DAS_CALL_MEMBER(Xbyak::Operand::is);
addExtern<DAS_CALL_METHOD(_is_method_62)>(*this, lib, "is",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::is))
	->args({"self","kind","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isBit_method_64 = DAS_CALL_MEMBER(Xbyak::Operand::isBit);
addExtern<DAS_CALL_METHOD(_isBit_method_64)>(*this, lib, "isBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isBit))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getBit_method_66 = DAS_CALL_MEMBER(Xbyak::Operand::getBit);
addExtern<DAS_CALL_METHOD(_getBit_method_66)>(*this, lib, "getBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getBit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _toString_method_68 = DAS_CALL_MEMBER(Xbyak::Operand::toString);
addExtern<DAS_CALL_METHOD(_toString_method_68)>(*this, lib, "toString",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::toString))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isEqualIfNotInherited_method_70 = DAS_CALL_MEMBER(Xbyak::Operand::isEqualIfNotInherited);
addExtern<DAS_CALL_METHOD(_isEqualIfNotInherited_method_70)>(*this, lib, "isEqualIfNotInherited",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isEqualIfNotInherited))
	->args({"self","rhs"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getAddress_method_72 = DAS_CALL_MEMBER(Xbyak::Operand::getAddress);
addExtern<DAS_CALL_METHOD(_getAddress_method_72), SimNode_ExtFuncCallRef>(*this, lib, "getAddress",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getAddress))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getReg_method_74 = DAS_CALL_MEMBER(Xbyak::Operand::getReg);
addExtern<DAS_CALL_METHOD(_getReg_method_74), SimNode_ExtFuncCallRef>(*this, lib, "getReg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getReg))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getIdx_method_76 = DAS_CALL_MEMBER(Xbyak::Segment::getIdx);
addExtern<DAS_CALL_METHOD(_getIdx_method_76)>(*this, lib, "getIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Segment::getIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _toString_method_78 = DAS_CALL_MEMBER(Xbyak::Segment::toString);
addExtern<DAS_CALL_METHOD(_toString_method_78)>(*this, lib, "toString",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Segment::toString))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _copyAndSetIdx_method_80 = DAS_CALL_MEMBER(Xbyak::Xmm::copyAndSetIdx);
addExtern<DAS_CALL_METHOD(_copyAndSetIdx_method_80), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "copyAndSetIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Xmm::copyAndSetIdx))
	->args({"self","idx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _copyAndSetKind_method_82 = DAS_CALL_MEMBER(Xbyak::Xmm::copyAndSetKind);
addExtern<DAS_CALL_METHOD(_copyAndSetKind_method_82), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "copyAndSetKind",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Xmm::copyAndSetKind))
	->args({"self","kind"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRegExp_method_84 = DAS_CALL_MEMBER(Xbyak::Address::getRegExp);
addExtern<DAS_CALL_METHOD(_getRegExp_method_84), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "getRegExp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getRegExp))
	->args({"self","optimize"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getMode_method_86 = DAS_CALL_MEMBER(Xbyak::Address::getMode);
addExtern<DAS_CALL_METHOD(_getMode_method_86)>(*this, lib, "getMode",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getMode))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _is32bit_method_88 = DAS_CALL_MEMBER(Xbyak::Address::is32bit);
addExtern<DAS_CALL_METHOD(_is32bit_method_88)>(*this, lib, "is32bit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::is32bit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isOnlyDisp_method_90 = DAS_CALL_MEMBER(Xbyak::Address::isOnlyDisp);
addExtern<DAS_CALL_METHOD(_isOnlyDisp_method_90)>(*this, lib, "isOnlyDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::isOnlyDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getDisp_method_92 = DAS_CALL_MEMBER(Xbyak::Address::getDisp);
addExtern<DAS_CALL_METHOD(_getDisp_method_92)>(*this, lib, "getDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRex_method_94 = DAS_CALL_MEMBER(Xbyak::Address::getRex);
addExtern<DAS_CALL_METHOD(_getRex_method_94)>(*this, lib, "getRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getRex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _is64bitDisp_method_96 = DAS_CALL_MEMBER(Xbyak::Address::is64bitDisp);
addExtern<DAS_CALL_METHOD(_is64bitDisp_method_96)>(*this, lib, "is64bitDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::is64bitDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isBroadcast_method_98 = DAS_CALL_MEMBER(Xbyak::Address::isBroadcast);
addExtern<DAS_CALL_METHOD(_isBroadcast_method_98)>(*this, lib, "isBroadcast",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::isBroadcast))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getLabel_method_100 = DAS_CALL_MEMBER(Xbyak::Address::getLabel);
addExtern<DAS_CALL_METHOD(_getLabel_method_100)>(*this, lib, "getLabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getLabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isVsib_method_102 = DAS_CALL_MEMBER(Xbyak::Address::isVsib);
addExtern<DAS_CALL_METHOD(_isVsib_method_102)>(*this, lib, "isVsib",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::isVsib))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _reset_method_104 = DAS_CALL_MEMBER(Xbyak::LabelManager::reset);
addExtern<DAS_CALL_METHOD(_reset_method_104)>(*this, lib, "reset",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::reset))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _enterLocal_method_106 = DAS_CALL_MEMBER(Xbyak::LabelManager::enterLocal);
addExtern<DAS_CALL_METHOD(_enterLocal_method_106)>(*this, lib, "enterLocal",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::enterLocal))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _leaveLocal_method_108 = DAS_CALL_MEMBER(Xbyak::LabelManager::leaveLocal);
addExtern<DAS_CALL_METHOD(_leaveLocal_method_108)>(*this, lib, "leaveLocal",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::leaveLocal))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _set_method_110 = DAS_CALL_MEMBER(Xbyak::LabelManager::set);
addExtern<DAS_CALL_METHOD(_set_method_110)>(*this, lib, "set",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::set))
	->args({"self","base"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _defineSlabel_method_112 = DAS_CALL_MEMBER(Xbyak::LabelManager::defineSlabel);
addExtern<DAS_CALL_METHOD(_defineSlabel_method_112)>(*this, lib, "defineSlabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::defineSlabel))
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _defineClabel_method_114 = DAS_CALL_MEMBER(Xbyak::LabelManager::defineClabel);
addExtern<DAS_CALL_METHOD(_defineClabel_method_114)>(*this, lib, "defineClabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::defineClabel))
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _assign_method_116 = DAS_CALL_MEMBER(Xbyak::LabelManager::assign);
addExtern<DAS_CALL_METHOD(_assign_method_116)>(*this, lib, "assign",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::assign))
	->args({"self","dst","src"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getOffset_method_118 = das::das_call_member<bool (Xbyak::LabelManager::*)(size_t *, std::string &) const,&Xbyak::LabelManager::getOffset>;
addExtern<DAS_CALL_METHOD(_getOffset_method_118)>(*this, lib, "getOffset",SideEffects::worstDefault, "das_call_member<bool (Xbyak::LabelManager::*)(size_t *, std::string &) const,&Xbyak::LabelManager::getOffset>::invoke")
	->args({"self","offset","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getOffset_method_120 = das::das_call_member<bool (Xbyak::LabelManager::*)(size_t *, const Xbyak::Label &) const,&Xbyak::LabelManager::getOffset>;
addExtern<DAS_CALL_METHOD(_getOffset_method_120)>(*this, lib, "getOffset",SideEffects::worstDefault, "das_call_member<bool (Xbyak::LabelManager::*)(size_t *, const Xbyak::Label &) const,&Xbyak::LabelManager::getOffset>::invoke")
	->args({"self","offset","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addUndefinedLabel_method_122 = das::das_call_member<void (Xbyak::LabelManager::*)(const std::string &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>;
addExtern<DAS_CALL_METHOD(_addUndefinedLabel_method_122)>(*this, lib, "addUndefinedLabel",SideEffects::worstDefault, "das_call_member<void (Xbyak::LabelManager::*)(const std::string &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>::invoke")
	->args({"self","label","jmp"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addUndefinedLabel_method_124 = das::das_call_member<void (Xbyak::LabelManager::*)(const Xbyak::Label &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>;
addExtern<DAS_CALL_METHOD(_addUndefinedLabel_method_124)>(*this, lib, "addUndefinedLabel",SideEffects::worstDefault, "das_call_member<void (Xbyak::LabelManager::*)(const Xbyak::Label &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>::invoke")
	->args({"self","label","jmp"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasUndefSlabel_method_126 = DAS_CALL_MEMBER(Xbyak::LabelManager::hasUndefSlabel);
addExtern<DAS_CALL_METHOD(_hasUndefSlabel_method_126)>(*this, lib, "hasUndefSlabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::hasUndefSlabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasUndefClabel_method_128 = DAS_CALL_MEMBER(Xbyak::LabelManager::hasUndefClabel);
addExtern<DAS_CALL_METHOD(_hasUndefClabel_method_128)>(*this, lib, "hasUndefClabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::hasUndefClabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getCode_method_130 = DAS_CALL_MEMBER(Xbyak::LabelManager::getCode);
addExtern<DAS_CALL_METHOD(_getCode_method_130)>(*this, lib, "getCode",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::getCode))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isReady_method_132 = DAS_CALL_MEMBER(Xbyak::LabelManager::isReady);
addExtern<DAS_CALL_METHOD(_isReady_method_132)>(*this, lib, "isReady",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::isReady))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _alloc_method_134 = DAS_CALL_MEMBER(Xbyak::Allocator::alloc);
addExtern<DAS_CALL_METHOD(_alloc_method_134)>(*this, lib, "alloc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Allocator::alloc))
	->args({"self","size"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _free_method_136 = DAS_CALL_MEMBER(Xbyak::Allocator::free);
addExtern<DAS_CALL_METHOD(_free_method_136)>(*this, lib, "free",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Allocator::free))
	->args({"self","p"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _useProtect_method_138 = DAS_CALL_MEMBER(Xbyak::Allocator::useProtect);
addExtern<DAS_CALL_METHOD(_useProtect_method_138)>(*this, lib, "useProtect",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Allocator::useProtect))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _changeBit_method_140 = DAS_CALL_MEMBER(Xbyak::Reg::changeBit);
addExtern<DAS_CALL_METHOD(_changeBit_method_140), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "changeBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::changeBit))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexW_method_142 = DAS_CALL_MEMBER(Xbyak::Reg::getRexW);
addExtern<DAS_CALL_METHOD(_getRexW_method_142)>(*this, lib, "getRexW",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexW))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexR_method_144 = DAS_CALL_MEMBER(Xbyak::Reg::getRexR);
addExtern<DAS_CALL_METHOD(_getRexR_method_144)>(*this, lib, "getRexR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexR))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexX_method_146 = DAS_CALL_MEMBER(Xbyak::Reg::getRexX);
addExtern<DAS_CALL_METHOD(_getRexX_method_146)>(*this, lib, "getRexX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexX))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexB_method_148 = DAS_CALL_MEMBER(Xbyak::Reg::getRexB);
addExtern<DAS_CALL_METHOD(_getRexB_method_148)>(*this, lib, "getRexB",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexB))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRex_method_150 = DAS_CALL_MEMBER(Xbyak::Reg::getRex);
addExtern<DAS_CALL_METHOD(_getRex_method_150)>(*this, lib, "getRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRex))
	->args({"self","base"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt8_method_152 = DAS_CALL_MEMBER(Xbyak::Reg::cvt8);
addExtern<DAS_CALL_METHOD(_cvt8_method_152), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt8))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt16_method_154 = DAS_CALL_MEMBER(Xbyak::Reg::cvt16);
addExtern<DAS_CALL_METHOD(_cvt16_method_154), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt16",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt16))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt32_method_156 = DAS_CALL_MEMBER(Xbyak::Reg::cvt32);
addExtern<DAS_CALL_METHOD(_cvt32_method_156), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt32",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt32))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt64_method_158 = DAS_CALL_MEMBER(Xbyak::Reg::cvt64);
addExtern<DAS_CALL_METHOD(_cvt64_method_158), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt64",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt64))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isVsib_method_160 = DAS_CALL_MEMBER(Xbyak::RegExp::isVsib);
addExtern<DAS_CALL_METHOD(_isVsib_method_160)>(*this, lib, "isVsib",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::isVsib))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _optimize_method_162 = DAS_CALL_MEMBER(Xbyak::RegExp::optimize);
addExtern<DAS_CALL_METHOD(_optimize_method_162), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "optimize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::optimize))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getBase_method_164 = DAS_CALL_MEMBER(Xbyak::RegExp::getBase);
addExtern<DAS_CALL_METHOD(_getBase_method_164), SimNode_ExtFuncCallRef>(*this, lib, "getBase",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getBase))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getIndex_method_166 = DAS_CALL_MEMBER(Xbyak::RegExp::getIndex);
addExtern<DAS_CALL_METHOD(_getIndex_method_166), SimNode_ExtFuncCallRef>(*this, lib, "getIndex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getIndex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getScale_method_168 = DAS_CALL_MEMBER(Xbyak::RegExp::getScale);
addExtern<DAS_CALL_METHOD(_getScale_method_168)>(*this, lib, "getScale",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getScale))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getDisp_method_170 = DAS_CALL_MEMBER(Xbyak::RegExp::getDisp);
addExtern<DAS_CALL_METHOD(_getDisp_method_170)>(*this, lib, "getDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verify_method_172 = DAS_CALL_MEMBER(Xbyak::RegExp::verify);
addExtern<DAS_CALL_METHOD(_verify_method_172)>(*this, lib, "verify",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::verify))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRex_method_174 = DAS_CALL_MEMBER(Xbyak::RegExp::getRex);
addExtern<DAS_CALL_METHOD(_getRex_method_174)>(*this, lib, "getRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getRex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _clear_method_176 = DAS_CALL_MEMBER(Xbyak::Label::clear);
addExtern<DAS_CALL_METHOD(_clear_method_176)>(*this, lib, "clear",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Label::clear))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getId_method_178 = DAS_CALL_MEMBER(Xbyak::Label::getId);
addExtern<DAS_CALL_METHOD(_getId_method_178)>(*this, lib, "getId",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Label::getId))
	->args({"self",})
;
#endif

#endif
#endif
}
}
