
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
addExtern<DAS_BIND_FUN(Xbyak::inner::IsInInt32)>(*this, lib, "IsInInt32",SideEffects::worstDefault, "Xbyak::inner::IsInInt32")
	->args({"x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::AlignedMalloc)>(*this, lib, "AlignedMalloc",SideEffects::worstDefault, "Xbyak::AlignedMalloc")
	->args({"size","alignment"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::local::GetErrorRef), SimNode_ExtFuncCallRef>(*this, lib, "GetErrorRef",SideEffects::worstDefault, "Xbyak::local::GetErrorRef")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::inner::IsInDisp8)>(*this, lib, "IsInDisp8",SideEffects::worstDefault, "Xbyak::inner::IsInDisp8")
	->args({"x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::ClearError)>(*this, lib, "ClearError",SideEffects::worstDefault, "Xbyak::ClearError")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::ConvertErrorToString)>(*this, lib, "ConvertErrorToString",SideEffects::worstDefault, "Xbyak::ConvertErrorToString")
	->args({"err"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::local::SetError)>(*this, lib, "SetError",SideEffects::worstDefault, "Xbyak::local::SetError")
	->args({"err"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::AlignedFree)>(*this, lib, "AlignedFree",SideEffects::worstDefault, "Xbyak::AlignedFree")
	->args({"p"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(__report_gsfailure)>(*this, lib, "__report_gsfailure",SideEffects::worstDefault, "__report_gsfailure")
	->args({"_StackCookie"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::GetError)>(*this, lib, "GetError",SideEffects::worstDefault, "Xbyak::GetError")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::inner::VerifyInInt32)>(*this, lib, "VerifyInInt32",SideEffects::worstDefault, "Xbyak::inner::VerifyInInt32")
	->args({"x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getIdx_method_2 = DAS_CALL_MEMBER(Xbyak::Segment::getIdx);
addExtern<DAS_CALL_METHOD(_getIdx_method_2)>(*this, lib, "getIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Segment::getIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _toString_method_4 = DAS_CALL_MEMBER(Xbyak::Segment::toString);
addExtern<DAS_CALL_METHOD(_toString_method_4)>(*this, lib, "toString",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Segment::toString))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getKind_method_6 = DAS_CALL_MEMBER(Xbyak::Operand::getKind);
addExtern<DAS_CALL_METHOD(_getKind_method_6)>(*this, lib, "getKind",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getKind))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getIdx_method_8 = DAS_CALL_MEMBER(Xbyak::Operand::getIdx);
addExtern<DAS_CALL_METHOD(_getIdx_method_8)>(*this, lib, "getIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isNone_method_10 = DAS_CALL_MEMBER(Xbyak::Operand::isNone);
addExtern<DAS_CALL_METHOD(_isNone_method_10)>(*this, lib, "isNone",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isNone))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isMMX_method_12 = DAS_CALL_MEMBER(Xbyak::Operand::isMMX);
addExtern<DAS_CALL_METHOD(_isMMX_method_12)>(*this, lib, "isMMX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isMMX))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isXMM_method_14 = DAS_CALL_MEMBER(Xbyak::Operand::isXMM);
addExtern<DAS_CALL_METHOD(_isXMM_method_14)>(*this, lib, "isXMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isXMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isYMM_method_16 = DAS_CALL_MEMBER(Xbyak::Operand::isYMM);
addExtern<DAS_CALL_METHOD(_isYMM_method_16)>(*this, lib, "isYMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isYMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isZMM_method_18 = DAS_CALL_MEMBER(Xbyak::Operand::isZMM);
addExtern<DAS_CALL_METHOD(_isZMM_method_18)>(*this, lib, "isZMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isZMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isTMM_method_20 = DAS_CALL_MEMBER(Xbyak::Operand::isTMM);
addExtern<DAS_CALL_METHOD(_isTMM_method_20)>(*this, lib, "isTMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isTMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isXMEM_method_22 = DAS_CALL_MEMBER(Xbyak::Operand::isXMEM);
addExtern<DAS_CALL_METHOD(_isXMEM_method_22)>(*this, lib, "isXMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isXMEM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isYMEM_method_24 = DAS_CALL_MEMBER(Xbyak::Operand::isYMEM);
addExtern<DAS_CALL_METHOD(_isYMEM_method_24)>(*this, lib, "isYMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isYMEM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isZMEM_method_26 = DAS_CALL_MEMBER(Xbyak::Operand::isZMEM);
addExtern<DAS_CALL_METHOD(_isZMEM_method_26)>(*this, lib, "isZMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isZMEM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isOPMASK_method_28 = DAS_CALL_MEMBER(Xbyak::Operand::isOPMASK);
addExtern<DAS_CALL_METHOD(_isOPMASK_method_28)>(*this, lib, "isOPMASK",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isOPMASK))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isBNDREG_method_30 = DAS_CALL_MEMBER(Xbyak::Operand::isBNDREG);
addExtern<DAS_CALL_METHOD(_isBNDREG_method_30)>(*this, lib, "isBNDREG",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isBNDREG))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isREG_method_32 = DAS_CALL_MEMBER(Xbyak::Operand::isREG);
addExtern<DAS_CALL_METHOD(_isREG_method_32)>(*this, lib, "isREG",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isREG))
	->args({"self","bit"})
		->arg_init(1,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isMEM_method_34 = DAS_CALL_MEMBER(Xbyak::Operand::isMEM);
addExtern<DAS_CALL_METHOD(_isMEM_method_34)>(*this, lib, "isMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isMEM))
	->args({"self","bit"})
		->arg_init(1,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isFPU_method_36 = DAS_CALL_MEMBER(Xbyak::Operand::isFPU);
addExtern<DAS_CALL_METHOD(_isFPU_method_36)>(*this, lib, "isFPU",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isFPU))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isExt8bit_method_38 = DAS_CALL_MEMBER(Xbyak::Operand::isExt8bit);
addExtern<DAS_CALL_METHOD(_isExt8bit_method_38)>(*this, lib, "isExt8bit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isExt8bit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isExtIdx_method_40 = DAS_CALL_MEMBER(Xbyak::Operand::isExtIdx);
addExtern<DAS_CALL_METHOD(_isExtIdx_method_40)>(*this, lib, "isExtIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isExtIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isExtIdx2_method_42 = DAS_CALL_MEMBER(Xbyak::Operand::isExtIdx2);
addExtern<DAS_CALL_METHOD(_isExtIdx2_method_42)>(*this, lib, "isExtIdx2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isExtIdx2))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasEvex_method_44 = DAS_CALL_MEMBER(Xbyak::Operand::hasEvex);
addExtern<DAS_CALL_METHOD(_hasEvex_method_44)>(*this, lib, "hasEvex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::hasEvex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasRex_method_46 = DAS_CALL_MEMBER(Xbyak::Operand::hasRex);
addExtern<DAS_CALL_METHOD(_hasRex_method_46)>(*this, lib, "hasRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::hasRex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasZero_method_48 = DAS_CALL_MEMBER(Xbyak::Operand::hasZero);
addExtern<DAS_CALL_METHOD(_hasZero_method_48)>(*this, lib, "hasZero",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::hasZero))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getOpmaskIdx_method_50 = DAS_CALL_MEMBER(Xbyak::Operand::getOpmaskIdx);
addExtern<DAS_CALL_METHOD(_getOpmaskIdx_method_50)>(*this, lib, "getOpmaskIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getOpmaskIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRounding_method_52 = DAS_CALL_MEMBER(Xbyak::Operand::getRounding);
addExtern<DAS_CALL_METHOD(_getRounding_method_52)>(*this, lib, "getRounding",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getRounding))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setKind_method_54 = DAS_CALL_MEMBER(Xbyak::Operand::setKind);
addExtern<DAS_CALL_METHOD(_setKind_method_54)>(*this, lib, "setKind",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setKind))
	->args({"self","kind"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setBit_method_56 = DAS_CALL_MEMBER(Xbyak::Operand::setBit);
addExtern<DAS_CALL_METHOD(_setBit_method_56)>(*this, lib, "setBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setBit))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setOpmaskIdx_method_58 = DAS_CALL_MEMBER(Xbyak::Operand::setOpmaskIdx);
addExtern<DAS_CALL_METHOD(_setOpmaskIdx_method_58)>(*this, lib, "setOpmaskIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setOpmaskIdx))
	->args({"self","idx","arg2"})
		->arg_init(2,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setRounding_method_60 = DAS_CALL_MEMBER(Xbyak::Operand::setRounding);
addExtern<DAS_CALL_METHOD(_setRounding_method_60)>(*this, lib, "setRounding",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setRounding))
	->args({"self","idx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setZero_method_62 = DAS_CALL_MEMBER(Xbyak::Operand::setZero);
addExtern<DAS_CALL_METHOD(_setZero_method_62)>(*this, lib, "setZero",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setZero))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isHigh8bit_method_64 = DAS_CALL_MEMBER(Xbyak::Operand::isHigh8bit);
addExtern<DAS_CALL_METHOD(_isHigh8bit_method_64)>(*this, lib, "isHigh8bit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isHigh8bit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _is_method_66 = DAS_CALL_MEMBER(Xbyak::Operand::is);
addExtern<DAS_CALL_METHOD(_is_method_66)>(*this, lib, "is",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::is))
	->args({"self","kind","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isBit_method_68 = DAS_CALL_MEMBER(Xbyak::Operand::isBit);
addExtern<DAS_CALL_METHOD(_isBit_method_68)>(*this, lib, "isBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isBit))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getBit_method_70 = DAS_CALL_MEMBER(Xbyak::Operand::getBit);
addExtern<DAS_CALL_METHOD(_getBit_method_70)>(*this, lib, "getBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getBit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _toString_method_72 = DAS_CALL_MEMBER(Xbyak::Operand::toString);
addExtern<DAS_CALL_METHOD(_toString_method_72)>(*this, lib, "toString",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::toString))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isEqualIfNotInherited_method_74 = DAS_CALL_MEMBER(Xbyak::Operand::isEqualIfNotInherited);
addExtern<DAS_CALL_METHOD(_isEqualIfNotInherited_method_74)>(*this, lib, "isEqualIfNotInherited",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isEqualIfNotInherited))
	->args({"self","rhs"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getAddress_method_76 = DAS_CALL_MEMBER(Xbyak::Operand::getAddress);
addExtern<DAS_CALL_METHOD(_getAddress_method_76), SimNode_ExtFuncCallRef>(*this, lib, "getAddress",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getAddress))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getReg_method_78 = DAS_CALL_MEMBER(Xbyak::Operand::getReg);
addExtern<DAS_CALL_METHOD(_getReg_method_78), SimNode_ExtFuncCallRef>(*this, lib, "getReg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getReg))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _reset_method_80 = DAS_CALL_MEMBER(Xbyak::LabelManager::reset);
addExtern<DAS_CALL_METHOD(_reset_method_80)>(*this, lib, "reset",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::reset))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _enterLocal_method_82 = DAS_CALL_MEMBER(Xbyak::LabelManager::enterLocal);
addExtern<DAS_CALL_METHOD(_enterLocal_method_82)>(*this, lib, "enterLocal",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::enterLocal))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _leaveLocal_method_84 = DAS_CALL_MEMBER(Xbyak::LabelManager::leaveLocal);
addExtern<DAS_CALL_METHOD(_leaveLocal_method_84)>(*this, lib, "leaveLocal",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::leaveLocal))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _set_method_86 = DAS_CALL_MEMBER(Xbyak::LabelManager::set);
addExtern<DAS_CALL_METHOD(_set_method_86)>(*this, lib, "set",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::set))
	->args({"self","base"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _defineSlabel_method_88 = DAS_CALL_MEMBER(Xbyak::LabelManager::defineSlabel);
addExtern<DAS_CALL_METHOD(_defineSlabel_method_88)>(*this, lib, "defineSlabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::defineSlabel))
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _defineClabel_method_90 = DAS_CALL_MEMBER(Xbyak::LabelManager::defineClabel);
addExtern<DAS_CALL_METHOD(_defineClabel_method_90)>(*this, lib, "defineClabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::defineClabel))
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _assign_method_92 = DAS_CALL_MEMBER(Xbyak::LabelManager::assign);
addExtern<DAS_CALL_METHOD(_assign_method_92)>(*this, lib, "assign",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::assign))
	->args({"self","dst","src"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getOffset_method_94 = das::das_call_member<bool (Xbyak::LabelManager::*)(size_t *, std::string &) const,&Xbyak::LabelManager::getOffset>;
addExtern<DAS_CALL_METHOD(_getOffset_method_94)>(*this, lib, "getOffset",SideEffects::worstDefault, "das_call_member<bool (Xbyak::LabelManager::*)(size_t *, std::string &) const,&Xbyak::LabelManager::getOffset>::invoke")
	->args({"self","offset","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getOffset_method_96 = das::das_call_member<bool (Xbyak::LabelManager::*)(size_t *, const Xbyak::Label &) const,&Xbyak::LabelManager::getOffset>;
addExtern<DAS_CALL_METHOD(_getOffset_method_96)>(*this, lib, "getOffset",SideEffects::worstDefault, "das_call_member<bool (Xbyak::LabelManager::*)(size_t *, const Xbyak::Label &) const,&Xbyak::LabelManager::getOffset>::invoke")
	->args({"self","offset","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addUndefinedLabel_method_98 = das::das_call_member<void (Xbyak::LabelManager::*)(const std::string &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>;
addExtern<DAS_CALL_METHOD(_addUndefinedLabel_method_98)>(*this, lib, "addUndefinedLabel",SideEffects::worstDefault, "das_call_member<void (Xbyak::LabelManager::*)(const std::string &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>::invoke")
	->args({"self","label","jmp"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addUndefinedLabel_method_100 = das::das_call_member<void (Xbyak::LabelManager::*)(const Xbyak::Label &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>;
addExtern<DAS_CALL_METHOD(_addUndefinedLabel_method_100)>(*this, lib, "addUndefinedLabel",SideEffects::worstDefault, "das_call_member<void (Xbyak::LabelManager::*)(const Xbyak::Label &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>::invoke")
	->args({"self","label","jmp"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasUndefSlabel_method_102 = DAS_CALL_MEMBER(Xbyak::LabelManager::hasUndefSlabel);
addExtern<DAS_CALL_METHOD(_hasUndefSlabel_method_102)>(*this, lib, "hasUndefSlabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::hasUndefSlabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasUndefClabel_method_104 = DAS_CALL_MEMBER(Xbyak::LabelManager::hasUndefClabel);
addExtern<DAS_CALL_METHOD(_hasUndefClabel_method_104)>(*this, lib, "hasUndefClabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::hasUndefClabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getCode_method_106 = DAS_CALL_MEMBER(Xbyak::LabelManager::getCode);
addExtern<DAS_CALL_METHOD(_getCode_method_106)>(*this, lib, "getCode",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::getCode))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isReady_method_108 = DAS_CALL_MEMBER(Xbyak::LabelManager::isReady);
addExtern<DAS_CALL_METHOD(_isReady_method_108)>(*this, lib, "isReady",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::isReady))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setProtectMode_method_110 = DAS_CALL_MEMBER(Xbyak::CodeArray::setProtectMode);
addExtern<DAS_CALL_METHOD(_setProtectMode_method_110)>(*this, lib, "setProtectMode",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setProtectMode))
	->args({"self","mode","throwException"})
		->arg_init(2,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setProtectModeRE_method_112 = DAS_CALL_MEMBER(Xbyak::CodeArray::setProtectModeRE);
addExtern<DAS_CALL_METHOD(_setProtectModeRE_method_112)>(*this, lib, "setProtectModeRE",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setProtectModeRE))
	->args({"self","throwException"})
		->arg_init(1,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setProtectModeRW_method_114 = DAS_CALL_MEMBER(Xbyak::CodeArray::setProtectModeRW);
addExtern<DAS_CALL_METHOD(_setProtectModeRW_method_114)>(*this, lib, "setProtectModeRW",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setProtectModeRW))
	->args({"self","throwException"})
		->arg_init(1,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _resetSize_method_116 = DAS_CALL_MEMBER(Xbyak::CodeArray::resetSize);
addExtern<DAS_CALL_METHOD(_resetSize_method_116)>(*this, lib, "resetSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::resetSize))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _db_method_118 = das::das_call_member<void (Xbyak::CodeArray::*)(int),&Xbyak::CodeArray::db>;
addExtern<DAS_CALL_METHOD(_db_method_118)>(*this, lib, "db",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeArray::*)(int),&Xbyak::CodeArray::db>::invoke")
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _db_method_120 = das::das_call_member<void (Xbyak::CodeArray::*)(const uint8_t *, size_t),&Xbyak::CodeArray::db>;
addExtern<DAS_CALL_METHOD(_db_method_120)>(*this, lib, "db",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeArray::*)(const uint8_t *, size_t),&Xbyak::CodeArray::db>::invoke")
	->args({"self","code","codeSize"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _db_method_122 = das::das_call_member<void (Xbyak::CodeArray::*)(uint64_t, size_t),&Xbyak::CodeArray::db>;
addExtern<DAS_CALL_METHOD(_db_method_122)>(*this, lib, "db",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeArray::*)(uint64_t, size_t),&Xbyak::CodeArray::db>::invoke")
	->args({"self","code","codeSize"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dw_method_124 = DAS_CALL_MEMBER(Xbyak::CodeArray::dw);
addExtern<DAS_CALL_METHOD(_dw_method_124)>(*this, lib, "dw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dw))
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dd_method_126 = DAS_CALL_MEMBER(Xbyak::CodeArray::dd);
addExtern<DAS_CALL_METHOD(_dd_method_126)>(*this, lib, "dd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dd))
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dq_method_128 = DAS_CALL_MEMBER(Xbyak::CodeArray::dq);
addExtern<DAS_CALL_METHOD(_dq_method_128)>(*this, lib, "dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dq))
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getSize_method_130 = DAS_CALL_MEMBER(Xbyak::CodeArray::getSize);
addExtern<DAS_CALL_METHOD(_getSize_method_130)>(*this, lib, "getSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::getSize))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setSize_method_132 = DAS_CALL_MEMBER(Xbyak::CodeArray::setSize);
addExtern<DAS_CALL_METHOD(_setSize_method_132)>(*this, lib, "setSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setSize))
	->args({"self","size"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dump_method_134 = DAS_CALL_MEMBER(Xbyak::CodeArray::dump);
addExtern<DAS_CALL_METHOD(_dump_method_134)>(*this, lib, "dump",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dump))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rewrite_method_136 = DAS_CALL_MEMBER(Xbyak::CodeArray::rewrite);
addExtern<DAS_CALL_METHOD(_rewrite_method_136)>(*this, lib, "rewrite",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::rewrite))
	->args({"self","offset","disp","size"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _save_method_138 = DAS_CALL_MEMBER(Xbyak::CodeArray::save);
addExtern<DAS_CALL_METHOD(_save_method_138)>(*this, lib, "save",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::save))
	->args({"self","offset","val","size","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isAutoGrow_method_140 = DAS_CALL_MEMBER(Xbyak::CodeArray::isAutoGrow);
addExtern<DAS_CALL_METHOD(_isAutoGrow_method_140)>(*this, lib, "isAutoGrow",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::isAutoGrow))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isCalledCalcJmpAddress_method_142 = DAS_CALL_MEMBER(Xbyak::CodeArray::isCalledCalcJmpAddress);
addExtern<DAS_CALL_METHOD(_isCalledCalcJmpAddress_method_142)>(*this, lib, "isCalledCalcJmpAddress",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::isCalledCalcJmpAddress))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _changeBit_method_144 = DAS_CALL_MEMBER(Xbyak::Reg::changeBit);
addExtern<DAS_CALL_METHOD(_changeBit_method_144), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "changeBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::changeBit))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexW_method_146 = DAS_CALL_MEMBER(Xbyak::Reg::getRexW);
addExtern<DAS_CALL_METHOD(_getRexW_method_146)>(*this, lib, "getRexW",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexW))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexR_method_148 = DAS_CALL_MEMBER(Xbyak::Reg::getRexR);
addExtern<DAS_CALL_METHOD(_getRexR_method_148)>(*this, lib, "getRexR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexR))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexX_method_150 = DAS_CALL_MEMBER(Xbyak::Reg::getRexX);
addExtern<DAS_CALL_METHOD(_getRexX_method_150)>(*this, lib, "getRexX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexX))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexB_method_152 = DAS_CALL_MEMBER(Xbyak::Reg::getRexB);
addExtern<DAS_CALL_METHOD(_getRexB_method_152)>(*this, lib, "getRexB",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexB))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRex_method_154 = DAS_CALL_MEMBER(Xbyak::Reg::getRex);
addExtern<DAS_CALL_METHOD(_getRex_method_154)>(*this, lib, "getRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRex))
	->args({"self","base"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt8_method_156 = DAS_CALL_MEMBER(Xbyak::Reg::cvt8);
addExtern<DAS_CALL_METHOD(_cvt8_method_156), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt8))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt16_method_158 = DAS_CALL_MEMBER(Xbyak::Reg::cvt16);
addExtern<DAS_CALL_METHOD(_cvt16_method_158), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt16",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt16))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt32_method_160 = DAS_CALL_MEMBER(Xbyak::Reg::cvt32);
addExtern<DAS_CALL_METHOD(_cvt32_method_160), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt32",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt32))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt64_method_162 = DAS_CALL_MEMBER(Xbyak::Reg::cvt64);
addExtern<DAS_CALL_METHOD(_cvt64_method_162), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt64",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt64))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRegExp_method_164 = DAS_CALL_MEMBER(Xbyak::Address::getRegExp);
addExtern<DAS_CALL_METHOD(_getRegExp_method_164), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "getRegExp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getRegExp))
	->args({"self","optimize"})
		->arg_init(1,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getMode_method_166 = DAS_CALL_MEMBER(Xbyak::Address::getMode);
addExtern<DAS_CALL_METHOD(_getMode_method_166)>(*this, lib, "getMode",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getMode))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _is32bit_method_168 = DAS_CALL_MEMBER(Xbyak::Address::is32bit);
addExtern<DAS_CALL_METHOD(_is32bit_method_168)>(*this, lib, "is32bit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::is32bit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isOnlyDisp_method_170 = DAS_CALL_MEMBER(Xbyak::Address::isOnlyDisp);
addExtern<DAS_CALL_METHOD(_isOnlyDisp_method_170)>(*this, lib, "isOnlyDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::isOnlyDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getDisp_method_172 = DAS_CALL_MEMBER(Xbyak::Address::getDisp);
addExtern<DAS_CALL_METHOD(_getDisp_method_172)>(*this, lib, "getDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRex_method_174 = DAS_CALL_MEMBER(Xbyak::Address::getRex);
addExtern<DAS_CALL_METHOD(_getRex_method_174)>(*this, lib, "getRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getRex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _is64bitDisp_method_176 = DAS_CALL_MEMBER(Xbyak::Address::is64bitDisp);
addExtern<DAS_CALL_METHOD(_is64bitDisp_method_176)>(*this, lib, "is64bitDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::is64bitDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isBroadcast_method_178 = DAS_CALL_MEMBER(Xbyak::Address::isBroadcast);
addExtern<DAS_CALL_METHOD(_isBroadcast_method_178)>(*this, lib, "isBroadcast",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::isBroadcast))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getLabel_method_180 = DAS_CALL_MEMBER(Xbyak::Address::getLabel);
addExtern<DAS_CALL_METHOD(_getLabel_method_180)>(*this, lib, "getLabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getLabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isVsib_method_182 = DAS_CALL_MEMBER(Xbyak::Address::isVsib);
addExtern<DAS_CALL_METHOD(_isVsib_method_182)>(*this, lib, "isVsib",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::isVsib))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _clear_method_184 = DAS_CALL_MEMBER(Xbyak::Label::clear);
addExtern<DAS_CALL_METHOD(_clear_method_184)>(*this, lib, "clear",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Label::clear))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getId_method_186 = DAS_CALL_MEMBER(Xbyak::Label::getId);
addExtern<DAS_CALL_METHOD(_getId_method_186)>(*this, lib, "getId",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Label::getId))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getAddress_method_188 = DAS_CALL_MEMBER(Xbyak::Label::getAddress);
addExtern<DAS_CALL_METHOD(_getAddress_method_188)>(*this, lib, "getAddress",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Label::getAddress))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isVsib_method_190 = DAS_CALL_MEMBER(Xbyak::RegExp::isVsib);
addExtern<DAS_CALL_METHOD(_isVsib_method_190)>(*this, lib, "isVsib",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::isVsib))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _optimize_method_192 = DAS_CALL_MEMBER(Xbyak::RegExp::optimize);
addExtern<DAS_CALL_METHOD(_optimize_method_192), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "optimize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::optimize))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getBase_method_194 = DAS_CALL_MEMBER(Xbyak::RegExp::getBase);
addExtern<DAS_CALL_METHOD(_getBase_method_194), SimNode_ExtFuncCallRef>(*this, lib, "getBase",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getBase))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getIndex_method_196 = DAS_CALL_MEMBER(Xbyak::RegExp::getIndex);
addExtern<DAS_CALL_METHOD(_getIndex_method_196), SimNode_ExtFuncCallRef>(*this, lib, "getIndex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getIndex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getScale_method_198 = DAS_CALL_MEMBER(Xbyak::RegExp::getScale);
addExtern<DAS_CALL_METHOD(_getScale_method_198)>(*this, lib, "getScale",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getScale))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getDisp_method_200 = DAS_CALL_MEMBER(Xbyak::RegExp::getDisp);
addExtern<DAS_CALL_METHOD(_getDisp_method_200)>(*this, lib, "getDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verify_method_202 = DAS_CALL_MEMBER(Xbyak::RegExp::verify);
addExtern<DAS_CALL_METHOD(_verify_method_202)>(*this, lib, "verify",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::verify))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRex_method_204 = DAS_CALL_MEMBER(Xbyak::RegExp::getRex);
addExtern<DAS_CALL_METHOD(_getRex_method_204)>(*this, lib, "getRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getRex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _alloc_method_206 = DAS_CALL_MEMBER(Xbyak::Allocator::alloc);
addExtern<DAS_CALL_METHOD(_alloc_method_206)>(*this, lib, "alloc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Allocator::alloc))
	->args({"self","size"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _free_method_208 = DAS_CALL_MEMBER(Xbyak::Allocator::free);
addExtern<DAS_CALL_METHOD(_free_method_208)>(*this, lib, "free",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Allocator::free))
	->args({"self","p"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _useProtect_method_210 = DAS_CALL_MEMBER(Xbyak::Allocator::useProtect);
addExtern<DAS_CALL_METHOD(_useProtect_method_210)>(*this, lib, "useProtect",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Allocator::useProtect))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _copyAndSetIdx_method_212 = DAS_CALL_MEMBER(Xbyak::Xmm::copyAndSetIdx);
addExtern<DAS_CALL_METHOD(_copyAndSetIdx_method_212), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "copyAndSetIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Xmm::copyAndSetIdx))
	->args({"self","idx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _copyAndSetKind_method_214 = DAS_CALL_MEMBER(Xbyak::Xmm::copyAndSetKind);
addExtern<DAS_CALL_METHOD(_copyAndSetKind_method_214), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "copyAndSetKind",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Xmm::copyAndSetKind))
	->args({"self","kind"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rex_method_216 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rex);
addExtern<DAS_CALL_METHOD(_rex_method_216)>(*this, lib, "rex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rex))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getPP_method_218 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::getPP);
addExtern<DAS_CALL_METHOD(_getPP_method_218)>(*this, lib, "getPP",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::getPP))
	->args({"self","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vex_method_220 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vex);
addExtern<DAS_CALL_METHOD(_vex_method_220)>(*this, lib, "vex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vex))
	->args({"self","reg","base","v","type","code","x"})
		->arg_init(6,make_smart<ExprConstBool>(false))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifySAE_method_222 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifySAE);
addExtern<DAS_CALL_METHOD(_verifySAE_method_222)>(*this, lib, "verifySAE",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifySAE))
	->args({"self","r","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifyER_method_224 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifyER);
addExtern<DAS_CALL_METHOD(_verifyER_method_224)>(*this, lib, "verifyER",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifyER))
	->args({"self","r","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifyDuplicate_method_226 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifyDuplicate);
addExtern<DAS_CALL_METHOD(_verifyDuplicate_method_226)>(*this, lib, "verifyDuplicate",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifyDuplicate))
	->args({"self","a","b","c","err"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _evex_method_228 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::evex);
addExtern<DAS_CALL_METHOD(_evex_method_228)>(*this, lib, "evex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::evex))
	->args({"self","reg","base","v","type","code","x","b","aaa","VL","Hi16Vidx"})
		->arg_init(6,make_smart<ExprConstBool>(false))
		->arg_init(7,make_smart<ExprConstBool>(false))
		->arg_init(8,make_smart<ExprConstInt>(0))
		->arg_init(10,make_smart<ExprConstBool>(false))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setModRM_method_230 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setModRM);
addExtern<DAS_CALL_METHOD(_setModRM_method_230)>(*this, lib, "setModRM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setModRM))
	->args({"self","mod","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setSIB_method_232 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setSIB);
addExtern<DAS_CALL_METHOD(_setSIB_method_232)>(*this, lib, "setSIB",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setSIB))
	->args({"self","e","reg","disp8N"})
		->arg_init(3,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isInDisp16_method_234 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::isInDisp16);
addExtern<DAS_CALL_METHOD(_isInDisp16_method_234)>(*this, lib, "isInDisp16",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::isInDisp16))
	->args({"self","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opModR_method_236 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opModR);
addExtern<DAS_CALL_METHOD(_opModR_method_236)>(*this, lib, "opModR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opModR))
	->args({"self","reg1","reg2","code0","code1","code2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opModM_method_238 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opModM);
addExtern<DAS_CALL_METHOD(_opModM_method_238)>(*this, lib, "opModM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opModM))
	->args({"self","addr","reg","code0","code1","code2","immSize"})
		->arg_init(6,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opLoadSeg_method_240 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opLoadSeg);
addExtern<DAS_CALL_METHOD(_opLoadSeg_method_240)>(*this, lib, "opLoadSeg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opLoadSeg))
	->args({"self","addr","reg","code0","code1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMIB_method_242 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMIB);
addExtern<DAS_CALL_METHOD(_opMIB_method_242)>(*this, lib, "opMIB",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMIB))
	->args({"self","addr","reg","code0","code1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _makeJmp_method_244 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::makeJmp);
addExtern<DAS_CALL_METHOD(_makeJmp_method_244)>(*this, lib, "makeJmp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::makeJmp))
	->args({"self","disp","type","shortCode","longCode","longPref"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isNEAR_method_246 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::isNEAR);
addExtern<DAS_CALL_METHOD(_isNEAR_method_246)>(*this, lib, "isNEAR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::isNEAR))
	->args({"self","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opJmpAbs_method_248 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opJmpAbs);
addExtern<DAS_CALL_METHOD(_opJmpAbs_method_248)>(*this, lib, "opJmpAbs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opJmpAbs))
	->args({"self","addr","type","shortCode","longCode","longPref"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAddr_method_250 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAddr);
addExtern<DAS_CALL_METHOD(_opAddr_method_250)>(*this, lib, "opAddr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAddr))
	->args({"self","addr","reg","immSize","disp8N","permitVisb"})
		->arg_init(3,make_smart<ExprConstInt>(0))
		->arg_init(4,make_smart<ExprConstInt>(0))
		->arg_init(5,make_smart<ExprConstBool>(false))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGen_method_252 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGen);
addExtern<DAS_CALL_METHOD(_opGen_method_252)>(*this, lib, "opGen",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGen))
	->args({"self","reg","op","code","pref","isValid","imm8","preCode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMMX_IMM_method_254 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMMX_IMM);
addExtern<DAS_CALL_METHOD(_opMMX_IMM_method_254)>(*this, lib, "opMMX_IMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMMX_IMM))
	->args({"self","mmx","imm8","code","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMMX_method_256 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMMX);
addExtern<DAS_CALL_METHOD(_opMMX_method_256)>(*this, lib, "opMMX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMMX))
	->args({"self","mmx","op","code","pref","imm8","preCode"})
		->arg_init(4,make_smart<ExprConstInt>(102))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMovXMM_method_258 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMovXMM);
addExtern<DAS_CALL_METHOD(_opMovXMM_method_258)>(*this, lib, "opMovXMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMovXMM))
	->args({"self","op1","op2","code","pref"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opExt_method_260 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opExt);
addExtern<DAS_CALL_METHOD(_opExt_method_260)>(*this, lib, "opExt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opExt))
	->args({"self","op","mmx","code","imm","hasMMX2"})
		->arg_init(5,make_smart<ExprConstBool>(false))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opR_ModM_method_262 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opR_ModM);
addExtern<DAS_CALL_METHOD(_opR_ModM_method_262)>(*this, lib, "opR_ModM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opR_ModM))
	->args({"self","op","bit","ext","code0","code1","code2","disableRex","immSize"})
		->arg_init(7,make_smart<ExprConstBool>(false))
		->arg_init(8,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opShift_method_264 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int, int),&Xbyak::CodeGenerator::opShift>;
addExtern<DAS_CALL_METHOD(_opShift_method_264)>(*this, lib, "opShift",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int, int),&Xbyak::CodeGenerator::opShift>::invoke")
	->args({"self","op","imm","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opShift_method_266 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &, int),&Xbyak::CodeGenerator::opShift>;
addExtern<DAS_CALL_METHOD(_opShift_method_266)>(*this, lib, "opShift",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &, int),&Xbyak::CodeGenerator::opShift>::invoke")
	->args({"self","op","_cl","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opModRM_method_268 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opModRM);
addExtern<DAS_CALL_METHOD(_opModRM_method_268)>(*this, lib, "opModRM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opModRM))
	->args({"self","op1","op2","condR","condM","code0","code1","code2","immSize"})
		->arg_init(8,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opShxd_method_270 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opShxd);
addExtern<DAS_CALL_METHOD(_opShxd_method_270)>(*this, lib, "opShxd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opShxd))
	->args({"self","op","reg","imm","code","_cl"})
		->arg_init(5,make_smart<ExprConstPtr>())
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opRM_RM_method_272 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opRM_RM);
addExtern<DAS_CALL_METHOD(_opRM_RM_method_272)>(*this, lib, "opRM_RM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opRM_RM))
	->args({"self","op1","op2","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opRM_I_method_274 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opRM_I);
addExtern<DAS_CALL_METHOD(_opRM_I_method_274)>(*this, lib, "opRM_I",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opRM_I))
	->args({"self","op","imm","code","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opIncDec_method_276 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opIncDec);
addExtern<DAS_CALL_METHOD(_opIncDec_method_276)>(*this, lib, "opIncDec",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opIncDec))
	->args({"self","op","code","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opPushPop_method_278 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opPushPop);
addExtern<DAS_CALL_METHOD(_opPushPop_method_278)>(*this, lib, "opPushPop",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opPushPop))
	->args({"self","op","code","ext","alt"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifyMemHasSize_method_280 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifyMemHasSize);
addExtern<DAS_CALL_METHOD(_verifyMemHasSize_method_280)>(*this, lib, "verifyMemHasSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifyMemHasSize))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_imm_method_282 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mov_imm);
addExtern<DAS_CALL_METHOD(_mov_imm_method_282)>(*this, lib, "mov_imm",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mov_imm))
	->args({"self","reg","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMovxx_method_284 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMovxx);
addExtern<DAS_CALL_METHOD(_opMovxx_method_284)>(*this, lib, "opMovxx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMovxx))
	->args({"self","reg","op","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opFpuMem_method_286 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opFpuMem);
addExtern<DAS_CALL_METHOD(_opFpuMem_method_286)>(*this, lib, "opFpuMem",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opFpuMem))
	->args({"self","addr","m16","m32","m64","ext","m64ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opFpuFpu_method_288 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opFpuFpu);
addExtern<DAS_CALL_METHOD(_opFpuFpu_method_288)>(*this, lib, "opFpuFpu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opFpuFpu))
	->args({"self","reg1","reg2","code1","code2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opFpu_method_290 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opFpu);
addExtern<DAS_CALL_METHOD(_opFpu_method_290)>(*this, lib, "opFpu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opFpu))
	->args({"self","reg","code1","code2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opVex_method_292 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opVex);
addExtern<DAS_CALL_METHOD(_opVex_method_292)>(*this, lib, "opVex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opVex))
	->args({"self","r","p1","op2","type","code","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGpr_method_294 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGpr);
addExtern<DAS_CALL_METHOD(_opGpr_method_294)>(*this, lib, "opGpr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGpr))
	->args({"self","r","op1","op2","type","code","isR_R_RM","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAVX_X_X_XM_method_296 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAVX_X_X_XM);
addExtern<DAS_CALL_METHOD(_opAVX_X_X_XM_method_296)>(*this, lib, "opAVX_X_X_XM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAVX_X_X_XM))
	->args({"self","x1","op1","op2","type","code0","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAVX_K_X_XM_method_298 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAVX_K_X_XM);
addExtern<DAS_CALL_METHOD(_opAVX_K_X_XM_method_298)>(*this, lib, "opAVX_K_X_XM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAVX_K_X_XM))
	->args({"self","k","x2","op3","type","code0","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkCvt1_method_300 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkCvt1);
addExtern<DAS_CALL_METHOD(_checkCvt1_method_300)>(*this, lib, "checkCvt1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkCvt1))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkCvt2_method_302 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkCvt2);
addExtern<DAS_CALL_METHOD(_checkCvt2_method_302)>(*this, lib, "checkCvt2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkCvt2))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt_method_304 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt);
addExtern<DAS_CALL_METHOD(_opCvt_method_304)>(*this, lib, "opCvt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt))
	->args({"self","x","op","type","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt2_method_306 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt2);
addExtern<DAS_CALL_METHOD(_opCvt2_method_306)>(*this, lib, "opCvt2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt2))
	->args({"self","x","op","type","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt3_method_308 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt3);
addExtern<DAS_CALL_METHOD(_opCvt3_method_308)>(*this, lib, "opCvt3",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt3))
	->args({"self","x1","x2","op","type","type64","type32","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkCvt4_method_310 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkCvt4);
addExtern<DAS_CALL_METHOD(_checkCvt4_method_310)>(*this, lib, "checkCvt4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkCvt4))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt5_method_312 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt5);
addExtern<DAS_CALL_METHOD(_opCvt5_method_312)>(*this, lib, "opCvt5",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt5))
	->args({"self","x","op","type","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtIdx0_method_314 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtIdx0);
addExtern<DAS_CALL_METHOD(_cvtIdx0_method_314), SimNode_ExtFuncCallRef>(*this, lib, "cvtIdx0",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtIdx0))
	->args({"self","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAVX_X_XM_IMM_method_316 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAVX_X_XM_IMM);
addExtern<DAS_CALL_METHOD(_opAVX_X_XM_IMM_method_316)>(*this, lib, "opAVX_X_XM_IMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAVX_X_XM_IMM))
	->args({"self","x","op","type","code","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opSp1_method_318 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opSp1);
addExtern<DAS_CALL_METHOD(_opSp1_method_318)>(*this, lib, "opSp1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opSp1))
	->args({"self","reg","op","pref","code0","code1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGather_method_320 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGather);
addExtern<DAS_CALL_METHOD(_opGather_method_320)>(*this, lib, "opGather",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGather))
	->args({"self","x1","addr","x2","type","code","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkGather2_method_322 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkGather2);
addExtern<DAS_CALL_METHOD(_checkGather2_method_322)>(*this, lib, "checkGather2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkGather2))
	->args({"self","x1","x2","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGather2_method_324 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGather2);
addExtern<DAS_CALL_METHOD(_opGather2_method_324)>(*this, lib, "opGather2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGather2))
	->args({"self","x","addr","type","code","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opVmov_method_326 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opVmov);
addExtern<DAS_CALL_METHOD(_opVmov_method_326)>(*this, lib, "opVmov",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opVmov))
	->args({"self","op","x","type","code","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGatherFetch_method_328 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGatherFetch);
addExtern<DAS_CALL_METHOD(_opGatherFetch_method_328)>(*this, lib, "opGatherFetch",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGatherFetch))
	->args({"self","addr","x","type","code","kind"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opVnni_method_330 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opVnni);
addExtern<DAS_CALL_METHOD(_opVnni_method_330)>(*this, lib, "opVnni",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opVnni))
	->args({"self","x1","x2","op","type","code0","encoding"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opInOut_method_332 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::opInOut>;
addExtern<DAS_CALL_METHOD(_opInOut_method_332)>(*this, lib, "opInOut",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::opInOut>::invoke")
	->args({"self","a","d","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opInOut_method_334 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t, uint8_t),&Xbyak::CodeGenerator::opInOut>;
addExtern<DAS_CALL_METHOD(_opInOut_method_334)>(*this, lib, "opInOut",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t, uint8_t),&Xbyak::CodeGenerator::opInOut>::invoke")
	->args({"self","a","code","v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAMX_method_336 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAMX);
addExtern<DAS_CALL_METHOD(_opAMX_method_336)>(*this, lib, "opAMX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAMX))
	->args({"self","t1","addr","type","code0"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getVersion_method_338 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::getVersion);
addExtern<DAS_CALL_METHOD(_getVersion_method_338)>(*this, lib, "getVersion",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::getVersion))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _inLocalLabel_method_340 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::inLocalLabel);
addExtern<DAS_CALL_METHOD(_inLocalLabel_method_340)>(*this, lib, "inLocalLabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::inLocalLabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _outLocalLabel_method_342 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::outLocalLabel);
addExtern<DAS_CALL_METHOD(_outLocalLabel_method_342)>(*this, lib, "outLocalLabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::outLocalLabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _assignL_method_344 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::assignL);
addExtern<DAS_CALL_METHOD(_assignL_method_344)>(*this, lib, "assignL",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::assignL))
	->args({"self","dst","src"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _putL_method_346 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::putL>;
addExtern<DAS_CALL_METHOD(_putL_method_346)>(*this, lib, "putL",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::putL>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _putL_method_348 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::putL>;
addExtern<DAS_CALL_METHOD(_putL_method_348)>(*this, lib, "putL",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::putL>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setDefaultJmpNEAR_method_350 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setDefaultJmpNEAR);
addExtern<DAS_CALL_METHOD(_setDefaultJmpNEAR_method_350)>(*this, lib, "setDefaultJmpNEAR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setDefaultJmpNEAR))
	->args({"self","isNear"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_352 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_352)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_354 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_354)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_356 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_356)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_358 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_358)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_360 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_360)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","addr","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_362 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_362)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_364 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_364)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_366 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_366)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_368 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_368)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_370 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_370)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _test_method_372 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::test>;
addExtern<DAS_CALL_METHOD(_test_method_372)>(*this, lib, "test",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::test>::invoke")
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _test_method_374 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::test>;
addExtern<DAS_CALL_METHOD(_test_method_374)>(*this, lib, "test",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::test>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _imul_method_376 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>;
addExtern<DAS_CALL_METHOD(_imul_method_376)>(*this, lib, "imul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>::invoke")
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _imul_method_378 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &, int),&Xbyak::CodeGenerator::imul>;
addExtern<DAS_CALL_METHOD(_imul_method_378)>(*this, lib, "imul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &, int),&Xbyak::CodeGenerator::imul>::invoke")
	->args({"self","reg","op","imm"})
;
#endif

#endif
#endif
}
}
