// ------------
// methods 
// ------------

#ifdef GLOBAL_NAMESPACE
using _getIdx_method_1 = DAS_CALL_MEMBER(Xbyak::Segment::getIdx);
addExtern<DAS_CALL_METHOD(_getIdx_method_1)>(*this, lib, "getIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Segment::getIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _toString_method_3 = DAS_CALL_MEMBER(Xbyak::Segment::toString);
addExtern<DAS_CALL_METHOD(_toString_method_3)>(*this, lib, "toString",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Segment::toString))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getKind_method_5 = DAS_CALL_MEMBER(Xbyak::Operand::getKind);
addExtern<DAS_CALL_METHOD(_getKind_method_5)>(*this, lib, "getKind",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getKind))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getIdx_method_7 = DAS_CALL_MEMBER(Xbyak::Operand::getIdx);
addExtern<DAS_CALL_METHOD(_getIdx_method_7)>(*this, lib, "getIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isNone_method_9 = DAS_CALL_MEMBER(Xbyak::Operand::isNone);
addExtern<DAS_CALL_METHOD(_isNone_method_9)>(*this, lib, "isNone",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isNone))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isMMX_method_11 = DAS_CALL_MEMBER(Xbyak::Operand::isMMX);
addExtern<DAS_CALL_METHOD(_isMMX_method_11)>(*this, lib, "isMMX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isMMX))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isXMM_method_13 = DAS_CALL_MEMBER(Xbyak::Operand::isXMM);
addExtern<DAS_CALL_METHOD(_isXMM_method_13)>(*this, lib, "isXMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isXMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isYMM_method_15 = DAS_CALL_MEMBER(Xbyak::Operand::isYMM);
addExtern<DAS_CALL_METHOD(_isYMM_method_15)>(*this, lib, "isYMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isYMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isZMM_method_17 = DAS_CALL_MEMBER(Xbyak::Operand::isZMM);
addExtern<DAS_CALL_METHOD(_isZMM_method_17)>(*this, lib, "isZMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isZMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isTMM_method_19 = DAS_CALL_MEMBER(Xbyak::Operand::isTMM);
addExtern<DAS_CALL_METHOD(_isTMM_method_19)>(*this, lib, "isTMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isTMM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isXMEM_method_21 = DAS_CALL_MEMBER(Xbyak::Operand::isXMEM);
addExtern<DAS_CALL_METHOD(_isXMEM_method_21)>(*this, lib, "isXMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isXMEM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isYMEM_method_23 = DAS_CALL_MEMBER(Xbyak::Operand::isYMEM);
addExtern<DAS_CALL_METHOD(_isYMEM_method_23)>(*this, lib, "isYMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isYMEM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isZMEM_method_25 = DAS_CALL_MEMBER(Xbyak::Operand::isZMEM);
addExtern<DAS_CALL_METHOD(_isZMEM_method_25)>(*this, lib, "isZMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isZMEM))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isOPMASK_method_27 = DAS_CALL_MEMBER(Xbyak::Operand::isOPMASK);
addExtern<DAS_CALL_METHOD(_isOPMASK_method_27)>(*this, lib, "isOPMASK",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isOPMASK))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isBNDREG_method_29 = DAS_CALL_MEMBER(Xbyak::Operand::isBNDREG);
addExtern<DAS_CALL_METHOD(_isBNDREG_method_29)>(*this, lib, "isBNDREG",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isBNDREG))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isREG_method_31 = DAS_CALL_MEMBER(Xbyak::Operand::isREG);
addExtern<DAS_CALL_METHOD(_isREG_method_31)>(*this, lib, "isREG",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isREG))
	->args({"self","bit"})
		->arg_init(1,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isMEM_method_33 = DAS_CALL_MEMBER(Xbyak::Operand::isMEM);
addExtern<DAS_CALL_METHOD(_isMEM_method_33)>(*this, lib, "isMEM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isMEM))
	->args({"self","bit"})
		->arg_init(1,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isFPU_method_35 = DAS_CALL_MEMBER(Xbyak::Operand::isFPU);
addExtern<DAS_CALL_METHOD(_isFPU_method_35)>(*this, lib, "isFPU",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isFPU))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isExt8bit_method_37 = DAS_CALL_MEMBER(Xbyak::Operand::isExt8bit);
addExtern<DAS_CALL_METHOD(_isExt8bit_method_37)>(*this, lib, "isExt8bit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isExt8bit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isExtIdx_method_39 = DAS_CALL_MEMBER(Xbyak::Operand::isExtIdx);
addExtern<DAS_CALL_METHOD(_isExtIdx_method_39)>(*this, lib, "isExtIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isExtIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isExtIdx2_method_41 = DAS_CALL_MEMBER(Xbyak::Operand::isExtIdx2);
addExtern<DAS_CALL_METHOD(_isExtIdx2_method_41)>(*this, lib, "isExtIdx2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isExtIdx2))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasEvex_method_43 = DAS_CALL_MEMBER(Xbyak::Operand::hasEvex);
addExtern<DAS_CALL_METHOD(_hasEvex_method_43)>(*this, lib, "hasEvex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::hasEvex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasRex_method_45 = DAS_CALL_MEMBER(Xbyak::Operand::hasRex);
addExtern<DAS_CALL_METHOD(_hasRex_method_45)>(*this, lib, "hasRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::hasRex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasZero_method_47 = DAS_CALL_MEMBER(Xbyak::Operand::hasZero);
addExtern<DAS_CALL_METHOD(_hasZero_method_47)>(*this, lib, "hasZero",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::hasZero))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getOpmaskIdx_method_49 = DAS_CALL_MEMBER(Xbyak::Operand::getOpmaskIdx);
addExtern<DAS_CALL_METHOD(_getOpmaskIdx_method_49)>(*this, lib, "getOpmaskIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getOpmaskIdx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRounding_method_51 = DAS_CALL_MEMBER(Xbyak::Operand::getRounding);
addExtern<DAS_CALL_METHOD(_getRounding_method_51)>(*this, lib, "getRounding",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getRounding))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setKind_method_53 = DAS_CALL_MEMBER(Xbyak::Operand::setKind);
addExtern<DAS_CALL_METHOD(_setKind_method_53)>(*this, lib, "setKind",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setKind))
	->args({"self","kind"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setBit_method_55 = DAS_CALL_MEMBER(Xbyak::Operand::setBit);
addExtern<DAS_CALL_METHOD(_setBit_method_55)>(*this, lib, "setBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setBit))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setOpmaskIdx_method_57 = DAS_CALL_MEMBER(Xbyak::Operand::setOpmaskIdx);
addExtern<DAS_CALL_METHOD(_setOpmaskIdx_method_57)>(*this, lib, "setOpmaskIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setOpmaskIdx))
	->args({"self","idx","arg2"})
		->arg_init(2,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setRounding_method_59 = DAS_CALL_MEMBER(Xbyak::Operand::setRounding);
addExtern<DAS_CALL_METHOD(_setRounding_method_59)>(*this, lib, "setRounding",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setRounding))
	->args({"self","idx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setZero_method_61 = DAS_CALL_MEMBER(Xbyak::Operand::setZero);
addExtern<DAS_CALL_METHOD(_setZero_method_61)>(*this, lib, "setZero",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::setZero))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isHigh8bit_method_63 = DAS_CALL_MEMBER(Xbyak::Operand::isHigh8bit);
addExtern<DAS_CALL_METHOD(_isHigh8bit_method_63)>(*this, lib, "isHigh8bit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isHigh8bit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _is_method_65 = DAS_CALL_MEMBER(Xbyak::Operand::is);
addExtern<DAS_CALL_METHOD(_is_method_65)>(*this, lib, "is",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::is))
	->args({"self","kind","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isBit_method_67 = DAS_CALL_MEMBER(Xbyak::Operand::isBit);
addExtern<DAS_CALL_METHOD(_isBit_method_67)>(*this, lib, "isBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isBit))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getBit_method_69 = DAS_CALL_MEMBER(Xbyak::Operand::getBit);
addExtern<DAS_CALL_METHOD(_getBit_method_69)>(*this, lib, "getBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getBit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _toString_method_71 = DAS_CALL_MEMBER(Xbyak::Operand::toString);
addExtern<DAS_CALL_METHOD(_toString_method_71)>(*this, lib, "toString",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::toString))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isEqualIfNotInherited_method_73 = DAS_CALL_MEMBER(Xbyak::Operand::isEqualIfNotInherited);
addExtern<DAS_CALL_METHOD(_isEqualIfNotInherited_method_73)>(*this, lib, "isEqualIfNotInherited",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::isEqualIfNotInherited))
	->args({"self","rhs"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getAddress_method_75 = DAS_CALL_MEMBER(Xbyak::Operand::getAddress);
addExtern<DAS_CALL_METHOD(_getAddress_method_75), SimNode_ExtFuncCallRef>(*this, lib, "getAddress",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getAddress))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getReg_method_77 = DAS_CALL_MEMBER(Xbyak::Operand::getReg);
addExtern<DAS_CALL_METHOD(_getReg_method_77), SimNode_ExtFuncCallRef>(*this, lib, "getReg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Operand::getReg))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _reset_method_79 = DAS_CALL_MEMBER(Xbyak::LabelManager::reset);
addExtern<DAS_CALL_METHOD(_reset_method_79)>(*this, lib, "reset",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::reset))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _enterLocal_method_81 = DAS_CALL_MEMBER(Xbyak::LabelManager::enterLocal);
addExtern<DAS_CALL_METHOD(_enterLocal_method_81)>(*this, lib, "enterLocal",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::enterLocal))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _leaveLocal_method_83 = DAS_CALL_MEMBER(Xbyak::LabelManager::leaveLocal);
addExtern<DAS_CALL_METHOD(_leaveLocal_method_83)>(*this, lib, "leaveLocal",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::leaveLocal))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _set_method_85 = DAS_CALL_MEMBER(Xbyak::LabelManager::set);
addExtern<DAS_CALL_METHOD(_set_method_85)>(*this, lib, "set",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::set))
	->args({"self","base"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _defineSlabel_method_87 = DAS_CALL_MEMBER(Xbyak::LabelManager::defineSlabel);
addExtern<DAS_CALL_METHOD(_defineSlabel_method_87)>(*this, lib, "defineSlabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::defineSlabel))
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _defineClabel_method_89 = DAS_CALL_MEMBER(Xbyak::LabelManager::defineClabel);
addExtern<DAS_CALL_METHOD(_defineClabel_method_89)>(*this, lib, "defineClabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::defineClabel))
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _assign_method_91 = DAS_CALL_MEMBER(Xbyak::LabelManager::assign);
addExtern<DAS_CALL_METHOD(_assign_method_91)>(*this, lib, "assign",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::assign))
	->args({"self","dst","src"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getOffset_method_93 = das::das_call_member<bool (Xbyak::LabelManager::*)(size_t *, std::string &) const,&Xbyak::LabelManager::getOffset>;
addExtern<DAS_CALL_METHOD(_getOffset_method_93)>(*this, lib, "getOffset",SideEffects::worstDefault, "das_call_member<bool (Xbyak::LabelManager::*)(size_t *, std::string &) const,&Xbyak::LabelManager::getOffset>::invoke")
	->args({"self","offset","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getOffset_method_95 = das::das_call_member<bool (Xbyak::LabelManager::*)(size_t *, const Xbyak::Label &) const,&Xbyak::LabelManager::getOffset>;
addExtern<DAS_CALL_METHOD(_getOffset_method_95)>(*this, lib, "getOffset",SideEffects::worstDefault, "das_call_member<bool (Xbyak::LabelManager::*)(size_t *, const Xbyak::Label &) const,&Xbyak::LabelManager::getOffset>::invoke")
	->args({"self","offset","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addUndefinedLabel_method_97 = das::das_call_member<void (Xbyak::LabelManager::*)(const std::string &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>;
addExtern<DAS_CALL_METHOD(_addUndefinedLabel_method_97)>(*this, lib, "addUndefinedLabel",SideEffects::worstDefault, "das_call_member<void (Xbyak::LabelManager::*)(const std::string &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>::invoke")
	->args({"self","label","jmp"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addUndefinedLabel_method_99 = das::das_call_member<void (Xbyak::LabelManager::*)(const Xbyak::Label &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>;
addExtern<DAS_CALL_METHOD(_addUndefinedLabel_method_99)>(*this, lib, "addUndefinedLabel",SideEffects::worstDefault, "das_call_member<void (Xbyak::LabelManager::*)(const Xbyak::Label &, const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel>::invoke")
	->args({"self","label","jmp"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasUndefSlabel_method_101 = DAS_CALL_MEMBER(Xbyak::LabelManager::hasUndefSlabel);
addExtern<DAS_CALL_METHOD(_hasUndefSlabel_method_101)>(*this, lib, "hasUndefSlabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::hasUndefSlabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasUndefClabel_method_103 = DAS_CALL_MEMBER(Xbyak::LabelManager::hasUndefClabel);
addExtern<DAS_CALL_METHOD(_hasUndefClabel_method_103)>(*this, lib, "hasUndefClabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::hasUndefClabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getCode_method_105 = DAS_CALL_MEMBER(Xbyak::LabelManager::getCode);
addExtern<DAS_CALL_METHOD(_getCode_method_105)>(*this, lib, "getCode",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::getCode))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isReady_method_107 = DAS_CALL_MEMBER(Xbyak::LabelManager::isReady);
addExtern<DAS_CALL_METHOD(_isReady_method_107)>(*this, lib, "isReady",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::LabelManager::isReady))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setProtectMode_method_109 = DAS_CALL_MEMBER(Xbyak::CodeArray::setProtectMode);
addExtern<DAS_CALL_METHOD(_setProtectMode_method_109)>(*this, lib, "setProtectMode",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setProtectMode))
	->args({"self","mode","throwException"})
		->arg_init(2,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setProtectModeRE_method_111 = DAS_CALL_MEMBER(Xbyak::CodeArray::setProtectModeRE);
addExtern<DAS_CALL_METHOD(_setProtectModeRE_method_111)>(*this, lib, "setProtectModeRE",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setProtectModeRE))
	->args({"self","throwException"})
		->arg_init(1,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setProtectModeRW_method_113 = DAS_CALL_MEMBER(Xbyak::CodeArray::setProtectModeRW);
addExtern<DAS_CALL_METHOD(_setProtectModeRW_method_113)>(*this, lib, "setProtectModeRW",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setProtectModeRW))
	->args({"self","throwException"})
		->arg_init(1,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _resetSize_method_115 = DAS_CALL_MEMBER(Xbyak::CodeArray::resetSize);
addExtern<DAS_CALL_METHOD(_resetSize_method_115)>(*this, lib, "resetSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::resetSize))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _db_method_117 = das::das_call_member<void (Xbyak::CodeArray::*)(int),&Xbyak::CodeArray::db>;
addExtern<DAS_CALL_METHOD(_db_method_117)>(*this, lib, "db",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeArray::*)(int),&Xbyak::CodeArray::db>::invoke")
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _db_method_119 = das::das_call_member<void (Xbyak::CodeArray::*)(const uint8_t *, size_t),&Xbyak::CodeArray::db>;
addExtern<DAS_CALL_METHOD(_db_method_119)>(*this, lib, "db",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeArray::*)(const uint8_t *, size_t),&Xbyak::CodeArray::db>::invoke")
	->args({"self","code","codeSize"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _db_method_121 = das::das_call_member<void (Xbyak::CodeArray::*)(uint64_t, size_t),&Xbyak::CodeArray::db>;
addExtern<DAS_CALL_METHOD(_db_method_121)>(*this, lib, "db",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeArray::*)(uint64_t, size_t),&Xbyak::CodeArray::db>::invoke")
	->args({"self","code","codeSize"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dw_method_123 = DAS_CALL_MEMBER(Xbyak::CodeArray::dw);
addExtern<DAS_CALL_METHOD(_dw_method_123)>(*this, lib, "dw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dw))
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dd_method_125 = DAS_CALL_MEMBER(Xbyak::CodeArray::dd);
addExtern<DAS_CALL_METHOD(_dd_method_125)>(*this, lib, "dd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dd))
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dq_method_127 = DAS_CALL_MEMBER(Xbyak::CodeArray::dq);
addExtern<DAS_CALL_METHOD(_dq_method_127)>(*this, lib, "dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dq))
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getSize_method_129 = DAS_CALL_MEMBER(Xbyak::CodeArray::getSize);
addExtern<DAS_CALL_METHOD(_getSize_method_129)>(*this, lib, "getSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::getSize))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setSize_method_131 = DAS_CALL_MEMBER(Xbyak::CodeArray::setSize);
addExtern<DAS_CALL_METHOD(_setSize_method_131)>(*this, lib, "setSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setSize))
	->args({"self","size"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dump_method_133 = DAS_CALL_MEMBER(Xbyak::CodeArray::dump);
addExtern<DAS_CALL_METHOD(_dump_method_133)>(*this, lib, "dump",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dump))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rewrite_method_135 = DAS_CALL_MEMBER(Xbyak::CodeArray::rewrite);
addExtern<DAS_CALL_METHOD(_rewrite_method_135)>(*this, lib, "rewrite",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::rewrite))
	->args({"self","offset","disp","size"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _save_method_137 = DAS_CALL_MEMBER(Xbyak::CodeArray::save);
addExtern<DAS_CALL_METHOD(_save_method_137)>(*this, lib, "save",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::save))
	->args({"self","offset","val","size","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isAutoGrow_method_139 = DAS_CALL_MEMBER(Xbyak::CodeArray::isAutoGrow);
addExtern<DAS_CALL_METHOD(_isAutoGrow_method_139)>(*this, lib, "isAutoGrow",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::isAutoGrow))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isCalledCalcJmpAddress_method_141 = DAS_CALL_MEMBER(Xbyak::CodeArray::isCalledCalcJmpAddress);
addExtern<DAS_CALL_METHOD(_isCalledCalcJmpAddress_method_141)>(*this, lib, "isCalledCalcJmpAddress",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::isCalledCalcJmpAddress))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _changeBit_method_143 = DAS_CALL_MEMBER(Xbyak::Reg::changeBit);
addExtern<DAS_CALL_METHOD(_changeBit_method_143), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "changeBit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::changeBit))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexW_method_145 = DAS_CALL_MEMBER(Xbyak::Reg::getRexW);
addExtern<DAS_CALL_METHOD(_getRexW_method_145)>(*this, lib, "getRexW",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexW))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexR_method_147 = DAS_CALL_MEMBER(Xbyak::Reg::getRexR);
addExtern<DAS_CALL_METHOD(_getRexR_method_147)>(*this, lib, "getRexR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexR))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexX_method_149 = DAS_CALL_MEMBER(Xbyak::Reg::getRexX);
addExtern<DAS_CALL_METHOD(_getRexX_method_149)>(*this, lib, "getRexX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexX))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRexB_method_151 = DAS_CALL_MEMBER(Xbyak::Reg::getRexB);
addExtern<DAS_CALL_METHOD(_getRexB_method_151)>(*this, lib, "getRexB",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRexB))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRex_method_153 = DAS_CALL_MEMBER(Xbyak::Reg::getRex);
addExtern<DAS_CALL_METHOD(_getRex_method_153)>(*this, lib, "getRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::getRex))
	->args({"self","base"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt8_method_155 = DAS_CALL_MEMBER(Xbyak::Reg::cvt8);
addExtern<DAS_CALL_METHOD(_cvt8_method_155), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt8))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt16_method_157 = DAS_CALL_MEMBER(Xbyak::Reg::cvt16);
addExtern<DAS_CALL_METHOD(_cvt16_method_157), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt16",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt16))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt32_method_159 = DAS_CALL_MEMBER(Xbyak::Reg::cvt32);
addExtern<DAS_CALL_METHOD(_cvt32_method_159), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt32",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt32))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvt64_method_161 = DAS_CALL_MEMBER(Xbyak::Reg::cvt64);
addExtern<DAS_CALL_METHOD(_cvt64_method_161), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "cvt64",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Reg::cvt64))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRegExp_method_163 = DAS_CALL_MEMBER(Xbyak::Address::getRegExp);
addExtern<DAS_CALL_METHOD(_getRegExp_method_163), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "getRegExp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getRegExp))
	->args({"self","optimize"})
		->arg_init(1,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getMode_method_165 = DAS_CALL_MEMBER(Xbyak::Address::getMode);
addExtern<DAS_CALL_METHOD(_getMode_method_165)>(*this, lib, "getMode",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getMode))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _is32bit_method_167 = DAS_CALL_MEMBER(Xbyak::Address::is32bit);
addExtern<DAS_CALL_METHOD(_is32bit_method_167)>(*this, lib, "is32bit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::is32bit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isOnlyDisp_method_169 = DAS_CALL_MEMBER(Xbyak::Address::isOnlyDisp);
addExtern<DAS_CALL_METHOD(_isOnlyDisp_method_169)>(*this, lib, "isOnlyDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::isOnlyDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getDisp_method_171 = DAS_CALL_MEMBER(Xbyak::Address::getDisp);
addExtern<DAS_CALL_METHOD(_getDisp_method_171)>(*this, lib, "getDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRex_method_173 = DAS_CALL_MEMBER(Xbyak::Address::getRex);
addExtern<DAS_CALL_METHOD(_getRex_method_173)>(*this, lib, "getRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getRex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _is64bitDisp_method_175 = DAS_CALL_MEMBER(Xbyak::Address::is64bitDisp);
addExtern<DAS_CALL_METHOD(_is64bitDisp_method_175)>(*this, lib, "is64bitDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::is64bitDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isBroadcast_method_177 = DAS_CALL_MEMBER(Xbyak::Address::isBroadcast);
addExtern<DAS_CALL_METHOD(_isBroadcast_method_177)>(*this, lib, "isBroadcast",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::isBroadcast))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getLabel_method_179 = DAS_CALL_MEMBER(Xbyak::Address::getLabel);
addExtern<DAS_CALL_METHOD(_getLabel_method_179)>(*this, lib, "getLabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::getLabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isVsib_method_181 = DAS_CALL_MEMBER(Xbyak::Address::isVsib);
addExtern<DAS_CALL_METHOD(_isVsib_method_181)>(*this, lib, "isVsib",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Address::isVsib))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _clear_method_183 = DAS_CALL_MEMBER(Xbyak::Label::clear);
addExtern<DAS_CALL_METHOD(_clear_method_183)>(*this, lib, "clear",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Label::clear))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getId_method_185 = DAS_CALL_MEMBER(Xbyak::Label::getId);
addExtern<DAS_CALL_METHOD(_getId_method_185)>(*this, lib, "getId",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Label::getId))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getAddress_method_187 = DAS_CALL_MEMBER(Xbyak::Label::getAddress);
addExtern<DAS_CALL_METHOD(_getAddress_method_187)>(*this, lib, "getAddress",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Label::getAddress))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isVsib_method_189 = DAS_CALL_MEMBER(Xbyak::RegExp::isVsib);
addExtern<DAS_CALL_METHOD(_isVsib_method_189)>(*this, lib, "isVsib",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::isVsib))
	->args({"self","bit"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _optimize_method_191 = DAS_CALL_MEMBER(Xbyak::RegExp::optimize);
addExtern<DAS_CALL_METHOD(_optimize_method_191), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "optimize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::optimize))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getBase_method_193 = DAS_CALL_MEMBER(Xbyak::RegExp::getBase);
addExtern<DAS_CALL_METHOD(_getBase_method_193), SimNode_ExtFuncCallRef>(*this, lib, "getBase",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getBase))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getIndex_method_195 = DAS_CALL_MEMBER(Xbyak::RegExp::getIndex);
addExtern<DAS_CALL_METHOD(_getIndex_method_195), SimNode_ExtFuncCallRef>(*this, lib, "getIndex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getIndex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getScale_method_197 = DAS_CALL_MEMBER(Xbyak::RegExp::getScale);
addExtern<DAS_CALL_METHOD(_getScale_method_197)>(*this, lib, "getScale",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getScale))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getDisp_method_199 = DAS_CALL_MEMBER(Xbyak::RegExp::getDisp);
addExtern<DAS_CALL_METHOD(_getDisp_method_199)>(*this, lib, "getDisp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getDisp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verify_method_201 = DAS_CALL_MEMBER(Xbyak::RegExp::verify);
addExtern<DAS_CALL_METHOD(_verify_method_201)>(*this, lib, "verify",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::verify))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getRex_method_203 = DAS_CALL_MEMBER(Xbyak::RegExp::getRex);
addExtern<DAS_CALL_METHOD(_getRex_method_203)>(*this, lib, "getRex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::RegExp::getRex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _alloc_method_205 = DAS_CALL_MEMBER(Xbyak::Allocator::alloc);
addExtern<DAS_CALL_METHOD(_alloc_method_205)>(*this, lib, "alloc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Allocator::alloc))
	->args({"self","size"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _free_method_207 = DAS_CALL_MEMBER(Xbyak::Allocator::free);
addExtern<DAS_CALL_METHOD(_free_method_207)>(*this, lib, "free",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Allocator::free))
	->args({"self","p"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _useProtect_method_209 = DAS_CALL_MEMBER(Xbyak::Allocator::useProtect);
addExtern<DAS_CALL_METHOD(_useProtect_method_209)>(*this, lib, "useProtect",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Allocator::useProtect))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _copyAndSetIdx_method_211 = DAS_CALL_MEMBER(Xbyak::Xmm::copyAndSetIdx);
addExtern<DAS_CALL_METHOD(_copyAndSetIdx_method_211), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "copyAndSetIdx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Xmm::copyAndSetIdx))
	->args({"self","idx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _copyAndSetKind_method_213 = DAS_CALL_MEMBER(Xbyak::Xmm::copyAndSetKind);
addExtern<DAS_CALL_METHOD(_copyAndSetKind_method_213), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "copyAndSetKind",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Xmm::copyAndSetKind))
	->args({"self","kind"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rex_method_215 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rex);
addExtern<DAS_CALL_METHOD(_rex_method_215)>(*this, lib, "rex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rex))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getPP_method_217 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::getPP);
addExtern<DAS_CALL_METHOD(_getPP_method_217)>(*this, lib, "getPP",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::getPP))
	->args({"self","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vex_method_219 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vex);
addExtern<DAS_CALL_METHOD(_vex_method_219)>(*this, lib, "vex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vex))
	->args({"self","reg","base","v","type","code","x"})
		->arg_init(6,make_smart<ExprConstBool>(false))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifySAE_method_221 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifySAE);
addExtern<DAS_CALL_METHOD(_verifySAE_method_221)>(*this, lib, "verifySAE",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifySAE))
	->args({"self","r","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifyER_method_223 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifyER);
addExtern<DAS_CALL_METHOD(_verifyER_method_223)>(*this, lib, "verifyER",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifyER))
	->args({"self","r","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifyDuplicate_method_225 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifyDuplicate);
addExtern<DAS_CALL_METHOD(_verifyDuplicate_method_225)>(*this, lib, "verifyDuplicate",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifyDuplicate))
	->args({"self","a","b","c","err"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _evex_method_227 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::evex);
addExtern<DAS_CALL_METHOD(_evex_method_227)>(*this, lib, "evex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::evex))
	->args({"self","reg","base","v","type","code","x","b","aaa","VL","Hi16Vidx"})
		->arg_init(6,make_smart<ExprConstBool>(false))
		->arg_init(7,make_smart<ExprConstBool>(false))
		->arg_init(8,make_smart<ExprConstInt>(0))
		->arg_init(10,make_smart<ExprConstBool>(false))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setModRM_method_229 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setModRM);
addExtern<DAS_CALL_METHOD(_setModRM_method_229)>(*this, lib, "setModRM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setModRM))
	->args({"self","mod","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setSIB_method_231 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setSIB);
addExtern<DAS_CALL_METHOD(_setSIB_method_231)>(*this, lib, "setSIB",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setSIB))
	->args({"self","e","reg","disp8N"})
		->arg_init(3,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isInDisp16_method_233 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::isInDisp16);
addExtern<DAS_CALL_METHOD(_isInDisp16_method_233)>(*this, lib, "isInDisp16",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::isInDisp16))
	->args({"self","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opModR_method_235 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opModR);
addExtern<DAS_CALL_METHOD(_opModR_method_235)>(*this, lib, "opModR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opModR))
	->args({"self","reg1","reg2","code0","code1","code2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opModM_method_237 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opModM);
addExtern<DAS_CALL_METHOD(_opModM_method_237)>(*this, lib, "opModM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opModM))
	->args({"self","addr","reg","code0","code1","code2","immSize"})
		->arg_init(6,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opLoadSeg_method_239 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opLoadSeg);
addExtern<DAS_CALL_METHOD(_opLoadSeg_method_239)>(*this, lib, "opLoadSeg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opLoadSeg))
	->args({"self","addr","reg","code0","code1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMIB_method_241 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMIB);
addExtern<DAS_CALL_METHOD(_opMIB_method_241)>(*this, lib, "opMIB",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMIB))
	->args({"self","addr","reg","code0","code1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _makeJmp_method_243 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::makeJmp);
addExtern<DAS_CALL_METHOD(_makeJmp_method_243)>(*this, lib, "makeJmp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::makeJmp))
	->args({"self","disp","type","shortCode","longCode","longPref"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isNEAR_method_245 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::isNEAR);
addExtern<DAS_CALL_METHOD(_isNEAR_method_245)>(*this, lib, "isNEAR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::isNEAR))
	->args({"self","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opJmpAbs_method_247 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opJmpAbs);
addExtern<DAS_CALL_METHOD(_opJmpAbs_method_247)>(*this, lib, "opJmpAbs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opJmpAbs))
	->args({"self","addr","type","shortCode","longCode","longPref"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAddr_method_249 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAddr);
addExtern<DAS_CALL_METHOD(_opAddr_method_249)>(*this, lib, "opAddr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAddr))
	->args({"self","addr","reg","immSize","disp8N","permitVisb"})
		->arg_init(3,make_smart<ExprConstInt>(0))
		->arg_init(4,make_smart<ExprConstInt>(0))
		->arg_init(5,make_smart<ExprConstBool>(false))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGen_method_251 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGen);
addExtern<DAS_CALL_METHOD(_opGen_method_251)>(*this, lib, "opGen",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGen))
	->args({"self","reg","op","code","pref","isValid","imm8","preCode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMMX_IMM_method_253 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMMX_IMM);
addExtern<DAS_CALL_METHOD(_opMMX_IMM_method_253)>(*this, lib, "opMMX_IMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMMX_IMM))
	->args({"self","mmx","imm8","code","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMMX_method_255 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMMX);
addExtern<DAS_CALL_METHOD(_opMMX_method_255)>(*this, lib, "opMMX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMMX))
	->args({"self","mmx","op","code","pref","imm8","preCode"})
		->arg_init(4,make_smart<ExprConstInt>(102))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMovXMM_method_257 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMovXMM);
addExtern<DAS_CALL_METHOD(_opMovXMM_method_257)>(*this, lib, "opMovXMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMovXMM))
	->args({"self","op1","op2","code","pref"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opExt_method_259 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opExt);
addExtern<DAS_CALL_METHOD(_opExt_method_259)>(*this, lib, "opExt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opExt))
	->args({"self","op","mmx","code","imm","hasMMX2"})
		->arg_init(5,make_smart<ExprConstBool>(false))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opR_ModM_method_261 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opR_ModM);
addExtern<DAS_CALL_METHOD(_opR_ModM_method_261)>(*this, lib, "opR_ModM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opR_ModM))
	->args({"self","op","bit","ext","code0","code1","code2","disableRex","immSize"})
		->arg_init(7,make_smart<ExprConstBool>(false))
		->arg_init(8,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opShift_method_263 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int, int),&Xbyak::CodeGenerator::opShift>;
addExtern<DAS_CALL_METHOD(_opShift_method_263)>(*this, lib, "opShift",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int, int),&Xbyak::CodeGenerator::opShift>::invoke")
	->args({"self","op","imm","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opShift_method_265 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &, int),&Xbyak::CodeGenerator::opShift>;
addExtern<DAS_CALL_METHOD(_opShift_method_265)>(*this, lib, "opShift",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &, int),&Xbyak::CodeGenerator::opShift>::invoke")
	->args({"self","op","_cl","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opModRM_method_267 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opModRM);
addExtern<DAS_CALL_METHOD(_opModRM_method_267)>(*this, lib, "opModRM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opModRM))
	->args({"self","op1","op2","condR","condM","code0","code1","code2","immSize"})
		->arg_init(8,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opShxd_method_269 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opShxd);
addExtern<DAS_CALL_METHOD(_opShxd_method_269)>(*this, lib, "opShxd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opShxd))
	->args({"self","op","reg","imm","code","_cl"})
		->arg_init(5,make_smart<ExprConstPtr>())
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opRM_RM_method_271 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opRM_RM);
addExtern<DAS_CALL_METHOD(_opRM_RM_method_271)>(*this, lib, "opRM_RM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opRM_RM))
	->args({"self","op1","op2","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opRM_I_method_273 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opRM_I);
addExtern<DAS_CALL_METHOD(_opRM_I_method_273)>(*this, lib, "opRM_I",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opRM_I))
	->args({"self","op","imm","code","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opIncDec_method_275 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opIncDec);
addExtern<DAS_CALL_METHOD(_opIncDec_method_275)>(*this, lib, "opIncDec",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opIncDec))
	->args({"self","op","code","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opPushPop_method_277 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opPushPop);
addExtern<DAS_CALL_METHOD(_opPushPop_method_277)>(*this, lib, "opPushPop",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opPushPop))
	->args({"self","op","code","ext","alt"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifyMemHasSize_method_279 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifyMemHasSize);
addExtern<DAS_CALL_METHOD(_verifyMemHasSize_method_279)>(*this, lib, "verifyMemHasSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifyMemHasSize))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_imm_method_281 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mov_imm);
addExtern<DAS_CALL_METHOD(_mov_imm_method_281)>(*this, lib, "mov_imm",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mov_imm))
	->args({"self","reg","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMovxx_method_283 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMovxx);
addExtern<DAS_CALL_METHOD(_opMovxx_method_283)>(*this, lib, "opMovxx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMovxx))
	->args({"self","reg","op","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opFpuMem_method_285 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opFpuMem);
addExtern<DAS_CALL_METHOD(_opFpuMem_method_285)>(*this, lib, "opFpuMem",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opFpuMem))
	->args({"self","addr","m16","m32","m64","ext","m64ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opFpuFpu_method_287 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opFpuFpu);
addExtern<DAS_CALL_METHOD(_opFpuFpu_method_287)>(*this, lib, "opFpuFpu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opFpuFpu))
	->args({"self","reg1","reg2","code1","code2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opFpu_method_289 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opFpu);
addExtern<DAS_CALL_METHOD(_opFpu_method_289)>(*this, lib, "opFpu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opFpu))
	->args({"self","reg","code1","code2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opVex_method_291 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opVex);
addExtern<DAS_CALL_METHOD(_opVex_method_291)>(*this, lib, "opVex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opVex))
	->args({"self","r","p1","op2","type","code","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGpr_method_293 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGpr);
addExtern<DAS_CALL_METHOD(_opGpr_method_293)>(*this, lib, "opGpr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGpr))
	->args({"self","r","op1","op2","type","code","isR_R_RM","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAVX_X_X_XM_method_295 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAVX_X_X_XM);
addExtern<DAS_CALL_METHOD(_opAVX_X_X_XM_method_295)>(*this, lib, "opAVX_X_X_XM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAVX_X_X_XM))
	->args({"self","x1","op1","op2","type","code0","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAVX_K_X_XM_method_297 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAVX_K_X_XM);
addExtern<DAS_CALL_METHOD(_opAVX_K_X_XM_method_297)>(*this, lib, "opAVX_K_X_XM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAVX_K_X_XM))
	->args({"self","k","x2","op3","type","code0","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkCvt1_method_299 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkCvt1);
addExtern<DAS_CALL_METHOD(_checkCvt1_method_299)>(*this, lib, "checkCvt1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkCvt1))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkCvt2_method_301 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkCvt2);
addExtern<DAS_CALL_METHOD(_checkCvt2_method_301)>(*this, lib, "checkCvt2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkCvt2))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt_method_303 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt);
addExtern<DAS_CALL_METHOD(_opCvt_method_303)>(*this, lib, "opCvt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt))
	->args({"self","x","op","type","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt2_method_305 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt2);
addExtern<DAS_CALL_METHOD(_opCvt2_method_305)>(*this, lib, "opCvt2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt2))
	->args({"self","x","op","type","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt3_method_307 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt3);
addExtern<DAS_CALL_METHOD(_opCvt3_method_307)>(*this, lib, "opCvt3",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt3))
	->args({"self","x1","x2","op","type","type64","type32","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkCvt4_method_309 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkCvt4);
addExtern<DAS_CALL_METHOD(_checkCvt4_method_309)>(*this, lib, "checkCvt4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkCvt4))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt5_method_311 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt5);
addExtern<DAS_CALL_METHOD(_opCvt5_method_311)>(*this, lib, "opCvt5",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt5))
	->args({"self","x","op","type","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtIdx0_method_313 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtIdx0);
addExtern<DAS_CALL_METHOD(_cvtIdx0_method_313), SimNode_ExtFuncCallRef>(*this, lib, "cvtIdx0",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtIdx0))
	->args({"self","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAVX_X_XM_IMM_method_315 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAVX_X_XM_IMM);
addExtern<DAS_CALL_METHOD(_opAVX_X_XM_IMM_method_315)>(*this, lib, "opAVX_X_XM_IMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAVX_X_XM_IMM))
	->args({"self","x","op","type","code","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opSp1_method_317 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opSp1);
addExtern<DAS_CALL_METHOD(_opSp1_method_317)>(*this, lib, "opSp1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opSp1))
	->args({"self","reg","op","pref","code0","code1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGather_method_319 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGather);
addExtern<DAS_CALL_METHOD(_opGather_method_319)>(*this, lib, "opGather",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGather))
	->args({"self","x1","addr","x2","type","code","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkGather2_method_321 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkGather2);
addExtern<DAS_CALL_METHOD(_checkGather2_method_321)>(*this, lib, "checkGather2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkGather2))
	->args({"self","x1","x2","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGather2_method_323 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGather2);
addExtern<DAS_CALL_METHOD(_opGather2_method_323)>(*this, lib, "opGather2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGather2))
	->args({"self","x","addr","type","code","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opVmov_method_325 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opVmov);
addExtern<DAS_CALL_METHOD(_opVmov_method_325)>(*this, lib, "opVmov",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opVmov))
	->args({"self","op","x","type","code","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGatherFetch_method_327 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGatherFetch);
addExtern<DAS_CALL_METHOD(_opGatherFetch_method_327)>(*this, lib, "opGatherFetch",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGatherFetch))
	->args({"self","addr","x","type","code","kind"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opVnni_method_329 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opVnni);
addExtern<DAS_CALL_METHOD(_opVnni_method_329)>(*this, lib, "opVnni",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opVnni))
	->args({"self","x1","x2","op","type","code0","encoding"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opInOut_method_331 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::opInOut>;
addExtern<DAS_CALL_METHOD(_opInOut_method_331)>(*this, lib, "opInOut",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::opInOut>::invoke")
	->args({"self","a","d","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opInOut_method_333 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t, uint8_t),&Xbyak::CodeGenerator::opInOut>;
addExtern<DAS_CALL_METHOD(_opInOut_method_333)>(*this, lib, "opInOut",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t, uint8_t),&Xbyak::CodeGenerator::opInOut>::invoke")
	->args({"self","a","code","v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAMX_method_335 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAMX);
addExtern<DAS_CALL_METHOD(_opAMX_method_335)>(*this, lib, "opAMX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAMX))
	->args({"self","t1","addr","type","code0"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getVersion_method_337 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::getVersion);
addExtern<DAS_CALL_METHOD(_getVersion_method_337)>(*this, lib, "getVersion",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::getVersion))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _inLocalLabel_method_339 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::inLocalLabel);
addExtern<DAS_CALL_METHOD(_inLocalLabel_method_339)>(*this, lib, "inLocalLabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::inLocalLabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _outLocalLabel_method_341 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::outLocalLabel);
addExtern<DAS_CALL_METHOD(_outLocalLabel_method_341)>(*this, lib, "outLocalLabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::outLocalLabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _assignL_method_343 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::assignL);
addExtern<DAS_CALL_METHOD(_assignL_method_343)>(*this, lib, "assignL",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::assignL))
	->args({"self","dst","src"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _putL_method_345 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::putL>;
addExtern<DAS_CALL_METHOD(_putL_method_345)>(*this, lib, "putL",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::putL>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _putL_method_347 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::putL>;
addExtern<DAS_CALL_METHOD(_putL_method_347)>(*this, lib, "putL",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::putL>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setDefaultJmpNEAR_method_349 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setDefaultJmpNEAR);
addExtern<DAS_CALL_METHOD(_setDefaultJmpNEAR_method_349)>(*this, lib, "setDefaultJmpNEAR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setDefaultJmpNEAR))
	->args({"self","isNear"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_351 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_351)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_353 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_353)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_355 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_355)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_357 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_357)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_359 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_359)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","addr","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_361 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_361)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_363 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_363)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_365 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_365)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_367 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_367)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_369 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_369)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _test_method_371 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::test>;
addExtern<DAS_CALL_METHOD(_test_method_371)>(*this, lib, "test",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::test>::invoke")
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _test_method_373 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::test>;
addExtern<DAS_CALL_METHOD(_test_method_373)>(*this, lib, "test",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::test>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _imul_method_375 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>;
addExtern<DAS_CALL_METHOD(_imul_method_375)>(*this, lib, "imul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>::invoke")
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _imul_method_377 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &, int),&Xbyak::CodeGenerator::imul>;
addExtern<DAS_CALL_METHOD(_imul_method_377)>(*this, lib, "imul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &, int),&Xbyak::CodeGenerator::imul>::invoke")
	->args({"self","reg","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _push_method_379 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::push>;
addExtern<DAS_CALL_METHOD(_push_method_379)>(*this, lib, "push",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::push>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pop_method_381 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::pop>;
addExtern<DAS_CALL_METHOD(_pop_method_381)>(*this, lib, "pop",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::pop>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _push_method_383 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::AddressFrame &, uint32_t),&Xbyak::CodeGenerator::push>;
addExtern<DAS_CALL_METHOD(_push_method_383)>(*this, lib, "push",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::AddressFrame &, uint32_t),&Xbyak::CodeGenerator::push>::invoke")
	->args({"self","af","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _push_method_385 = das::das_call_member<void (Xbyak::CodeGenerator::*)(uint32_t),&Xbyak::CodeGenerator::push>;
addExtern<DAS_CALL_METHOD(_push_method_385)>(*this, lib, "push",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(uint32_t),&Xbyak::CodeGenerator::push>::invoke")
	->args({"self","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_method_387 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::mov>;
addExtern<DAS_CALL_METHOD(_mov_method_387)>(*this, lib, "mov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::mov>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_method_389 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint64_t),&Xbyak::CodeGenerator::mov>;
addExtern<DAS_CALL_METHOD(_mov_method_389)>(*this, lib, "mov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint64_t),&Xbyak::CodeGenerator::mov>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_method_391 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::CodeGenerator::NativeReg &, const Xbyak::Label &),&Xbyak::CodeGenerator::mov>;
addExtern<DAS_CALL_METHOD(_mov_method_391)>(*this, lib, "mov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::CodeGenerator::NativeReg &, const Xbyak::Label &),&Xbyak::CodeGenerator::mov>::invoke")
	->args({"self","reg","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xchg_method_393 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xchg);
addExtern<DAS_CALL_METHOD(_xchg_method_393)>(*this, lib, "xchg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xchg))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _push_method_395 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::push>;
addExtern<DAS_CALL_METHOD(_push_method_395)>(*this, lib, "push",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::push>::invoke")
	->args({"self","seg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pop_method_397 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::pop>;
addExtern<DAS_CALL_METHOD(_pop_method_397)>(*this, lib, "pop",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::pop>::invoke")
	->args({"self","seg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _putSeg_method_399 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::putSeg);
addExtern<DAS_CALL_METHOD(_putSeg_method_399)>(*this, lib, "putSeg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::putSeg))
	->args({"self","seg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_method_401 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Segment &),&Xbyak::CodeGenerator::mov>;
addExtern<DAS_CALL_METHOD(_mov_method_401)>(*this, lib, "mov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Segment &),&Xbyak::CodeGenerator::mov>::invoke")
	->args({"self","op","seg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_method_403 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &, const Xbyak::Operand &),&Xbyak::CodeGenerator::mov>;
addExtern<DAS_CALL_METHOD(_mov_method_403)>(*this, lib, "mov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &, const Xbyak::Operand &),&Xbyak::CodeGenerator::mov>::invoke")
	->args({"self","seg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _reset_method_405 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::reset);
addExtern<DAS_CALL_METHOD(_reset_method_405)>(*this, lib, "reset",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::reset))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hasUndefinedLabel_method_407 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::hasUndefinedLabel);
addExtern<DAS_CALL_METHOD(_hasUndefinedLabel_method_407)>(*this, lib, "hasUndefinedLabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::hasUndefinedLabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ready_method_409 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ready);
addExtern<DAS_CALL_METHOD(_ready_method_409)>(*this, lib, "ready",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ready))
	->args({"self","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _readyRE_method_411 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::readyRE);
addExtern<DAS_CALL_METHOD(_readyRE_method_411)>(*this, lib, "readyRE",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::readyRE))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _nop_method_413 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::nop);
addExtern<DAS_CALL_METHOD(_nop_method_413)>(*this, lib, "nop",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::nop))
	->args({"self","size","useMultiByteNop"})
		->arg_init(2,make_smart<ExprConstBool>(true))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getVersionString_method_415 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::getVersionString);
addExtern<DAS_CALL_METHOD(_getVersionString_method_415)>(*this, lib, "getVersionString",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::getVersionString))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _adc_method_417 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::adc>;
addExtern<DAS_CALL_METHOD(_adc_method_417)>(*this, lib, "adc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::adc>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _adc_method_419 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::adc>;
addExtern<DAS_CALL_METHOD(_adc_method_419)>(*this, lib, "adc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::adc>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _adcx_method_421 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::adcx);
addExtern<DAS_CALL_METHOD(_adcx_method_421)>(*this, lib, "adcx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::adcx))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _add_method_423 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::add>;
addExtern<DAS_CALL_METHOD(_add_method_423)>(*this, lib, "add",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::add>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _add_method_425 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::add>;
addExtern<DAS_CALL_METHOD(_add_method_425)>(*this, lib, "add",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::add>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addpd_method_427 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addpd);
addExtern<DAS_CALL_METHOD(_addpd_method_427)>(*this, lib, "addpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addps_method_429 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addps);
addExtern<DAS_CALL_METHOD(_addps_method_429)>(*this, lib, "addps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addsd_method_431 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addsd);
addExtern<DAS_CALL_METHOD(_addsd_method_431)>(*this, lib, "addsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addss_method_433 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addss);
addExtern<DAS_CALL_METHOD(_addss_method_433)>(*this, lib, "addss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addsubpd_method_435 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addsubpd);
addExtern<DAS_CALL_METHOD(_addsubpd_method_435)>(*this, lib, "addsubpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addsubpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _addsubps_method_437 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::addsubps);
addExtern<DAS_CALL_METHOD(_addsubps_method_437)>(*this, lib, "addsubps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::addsubps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _adox_method_439 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::adox);
addExtern<DAS_CALL_METHOD(_adox_method_439)>(*this, lib, "adox",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::adox))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aesdec_method_441 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aesdec);
addExtern<DAS_CALL_METHOD(_aesdec_method_441)>(*this, lib, "aesdec",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aesdec))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aesdeclast_method_443 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aesdeclast);
addExtern<DAS_CALL_METHOD(_aesdeclast_method_443)>(*this, lib, "aesdeclast",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aesdeclast))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aesenc_method_445 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aesenc);
addExtern<DAS_CALL_METHOD(_aesenc_method_445)>(*this, lib, "aesenc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aesenc))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aesenclast_method_447 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aesenclast);
addExtern<DAS_CALL_METHOD(_aesenclast_method_447)>(*this, lib, "aesenclast",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aesenclast))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aesimc_method_449 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aesimc);
addExtern<DAS_CALL_METHOD(_aesimc_method_449)>(*this, lib, "aesimc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aesimc))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _aeskeygenassist_method_451 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::aeskeygenassist);
addExtern<DAS_CALL_METHOD(_aeskeygenassist_method_451)>(*this, lib, "aeskeygenassist",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::aeskeygenassist))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _and__method_453 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::and_>;
addExtern<DAS_CALL_METHOD(_and__method_453)>(*this, lib, "and_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::and_>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _and__method_455 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::and_>;
addExtern<DAS_CALL_METHOD(_and__method_455)>(*this, lib, "and_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::and_>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _andn_method_457 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::andn);
addExtern<DAS_CALL_METHOD(_andn_method_457)>(*this, lib, "andn",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::andn))
	->args({"self","r1","r2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _andnpd_method_459 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::andnpd);
addExtern<DAS_CALL_METHOD(_andnpd_method_459)>(*this, lib, "andnpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::andnpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _andnps_method_461 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::andnps);
addExtern<DAS_CALL_METHOD(_andnps_method_461)>(*this, lib, "andnps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::andnps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _andpd_method_463 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::andpd);
addExtern<DAS_CALL_METHOD(_andpd_method_463)>(*this, lib, "andpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::andpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _andps_method_465 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::andps);
addExtern<DAS_CALL_METHOD(_andps_method_465)>(*this, lib, "andps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::andps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bextr_method_467 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bextr);
addExtern<DAS_CALL_METHOD(_bextr_method_467)>(*this, lib, "bextr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bextr))
	->args({"self","r1","op","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blendpd_method_469 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blendpd);
addExtern<DAS_CALL_METHOD(_blendpd_method_469)>(*this, lib, "blendpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blendpd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blendps_method_471 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blendps);
addExtern<DAS_CALL_METHOD(_blendps_method_471)>(*this, lib, "blendps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blendps))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blendvpd_method_473 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blendvpd);
addExtern<DAS_CALL_METHOD(_blendvpd_method_473)>(*this, lib, "blendvpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blendvpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blendvps_method_475 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blendvps);
addExtern<DAS_CALL_METHOD(_blendvps_method_475)>(*this, lib, "blendvps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blendvps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blsi_method_477 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blsi);
addExtern<DAS_CALL_METHOD(_blsi_method_477)>(*this, lib, "blsi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blsi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blsmsk_method_479 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blsmsk);
addExtern<DAS_CALL_METHOD(_blsmsk_method_479)>(*this, lib, "blsmsk",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blsmsk))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _blsr_method_481 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::blsr);
addExtern<DAS_CALL_METHOD(_blsr_method_481)>(*this, lib, "blsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::blsr))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bnd_method_483 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bnd);
addExtern<DAS_CALL_METHOD(_bnd_method_483)>(*this, lib, "bnd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bnd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndcl_method_485 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndcl);
addExtern<DAS_CALL_METHOD(_bndcl_method_485)>(*this, lib, "bndcl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndcl))
	->args({"self","bnd","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndcn_method_487 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndcn);
addExtern<DAS_CALL_METHOD(_bndcn_method_487)>(*this, lib, "bndcn",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndcn))
	->args({"self","bnd","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndcu_method_489 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndcu);
addExtern<DAS_CALL_METHOD(_bndcu_method_489)>(*this, lib, "bndcu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndcu))
	->args({"self","bnd","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndldx_method_491 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndldx);
addExtern<DAS_CALL_METHOD(_bndldx_method_491)>(*this, lib, "bndldx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndldx))
	->args({"self","bnd","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndmk_method_493 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndmk);
addExtern<DAS_CALL_METHOD(_bndmk_method_493)>(*this, lib, "bndmk",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndmk))
	->args({"self","bnd","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndmov_method_495 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::BoundsReg &),&Xbyak::CodeGenerator::bndmov>;
addExtern<DAS_CALL_METHOD(_bndmov_method_495)>(*this, lib, "bndmov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::BoundsReg &),&Xbyak::CodeGenerator::bndmov>::invoke")
	->args({"self","addr","bnd"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndmov_method_497 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &, const Xbyak::Operand &),&Xbyak::CodeGenerator::bndmov>;
addExtern<DAS_CALL_METHOD(_bndmov_method_497)>(*this, lib, "bndmov",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &, const Xbyak::Operand &),&Xbyak::CodeGenerator::bndmov>::invoke")
	->args({"self","bnd","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bndstx_method_499 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bndstx);
addExtern<DAS_CALL_METHOD(_bndstx_method_499)>(*this, lib, "bndstx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bndstx))
	->args({"self","addr","bnd"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bsf_method_501 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bsf);
addExtern<DAS_CALL_METHOD(_bsf_method_501)>(*this, lib, "bsf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bsf))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bsr_method_503 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bsr);
addExtern<DAS_CALL_METHOD(_bsr_method_503)>(*this, lib, "bsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bsr))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bswap_method_505 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bswap);
addExtern<DAS_CALL_METHOD(_bswap_method_505)>(*this, lib, "bswap",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bswap))
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bt_method_507 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::bt>;
addExtern<DAS_CALL_METHOD(_bt_method_507)>(*this, lib, "bt",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::bt>::invoke")
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bt_method_509 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::bt>;
addExtern<DAS_CALL_METHOD(_bt_method_509)>(*this, lib, "bt",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::bt>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _btc_method_511 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::btc>;
addExtern<DAS_CALL_METHOD(_btc_method_511)>(*this, lib, "btc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::btc>::invoke")
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _btc_method_513 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::btc>;
addExtern<DAS_CALL_METHOD(_btc_method_513)>(*this, lib, "btc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::btc>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _btr_method_515 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::btr>;
addExtern<DAS_CALL_METHOD(_btr_method_515)>(*this, lib, "btr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::btr>::invoke")
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _btr_method_517 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::btr>;
addExtern<DAS_CALL_METHOD(_btr_method_517)>(*this, lib, "btr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::btr>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bts_method_519 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::bts>;
addExtern<DAS_CALL_METHOD(_bts_method_519)>(*this, lib, "bts",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::bts>::invoke")
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bts_method_521 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::bts>;
addExtern<DAS_CALL_METHOD(_bts_method_521)>(*this, lib, "bts",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::bts>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _bzhi_method_523 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::bzhi);
addExtern<DAS_CALL_METHOD(_bzhi_method_523)>(*this, lib, "bzhi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::bzhi))
	->args({"self","r1","op","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cbw_method_525 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cbw);
addExtern<DAS_CALL_METHOD(_cbw_method_525)>(*this, lib, "cbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cbw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cdq_method_527 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cdq);
addExtern<DAS_CALL_METHOD(_cdq_method_527)>(*this, lib, "cdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cdq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _clc_method_529 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::clc);
addExtern<DAS_CALL_METHOD(_clc_method_529)>(*this, lib, "clc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::clc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cld_method_531 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cld);
addExtern<DAS_CALL_METHOD(_cld_method_531)>(*this, lib, "cld",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cld))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _clflush_method_533 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::clflush);
addExtern<DAS_CALL_METHOD(_clflush_method_533)>(*this, lib, "clflush",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::clflush))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _clflushopt_method_535 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::clflushopt);
addExtern<DAS_CALL_METHOD(_clflushopt_method_535)>(*this, lib, "clflushopt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::clflushopt))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cli_method_537 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cli);
addExtern<DAS_CALL_METHOD(_cli_method_537)>(*this, lib, "cli",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cli))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _clzero_method_539 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::clzero);
addExtern<DAS_CALL_METHOD(_clzero_method_539)>(*this, lib, "clzero",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::clzero))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmc_method_541 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmc);
addExtern<DAS_CALL_METHOD(_cmc_method_541)>(*this, lib, "cmc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmova_method_543 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmova);
addExtern<DAS_CALL_METHOD(_cmova_method_543)>(*this, lib, "cmova",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmova))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovae_method_545 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovae);
addExtern<DAS_CALL_METHOD(_cmovae_method_545)>(*this, lib, "cmovae",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovae))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovb_method_547 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovb);
addExtern<DAS_CALL_METHOD(_cmovb_method_547)>(*this, lib, "cmovb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovb))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovbe_method_549 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovbe);
addExtern<DAS_CALL_METHOD(_cmovbe_method_549)>(*this, lib, "cmovbe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovbe))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovc_method_551 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovc);
addExtern<DAS_CALL_METHOD(_cmovc_method_551)>(*this, lib, "cmovc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovc))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmove_method_553 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmove);
addExtern<DAS_CALL_METHOD(_cmove_method_553)>(*this, lib, "cmove",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmove))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovg_method_555 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovg);
addExtern<DAS_CALL_METHOD(_cmovg_method_555)>(*this, lib, "cmovg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovg))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovge_method_557 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovge);
addExtern<DAS_CALL_METHOD(_cmovge_method_557)>(*this, lib, "cmovge",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovge))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovl_method_559 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovl);
addExtern<DAS_CALL_METHOD(_cmovl_method_559)>(*this, lib, "cmovl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovl))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovle_method_561 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovle);
addExtern<DAS_CALL_METHOD(_cmovle_method_561)>(*this, lib, "cmovle",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovle))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovna_method_563 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovna);
addExtern<DAS_CALL_METHOD(_cmovna_method_563)>(*this, lib, "cmovna",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovna))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnae_method_565 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnae);
addExtern<DAS_CALL_METHOD(_cmovnae_method_565)>(*this, lib, "cmovnae",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnae))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnb_method_567 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnb);
addExtern<DAS_CALL_METHOD(_cmovnb_method_567)>(*this, lib, "cmovnb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnb))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnbe_method_569 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnbe);
addExtern<DAS_CALL_METHOD(_cmovnbe_method_569)>(*this, lib, "cmovnbe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnbe))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnc_method_571 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnc);
addExtern<DAS_CALL_METHOD(_cmovnc_method_571)>(*this, lib, "cmovnc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnc))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovne_method_573 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovne);
addExtern<DAS_CALL_METHOD(_cmovne_method_573)>(*this, lib, "cmovne",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovne))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovng_method_575 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovng);
addExtern<DAS_CALL_METHOD(_cmovng_method_575)>(*this, lib, "cmovng",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovng))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnge_method_577 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnge);
addExtern<DAS_CALL_METHOD(_cmovnge_method_577)>(*this, lib, "cmovnge",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnge))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnl_method_579 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnl);
addExtern<DAS_CALL_METHOD(_cmovnl_method_579)>(*this, lib, "cmovnl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnl))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnle_method_581 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnle);
addExtern<DAS_CALL_METHOD(_cmovnle_method_581)>(*this, lib, "cmovnle",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnle))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovno_method_583 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovno);
addExtern<DAS_CALL_METHOD(_cmovno_method_583)>(*this, lib, "cmovno",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovno))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnp_method_585 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnp);
addExtern<DAS_CALL_METHOD(_cmovnp_method_585)>(*this, lib, "cmovnp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnp))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovns_method_587 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovns);
addExtern<DAS_CALL_METHOD(_cmovns_method_587)>(*this, lib, "cmovns",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovns))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovnz_method_589 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovnz);
addExtern<DAS_CALL_METHOD(_cmovnz_method_589)>(*this, lib, "cmovnz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovnz))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovo_method_591 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovo);
addExtern<DAS_CALL_METHOD(_cmovo_method_591)>(*this, lib, "cmovo",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovo))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovp_method_593 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovp);
addExtern<DAS_CALL_METHOD(_cmovp_method_593)>(*this, lib, "cmovp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovp))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovpe_method_595 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovpe);
addExtern<DAS_CALL_METHOD(_cmovpe_method_595)>(*this, lib, "cmovpe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovpe))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovpo_method_597 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovpo);
addExtern<DAS_CALL_METHOD(_cmovpo_method_597)>(*this, lib, "cmovpo",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovpo))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovs_method_599 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovs);
addExtern<DAS_CALL_METHOD(_cmovs_method_599)>(*this, lib, "cmovs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovs))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmovz_method_601 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmovz);
addExtern<DAS_CALL_METHOD(_cmovz_method_601)>(*this, lib, "cmovz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmovz))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmp_method_603 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::cmp>;
addExtern<DAS_CALL_METHOD(_cmp_method_603)>(*this, lib, "cmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::cmp>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmp_method_605 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::cmp>;
addExtern<DAS_CALL_METHOD(_cmp_method_605)>(*this, lib, "cmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::cmp>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpeqpd_method_607 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpeqpd);
addExtern<DAS_CALL_METHOD(_cmpeqpd_method_607)>(*this, lib, "cmpeqpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpeqpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpeqps_method_609 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpeqps);
addExtern<DAS_CALL_METHOD(_cmpeqps_method_609)>(*this, lib, "cmpeqps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpeqps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpeqsd_method_611 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpeqsd);
addExtern<DAS_CALL_METHOD(_cmpeqsd_method_611)>(*this, lib, "cmpeqsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpeqsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpeqss_method_613 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpeqss);
addExtern<DAS_CALL_METHOD(_cmpeqss_method_613)>(*this, lib, "cmpeqss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpeqss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmplepd_method_615 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmplepd);
addExtern<DAS_CALL_METHOD(_cmplepd_method_615)>(*this, lib, "cmplepd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmplepd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpleps_method_617 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpleps);
addExtern<DAS_CALL_METHOD(_cmpleps_method_617)>(*this, lib, "cmpleps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpleps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmplesd_method_619 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmplesd);
addExtern<DAS_CALL_METHOD(_cmplesd_method_619)>(*this, lib, "cmplesd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmplesd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpless_method_621 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpless);
addExtern<DAS_CALL_METHOD(_cmpless_method_621)>(*this, lib, "cmpless",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpless))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpltpd_method_623 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpltpd);
addExtern<DAS_CALL_METHOD(_cmpltpd_method_623)>(*this, lib, "cmpltpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpltpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpltps_method_625 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpltps);
addExtern<DAS_CALL_METHOD(_cmpltps_method_625)>(*this, lib, "cmpltps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpltps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpltsd_method_627 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpltsd);
addExtern<DAS_CALL_METHOD(_cmpltsd_method_627)>(*this, lib, "cmpltsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpltsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpltss_method_629 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpltss);
addExtern<DAS_CALL_METHOD(_cmpltss_method_629)>(*this, lib, "cmpltss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpltss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpneqpd_method_631 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpneqpd);
addExtern<DAS_CALL_METHOD(_cmpneqpd_method_631)>(*this, lib, "cmpneqpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpneqpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpneqps_method_633 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpneqps);
addExtern<DAS_CALL_METHOD(_cmpneqps_method_633)>(*this, lib, "cmpneqps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpneqps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpneqsd_method_635 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpneqsd);
addExtern<DAS_CALL_METHOD(_cmpneqsd_method_635)>(*this, lib, "cmpneqsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpneqsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpneqss_method_637 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpneqss);
addExtern<DAS_CALL_METHOD(_cmpneqss_method_637)>(*this, lib, "cmpneqss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpneqss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnlepd_method_639 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnlepd);
addExtern<DAS_CALL_METHOD(_cmpnlepd_method_639)>(*this, lib, "cmpnlepd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnlepd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnleps_method_641 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnleps);
addExtern<DAS_CALL_METHOD(_cmpnleps_method_641)>(*this, lib, "cmpnleps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnleps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnlesd_method_643 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnlesd);
addExtern<DAS_CALL_METHOD(_cmpnlesd_method_643)>(*this, lib, "cmpnlesd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnlesd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnless_method_645 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnless);
addExtern<DAS_CALL_METHOD(_cmpnless_method_645)>(*this, lib, "cmpnless",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnless))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnltpd_method_647 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnltpd);
addExtern<DAS_CALL_METHOD(_cmpnltpd_method_647)>(*this, lib, "cmpnltpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnltpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnltps_method_649 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnltps);
addExtern<DAS_CALL_METHOD(_cmpnltps_method_649)>(*this, lib, "cmpnltps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnltps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnltsd_method_651 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnltsd);
addExtern<DAS_CALL_METHOD(_cmpnltsd_method_651)>(*this, lib, "cmpnltsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnltsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpnltss_method_653 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpnltss);
addExtern<DAS_CALL_METHOD(_cmpnltss_method_653)>(*this, lib, "cmpnltss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpnltss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpordpd_method_655 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpordpd);
addExtern<DAS_CALL_METHOD(_cmpordpd_method_655)>(*this, lib, "cmpordpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpordpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpordps_method_657 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpordps);
addExtern<DAS_CALL_METHOD(_cmpordps_method_657)>(*this, lib, "cmpordps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpordps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpordsd_method_659 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpordsd);
addExtern<DAS_CALL_METHOD(_cmpordsd_method_659)>(*this, lib, "cmpordsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpordsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpordss_method_661 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpordss);
addExtern<DAS_CALL_METHOD(_cmpordss_method_661)>(*this, lib, "cmpordss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpordss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmppd_method_663 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmppd);
addExtern<DAS_CALL_METHOD(_cmppd_method_663)>(*this, lib, "cmppd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmppd))
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpps_method_665 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpps);
addExtern<DAS_CALL_METHOD(_cmpps_method_665)>(*this, lib, "cmpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpps))
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpsb_method_667 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpsb);
addExtern<DAS_CALL_METHOD(_cmpsb_method_667)>(*this, lib, "cmpsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpsb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpsd_method_669 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsd>;
addExtern<DAS_CALL_METHOD(_cmpsd_method_669)>(*this, lib, "cmpsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsd>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpsd_method_671 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::cmpsd>;
addExtern<DAS_CALL_METHOD(_cmpsd_method_671)>(*this, lib, "cmpsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::cmpsd>::invoke")
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpss_method_673 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpss);
addExtern<DAS_CALL_METHOD(_cmpss_method_673)>(*this, lib, "cmpss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpss))
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpsw_method_675 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpsw);
addExtern<DAS_CALL_METHOD(_cmpsw_method_675)>(*this, lib, "cmpsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpsw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpunordpd_method_677 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpunordpd);
addExtern<DAS_CALL_METHOD(_cmpunordpd_method_677)>(*this, lib, "cmpunordpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpunordpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpunordps_method_679 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpunordps);
addExtern<DAS_CALL_METHOD(_cmpunordps_method_679)>(*this, lib, "cmpunordps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpunordps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpunordsd_method_681 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpunordsd);
addExtern<DAS_CALL_METHOD(_cmpunordsd_method_681)>(*this, lib, "cmpunordsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpunordsd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpunordss_method_683 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpunordss);
addExtern<DAS_CALL_METHOD(_cmpunordss_method_683)>(*this, lib, "cmpunordss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpunordss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpxchg_method_685 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpxchg);
addExtern<DAS_CALL_METHOD(_cmpxchg_method_685)>(*this, lib, "cmpxchg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpxchg))
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpxchg8b_method_687 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpxchg8b);
addExtern<DAS_CALL_METHOD(_cmpxchg8b_method_687)>(*this, lib, "cmpxchg8b",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpxchg8b))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _comisd_method_689 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::comisd);
addExtern<DAS_CALL_METHOD(_comisd_method_689)>(*this, lib, "comisd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::comisd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _comiss_method_691 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::comiss);
addExtern<DAS_CALL_METHOD(_comiss_method_691)>(*this, lib, "comiss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::comiss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cpuid_method_693 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cpuid);
addExtern<DAS_CALL_METHOD(_cpuid_method_693)>(*this, lib, "cpuid",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cpuid))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _crc32_method_695 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::crc32);
addExtern<DAS_CALL_METHOD(_crc32_method_695)>(*this, lib, "crc32",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::crc32))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtdq2pd_method_697 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtdq2pd);
addExtern<DAS_CALL_METHOD(_cvtdq2pd_method_697)>(*this, lib, "cvtdq2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtdq2pd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtdq2ps_method_699 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtdq2ps);
addExtern<DAS_CALL_METHOD(_cvtdq2ps_method_699)>(*this, lib, "cvtdq2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtdq2ps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtpd2dq_method_701 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtpd2dq);
addExtern<DAS_CALL_METHOD(_cvtpd2dq_method_701)>(*this, lib, "cvtpd2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtpd2dq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtpd2pi_method_703 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtpd2pi);
addExtern<DAS_CALL_METHOD(_cvtpd2pi_method_703)>(*this, lib, "cvtpd2pi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtpd2pi))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtpd2ps_method_705 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtpd2ps);
addExtern<DAS_CALL_METHOD(_cvtpd2ps_method_705)>(*this, lib, "cvtpd2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtpd2ps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtpi2pd_method_707 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtpi2pd);
addExtern<DAS_CALL_METHOD(_cvtpi2pd_method_707)>(*this, lib, "cvtpi2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtpi2pd))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtpi2ps_method_709 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtpi2ps);
addExtern<DAS_CALL_METHOD(_cvtpi2ps_method_709)>(*this, lib, "cvtpi2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtpi2ps))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtps2dq_method_711 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtps2dq);
addExtern<DAS_CALL_METHOD(_cvtps2dq_method_711)>(*this, lib, "cvtps2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtps2dq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtps2pd_method_713 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtps2pd);
addExtern<DAS_CALL_METHOD(_cvtps2pd_method_713)>(*this, lib, "cvtps2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtps2pd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtps2pi_method_715 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtps2pi);
addExtern<DAS_CALL_METHOD(_cvtps2pi_method_715)>(*this, lib, "cvtps2pi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtps2pi))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtsd2si_method_717 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtsd2si);
addExtern<DAS_CALL_METHOD(_cvtsd2si_method_717)>(*this, lib, "cvtsd2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtsd2si))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtsd2ss_method_719 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtsd2ss);
addExtern<DAS_CALL_METHOD(_cvtsd2ss_method_719)>(*this, lib, "cvtsd2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtsd2ss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtsi2sd_method_721 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtsi2sd);
addExtern<DAS_CALL_METHOD(_cvtsi2sd_method_721)>(*this, lib, "cvtsi2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtsi2sd))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtsi2ss_method_723 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtsi2ss);
addExtern<DAS_CALL_METHOD(_cvtsi2ss_method_723)>(*this, lib, "cvtsi2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtsi2ss))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtss2sd_method_725 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtss2sd);
addExtern<DAS_CALL_METHOD(_cvtss2sd_method_725)>(*this, lib, "cvtss2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtss2sd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtss2si_method_727 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtss2si);
addExtern<DAS_CALL_METHOD(_cvtss2si_method_727)>(*this, lib, "cvtss2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtss2si))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttpd2dq_method_729 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttpd2dq);
addExtern<DAS_CALL_METHOD(_cvttpd2dq_method_729)>(*this, lib, "cvttpd2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttpd2dq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttpd2pi_method_731 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttpd2pi);
addExtern<DAS_CALL_METHOD(_cvttpd2pi_method_731)>(*this, lib, "cvttpd2pi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttpd2pi))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttps2dq_method_733 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttps2dq);
addExtern<DAS_CALL_METHOD(_cvttps2dq_method_733)>(*this, lib, "cvttps2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttps2dq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttps2pi_method_735 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttps2pi);
addExtern<DAS_CALL_METHOD(_cvttps2pi_method_735)>(*this, lib, "cvttps2pi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttps2pi))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttsd2si_method_737 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttsd2si);
addExtern<DAS_CALL_METHOD(_cvttsd2si_method_737)>(*this, lib, "cvttsd2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttsd2si))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvttss2si_method_739 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvttss2si);
addExtern<DAS_CALL_METHOD(_cvttss2si_method_739)>(*this, lib, "cvttss2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvttss2si))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cwd_method_741 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cwd);
addExtern<DAS_CALL_METHOD(_cwd_method_741)>(*this, lib, "cwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cwd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cwde_method_743 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cwde);
addExtern<DAS_CALL_METHOD(_cwde_method_743)>(*this, lib, "cwde",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cwde))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dec_method_745 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::dec);
addExtern<DAS_CALL_METHOD(_dec_method_745)>(*this, lib, "dec",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::dec))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _div_method_747 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::div);
addExtern<DAS_CALL_METHOD(_div_method_747)>(*this, lib, "div",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::div))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _divpd_method_749 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::divpd);
addExtern<DAS_CALL_METHOD(_divpd_method_749)>(*this, lib, "divpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::divpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _divps_method_751 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::divps);
addExtern<DAS_CALL_METHOD(_divps_method_751)>(*this, lib, "divps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::divps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _divsd_method_753 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::divsd);
addExtern<DAS_CALL_METHOD(_divsd_method_753)>(*this, lib, "divsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::divsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _divss_method_755 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::divss);
addExtern<DAS_CALL_METHOD(_divss_method_755)>(*this, lib, "divss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::divss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dppd_method_757 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::dppd);
addExtern<DAS_CALL_METHOD(_dppd_method_757)>(*this, lib, "dppd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::dppd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dpps_method_759 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::dpps);
addExtern<DAS_CALL_METHOD(_dpps_method_759)>(*this, lib, "dpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::dpps))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _emms_method_761 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::emms);
addExtern<DAS_CALL_METHOD(_emms_method_761)>(*this, lib, "emms",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::emms))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _endbr32_method_763 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::endbr32);
addExtern<DAS_CALL_METHOD(_endbr32_method_763)>(*this, lib, "endbr32",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::endbr32))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _endbr64_method_765 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::endbr64);
addExtern<DAS_CALL_METHOD(_endbr64_method_765)>(*this, lib, "endbr64",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::endbr64))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _enter_method_767 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::enter);
addExtern<DAS_CALL_METHOD(_enter_method_767)>(*this, lib, "enter",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::enter))
	->args({"self","x","y"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _extractps_method_769 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::extractps);
addExtern<DAS_CALL_METHOD(_extractps_method_769)>(*this, lib, "extractps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::extractps))
	->args({"self","op","xmm","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _f2xm1_method_771 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::f2xm1);
addExtern<DAS_CALL_METHOD(_f2xm1_method_771)>(*this, lib, "f2xm1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::f2xm1))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fabs_method_773 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fabs);
addExtern<DAS_CALL_METHOD(_fabs_method_773)>(*this, lib, "fabs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fabs))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fadd_method_775 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fadd>;
addExtern<DAS_CALL_METHOD(_fadd_method_775)>(*this, lib, "fadd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fadd>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fadd_method_777 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd>;
addExtern<DAS_CALL_METHOD(_fadd_method_777)>(*this, lib, "fadd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fadd_method_779 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd>;
addExtern<DAS_CALL_METHOD(_fadd_method_779)>(*this, lib, "fadd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fadd>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _faddp_method_781 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::faddp>;
addExtern<DAS_CALL_METHOD(_faddp_method_781)>(*this, lib, "faddp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::faddp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _faddp_method_783 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp>;
addExtern<DAS_CALL_METHOD(_faddp_method_783)>(*this, lib, "faddp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _faddp_method_785 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp>;
addExtern<DAS_CALL_METHOD(_faddp_method_785)>(*this, lib, "faddp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::faddp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fbld_method_787 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fbld);
addExtern<DAS_CALL_METHOD(_fbld_method_787)>(*this, lib, "fbld",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fbld))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fbstp_method_789 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fbstp);
addExtern<DAS_CALL_METHOD(_fbstp_method_789)>(*this, lib, "fbstp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fbstp))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fchs_method_791 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fchs);
addExtern<DAS_CALL_METHOD(_fchs_method_791)>(*this, lib, "fchs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fchs))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fclex_method_793 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fclex);
addExtern<DAS_CALL_METHOD(_fclex_method_793)>(*this, lib, "fclex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fclex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovb_method_795 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb>;
addExtern<DAS_CALL_METHOD(_fcmovb_method_795)>(*this, lib, "fcmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovb_method_797 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb>;
addExtern<DAS_CALL_METHOD(_fcmovb_method_797)>(*this, lib, "fcmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovb>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovbe_method_799 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe>;
addExtern<DAS_CALL_METHOD(_fcmovbe_method_799)>(*this, lib, "fcmovbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovbe_method_801 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe>;
addExtern<DAS_CALL_METHOD(_fcmovbe_method_801)>(*this, lib, "fcmovbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovbe>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmove_method_803 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove>;
addExtern<DAS_CALL_METHOD(_fcmove_method_803)>(*this, lib, "fcmove",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmove_method_805 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove>;
addExtern<DAS_CALL_METHOD(_fcmove_method_805)>(*this, lib, "fcmove",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmove>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnb_method_807 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb>;
addExtern<DAS_CALL_METHOD(_fcmovnb_method_807)>(*this, lib, "fcmovnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnb_method_809 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb>;
addExtern<DAS_CALL_METHOD(_fcmovnb_method_809)>(*this, lib, "fcmovnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnb>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnbe_method_811 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe>;
addExtern<DAS_CALL_METHOD(_fcmovnbe_method_811)>(*this, lib, "fcmovnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnbe_method_813 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe>;
addExtern<DAS_CALL_METHOD(_fcmovnbe_method_813)>(*this, lib, "fcmovnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnbe>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovne_method_815 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne>;
addExtern<DAS_CALL_METHOD(_fcmovne_method_815)>(*this, lib, "fcmovne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovne_method_817 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne>;
addExtern<DAS_CALL_METHOD(_fcmovne_method_817)>(*this, lib, "fcmovne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovne>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnu_method_819 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu>;
addExtern<DAS_CALL_METHOD(_fcmovnu_method_819)>(*this, lib, "fcmovnu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovnu_method_821 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu>;
addExtern<DAS_CALL_METHOD(_fcmovnu_method_821)>(*this, lib, "fcmovnu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovnu>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovu_method_823 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu>;
addExtern<DAS_CALL_METHOD(_fcmovu_method_823)>(*this, lib, "fcmovu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcmovu_method_825 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu>;
addExtern<DAS_CALL_METHOD(_fcmovu_method_825)>(*this, lib, "fcmovu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcmovu>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcom_method_827 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcom>;
addExtern<DAS_CALL_METHOD(_fcom_method_827)>(*this, lib, "fcom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcom>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcom_method_829 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcom>;
addExtern<DAS_CALL_METHOD(_fcom_method_829)>(*this, lib, "fcom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcom>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcom_method_831 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcom>;
addExtern<DAS_CALL_METHOD(_fcom_method_831)>(*this, lib, "fcom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcom>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomi_method_833 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi>;
addExtern<DAS_CALL_METHOD(_fcomi_method_833)>(*this, lib, "fcomi",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomi_method_835 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi>;
addExtern<DAS_CALL_METHOD(_fcomi_method_835)>(*this, lib, "fcomi",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomi>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomip_method_837 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip>;
addExtern<DAS_CALL_METHOD(_fcomip_method_837)>(*this, lib, "fcomip",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomip_method_839 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip>;
addExtern<DAS_CALL_METHOD(_fcomip_method_839)>(*this, lib, "fcomip",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomip>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomp_method_841 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcomp>;
addExtern<DAS_CALL_METHOD(_fcomp_method_841)>(*this, lib, "fcomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fcomp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomp_method_843 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcomp>;
addExtern<DAS_CALL_METHOD(_fcomp_method_843)>(*this, lib, "fcomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fcomp>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcomp_method_845 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomp>;
addExtern<DAS_CALL_METHOD(_fcomp_method_845)>(*this, lib, "fcomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fcomp>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcompp_method_847 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fcompp);
addExtern<DAS_CALL_METHOD(_fcompp_method_847)>(*this, lib, "fcompp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fcompp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fcos_method_849 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fcos);
addExtern<DAS_CALL_METHOD(_fcos_method_849)>(*this, lib, "fcos",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fcos))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdecstp_method_851 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fdecstp);
addExtern<DAS_CALL_METHOD(_fdecstp_method_851)>(*this, lib, "fdecstp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fdecstp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdiv_method_853 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdiv>;
addExtern<DAS_CALL_METHOD(_fdiv_method_853)>(*this, lib, "fdiv",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdiv>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdiv_method_855 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv>;
addExtern<DAS_CALL_METHOD(_fdiv_method_855)>(*this, lib, "fdiv",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdiv_method_857 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv>;
addExtern<DAS_CALL_METHOD(_fdiv_method_857)>(*this, lib, "fdiv",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdiv>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivp_method_859 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivp>;
addExtern<DAS_CALL_METHOD(_fdivp_method_859)>(*this, lib, "fdivp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivp_method_861 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp>;
addExtern<DAS_CALL_METHOD(_fdivp_method_861)>(*this, lib, "fdivp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivp_method_863 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp>;
addExtern<DAS_CALL_METHOD(_fdivp_method_863)>(*this, lib, "fdivp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivr_method_865 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdivr>;
addExtern<DAS_CALL_METHOD(_fdivr_method_865)>(*this, lib, "fdivr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fdivr>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivr_method_867 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr>;
addExtern<DAS_CALL_METHOD(_fdivr_method_867)>(*this, lib, "fdivr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivr_method_869 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr>;
addExtern<DAS_CALL_METHOD(_fdivr_method_869)>(*this, lib, "fdivr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivr>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivrp_method_871 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivrp>;
addExtern<DAS_CALL_METHOD(_fdivrp_method_871)>(*this, lib, "fdivrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fdivrp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivrp_method_873 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp>;
addExtern<DAS_CALL_METHOD(_fdivrp_method_873)>(*this, lib, "fdivrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fdivrp_method_875 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp>;
addExtern<DAS_CALL_METHOD(_fdivrp_method_875)>(*this, lib, "fdivrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fdivrp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ffree_method_877 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ffree);
addExtern<DAS_CALL_METHOD(_ffree_method_877)>(*this, lib, "ffree",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ffree))
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fiadd_method_879 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fiadd);
addExtern<DAS_CALL_METHOD(_fiadd_method_879)>(*this, lib, "fiadd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fiadd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ficom_method_881 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ficom);
addExtern<DAS_CALL_METHOD(_ficom_method_881)>(*this, lib, "ficom",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ficom))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ficomp_method_883 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ficomp);
addExtern<DAS_CALL_METHOD(_ficomp_method_883)>(*this, lib, "ficomp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ficomp))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fidiv_method_885 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fidiv);
addExtern<DAS_CALL_METHOD(_fidiv_method_885)>(*this, lib, "fidiv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fidiv))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fidivr_method_887 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fidivr);
addExtern<DAS_CALL_METHOD(_fidivr_method_887)>(*this, lib, "fidivr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fidivr))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fild_method_889 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fild);
addExtern<DAS_CALL_METHOD(_fild_method_889)>(*this, lib, "fild",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fild))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fimul_method_891 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fimul);
addExtern<DAS_CALL_METHOD(_fimul_method_891)>(*this, lib, "fimul",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fimul))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fincstp_method_893 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fincstp);
addExtern<DAS_CALL_METHOD(_fincstp_method_893)>(*this, lib, "fincstp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fincstp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _finit_method_895 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::finit);
addExtern<DAS_CALL_METHOD(_finit_method_895)>(*this, lib, "finit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::finit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fist_method_897 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fist);
addExtern<DAS_CALL_METHOD(_fist_method_897)>(*this, lib, "fist",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fist))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fistp_method_899 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fistp);
addExtern<DAS_CALL_METHOD(_fistp_method_899)>(*this, lib, "fistp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fistp))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fisttp_method_901 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fisttp);
addExtern<DAS_CALL_METHOD(_fisttp_method_901)>(*this, lib, "fisttp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fisttp))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fisub_method_903 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fisub);
addExtern<DAS_CALL_METHOD(_fisub_method_903)>(*this, lib, "fisub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fisub))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fisubr_method_905 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fisubr);
addExtern<DAS_CALL_METHOD(_fisubr_method_905)>(*this, lib, "fisubr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fisubr))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fld_method_907 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fld>;
addExtern<DAS_CALL_METHOD(_fld_method_907)>(*this, lib, "fld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fld>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fld_method_909 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fld>;
addExtern<DAS_CALL_METHOD(_fld_method_909)>(*this, lib, "fld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fld>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fld1_method_911 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fld1);
addExtern<DAS_CALL_METHOD(_fld1_method_911)>(*this, lib, "fld1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fld1))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldcw_method_913 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldcw);
addExtern<DAS_CALL_METHOD(_fldcw_method_913)>(*this, lib, "fldcw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldcw))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldenv_method_915 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldenv);
addExtern<DAS_CALL_METHOD(_fldenv_method_915)>(*this, lib, "fldenv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldenv))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldl2e_method_917 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldl2e);
addExtern<DAS_CALL_METHOD(_fldl2e_method_917)>(*this, lib, "fldl2e",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldl2e))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldl2t_method_919 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldl2t);
addExtern<DAS_CALL_METHOD(_fldl2t_method_919)>(*this, lib, "fldl2t",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldl2t))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldlg2_method_921 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldlg2);
addExtern<DAS_CALL_METHOD(_fldlg2_method_921)>(*this, lib, "fldlg2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldlg2))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldln2_method_923 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldln2);
addExtern<DAS_CALL_METHOD(_fldln2_method_923)>(*this, lib, "fldln2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldln2))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldpi_method_925 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldpi);
addExtern<DAS_CALL_METHOD(_fldpi_method_925)>(*this, lib, "fldpi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldpi))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fldz_method_927 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fldz);
addExtern<DAS_CALL_METHOD(_fldz_method_927)>(*this, lib, "fldz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fldz))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmul_method_929 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fmul>;
addExtern<DAS_CALL_METHOD(_fmul_method_929)>(*this, lib, "fmul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fmul>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmul_method_931 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul>;
addExtern<DAS_CALL_METHOD(_fmul_method_931)>(*this, lib, "fmul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmul_method_933 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul>;
addExtern<DAS_CALL_METHOD(_fmul_method_933)>(*this, lib, "fmul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmul>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmulp_method_935 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fmulp>;
addExtern<DAS_CALL_METHOD(_fmulp_method_935)>(*this, lib, "fmulp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fmulp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmulp_method_937 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp>;
addExtern<DAS_CALL_METHOD(_fmulp_method_937)>(*this, lib, "fmulp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fmulp_method_939 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp>;
addExtern<DAS_CALL_METHOD(_fmulp_method_939)>(*this, lib, "fmulp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fmulp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnclex_method_941 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fnclex);
addExtern<DAS_CALL_METHOD(_fnclex_method_941)>(*this, lib, "fnclex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fnclex))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fninit_method_943 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fninit);
addExtern<DAS_CALL_METHOD(_fninit_method_943)>(*this, lib, "fninit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fninit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnop_method_945 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fnop);
addExtern<DAS_CALL_METHOD(_fnop_method_945)>(*this, lib, "fnop",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fnop))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnsave_method_947 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fnsave);
addExtern<DAS_CALL_METHOD(_fnsave_method_947)>(*this, lib, "fnsave",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fnsave))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnstcw_method_949 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fnstcw);
addExtern<DAS_CALL_METHOD(_fnstcw_method_949)>(*this, lib, "fnstcw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fnstcw))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnstenv_method_951 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fnstenv);
addExtern<DAS_CALL_METHOD(_fnstenv_method_951)>(*this, lib, "fnstenv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fnstenv))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnstsw_method_953 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnstsw>;
addExtern<DAS_CALL_METHOD(_fnstsw_method_953)>(*this, lib, "fnstsw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fnstsw>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fnstsw_method_955 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fnstsw>;
addExtern<DAS_CALL_METHOD(_fnstsw_method_955)>(*this, lib, "fnstsw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fnstsw>::invoke")
	->args({"self","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fpatan_method_957 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fpatan);
addExtern<DAS_CALL_METHOD(_fpatan_method_957)>(*this, lib, "fpatan",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fpatan))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fprem_method_959 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fprem);
addExtern<DAS_CALL_METHOD(_fprem_method_959)>(*this, lib, "fprem",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fprem))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fprem1_method_961 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fprem1);
addExtern<DAS_CALL_METHOD(_fprem1_method_961)>(*this, lib, "fprem1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fprem1))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fptan_method_963 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fptan);
addExtern<DAS_CALL_METHOD(_fptan_method_963)>(*this, lib, "fptan",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fptan))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _frndint_method_965 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::frndint);
addExtern<DAS_CALL_METHOD(_frndint_method_965)>(*this, lib, "frndint",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::frndint))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _frstor_method_967 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::frstor);
addExtern<DAS_CALL_METHOD(_frstor_method_967)>(*this, lib, "frstor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::frstor))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsave_method_969 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fsave);
addExtern<DAS_CALL_METHOD(_fsave_method_969)>(*this, lib, "fsave",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fsave))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fscale_method_971 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fscale);
addExtern<DAS_CALL_METHOD(_fscale_method_971)>(*this, lib, "fscale",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fscale))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsin_method_973 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fsin);
addExtern<DAS_CALL_METHOD(_fsin_method_973)>(*this, lib, "fsin",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fsin))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsincos_method_975 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fsincos);
addExtern<DAS_CALL_METHOD(_fsincos_method_975)>(*this, lib, "fsincos",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fsincos))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsqrt_method_977 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fsqrt);
addExtern<DAS_CALL_METHOD(_fsqrt_method_977)>(*this, lib, "fsqrt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fsqrt))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fst_method_979 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fst>;
addExtern<DAS_CALL_METHOD(_fst_method_979)>(*this, lib, "fst",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fst>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fst_method_981 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fst>;
addExtern<DAS_CALL_METHOD(_fst_method_981)>(*this, lib, "fst",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fst>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstcw_method_983 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fstcw);
addExtern<DAS_CALL_METHOD(_fstcw_method_983)>(*this, lib, "fstcw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fstcw))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstenv_method_985 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fstenv);
addExtern<DAS_CALL_METHOD(_fstenv_method_985)>(*this, lib, "fstenv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fstenv))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstp_method_987 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstp>;
addExtern<DAS_CALL_METHOD(_fstp_method_987)>(*this, lib, "fstp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstp>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstp_method_989 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fstp>;
addExtern<DAS_CALL_METHOD(_fstp_method_989)>(*this, lib, "fstp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fstp>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstsw_method_991 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstsw>;
addExtern<DAS_CALL_METHOD(_fstsw_method_991)>(*this, lib, "fstsw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fstsw>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fstsw_method_993 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fstsw>;
addExtern<DAS_CALL_METHOD(_fstsw_method_993)>(*this, lib, "fstsw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg16 &),&Xbyak::CodeGenerator::fstsw>::invoke")
	->args({"self","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsub_method_995 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsub>;
addExtern<DAS_CALL_METHOD(_fsub_method_995)>(*this, lib, "fsub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsub>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsub_method_997 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>;
addExtern<DAS_CALL_METHOD(_fsub_method_997)>(*this, lib, "fsub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsub_method_999 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>;
addExtern<DAS_CALL_METHOD(_fsub_method_999)>(*this, lib, "fsub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsub>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubp_method_1001 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubp>;
addExtern<DAS_CALL_METHOD(_fsubp_method_1001)>(*this, lib, "fsubp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubp_method_1003 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>;
addExtern<DAS_CALL_METHOD(_fsubp_method_1003)>(*this, lib, "fsubp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubp_method_1005 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>;
addExtern<DAS_CALL_METHOD(_fsubp_method_1005)>(*this, lib, "fsubp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubr_method_1007 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsubr>;
addExtern<DAS_CALL_METHOD(_fsubr_method_1007)>(*this, lib, "fsubr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::fsubr>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubr_method_1009 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>;
addExtern<DAS_CALL_METHOD(_fsubr_method_1009)>(*this, lib, "fsubr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubr_method_1011 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>;
addExtern<DAS_CALL_METHOD(_fsubr_method_1011)>(*this, lib, "fsubr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubr>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubrp_method_1013 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubrp>;
addExtern<DAS_CALL_METHOD(_fsubrp_method_1013)>(*this, lib, "fsubrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fsubrp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubrp_method_1015 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>;
addExtern<DAS_CALL_METHOD(_fsubrp_method_1015)>(*this, lib, "fsubrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fsubrp_method_1017 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>;
addExtern<DAS_CALL_METHOD(_fsubrp_method_1017)>(*this, lib, "fsubrp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fsubrp>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ftst_method_1019 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ftst);
addExtern<DAS_CALL_METHOD(_ftst_method_1019)>(*this, lib, "ftst",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ftst))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucom_method_1021 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucom>;
addExtern<DAS_CALL_METHOD(_fucom_method_1021)>(*this, lib, "fucom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucom>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucom_method_1023 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucom>;
addExtern<DAS_CALL_METHOD(_fucom_method_1023)>(*this, lib, "fucom",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucom>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomi_method_1025 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>;
addExtern<DAS_CALL_METHOD(_fucomi_method_1025)>(*this, lib, "fucomi",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomi_method_1027 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>;
addExtern<DAS_CALL_METHOD(_fucomi_method_1027)>(*this, lib, "fucomi",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomi>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomip_method_1029 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>;
addExtern<DAS_CALL_METHOD(_fucomip_method_1029)>(*this, lib, "fucomip",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>::invoke")
	->args({"self","reg1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomip_method_1031 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>;
addExtern<DAS_CALL_METHOD(_fucomip_method_1031)>(*this, lib, "fucomip",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &, const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomip>::invoke")
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomp_method_1033 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucomp>;
addExtern<DAS_CALL_METHOD(_fucomp_method_1033)>(*this, lib, "fucomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fucomp>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucomp_method_1035 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomp>;
addExtern<DAS_CALL_METHOD(_fucomp_method_1035)>(*this, lib, "fucomp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fucomp>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fucompp_method_1037 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fucompp);
addExtern<DAS_CALL_METHOD(_fucompp_method_1037)>(*this, lib, "fucompp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fucompp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fwait_method_1039 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fwait);
addExtern<DAS_CALL_METHOD(_fwait_method_1039)>(*this, lib, "fwait",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fwait))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxam_method_1041 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fxam);
addExtern<DAS_CALL_METHOD(_fxam_method_1041)>(*this, lib, "fxam",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fxam))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxch_method_1043 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxch>;
addExtern<DAS_CALL_METHOD(_fxch_method_1043)>(*this, lib, "fxch",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::fxch>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxch_method_1045 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fxch>;
addExtern<DAS_CALL_METHOD(_fxch_method_1045)>(*this, lib, "fxch",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &),&Xbyak::CodeGenerator::fxch>::invoke")
	->args({"self","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxrstor_method_1047 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fxrstor);
addExtern<DAS_CALL_METHOD(_fxrstor_method_1047)>(*this, lib, "fxrstor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fxrstor))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxtract_method_1049 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fxtract);
addExtern<DAS_CALL_METHOD(_fxtract_method_1049)>(*this, lib, "fxtract",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fxtract))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fyl2x_method_1051 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fyl2x);
addExtern<DAS_CALL_METHOD(_fyl2x_method_1051)>(*this, lib, "fyl2x",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fyl2x))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fyl2xp1_method_1053 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fyl2xp1);
addExtern<DAS_CALL_METHOD(_fyl2xp1_method_1053)>(*this, lib, "fyl2xp1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fyl2xp1))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _gf2p8affineinvqb_method_1055 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::gf2p8affineinvqb);
addExtern<DAS_CALL_METHOD(_gf2p8affineinvqb_method_1055)>(*this, lib, "gf2p8affineinvqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::gf2p8affineinvqb))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _gf2p8affineqb_method_1057 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::gf2p8affineqb);
addExtern<DAS_CALL_METHOD(_gf2p8affineqb_method_1057)>(*this, lib, "gf2p8affineqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::gf2p8affineqb))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _gf2p8mulb_method_1059 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::gf2p8mulb);
addExtern<DAS_CALL_METHOD(_gf2p8mulb_method_1059)>(*this, lib, "gf2p8mulb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::gf2p8mulb))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _haddpd_method_1061 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::haddpd);
addExtern<DAS_CALL_METHOD(_haddpd_method_1061)>(*this, lib, "haddpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::haddpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _haddps_method_1063 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::haddps);
addExtern<DAS_CALL_METHOD(_haddps_method_1063)>(*this, lib, "haddps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::haddps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hsubpd_method_1065 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::hsubpd);
addExtern<DAS_CALL_METHOD(_hsubpd_method_1065)>(*this, lib, "hsubpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::hsubpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _hsubps_method_1067 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::hsubps);
addExtern<DAS_CALL_METHOD(_hsubps_method_1067)>(*this, lib, "hsubps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::hsubps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _idiv_method_1069 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::idiv);
addExtern<DAS_CALL_METHOD(_idiv_method_1069)>(*this, lib, "idiv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::idiv))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _imul_method_1071 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>;
addExtern<DAS_CALL_METHOD(_imul_method_1071)>(*this, lib, "imul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _in__method_1073 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &),&Xbyak::CodeGenerator::in_>;
addExtern<DAS_CALL_METHOD(_in__method_1073)>(*this, lib, "in_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &),&Xbyak::CodeGenerator::in_>::invoke")
	->args({"self","a","d"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _in__method_1075 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::in_>;
addExtern<DAS_CALL_METHOD(_in__method_1075)>(*this, lib, "in_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::in_>::invoke")
	->args({"self","a","v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _inc_method_1077 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::inc);
addExtern<DAS_CALL_METHOD(_inc_method_1077)>(*this, lib, "inc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::inc))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _insertps_method_1079 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::insertps);
addExtern<DAS_CALL_METHOD(_insertps_method_1079)>(*this, lib, "insertps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::insertps))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _int3_method_1081 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::int3);
addExtern<DAS_CALL_METHOD(_int3_method_1081)>(*this, lib, "int3",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::int3))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _int__method_1083 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::int_);
addExtern<DAS_CALL_METHOD(_int__method_1083)>(*this, lib, "int_",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::int_))
	->args({"self","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1085 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1085)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1087 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1087)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1089 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1089)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ja_method_1091 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>;
addExtern<DAS_CALL_METHOD(_ja_method_1091)>(*this, lib, "ja",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::ja>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1093 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1093)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1095 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1095)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1097 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1097)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jae_method_1099 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>;
addExtern<DAS_CALL_METHOD(_jae_method_1099)>(*this, lib, "jae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1101 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1101)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1103 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1103)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1105 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1105)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jb_method_1107 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>;
addExtern<DAS_CALL_METHOD(_jb_method_1107)>(*this, lib, "jb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1109 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1109)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1111 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1111)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1113 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1113)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jbe_method_1115 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>;
addExtern<DAS_CALL_METHOD(_jbe_method_1115)>(*this, lib, "jbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1117 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1117)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1119 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1119)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1121 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1121)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jc_method_1123 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>;
addExtern<DAS_CALL_METHOD(_jc_method_1123)>(*this, lib, "jc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1125 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1125)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1127 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1127)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1129 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1129)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _je_method_1131 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>;
addExtern<DAS_CALL_METHOD(_je_method_1131)>(*this, lib, "je",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::je>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1133 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1133)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1135 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1135)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1137 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1137)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jg_method_1139 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>;
addExtern<DAS_CALL_METHOD(_jg_method_1139)>(*this, lib, "jg",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jg>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1141 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1141)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1143 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1143)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1145 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1145)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jge_method_1147 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>;
addExtern<DAS_CALL_METHOD(_jge_method_1147)>(*this, lib, "jge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1149 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1149)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1151 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1151)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1153 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1153)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jl_method_1155 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>;
addExtern<DAS_CALL_METHOD(_jl_method_1155)>(*this, lib, "jl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1157 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1157)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1159 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1159)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1161 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1161)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jle_method_1163 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>;
addExtern<DAS_CALL_METHOD(_jle_method_1163)>(*this, lib, "jle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1165 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1165)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1167 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1167)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1169 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1169)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jna_method_1171 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>;
addExtern<DAS_CALL_METHOD(_jna_method_1171)>(*this, lib, "jna",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnae_method_1173 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>;
addExtern<DAS_CALL_METHOD(_jnae_method_1173)>(*this, lib, "jnae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnae_method_1175 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>;
addExtern<DAS_CALL_METHOD(_jnae_method_1175)>(*this, lib, "jnae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnae_method_1177 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnae>;
addExtern<DAS_CALL_METHOD(_jnae_method_1177)>(*this, lib, "jnae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnae>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnae_method_1179 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>;
addExtern<DAS_CALL_METHOD(_jnae_method_1179)>(*this, lib, "jnae",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnb_method_1181 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>;
addExtern<DAS_CALL_METHOD(_jnb_method_1181)>(*this, lib, "jnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnb_method_1183 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>;
addExtern<DAS_CALL_METHOD(_jnb_method_1183)>(*this, lib, "jnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnb_method_1185 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnb>;
addExtern<DAS_CALL_METHOD(_jnb_method_1185)>(*this, lib, "jnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnb>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnb_method_1187 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>;
addExtern<DAS_CALL_METHOD(_jnb_method_1187)>(*this, lib, "jnb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnbe_method_1189 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>;
addExtern<DAS_CALL_METHOD(_jnbe_method_1189)>(*this, lib, "jnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnbe_method_1191 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>;
addExtern<DAS_CALL_METHOD(_jnbe_method_1191)>(*this, lib, "jnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnbe_method_1193 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnbe>;
addExtern<DAS_CALL_METHOD(_jnbe_method_1193)>(*this, lib, "jnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnbe>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnbe_method_1195 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>;
addExtern<DAS_CALL_METHOD(_jnbe_method_1195)>(*this, lib, "jnbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnc_method_1197 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>;
addExtern<DAS_CALL_METHOD(_jnc_method_1197)>(*this, lib, "jnc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnc_method_1199 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>;
addExtern<DAS_CALL_METHOD(_jnc_method_1199)>(*this, lib, "jnc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnc_method_1201 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnc>;
addExtern<DAS_CALL_METHOD(_jnc_method_1201)>(*this, lib, "jnc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnc>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnc_method_1203 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>;
addExtern<DAS_CALL_METHOD(_jnc_method_1203)>(*this, lib, "jnc",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jne_method_1205 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>;
addExtern<DAS_CALL_METHOD(_jne_method_1205)>(*this, lib, "jne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jne_method_1207 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>;
addExtern<DAS_CALL_METHOD(_jne_method_1207)>(*this, lib, "jne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jne_method_1209 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jne>;
addExtern<DAS_CALL_METHOD(_jne_method_1209)>(*this, lib, "jne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jne>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jne_method_1211 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>;
addExtern<DAS_CALL_METHOD(_jne_method_1211)>(*this, lib, "jne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jng_method_1213 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>;
addExtern<DAS_CALL_METHOD(_jng_method_1213)>(*this, lib, "jng",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jng_method_1215 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>;
addExtern<DAS_CALL_METHOD(_jng_method_1215)>(*this, lib, "jng",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jng_method_1217 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jng>;
addExtern<DAS_CALL_METHOD(_jng_method_1217)>(*this, lib, "jng",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jng>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jng_method_1219 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>;
addExtern<DAS_CALL_METHOD(_jng_method_1219)>(*this, lib, "jng",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnge_method_1221 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>;
addExtern<DAS_CALL_METHOD(_jnge_method_1221)>(*this, lib, "jnge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnge_method_1223 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>;
addExtern<DAS_CALL_METHOD(_jnge_method_1223)>(*this, lib, "jnge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnge_method_1225 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnge>;
addExtern<DAS_CALL_METHOD(_jnge_method_1225)>(*this, lib, "jnge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnge>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnge_method_1227 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>;
addExtern<DAS_CALL_METHOD(_jnge_method_1227)>(*this, lib, "jnge",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnl_method_1229 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>;
addExtern<DAS_CALL_METHOD(_jnl_method_1229)>(*this, lib, "jnl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnl_method_1231 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>;
addExtern<DAS_CALL_METHOD(_jnl_method_1231)>(*this, lib, "jnl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnl_method_1233 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnl>;
addExtern<DAS_CALL_METHOD(_jnl_method_1233)>(*this, lib, "jnl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnl>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnl_method_1235 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>;
addExtern<DAS_CALL_METHOD(_jnl_method_1235)>(*this, lib, "jnl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnle_method_1237 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>;
addExtern<DAS_CALL_METHOD(_jnle_method_1237)>(*this, lib, "jnle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnle_method_1239 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>;
addExtern<DAS_CALL_METHOD(_jnle_method_1239)>(*this, lib, "jnle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnle_method_1241 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnle>;
addExtern<DAS_CALL_METHOD(_jnle_method_1241)>(*this, lib, "jnle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnle>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnle_method_1243 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>;
addExtern<DAS_CALL_METHOD(_jnle_method_1243)>(*this, lib, "jnle",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jno_method_1245 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>;
addExtern<DAS_CALL_METHOD(_jno_method_1245)>(*this, lib, "jno",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jno_method_1247 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>;
addExtern<DAS_CALL_METHOD(_jno_method_1247)>(*this, lib, "jno",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jno_method_1249 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jno>;
addExtern<DAS_CALL_METHOD(_jno_method_1249)>(*this, lib, "jno",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jno>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jno_method_1251 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>;
addExtern<DAS_CALL_METHOD(_jno_method_1251)>(*this, lib, "jno",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnp_method_1253 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>;
addExtern<DAS_CALL_METHOD(_jnp_method_1253)>(*this, lib, "jnp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnp_method_1255 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>;
addExtern<DAS_CALL_METHOD(_jnp_method_1255)>(*this, lib, "jnp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnp_method_1257 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnp>;
addExtern<DAS_CALL_METHOD(_jnp_method_1257)>(*this, lib, "jnp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnp>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnp_method_1259 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>;
addExtern<DAS_CALL_METHOD(_jnp_method_1259)>(*this, lib, "jnp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jns_method_1261 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>;
addExtern<DAS_CALL_METHOD(_jns_method_1261)>(*this, lib, "jns",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jns_method_1263 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>;
addExtern<DAS_CALL_METHOD(_jns_method_1263)>(*this, lib, "jns",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jns_method_1265 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jns>;
addExtern<DAS_CALL_METHOD(_jns_method_1265)>(*this, lib, "jns",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jns>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jns_method_1267 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>;
addExtern<DAS_CALL_METHOD(_jns_method_1267)>(*this, lib, "jns",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnz_method_1269 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>;
addExtern<DAS_CALL_METHOD(_jnz_method_1269)>(*this, lib, "jnz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnz_method_1271 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>;
addExtern<DAS_CALL_METHOD(_jnz_method_1271)>(*this, lib, "jnz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnz_method_1273 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnz>;
addExtern<DAS_CALL_METHOD(_jnz_method_1273)>(*this, lib, "jnz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnz>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jnz_method_1275 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>;
addExtern<DAS_CALL_METHOD(_jnz_method_1275)>(*this, lib, "jnz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jo_method_1277 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>;
addExtern<DAS_CALL_METHOD(_jo_method_1277)>(*this, lib, "jo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jo_method_1279 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>;
addExtern<DAS_CALL_METHOD(_jo_method_1279)>(*this, lib, "jo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jo_method_1281 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jo>;
addExtern<DAS_CALL_METHOD(_jo_method_1281)>(*this, lib, "jo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jo>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jo_method_1283 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>;
addExtern<DAS_CALL_METHOD(_jo_method_1283)>(*this, lib, "jo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jp_method_1285 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>;
addExtern<DAS_CALL_METHOD(_jp_method_1285)>(*this, lib, "jp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jp_method_1287 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>;
addExtern<DAS_CALL_METHOD(_jp_method_1287)>(*this, lib, "jp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jp_method_1289 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jp>;
addExtern<DAS_CALL_METHOD(_jp_method_1289)>(*this, lib, "jp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jp>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jp_method_1291 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>;
addExtern<DAS_CALL_METHOD(_jp_method_1291)>(*this, lib, "jp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpe_method_1293 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>;
addExtern<DAS_CALL_METHOD(_jpe_method_1293)>(*this, lib, "jpe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpe_method_1295 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>;
addExtern<DAS_CALL_METHOD(_jpe_method_1295)>(*this, lib, "jpe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpe_method_1297 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpe>;
addExtern<DAS_CALL_METHOD(_jpe_method_1297)>(*this, lib, "jpe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpe>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpe_method_1299 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>;
addExtern<DAS_CALL_METHOD(_jpe_method_1299)>(*this, lib, "jpe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpo_method_1301 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>;
addExtern<DAS_CALL_METHOD(_jpo_method_1301)>(*this, lib, "jpo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpo_method_1303 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>;
addExtern<DAS_CALL_METHOD(_jpo_method_1303)>(*this, lib, "jpo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpo_method_1305 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpo>;
addExtern<DAS_CALL_METHOD(_jpo_method_1305)>(*this, lib, "jpo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpo>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jpo_method_1307 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>;
addExtern<DAS_CALL_METHOD(_jpo_method_1307)>(*this, lib, "jpo",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _js_method_1309 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>;
addExtern<DAS_CALL_METHOD(_js_method_1309)>(*this, lib, "js",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _js_method_1311 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>;
addExtern<DAS_CALL_METHOD(_js_method_1311)>(*this, lib, "js",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _js_method_1313 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::js>;
addExtern<DAS_CALL_METHOD(_js_method_1313)>(*this, lib, "js",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::js>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _js_method_1315 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>;
addExtern<DAS_CALL_METHOD(_js_method_1315)>(*this, lib, "js",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jz_method_1317 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>;
addExtern<DAS_CALL_METHOD(_jz_method_1317)>(*this, lib, "jz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jz_method_1319 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>;
addExtern<DAS_CALL_METHOD(_jz_method_1319)>(*this, lib, "jz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jz_method_1321 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jz>;
addExtern<DAS_CALL_METHOD(_jz_method_1321)>(*this, lib, "jz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jz>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jz_method_1323 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>;
addExtern<DAS_CALL_METHOD(_jz_method_1323)>(*this, lib, "jz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lahf_method_1325 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lahf);
addExtern<DAS_CALL_METHOD(_lahf_method_1325)>(*this, lib, "lahf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lahf))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lddqu_method_1327 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lddqu);
addExtern<DAS_CALL_METHOD(_lddqu_method_1327)>(*this, lib, "lddqu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lddqu))
	->args({"self","xmm","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ldmxcsr_method_1329 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ldmxcsr);
addExtern<DAS_CALL_METHOD(_ldmxcsr_method_1329)>(*this, lib, "ldmxcsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ldmxcsr))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lea_method_1331 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lea);
addExtern<DAS_CALL_METHOD(_lea_method_1331)>(*this, lib, "lea",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lea))
	->args({"self","reg","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _leave_method_1333 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::leave);
addExtern<DAS_CALL_METHOD(_leave_method_1333)>(*this, lib, "leave",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::leave))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lfence_method_1335 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lfence);
addExtern<DAS_CALL_METHOD(_lfence_method_1335)>(*this, lib, "lfence",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lfence))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lfs_method_1337 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lfs);
addExtern<DAS_CALL_METHOD(_lfs_method_1337)>(*this, lib, "lfs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lfs))
	->args({"self","reg","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lgs_method_1339 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lgs);
addExtern<DAS_CALL_METHOD(_lgs_method_1339)>(*this, lib, "lgs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lgs))
	->args({"self","reg","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lock_method_1341 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lock);
addExtern<DAS_CALL_METHOD(_lock_method_1341)>(*this, lib, "lock",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lock))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lodsb_method_1343 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lodsb);
addExtern<DAS_CALL_METHOD(_lodsb_method_1343)>(*this, lib, "lodsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lodsb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lodsd_method_1345 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lodsd);
addExtern<DAS_CALL_METHOD(_lodsd_method_1345)>(*this, lib, "lodsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lodsd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lodsw_method_1347 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lodsw);
addExtern<DAS_CALL_METHOD(_lodsw_method_1347)>(*this, lib, "lodsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lodsw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loop_method_1349 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loop>;
addExtern<DAS_CALL_METHOD(_loop_method_1349)>(*this, lib, "loop",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loop>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loop_method_1351 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loop>;
addExtern<DAS_CALL_METHOD(_loop_method_1351)>(*this, lib, "loop",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loop>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loop_method_1353 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loop>;
addExtern<DAS_CALL_METHOD(_loop_method_1353)>(*this, lib, "loop",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loop>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loope_method_1355 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loope>;
addExtern<DAS_CALL_METHOD(_loope_method_1355)>(*this, lib, "loope",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loope>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loope_method_1357 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loope>;
addExtern<DAS_CALL_METHOD(_loope_method_1357)>(*this, lib, "loope",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loope>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loope_method_1359 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loope>;
addExtern<DAS_CALL_METHOD(_loope_method_1359)>(*this, lib, "loope",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loope>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loopne_method_1361 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loopne>;
addExtern<DAS_CALL_METHOD(_loopne_method_1361)>(*this, lib, "loopne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loopne>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loopne_method_1363 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loopne>;
addExtern<DAS_CALL_METHOD(_loopne_method_1363)>(*this, lib, "loopne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loopne>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _loopne_method_1365 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loopne>;
addExtern<DAS_CALL_METHOD(_loopne_method_1365)>(*this, lib, "loopne",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::loopne>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lss_method_1367 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lss);
addExtern<DAS_CALL_METHOD(_lss_method_1367)>(*this, lib, "lss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lss))
	->args({"self","reg","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lzcnt_method_1369 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lzcnt);
addExtern<DAS_CALL_METHOD(_lzcnt_method_1369)>(*this, lib, "lzcnt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lzcnt))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _maskmovdqu_method_1371 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maskmovdqu);
addExtern<DAS_CALL_METHOD(_maskmovdqu_method_1371)>(*this, lib, "maskmovdqu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maskmovdqu))
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _maskmovq_method_1373 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maskmovq);
addExtern<DAS_CALL_METHOD(_maskmovq_method_1373)>(*this, lib, "maskmovq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maskmovq))
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _maxpd_method_1375 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maxpd);
addExtern<DAS_CALL_METHOD(_maxpd_method_1375)>(*this, lib, "maxpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maxpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _maxps_method_1377 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maxps);
addExtern<DAS_CALL_METHOD(_maxps_method_1377)>(*this, lib, "maxps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maxps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _maxsd_method_1379 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maxsd);
addExtern<DAS_CALL_METHOD(_maxsd_method_1379)>(*this, lib, "maxsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maxsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _maxss_method_1381 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maxss);
addExtern<DAS_CALL_METHOD(_maxss_method_1381)>(*this, lib, "maxss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maxss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mfence_method_1383 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mfence);
addExtern<DAS_CALL_METHOD(_mfence_method_1383)>(*this, lib, "mfence",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mfence))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _minpd_method_1385 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::minpd);
addExtern<DAS_CALL_METHOD(_minpd_method_1385)>(*this, lib, "minpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::minpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _minps_method_1387 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::minps);
addExtern<DAS_CALL_METHOD(_minps_method_1387)>(*this, lib, "minps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::minps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _minsd_method_1389 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::minsd);
addExtern<DAS_CALL_METHOD(_minsd_method_1389)>(*this, lib, "minsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::minsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _minss_method_1391 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::minss);
addExtern<DAS_CALL_METHOD(_minss_method_1391)>(*this, lib, "minss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::minss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _monitor_method_1393 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::monitor);
addExtern<DAS_CALL_METHOD(_monitor_method_1393)>(*this, lib, "monitor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::monitor))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _monitorx_method_1395 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::monitorx);
addExtern<DAS_CALL_METHOD(_monitorx_method_1395)>(*this, lib, "monitorx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::monitorx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movapd_method_1397 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movapd>;
addExtern<DAS_CALL_METHOD(_movapd_method_1397)>(*this, lib, "movapd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movapd>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movapd_method_1399 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movapd>;
addExtern<DAS_CALL_METHOD(_movapd_method_1399)>(*this, lib, "movapd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movapd>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movaps_method_1401 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movaps>;
addExtern<DAS_CALL_METHOD(_movaps_method_1401)>(*this, lib, "movaps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movaps>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movaps_method_1403 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movaps>;
addExtern<DAS_CALL_METHOD(_movaps_method_1403)>(*this, lib, "movaps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movaps>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movbe_method_1405 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Reg &),&Xbyak::CodeGenerator::movbe>;
addExtern<DAS_CALL_METHOD(_movbe_method_1405)>(*this, lib, "movbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Reg &),&Xbyak::CodeGenerator::movbe>::invoke")
	->args({"self","addr","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movbe_method_1407 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Address &),&Xbyak::CodeGenerator::movbe>;
addExtern<DAS_CALL_METHOD(_movbe_method_1407)>(*this, lib, "movbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Address &),&Xbyak::CodeGenerator::movbe>::invoke")
	->args({"self","reg","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movd_method_1409 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd>;
addExtern<DAS_CALL_METHOD(_movd_method_1409)>(*this, lib, "movd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd>::invoke")
	->args({"self","addr","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movd_method_1411 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Address &),&Xbyak::CodeGenerator::movd>;
addExtern<DAS_CALL_METHOD(_movd_method_1411)>(*this, lib, "movd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Address &),&Xbyak::CodeGenerator::movd>::invoke")
	->args({"self","mmx","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movd_method_1413 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::movd>;
addExtern<DAS_CALL_METHOD(_movd_method_1413)>(*this, lib, "movd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::movd>::invoke")
	->args({"self","mmx","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movd_method_1415 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd>;
addExtern<DAS_CALL_METHOD(_movd_method_1415)>(*this, lib, "movd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd>::invoke")
	->args({"self","reg","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movddup_method_1417 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movddup);
addExtern<DAS_CALL_METHOD(_movddup_method_1417)>(*this, lib, "movddup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movddup))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movdq2q_method_1419 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movdq2q);
addExtern<DAS_CALL_METHOD(_movdq2q_method_1419)>(*this, lib, "movdq2q",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movdq2q))
	->args({"self","mmx","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movdqa_method_1421 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqa>;
addExtern<DAS_CALL_METHOD(_movdqa_method_1421)>(*this, lib, "movdqa",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqa>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movdqa_method_1423 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqa>;
addExtern<DAS_CALL_METHOD(_movdqa_method_1423)>(*this, lib, "movdqa",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqa>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movdqu_method_1425 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqu>;
addExtern<DAS_CALL_METHOD(_movdqu_method_1425)>(*this, lib, "movdqu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqu>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movdqu_method_1427 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqu>;
addExtern<DAS_CALL_METHOD(_movdqu_method_1427)>(*this, lib, "movdqu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqu>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movhlps_method_1429 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movhlps);
addExtern<DAS_CALL_METHOD(_movhlps_method_1429)>(*this, lib, "movhlps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movhlps))
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movhpd_method_1431 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movhpd);
addExtern<DAS_CALL_METHOD(_movhpd_method_1431)>(*this, lib, "movhpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movhpd))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movhps_method_1433 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movhps);
addExtern<DAS_CALL_METHOD(_movhps_method_1433)>(*this, lib, "movhps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movhps))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movlhps_method_1435 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movlhps);
addExtern<DAS_CALL_METHOD(_movlhps_method_1435)>(*this, lib, "movlhps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movlhps))
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movlpd_method_1437 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movlpd);
addExtern<DAS_CALL_METHOD(_movlpd_method_1437)>(*this, lib, "movlpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movlpd))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movlps_method_1439 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movlps);
addExtern<DAS_CALL_METHOD(_movlps_method_1439)>(*this, lib, "movlps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movlps))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movmskpd_method_1441 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movmskpd);
addExtern<DAS_CALL_METHOD(_movmskpd_method_1441)>(*this, lib, "movmskpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movmskpd))
	->args({"self","reg","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movmskps_method_1443 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movmskps);
addExtern<DAS_CALL_METHOD(_movmskps_method_1443)>(*this, lib, "movmskps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movmskps))
	->args({"self","reg","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movntdq_method_1445 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movntdq);
addExtern<DAS_CALL_METHOD(_movntdq_method_1445)>(*this, lib, "movntdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movntdq))
	->args({"self","addr","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movntdqa_method_1447 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movntdqa);
addExtern<DAS_CALL_METHOD(_movntdqa_method_1447)>(*this, lib, "movntdqa",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movntdqa))
	->args({"self","xmm","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movnti_method_1449 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movnti);
addExtern<DAS_CALL_METHOD(_movnti_method_1449)>(*this, lib, "movnti",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movnti))
	->args({"self","addr","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movntpd_method_1451 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movntpd);
addExtern<DAS_CALL_METHOD(_movntpd_method_1451)>(*this, lib, "movntpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movntpd))
	->args({"self","addr","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movntps_method_1453 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movntps);
addExtern<DAS_CALL_METHOD(_movntps_method_1453)>(*this, lib, "movntps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movntps))
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movntq_method_1455 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movntq);
addExtern<DAS_CALL_METHOD(_movntq_method_1455)>(*this, lib, "movntq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movntq))
	->args({"self","addr","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movq_method_1457 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq>;
addExtern<DAS_CALL_METHOD(_movq_method_1457)>(*this, lib, "movq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq>::invoke")
	->args({"self","addr","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movq_method_1459 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movq>;
addExtern<DAS_CALL_METHOD(_movq_method_1459)>(*this, lib, "movq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movq>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movq2dq_method_1461 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movq2dq);
addExtern<DAS_CALL_METHOD(_movq2dq_method_1461)>(*this, lib, "movq2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movq2dq))
	->args({"self","xmm","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsb_method_1463 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsb);
addExtern<DAS_CALL_METHOD(_movsb_method_1463)>(*this, lib, "movsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsd_method_1465 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsd>;
addExtern<DAS_CALL_METHOD(_movsd_method_1465)>(*this, lib, "movsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsd>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsd_method_1467 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movsd>;
addExtern<DAS_CALL_METHOD(_movsd_method_1467)>(*this, lib, "movsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movsd>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsd_method_1469 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movsd>;
addExtern<DAS_CALL_METHOD(_movsd_method_1469)>(*this, lib, "movsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movsd>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movshdup_method_1471 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movshdup);
addExtern<DAS_CALL_METHOD(_movshdup_method_1471)>(*this, lib, "movshdup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movshdup))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsldup_method_1473 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsldup);
addExtern<DAS_CALL_METHOD(_movsldup_method_1473)>(*this, lib, "movsldup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsldup))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movss_method_1475 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movss>;
addExtern<DAS_CALL_METHOD(_movss_method_1475)>(*this, lib, "movss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movss>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movss_method_1477 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movss>;
addExtern<DAS_CALL_METHOD(_movss_method_1477)>(*this, lib, "movss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movss>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsw_method_1479 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsw);
addExtern<DAS_CALL_METHOD(_movsw_method_1479)>(*this, lib, "movsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsx_method_1481 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsx);
addExtern<DAS_CALL_METHOD(_movsx_method_1481)>(*this, lib, "movsx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsx))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movupd_method_1483 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movupd>;
addExtern<DAS_CALL_METHOD(_movupd_method_1483)>(*this, lib, "movupd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movupd>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movupd_method_1485 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movupd>;
addExtern<DAS_CALL_METHOD(_movupd_method_1485)>(*this, lib, "movupd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movupd>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movups_method_1487 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movups>;
addExtern<DAS_CALL_METHOD(_movups_method_1487)>(*this, lib, "movups",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movups>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movups_method_1489 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movups>;
addExtern<DAS_CALL_METHOD(_movups_method_1489)>(*this, lib, "movups",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movups>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movzx_method_1491 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movzx);
addExtern<DAS_CALL_METHOD(_movzx_method_1491)>(*this, lib, "movzx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movzx))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mpsadbw_method_1493 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mpsadbw);
addExtern<DAS_CALL_METHOD(_mpsadbw_method_1493)>(*this, lib, "mpsadbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mpsadbw))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mul_method_1495 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mul);
addExtern<DAS_CALL_METHOD(_mul_method_1495)>(*this, lib, "mul",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mul))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mulpd_method_1497 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mulpd);
addExtern<DAS_CALL_METHOD(_mulpd_method_1497)>(*this, lib, "mulpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mulpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mulps_method_1499 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mulps);
addExtern<DAS_CALL_METHOD(_mulps_method_1499)>(*this, lib, "mulps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mulps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mulsd_method_1501 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mulsd);
addExtern<DAS_CALL_METHOD(_mulsd_method_1501)>(*this, lib, "mulsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mulsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mulss_method_1503 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mulss);
addExtern<DAS_CALL_METHOD(_mulss_method_1503)>(*this, lib, "mulss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mulss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mulx_method_1505 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mulx);
addExtern<DAS_CALL_METHOD(_mulx_method_1505)>(*this, lib, "mulx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mulx))
	->args({"self","r1","r2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mwait_method_1507 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mwait);
addExtern<DAS_CALL_METHOD(_mwait_method_1507)>(*this, lib, "mwait",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mwait))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mwaitx_method_1509 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mwaitx);
addExtern<DAS_CALL_METHOD(_mwaitx_method_1509)>(*this, lib, "mwaitx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mwaitx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _neg_method_1511 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::neg);
addExtern<DAS_CALL_METHOD(_neg_method_1511)>(*this, lib, "neg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::neg))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _not__method_1513 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::not_);
addExtern<DAS_CALL_METHOD(_not__method_1513)>(*this, lib, "not_",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::not_))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _or__method_1515 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::or_>;
addExtern<DAS_CALL_METHOD(_or__method_1515)>(*this, lib, "or_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::or_>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _or__method_1517 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::or_>;
addExtern<DAS_CALL_METHOD(_or__method_1517)>(*this, lib, "or_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::or_>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _orpd_method_1519 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::orpd);
addExtern<DAS_CALL_METHOD(_orpd_method_1519)>(*this, lib, "orpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::orpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _orps_method_1521 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::orps);
addExtern<DAS_CALL_METHOD(_orps_method_1521)>(*this, lib, "orps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::orps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _out__method_1523 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &),&Xbyak::CodeGenerator::out_>;
addExtern<DAS_CALL_METHOD(_out__method_1523)>(*this, lib, "out_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &),&Xbyak::CodeGenerator::out_>::invoke")
	->args({"self","d","a"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _out__method_1525 = das::das_call_member<void (Xbyak::CodeGenerator::*)(uint8_t, const Xbyak::Reg &),&Xbyak::CodeGenerator::out_>;
addExtern<DAS_CALL_METHOD(_out__method_1525)>(*this, lib, "out_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(uint8_t, const Xbyak::Reg &),&Xbyak::CodeGenerator::out_>::invoke")
	->args({"self","v","a"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _outsb_method_1527 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::outsb);
addExtern<DAS_CALL_METHOD(_outsb_method_1527)>(*this, lib, "outsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::outsb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _outsd_method_1529 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::outsd);
addExtern<DAS_CALL_METHOD(_outsd_method_1529)>(*this, lib, "outsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::outsd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _outsw_method_1531 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::outsw);
addExtern<DAS_CALL_METHOD(_outsw_method_1531)>(*this, lib, "outsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::outsw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pabsb_method_1533 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pabsb);
addExtern<DAS_CALL_METHOD(_pabsb_method_1533)>(*this, lib, "pabsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pabsb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pabsd_method_1535 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pabsd);
addExtern<DAS_CALL_METHOD(_pabsd_method_1535)>(*this, lib, "pabsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pabsd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pabsw_method_1537 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pabsw);
addExtern<DAS_CALL_METHOD(_pabsw_method_1537)>(*this, lib, "pabsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pabsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _packssdw_method_1539 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::packssdw);
addExtern<DAS_CALL_METHOD(_packssdw_method_1539)>(*this, lib, "packssdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::packssdw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _packsswb_method_1541 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::packsswb);
addExtern<DAS_CALL_METHOD(_packsswb_method_1541)>(*this, lib, "packsswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::packsswb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _packusdw_method_1543 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::packusdw);
addExtern<DAS_CALL_METHOD(_packusdw_method_1543)>(*this, lib, "packusdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::packusdw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _packuswb_method_1545 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::packuswb);
addExtern<DAS_CALL_METHOD(_packuswb_method_1545)>(*this, lib, "packuswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::packuswb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddb_method_1547 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddb);
addExtern<DAS_CALL_METHOD(_paddb_method_1547)>(*this, lib, "paddb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddd_method_1549 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddd);
addExtern<DAS_CALL_METHOD(_paddd_method_1549)>(*this, lib, "paddd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddq_method_1551 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddq);
addExtern<DAS_CALL_METHOD(_paddq_method_1551)>(*this, lib, "paddq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddsb_method_1553 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddsb);
addExtern<DAS_CALL_METHOD(_paddsb_method_1553)>(*this, lib, "paddsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddsb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddsw_method_1555 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddsw);
addExtern<DAS_CALL_METHOD(_paddsw_method_1555)>(*this, lib, "paddsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddusb_method_1557 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddusb);
addExtern<DAS_CALL_METHOD(_paddusb_method_1557)>(*this, lib, "paddusb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddusb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddusw_method_1559 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddusw);
addExtern<DAS_CALL_METHOD(_paddusw_method_1559)>(*this, lib, "paddusw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddusw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddw_method_1561 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddw);
addExtern<DAS_CALL_METHOD(_paddw_method_1561)>(*this, lib, "paddw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _palignr_method_1563 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::palignr);
addExtern<DAS_CALL_METHOD(_palignr_method_1563)>(*this, lib, "palignr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::palignr))
	->args({"self","mmx","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pand_method_1565 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pand);
addExtern<DAS_CALL_METHOD(_pand_method_1565)>(*this, lib, "pand",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pand))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pandn_method_1567 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pandn);
addExtern<DAS_CALL_METHOD(_pandn_method_1567)>(*this, lib, "pandn",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pandn))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pause_method_1569 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pause);
addExtern<DAS_CALL_METHOD(_pause_method_1569)>(*this, lib, "pause",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pause))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pavgb_method_1571 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pavgb);
addExtern<DAS_CALL_METHOD(_pavgb_method_1571)>(*this, lib, "pavgb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pavgb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pavgw_method_1573 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pavgw);
addExtern<DAS_CALL_METHOD(_pavgw_method_1573)>(*this, lib, "pavgw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pavgw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pblendvb_method_1575 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pblendvb);
addExtern<DAS_CALL_METHOD(_pblendvb_method_1575)>(*this, lib, "pblendvb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pblendvb))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pblendw_method_1577 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pblendw);
addExtern<DAS_CALL_METHOD(_pblendw_method_1577)>(*this, lib, "pblendw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pblendw))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pclmulhqhdq_method_1579 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pclmulhqhdq);
addExtern<DAS_CALL_METHOD(_pclmulhqhdq_method_1579)>(*this, lib, "pclmulhqhdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pclmulhqhdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pclmulhqlqdq_method_1581 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pclmulhqlqdq);
addExtern<DAS_CALL_METHOD(_pclmulhqlqdq_method_1581)>(*this, lib, "pclmulhqlqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pclmulhqlqdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pclmullqhdq_method_1583 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pclmullqhdq);
addExtern<DAS_CALL_METHOD(_pclmullqhdq_method_1583)>(*this, lib, "pclmullqhdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pclmullqhdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pclmullqlqdq_method_1585 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pclmullqlqdq);
addExtern<DAS_CALL_METHOD(_pclmullqlqdq_method_1585)>(*this, lib, "pclmullqlqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pclmullqlqdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pclmulqdq_method_1587 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pclmulqdq);
addExtern<DAS_CALL_METHOD(_pclmulqdq_method_1587)>(*this, lib, "pclmulqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pclmulqdq))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpeqb_method_1589 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpeqb);
addExtern<DAS_CALL_METHOD(_pcmpeqb_method_1589)>(*this, lib, "pcmpeqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpeqb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpeqd_method_1591 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpeqd);
addExtern<DAS_CALL_METHOD(_pcmpeqd_method_1591)>(*this, lib, "pcmpeqd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpeqd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpeqq_method_1593 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpeqq);
addExtern<DAS_CALL_METHOD(_pcmpeqq_method_1593)>(*this, lib, "pcmpeqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpeqq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpeqw_method_1595 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpeqw);
addExtern<DAS_CALL_METHOD(_pcmpeqw_method_1595)>(*this, lib, "pcmpeqw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpeqw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpestri_method_1597 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpestri);
addExtern<DAS_CALL_METHOD(_pcmpestri_method_1597)>(*this, lib, "pcmpestri",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpestri))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpestrm_method_1599 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpestrm);
addExtern<DAS_CALL_METHOD(_pcmpestrm_method_1599)>(*this, lib, "pcmpestrm",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpestrm))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpgtb_method_1601 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpgtb);
addExtern<DAS_CALL_METHOD(_pcmpgtb_method_1601)>(*this, lib, "pcmpgtb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpgtb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpgtd_method_1603 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpgtd);
addExtern<DAS_CALL_METHOD(_pcmpgtd_method_1603)>(*this, lib, "pcmpgtd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpgtd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpgtq_method_1605 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpgtq);
addExtern<DAS_CALL_METHOD(_pcmpgtq_method_1605)>(*this, lib, "pcmpgtq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpgtq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpgtw_method_1607 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpgtw);
addExtern<DAS_CALL_METHOD(_pcmpgtw_method_1607)>(*this, lib, "pcmpgtw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpgtw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpistri_method_1609 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpistri);
addExtern<DAS_CALL_METHOD(_pcmpistri_method_1609)>(*this, lib, "pcmpistri",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpistri))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpistrm_method_1611 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpistrm);
addExtern<DAS_CALL_METHOD(_pcmpistrm_method_1611)>(*this, lib, "pcmpistrm",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpistrm))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pdep_method_1613 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pdep);
addExtern<DAS_CALL_METHOD(_pdep_method_1613)>(*this, lib, "pdep",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pdep))
	->args({"self","r1","r2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pext_method_1615 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pext);
addExtern<DAS_CALL_METHOD(_pext_method_1615)>(*this, lib, "pext",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pext))
	->args({"self","r1","r2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pextrb_method_1617 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pextrb);
addExtern<DAS_CALL_METHOD(_pextrb_method_1617)>(*this, lib, "pextrb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pextrb))
	->args({"self","op","xmm","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pextrd_method_1619 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pextrd);
addExtern<DAS_CALL_METHOD(_pextrd_method_1619)>(*this, lib, "pextrd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pextrd))
	->args({"self","op","xmm","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pextrw_method_1621 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pextrw);
addExtern<DAS_CALL_METHOD(_pextrw_method_1621)>(*this, lib, "pextrw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pextrw))
	->args({"self","op","xmm","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phaddd_method_1623 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phaddd);
addExtern<DAS_CALL_METHOD(_phaddd_method_1623)>(*this, lib, "phaddd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phaddd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phaddsw_method_1625 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phaddsw);
addExtern<DAS_CALL_METHOD(_phaddsw_method_1625)>(*this, lib, "phaddsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phaddsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phaddw_method_1627 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phaddw);
addExtern<DAS_CALL_METHOD(_phaddw_method_1627)>(*this, lib, "phaddw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phaddw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phminposuw_method_1629 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phminposuw);
addExtern<DAS_CALL_METHOD(_phminposuw_method_1629)>(*this, lib, "phminposuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phminposuw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phsubd_method_1631 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phsubd);
addExtern<DAS_CALL_METHOD(_phsubd_method_1631)>(*this, lib, "phsubd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phsubd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phsubsw_method_1633 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phsubsw);
addExtern<DAS_CALL_METHOD(_phsubsw_method_1633)>(*this, lib, "phsubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phsubsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phsubw_method_1635 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phsubw);
addExtern<DAS_CALL_METHOD(_phsubw_method_1635)>(*this, lib, "phsubw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phsubw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pinsrb_method_1637 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pinsrb);
addExtern<DAS_CALL_METHOD(_pinsrb_method_1637)>(*this, lib, "pinsrb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pinsrb))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pinsrd_method_1639 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pinsrd);
addExtern<DAS_CALL_METHOD(_pinsrd_method_1639)>(*this, lib, "pinsrd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pinsrd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pinsrw_method_1641 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pinsrw);
addExtern<DAS_CALL_METHOD(_pinsrw_method_1641)>(*this, lib, "pinsrw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pinsrw))
	->args({"self","mmx","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaddubsw_method_1643 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaddubsw);
addExtern<DAS_CALL_METHOD(_pmaddubsw_method_1643)>(*this, lib, "pmaddubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaddubsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaddwd_method_1645 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaddwd);
addExtern<DAS_CALL_METHOD(_pmaddwd_method_1645)>(*this, lib, "pmaddwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaddwd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxsb_method_1647 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxsb);
addExtern<DAS_CALL_METHOD(_pmaxsb_method_1647)>(*this, lib, "pmaxsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxsb))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxsd_method_1649 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxsd);
addExtern<DAS_CALL_METHOD(_pmaxsd_method_1649)>(*this, lib, "pmaxsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxsw_method_1651 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxsw);
addExtern<DAS_CALL_METHOD(_pmaxsw_method_1651)>(*this, lib, "pmaxsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxub_method_1653 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxub);
addExtern<DAS_CALL_METHOD(_pmaxub_method_1653)>(*this, lib, "pmaxub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxub))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxud_method_1655 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxud);
addExtern<DAS_CALL_METHOD(_pmaxud_method_1655)>(*this, lib, "pmaxud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxud))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxuw_method_1657 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxuw);
addExtern<DAS_CALL_METHOD(_pmaxuw_method_1657)>(*this, lib, "pmaxuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxuw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminsb_method_1659 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminsb);
addExtern<DAS_CALL_METHOD(_pminsb_method_1659)>(*this, lib, "pminsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminsb))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminsd_method_1661 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminsd);
addExtern<DAS_CALL_METHOD(_pminsd_method_1661)>(*this, lib, "pminsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminsw_method_1663 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminsw);
addExtern<DAS_CALL_METHOD(_pminsw_method_1663)>(*this, lib, "pminsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminub_method_1665 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminub);
addExtern<DAS_CALL_METHOD(_pminub_method_1665)>(*this, lib, "pminub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminub))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminud_method_1667 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminud);
addExtern<DAS_CALL_METHOD(_pminud_method_1667)>(*this, lib, "pminud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminud))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminuw_method_1669 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminuw);
addExtern<DAS_CALL_METHOD(_pminuw_method_1669)>(*this, lib, "pminuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminuw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovmskb_method_1671 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovmskb);
addExtern<DAS_CALL_METHOD(_pmovmskb_method_1671)>(*this, lib, "pmovmskb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovmskb))
	->args({"self","reg","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxbd_method_1673 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxbd);
addExtern<DAS_CALL_METHOD(_pmovsxbd_method_1673)>(*this, lib, "pmovsxbd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxbd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxbq_method_1675 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxbq);
addExtern<DAS_CALL_METHOD(_pmovsxbq_method_1675)>(*this, lib, "pmovsxbq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxbq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxbw_method_1677 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxbw);
addExtern<DAS_CALL_METHOD(_pmovsxbw_method_1677)>(*this, lib, "pmovsxbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxbw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxdq_method_1679 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxdq);
addExtern<DAS_CALL_METHOD(_pmovsxdq_method_1679)>(*this, lib, "pmovsxdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxwd_method_1681 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxwd);
addExtern<DAS_CALL_METHOD(_pmovsxwd_method_1681)>(*this, lib, "pmovsxwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxwd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxwq_method_1683 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxwq);
addExtern<DAS_CALL_METHOD(_pmovsxwq_method_1683)>(*this, lib, "pmovsxwq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxwq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxbd_method_1685 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxbd);
addExtern<DAS_CALL_METHOD(_pmovzxbd_method_1685)>(*this, lib, "pmovzxbd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxbd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxbq_method_1687 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxbq);
addExtern<DAS_CALL_METHOD(_pmovzxbq_method_1687)>(*this, lib, "pmovzxbq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxbq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxbw_method_1689 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxbw);
addExtern<DAS_CALL_METHOD(_pmovzxbw_method_1689)>(*this, lib, "pmovzxbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxbw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxdq_method_1691 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxdq);
addExtern<DAS_CALL_METHOD(_pmovzxdq_method_1691)>(*this, lib, "pmovzxdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxwd_method_1693 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxwd);
addExtern<DAS_CALL_METHOD(_pmovzxwd_method_1693)>(*this, lib, "pmovzxwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxwd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxwq_method_1695 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxwq);
addExtern<DAS_CALL_METHOD(_pmovzxwq_method_1695)>(*this, lib, "pmovzxwq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxwq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmuldq_method_1697 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmuldq);
addExtern<DAS_CALL_METHOD(_pmuldq_method_1697)>(*this, lib, "pmuldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmuldq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmulhrsw_method_1699 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmulhrsw);
addExtern<DAS_CALL_METHOD(_pmulhrsw_method_1699)>(*this, lib, "pmulhrsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmulhrsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmulhuw_method_1701 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmulhuw);
addExtern<DAS_CALL_METHOD(_pmulhuw_method_1701)>(*this, lib, "pmulhuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmulhuw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmulhw_method_1703 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmulhw);
addExtern<DAS_CALL_METHOD(_pmulhw_method_1703)>(*this, lib, "pmulhw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmulhw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmulld_method_1705 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmulld);
addExtern<DAS_CALL_METHOD(_pmulld_method_1705)>(*this, lib, "pmulld",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmulld))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmullw_method_1707 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmullw);
addExtern<DAS_CALL_METHOD(_pmullw_method_1707)>(*this, lib, "pmullw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmullw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmuludq_method_1709 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmuludq);
addExtern<DAS_CALL_METHOD(_pmuludq_method_1709)>(*this, lib, "pmuludq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmuludq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _popcnt_method_1711 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::popcnt);
addExtern<DAS_CALL_METHOD(_popcnt_method_1711)>(*this, lib, "popcnt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::popcnt))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _popf_method_1713 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::popf);
addExtern<DAS_CALL_METHOD(_popf_method_1713)>(*this, lib, "popf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::popf))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _por_method_1715 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::por);
addExtern<DAS_CALL_METHOD(_por_method_1715)>(*this, lib, "por",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::por))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetchnta_method_1717 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetchnta);
addExtern<DAS_CALL_METHOD(_prefetchnta_method_1717)>(*this, lib, "prefetchnta",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetchnta))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetcht0_method_1719 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetcht0);
addExtern<DAS_CALL_METHOD(_prefetcht0_method_1719)>(*this, lib, "prefetcht0",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetcht0))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetcht1_method_1721 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetcht1);
addExtern<DAS_CALL_METHOD(_prefetcht1_method_1721)>(*this, lib, "prefetcht1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetcht1))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetcht2_method_1723 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetcht2);
addExtern<DAS_CALL_METHOD(_prefetcht2_method_1723)>(*this, lib, "prefetcht2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetcht2))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetchw_method_1725 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetchw);
addExtern<DAS_CALL_METHOD(_prefetchw_method_1725)>(*this, lib, "prefetchw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetchw))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetchwt1_method_1727 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetchwt1);
addExtern<DAS_CALL_METHOD(_prefetchwt1_method_1727)>(*this, lib, "prefetchwt1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetchwt1))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psadbw_method_1729 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psadbw);
addExtern<DAS_CALL_METHOD(_psadbw_method_1729)>(*this, lib, "psadbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psadbw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pshufb_method_1731 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pshufb);
addExtern<DAS_CALL_METHOD(_pshufb_method_1731)>(*this, lib, "pshufb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pshufb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pshufd_method_1733 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pshufd);
addExtern<DAS_CALL_METHOD(_pshufd_method_1733)>(*this, lib, "pshufd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pshufd))
	->args({"self","mmx","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pshufhw_method_1735 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pshufhw);
addExtern<DAS_CALL_METHOD(_pshufhw_method_1735)>(*this, lib, "pshufhw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pshufhw))
	->args({"self","mmx","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pshuflw_method_1737 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pshuflw);
addExtern<DAS_CALL_METHOD(_pshuflw_method_1737)>(*this, lib, "pshuflw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pshuflw))
	->args({"self","mmx","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pshufw_method_1739 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pshufw);
addExtern<DAS_CALL_METHOD(_pshufw_method_1739)>(*this, lib, "pshufw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pshufw))
	->args({"self","mmx","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psignb_method_1741 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psignb);
addExtern<DAS_CALL_METHOD(_psignb_method_1741)>(*this, lib, "psignb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psignb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psignd_method_1743 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psignd);
addExtern<DAS_CALL_METHOD(_psignd_method_1743)>(*this, lib, "psignd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psignd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psignw_method_1745 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psignw);
addExtern<DAS_CALL_METHOD(_psignw_method_1745)>(*this, lib, "psignw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psignw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pslld_method_1747 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::pslld>;
addExtern<DAS_CALL_METHOD(_pslld_method_1747)>(*this, lib, "pslld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::pslld>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pslld_method_1749 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::pslld>;
addExtern<DAS_CALL_METHOD(_pslld_method_1749)>(*this, lib, "pslld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::pslld>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pslldq_method_1751 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pslldq);
addExtern<DAS_CALL_METHOD(_pslldq_method_1751)>(*this, lib, "pslldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pslldq))
	->args({"self","xmm","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psllq_method_1753 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psllq>;
addExtern<DAS_CALL_METHOD(_psllq_method_1753)>(*this, lib, "psllq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psllq>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psllq_method_1755 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psllq>;
addExtern<DAS_CALL_METHOD(_psllq_method_1755)>(*this, lib, "psllq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psllq>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psllw_method_1757 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psllw>;
addExtern<DAS_CALL_METHOD(_psllw_method_1757)>(*this, lib, "psllw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psllw>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psllw_method_1759 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psllw>;
addExtern<DAS_CALL_METHOD(_psllw_method_1759)>(*this, lib, "psllw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psllw>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrad_method_1761 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrad>;
addExtern<DAS_CALL_METHOD(_psrad_method_1761)>(*this, lib, "psrad",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrad>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrad_method_1763 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrad>;
addExtern<DAS_CALL_METHOD(_psrad_method_1763)>(*this, lib, "psrad",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrad>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psraw_method_1765 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psraw>;
addExtern<DAS_CALL_METHOD(_psraw_method_1765)>(*this, lib, "psraw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psraw>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psraw_method_1767 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psraw>;
addExtern<DAS_CALL_METHOD(_psraw_method_1767)>(*this, lib, "psraw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psraw>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrld_method_1769 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrld>;
addExtern<DAS_CALL_METHOD(_psrld_method_1769)>(*this, lib, "psrld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrld>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrld_method_1771 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrld>;
addExtern<DAS_CALL_METHOD(_psrld_method_1771)>(*this, lib, "psrld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrld>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrldq_method_1773 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psrldq);
addExtern<DAS_CALL_METHOD(_psrldq_method_1773)>(*this, lib, "psrldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psrldq))
	->args({"self","xmm","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrlq_method_1775 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlq>;
addExtern<DAS_CALL_METHOD(_psrlq_method_1775)>(*this, lib, "psrlq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlq>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrlq_method_1777 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrlq>;
addExtern<DAS_CALL_METHOD(_psrlq_method_1777)>(*this, lib, "psrlq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrlq>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrlw_method_1779 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlw>;
addExtern<DAS_CALL_METHOD(_psrlw_method_1779)>(*this, lib, "psrlw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlw>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrlw_method_1781 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrlw>;
addExtern<DAS_CALL_METHOD(_psrlw_method_1781)>(*this, lib, "psrlw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrlw>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubb_method_1783 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubb);
addExtern<DAS_CALL_METHOD(_psubb_method_1783)>(*this, lib, "psubb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubd_method_1785 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubd);
addExtern<DAS_CALL_METHOD(_psubd_method_1785)>(*this, lib, "psubd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubq_method_1787 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubq);
addExtern<DAS_CALL_METHOD(_psubq_method_1787)>(*this, lib, "psubq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubsb_method_1789 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubsb);
addExtern<DAS_CALL_METHOD(_psubsb_method_1789)>(*this, lib, "psubsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubsb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubsw_method_1791 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubsw);
addExtern<DAS_CALL_METHOD(_psubsw_method_1791)>(*this, lib, "psubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubusb_method_1793 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubusb);
addExtern<DAS_CALL_METHOD(_psubusb_method_1793)>(*this, lib, "psubusb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubusb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubusw_method_1795 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubusw);
addExtern<DAS_CALL_METHOD(_psubusw_method_1795)>(*this, lib, "psubusw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubusw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubw_method_1797 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubw);
addExtern<DAS_CALL_METHOD(_psubw_method_1797)>(*this, lib, "psubw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ptest_method_1799 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ptest);
addExtern<DAS_CALL_METHOD(_ptest_method_1799)>(*this, lib, "ptest",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ptest))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhbw_method_1801 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhbw);
addExtern<DAS_CALL_METHOD(_punpckhbw_method_1801)>(*this, lib, "punpckhbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhbw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhdq_method_1803 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhdq);
addExtern<DAS_CALL_METHOD(_punpckhdq_method_1803)>(*this, lib, "punpckhdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhdq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhqdq_method_1805 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhqdq);
addExtern<DAS_CALL_METHOD(_punpckhqdq_method_1805)>(*this, lib, "punpckhqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhqdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhwd_method_1807 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhwd);
addExtern<DAS_CALL_METHOD(_punpckhwd_method_1807)>(*this, lib, "punpckhwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhwd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpcklbw_method_1809 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpcklbw);
addExtern<DAS_CALL_METHOD(_punpcklbw_method_1809)>(*this, lib, "punpcklbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpcklbw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckldq_method_1811 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckldq);
addExtern<DAS_CALL_METHOD(_punpckldq_method_1811)>(*this, lib, "punpckldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckldq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpcklqdq_method_1813 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpcklqdq);
addExtern<DAS_CALL_METHOD(_punpcklqdq_method_1813)>(*this, lib, "punpcklqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpcklqdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpcklwd_method_1815 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpcklwd);
addExtern<DAS_CALL_METHOD(_punpcklwd_method_1815)>(*this, lib, "punpcklwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpcklwd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pushf_method_1817 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pushf);
addExtern<DAS_CALL_METHOD(_pushf_method_1817)>(*this, lib, "pushf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pushf))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pxor_method_1819 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pxor);
addExtern<DAS_CALL_METHOD(_pxor_method_1819)>(*this, lib, "pxor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pxor))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcl_method_1821 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcl>;
addExtern<DAS_CALL_METHOD(_rcl_method_1821)>(*this, lib, "rcl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcl>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcl_method_1823 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcl>;
addExtern<DAS_CALL_METHOD(_rcl_method_1823)>(*this, lib, "rcl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcl>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcpps_method_1825 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rcpps);
addExtern<DAS_CALL_METHOD(_rcpps_method_1825)>(*this, lib, "rcpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rcpps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcpss_method_1827 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rcpss);
addExtern<DAS_CALL_METHOD(_rcpss_method_1827)>(*this, lib, "rcpss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rcpss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcr_method_1829 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcr>;
addExtern<DAS_CALL_METHOD(_rcr_method_1829)>(*this, lib, "rcr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcr>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcr_method_1831 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcr>;
addExtern<DAS_CALL_METHOD(_rcr_method_1831)>(*this, lib, "rcr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcr>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdmsr_method_1833 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdmsr);
addExtern<DAS_CALL_METHOD(_rdmsr_method_1833)>(*this, lib, "rdmsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdmsr))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdpmc_method_1835 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdpmc);
addExtern<DAS_CALL_METHOD(_rdpmc_method_1835)>(*this, lib, "rdpmc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdpmc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdrand_method_1837 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdrand);
addExtern<DAS_CALL_METHOD(_rdrand_method_1837)>(*this, lib, "rdrand",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdrand))
	->args({"self","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdseed_method_1839 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdseed);
addExtern<DAS_CALL_METHOD(_rdseed_method_1839)>(*this, lib, "rdseed",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdseed))
	->args({"self","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdtsc_method_1841 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdtsc);
addExtern<DAS_CALL_METHOD(_rdtsc_method_1841)>(*this, lib, "rdtsc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdtsc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdtscp_method_1843 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdtscp);
addExtern<DAS_CALL_METHOD(_rdtscp_method_1843)>(*this, lib, "rdtscp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdtscp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rep_method_1845 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rep);
addExtern<DAS_CALL_METHOD(_rep_method_1845)>(*this, lib, "rep",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rep))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repe_method_1847 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repe);
addExtern<DAS_CALL_METHOD(_repe_method_1847)>(*this, lib, "repe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repe))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repne_method_1849 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repne);
addExtern<DAS_CALL_METHOD(_repne_method_1849)>(*this, lib, "repne",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repne))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repnz_method_1851 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repnz);
addExtern<DAS_CALL_METHOD(_repnz_method_1851)>(*this, lib, "repnz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repnz))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repz_method_1853 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repz);
addExtern<DAS_CALL_METHOD(_repz_method_1853)>(*this, lib, "repz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repz))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ret_method_1855 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ret);
addExtern<DAS_CALL_METHOD(_ret_method_1855)>(*this, lib, "ret",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ret))
	->args({"self","imm"})
		->arg_init(1,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rol_method_1857 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rol>;
addExtern<DAS_CALL_METHOD(_rol_method_1857)>(*this, lib, "rol",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rol>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rol_method_1859 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rol>;
addExtern<DAS_CALL_METHOD(_rol_method_1859)>(*this, lib, "rol",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rol>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ror_method_1861 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::ror>;
addExtern<DAS_CALL_METHOD(_ror_method_1861)>(*this, lib, "ror",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::ror>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ror_method_1863 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::ror>;
addExtern<DAS_CALL_METHOD(_ror_method_1863)>(*this, lib, "ror",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::ror>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rorx_method_1865 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rorx);
addExtern<DAS_CALL_METHOD(_rorx_method_1865)>(*this, lib, "rorx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rorx))
	->args({"self","r","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundpd_method_1867 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundpd);
addExtern<DAS_CALL_METHOD(_roundpd_method_1867)>(*this, lib, "roundpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundpd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundps_method_1869 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundps);
addExtern<DAS_CALL_METHOD(_roundps_method_1869)>(*this, lib, "roundps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundps))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundsd_method_1871 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundsd);
addExtern<DAS_CALL_METHOD(_roundsd_method_1871)>(*this, lib, "roundsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundsd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundss_method_1873 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundss);
addExtern<DAS_CALL_METHOD(_roundss_method_1873)>(*this, lib, "roundss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundss))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rsqrtps_method_1875 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rsqrtps);
addExtern<DAS_CALL_METHOD(_rsqrtps_method_1875)>(*this, lib, "rsqrtps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rsqrtps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rsqrtss_method_1877 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rsqrtss);
addExtern<DAS_CALL_METHOD(_rsqrtss_method_1877)>(*this, lib, "rsqrtss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rsqrtss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sahf_method_1879 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sahf);
addExtern<DAS_CALL_METHOD(_sahf_method_1879)>(*this, lib, "sahf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sahf))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sal_method_1881 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sal>;
addExtern<DAS_CALL_METHOD(_sal_method_1881)>(*this, lib, "sal",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sal>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sal_method_1883 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sal>;
addExtern<DAS_CALL_METHOD(_sal_method_1883)>(*this, lib, "sal",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sal>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sar_method_1885 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sar>;
addExtern<DAS_CALL_METHOD(_sar_method_1885)>(*this, lib, "sar",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sar>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sar_method_1887 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sar>;
addExtern<DAS_CALL_METHOD(_sar_method_1887)>(*this, lib, "sar",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sar>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sarx_method_1889 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sarx);
addExtern<DAS_CALL_METHOD(_sarx_method_1889)>(*this, lib, "sarx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sarx))
	->args({"self","r1","op","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sbb_method_1891 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::sbb>;
addExtern<DAS_CALL_METHOD(_sbb_method_1891)>(*this, lib, "sbb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::sbb>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sbb_method_1893 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::sbb>;
addExtern<DAS_CALL_METHOD(_sbb_method_1893)>(*this, lib, "sbb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::sbb>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _scasb_method_1895 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::scasb);
addExtern<DAS_CALL_METHOD(_scasb_method_1895)>(*this, lib, "scasb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::scasb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _scasd_method_1897 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::scasd);
addExtern<DAS_CALL_METHOD(_scasd_method_1897)>(*this, lib, "scasd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::scasd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _scasw_method_1899 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::scasw);
addExtern<DAS_CALL_METHOD(_scasw_method_1899)>(*this, lib, "scasw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::scasw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _seta_method_1901 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::seta);
addExtern<DAS_CALL_METHOD(_seta_method_1901)>(*this, lib, "seta",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::seta))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setae_method_1903 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setae);
addExtern<DAS_CALL_METHOD(_setae_method_1903)>(*this, lib, "setae",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setae))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setb_method_1905 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setb);
addExtern<DAS_CALL_METHOD(_setb_method_1905)>(*this, lib, "setb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setb))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setbe_method_1907 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setbe);
addExtern<DAS_CALL_METHOD(_setbe_method_1907)>(*this, lib, "setbe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setbe))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setc_method_1909 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setc);
addExtern<DAS_CALL_METHOD(_setc_method_1909)>(*this, lib, "setc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setc))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sete_method_1911 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sete);
addExtern<DAS_CALL_METHOD(_sete_method_1911)>(*this, lib, "sete",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sete))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setg_method_1913 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setg);
addExtern<DAS_CALL_METHOD(_setg_method_1913)>(*this, lib, "setg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setg))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setge_method_1915 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setge);
addExtern<DAS_CALL_METHOD(_setge_method_1915)>(*this, lib, "setge",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setge))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setl_method_1917 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setl);
addExtern<DAS_CALL_METHOD(_setl_method_1917)>(*this, lib, "setl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setl))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setle_method_1919 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setle);
addExtern<DAS_CALL_METHOD(_setle_method_1919)>(*this, lib, "setle",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setle))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setna_method_1921 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setna);
addExtern<DAS_CALL_METHOD(_setna_method_1921)>(*this, lib, "setna",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setna))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnae_method_1923 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnae);
addExtern<DAS_CALL_METHOD(_setnae_method_1923)>(*this, lib, "setnae",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnae))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnb_method_1925 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnb);
addExtern<DAS_CALL_METHOD(_setnb_method_1925)>(*this, lib, "setnb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnb))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnbe_method_1927 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnbe);
addExtern<DAS_CALL_METHOD(_setnbe_method_1927)>(*this, lib, "setnbe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnbe))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnc_method_1929 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnc);
addExtern<DAS_CALL_METHOD(_setnc_method_1929)>(*this, lib, "setnc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnc))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setne_method_1931 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setne);
addExtern<DAS_CALL_METHOD(_setne_method_1931)>(*this, lib, "setne",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setne))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setng_method_1933 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setng);
addExtern<DAS_CALL_METHOD(_setng_method_1933)>(*this, lib, "setng",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setng))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnge_method_1935 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnge);
addExtern<DAS_CALL_METHOD(_setnge_method_1935)>(*this, lib, "setnge",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnge))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnl_method_1937 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnl);
addExtern<DAS_CALL_METHOD(_setnl_method_1937)>(*this, lib, "setnl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnl))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnle_method_1939 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnle);
addExtern<DAS_CALL_METHOD(_setnle_method_1939)>(*this, lib, "setnle",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnle))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setno_method_1941 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setno);
addExtern<DAS_CALL_METHOD(_setno_method_1941)>(*this, lib, "setno",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setno))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnp_method_1943 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnp);
addExtern<DAS_CALL_METHOD(_setnp_method_1943)>(*this, lib, "setnp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnp))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setns_method_1945 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setns);
addExtern<DAS_CALL_METHOD(_setns_method_1945)>(*this, lib, "setns",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setns))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnz_method_1947 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnz);
addExtern<DAS_CALL_METHOD(_setnz_method_1947)>(*this, lib, "setnz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnz))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _seto_method_1949 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::seto);
addExtern<DAS_CALL_METHOD(_seto_method_1949)>(*this, lib, "seto",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::seto))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setp_method_1951 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setp);
addExtern<DAS_CALL_METHOD(_setp_method_1951)>(*this, lib, "setp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setp))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setpe_method_1953 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setpe);
addExtern<DAS_CALL_METHOD(_setpe_method_1953)>(*this, lib, "setpe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setpe))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setpo_method_1955 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setpo);
addExtern<DAS_CALL_METHOD(_setpo_method_1955)>(*this, lib, "setpo",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setpo))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sets_method_1957 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sets);
addExtern<DAS_CALL_METHOD(_sets_method_1957)>(*this, lib, "sets",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sets))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setz_method_1959 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setz);
addExtern<DAS_CALL_METHOD(_setz_method_1959)>(*this, lib, "setz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setz))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sfence_method_1961 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sfence);
addExtern<DAS_CALL_METHOD(_sfence_method_1961)>(*this, lib, "sfence",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sfence))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1msg1_method_1963 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1msg1);
addExtern<DAS_CALL_METHOD(_sha1msg1_method_1963)>(*this, lib, "sha1msg1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1msg1))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1msg2_method_1965 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1msg2);
addExtern<DAS_CALL_METHOD(_sha1msg2_method_1965)>(*this, lib, "sha1msg2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1msg2))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1nexte_method_1967 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1nexte);
addExtern<DAS_CALL_METHOD(_sha1nexte_method_1967)>(*this, lib, "sha1nexte",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1nexte))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1rnds4_method_1969 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1rnds4);
addExtern<DAS_CALL_METHOD(_sha1rnds4_method_1969)>(*this, lib, "sha1rnds4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1rnds4))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha256msg1_method_1971 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha256msg1);
addExtern<DAS_CALL_METHOD(_sha256msg1_method_1971)>(*this, lib, "sha256msg1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha256msg1))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha256msg2_method_1973 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha256msg2);
addExtern<DAS_CALL_METHOD(_sha256msg2_method_1973)>(*this, lib, "sha256msg2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha256msg2))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha256rnds2_method_1975 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha256rnds2);
addExtern<DAS_CALL_METHOD(_sha256rnds2_method_1975)>(*this, lib, "sha256rnds2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha256rnds2))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shl_method_1977 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shl>;
addExtern<DAS_CALL_METHOD(_shl_method_1977)>(*this, lib, "shl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shl>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shl_method_1979 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::shl>;
addExtern<DAS_CALL_METHOD(_shl_method_1979)>(*this, lib, "shl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::shl>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shld_method_1981 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shld>;
addExtern<DAS_CALL_METHOD(_shld_method_1981)>(*this, lib, "shld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shld>::invoke")
	->args({"self","op","reg","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shld_method_1983 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::shld>;
addExtern<DAS_CALL_METHOD(_shld_method_1983)>(*this, lib, "shld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::shld>::invoke")
	->args({"self","op","reg","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shlx_method_1985 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::shlx);
addExtern<DAS_CALL_METHOD(_shlx_method_1985)>(*this, lib, "shlx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::shlx))
	->args({"self","r1","op","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shr_method_1987 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shr>;
addExtern<DAS_CALL_METHOD(_shr_method_1987)>(*this, lib, "shr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shr>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shr_method_1989 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::shr>;
addExtern<DAS_CALL_METHOD(_shr_method_1989)>(*this, lib, "shr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::shr>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shrd_method_1991 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shrd>;
addExtern<DAS_CALL_METHOD(_shrd_method_1991)>(*this, lib, "shrd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shrd>::invoke")
	->args({"self","op","reg","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shrd_method_1993 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::shrd>;
addExtern<DAS_CALL_METHOD(_shrd_method_1993)>(*this, lib, "shrd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::shrd>::invoke")
	->args({"self","op","reg","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shrx_method_1995 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::shrx);
addExtern<DAS_CALL_METHOD(_shrx_method_1995)>(*this, lib, "shrx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::shrx))
	->args({"self","r1","op","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shufpd_method_1997 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::shufpd);
addExtern<DAS_CALL_METHOD(_shufpd_method_1997)>(*this, lib, "shufpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::shufpd))
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shufps_method_1999 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::shufps);
addExtern<DAS_CALL_METHOD(_shufps_method_1999)>(*this, lib, "shufps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::shufps))
	->args({"self","xmm","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sqrtpd_method_2001 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sqrtpd);
addExtern<DAS_CALL_METHOD(_sqrtpd_method_2001)>(*this, lib, "sqrtpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sqrtpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sqrtps_method_2003 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sqrtps);
addExtern<DAS_CALL_METHOD(_sqrtps_method_2003)>(*this, lib, "sqrtps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sqrtps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sqrtsd_method_2005 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sqrtsd);
addExtern<DAS_CALL_METHOD(_sqrtsd_method_2005)>(*this, lib, "sqrtsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sqrtsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sqrtss_method_2007 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sqrtss);
addExtern<DAS_CALL_METHOD(_sqrtss_method_2007)>(*this, lib, "sqrtss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sqrtss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stac_method_2009 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stac);
addExtern<DAS_CALL_METHOD(_stac_method_2009)>(*this, lib, "stac",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stac))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stc_method_2011 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stc);
addExtern<DAS_CALL_METHOD(_stc_method_2011)>(*this, lib, "stc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _std_method_2013 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::std);
addExtern<DAS_CALL_METHOD(_std_method_2013)>(*this, lib, "std",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::std))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sti_method_2015 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sti);
addExtern<DAS_CALL_METHOD(_sti_method_2015)>(*this, lib, "sti",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sti))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stmxcsr_method_2017 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stmxcsr);
addExtern<DAS_CALL_METHOD(_stmxcsr_method_2017)>(*this, lib, "stmxcsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stmxcsr))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stosb_method_2019 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stosb);
addExtern<DAS_CALL_METHOD(_stosb_method_2019)>(*this, lib, "stosb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stosb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stosd_method_2021 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stosd);
addExtern<DAS_CALL_METHOD(_stosd_method_2021)>(*this, lib, "stosd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stosd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stosw_method_2023 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stosw);
addExtern<DAS_CALL_METHOD(_stosw_method_2023)>(*this, lib, "stosw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stosw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sub_method_2025 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::sub>;
addExtern<DAS_CALL_METHOD(_sub_method_2025)>(*this, lib, "sub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::sub>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sub_method_2027 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::sub>;
addExtern<DAS_CALL_METHOD(_sub_method_2027)>(*this, lib, "sub",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::sub>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _subpd_method_2029 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::subpd);
addExtern<DAS_CALL_METHOD(_subpd_method_2029)>(*this, lib, "subpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::subpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _subps_method_2031 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::subps);
addExtern<DAS_CALL_METHOD(_subps_method_2031)>(*this, lib, "subps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::subps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _subsd_method_2033 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::subsd);
addExtern<DAS_CALL_METHOD(_subsd_method_2033)>(*this, lib, "subsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::subsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _subss_method_2035 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::subss);
addExtern<DAS_CALL_METHOD(_subss_method_2035)>(*this, lib, "subss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::subss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sysenter_method_2037 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sysenter);
addExtern<DAS_CALL_METHOD(_sysenter_method_2037)>(*this, lib, "sysenter",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sysenter))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sysexit_method_2039 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sysexit);
addExtern<DAS_CALL_METHOD(_sysexit_method_2039)>(*this, lib, "sysexit",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sysexit))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tzcnt_method_2041 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tzcnt);
addExtern<DAS_CALL_METHOD(_tzcnt_method_2041)>(*this, lib, "tzcnt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tzcnt))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ucomisd_method_2043 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ucomisd);
addExtern<DAS_CALL_METHOD(_ucomisd_method_2043)>(*this, lib, "ucomisd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ucomisd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ucomiss_method_2045 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ucomiss);
addExtern<DAS_CALL_METHOD(_ucomiss_method_2045)>(*this, lib, "ucomiss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ucomiss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ud2_method_2047 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ud2);
addExtern<DAS_CALL_METHOD(_ud2_method_2047)>(*this, lib, "ud2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ud2))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _unpckhpd_method_2049 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::unpckhpd);
addExtern<DAS_CALL_METHOD(_unpckhpd_method_2049)>(*this, lib, "unpckhpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::unpckhpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _unpckhps_method_2051 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::unpckhps);
addExtern<DAS_CALL_METHOD(_unpckhps_method_2051)>(*this, lib, "unpckhps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::unpckhps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _unpcklpd_method_2053 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::unpcklpd);
addExtern<DAS_CALL_METHOD(_unpcklpd_method_2053)>(*this, lib, "unpcklpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::unpcklpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _unpcklps_method_2055 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::unpcklps);
addExtern<DAS_CALL_METHOD(_unpcklps_method_2055)>(*this, lib, "unpcklps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::unpcklps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddpd_method_2057 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddpd);
addExtern<DAS_CALL_METHOD(_vaddpd_method_2057)>(*this, lib, "vaddpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddps_method_2059 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddps);
addExtern<DAS_CALL_METHOD(_vaddps_method_2059)>(*this, lib, "vaddps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddsd_method_2061 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddsd);
addExtern<DAS_CALL_METHOD(_vaddsd_method_2061)>(*this, lib, "vaddsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddss_method_2063 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddss);
addExtern<DAS_CALL_METHOD(_vaddss_method_2063)>(*this, lib, "vaddss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddsubpd_method_2065 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddsubpd);
addExtern<DAS_CALL_METHOD(_vaddsubpd_method_2065)>(*this, lib, "vaddsubpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddsubpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddsubps_method_2067 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddsubps);
addExtern<DAS_CALL_METHOD(_vaddsubps_method_2067)>(*this, lib, "vaddsubps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddsubps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaesdec_method_2069 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaesdec);
addExtern<DAS_CALL_METHOD(_vaesdec_method_2069)>(*this, lib, "vaesdec",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaesdec))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaesdeclast_method_2071 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaesdeclast);
addExtern<DAS_CALL_METHOD(_vaesdeclast_method_2071)>(*this, lib, "vaesdeclast",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaesdeclast))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaesenc_method_2073 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaesenc);
addExtern<DAS_CALL_METHOD(_vaesenc_method_2073)>(*this, lib, "vaesenc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaesenc))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaesenclast_method_2075 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaesenclast);
addExtern<DAS_CALL_METHOD(_vaesenclast_method_2075)>(*this, lib, "vaesenclast",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaesenclast))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaesimc_method_2077 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaesimc);
addExtern<DAS_CALL_METHOD(_vaesimc_method_2077)>(*this, lib, "vaesimc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaesimc))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaeskeygenassist_method_2079 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaeskeygenassist);
addExtern<DAS_CALL_METHOD(_vaeskeygenassist_method_2079)>(*this, lib, "vaeskeygenassist",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaeskeygenassist))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vandnpd_method_2081 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vandnpd);
addExtern<DAS_CALL_METHOD(_vandnpd_method_2081)>(*this, lib, "vandnpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vandnpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vandnps_method_2083 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vandnps);
addExtern<DAS_CALL_METHOD(_vandnps_method_2083)>(*this, lib, "vandnps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vandnps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vandpd_method_2085 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vandpd);
addExtern<DAS_CALL_METHOD(_vandpd_method_2085)>(*this, lib, "vandpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vandpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vandps_method_2087 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vandps);
addExtern<DAS_CALL_METHOD(_vandps_method_2087)>(*this, lib, "vandps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vandps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendpd_method_2089 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendpd);
addExtern<DAS_CALL_METHOD(_vblendpd_method_2089)>(*this, lib, "vblendpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendpd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendps_method_2091 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendps);
addExtern<DAS_CALL_METHOD(_vblendps_method_2091)>(*this, lib, "vblendps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendvpd_method_2093 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendvpd);
addExtern<DAS_CALL_METHOD(_vblendvpd_method_2093)>(*this, lib, "vblendvpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendvpd))
	->args({"self","x1","x2","op","x4"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendvps_method_2095 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendvps);
addExtern<DAS_CALL_METHOD(_vblendvps_method_2095)>(*this, lib, "vblendvps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendvps))
	->args({"self","x1","x2","op","x4"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf128_method_2097 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf128);
addExtern<DAS_CALL_METHOD(_vbroadcastf128_method_2097)>(*this, lib, "vbroadcastf128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf128))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti128_method_2099 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti128);
addExtern<DAS_CALL_METHOD(_vbroadcasti128_method_2099)>(*this, lib, "vbroadcasti128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti128))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastsd_method_2101 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastsd);
addExtern<DAS_CALL_METHOD(_vbroadcastsd_method_2101)>(*this, lib, "vbroadcastsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastsd))
	->args({"self","y","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastss_method_2103 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastss);
addExtern<DAS_CALL_METHOD(_vbroadcastss_method_2103)>(*this, lib, "vbroadcastss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastss))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ospd_method_2105 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ospd_method_2105)>(*this, lib, "vcmpeq_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_osps_method_2107 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_osps_method_2107)>(*this, lib, "vcmpeq_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ossd_method_2109 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ossd_method_2109)>(*this, lib, "vcmpeq_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_osss_method_2111 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_osss_method_2111)>(*this, lib, "vcmpeq_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqpd_method_2113 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqpd_method_2113)>(*this, lib, "vcmpeq_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqps_method_2115 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqps_method_2115)>(*this, lib, "vcmpeq_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqsd_method_2117 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqsd_method_2117)>(*this, lib, "vcmpeq_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqss_method_2119 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqss_method_2119)>(*this, lib, "vcmpeq_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uspd_method_2121 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uspd_method_2121)>(*this, lib, "vcmpeq_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_usps_method_2123 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_usps_method_2123)>(*this, lib, "vcmpeq_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ussd_method_2125 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ussd_method_2125)>(*this, lib, "vcmpeq_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_usss_method_2127 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_usss_method_2127)>(*this, lib, "vcmpeq_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqpd_method_2129 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd>;
addExtern<DAS_CALL_METHOD(_vcmpeqpd_method_2129)>(*this, lib, "vcmpeqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqps_method_2131 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps>;
addExtern<DAS_CALL_METHOD(_vcmpeqps_method_2131)>(*this, lib, "vcmpeqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqsd_method_2133 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd>;
addExtern<DAS_CALL_METHOD(_vcmpeqsd_method_2133)>(*this, lib, "vcmpeqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqss_method_2135 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss>;
addExtern<DAS_CALL_METHOD(_vcmpeqss_method_2135)>(*this, lib, "vcmpeqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_ospd_method_2137 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_ospd_method_2137)>(*this, lib, "vcmpfalse_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_osps_method_2139 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_osps_method_2139)>(*this, lib, "vcmpfalse_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_ossd_method_2141 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_ossd_method_2141)>(*this, lib, "vcmpfalse_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_osss_method_2143 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_osss_method_2143)>(*this, lib, "vcmpfalse_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsepd_method_2145 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd>;
addExtern<DAS_CALL_METHOD(_vcmpfalsepd_method_2145)>(*this, lib, "vcmpfalsepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalseps_method_2147 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps>;
addExtern<DAS_CALL_METHOD(_vcmpfalseps_method_2147)>(*this, lib, "vcmpfalseps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsesd_method_2149 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd>;
addExtern<DAS_CALL_METHOD(_vcmpfalsesd_method_2149)>(*this, lib, "vcmpfalsesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsess_method_2151 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess>;
addExtern<DAS_CALL_METHOD(_vcmpfalsess_method_2151)>(*this, lib, "vcmpfalsess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqpd_method_2153 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqpd_method_2153)>(*this, lib, "vcmpge_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqps_method_2155 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqps_method_2155)>(*this, lib, "vcmpge_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqsd_method_2157 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqsd_method_2157)>(*this, lib, "vcmpge_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqss_method_2159 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqss_method_2159)>(*this, lib, "vcmpge_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgepd_method_2161 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd>;
addExtern<DAS_CALL_METHOD(_vcmpgepd_method_2161)>(*this, lib, "vcmpgepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgeps_method_2163 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps>;
addExtern<DAS_CALL_METHOD(_vcmpgeps_method_2163)>(*this, lib, "vcmpgeps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgesd_method_2165 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd>;
addExtern<DAS_CALL_METHOD(_vcmpgesd_method_2165)>(*this, lib, "vcmpgesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgess_method_2167 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess>;
addExtern<DAS_CALL_METHOD(_vcmpgess_method_2167)>(*this, lib, "vcmpgess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqpd_method_2169 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqpd_method_2169)>(*this, lib, "vcmpgt_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqps_method_2171 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqps_method_2171)>(*this, lib, "vcmpgt_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqsd_method_2173 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqsd_method_2173)>(*this, lib, "vcmpgt_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqss_method_2175 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqss_method_2175)>(*this, lib, "vcmpgt_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtpd_method_2177 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd>;
addExtern<DAS_CALL_METHOD(_vcmpgtpd_method_2177)>(*this, lib, "vcmpgtpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtps_method_2179 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps>;
addExtern<DAS_CALL_METHOD(_vcmpgtps_method_2179)>(*this, lib, "vcmpgtps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtsd_method_2181 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd>;
addExtern<DAS_CALL_METHOD(_vcmpgtsd_method_2181)>(*this, lib, "vcmpgtsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtss_method_2183 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss>;
addExtern<DAS_CALL_METHOD(_vcmpgtss_method_2183)>(*this, lib, "vcmpgtss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqpd_method_2185 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmple_oqpd_method_2185)>(*this, lib, "vcmple_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqps_method_2187 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps>;
addExtern<DAS_CALL_METHOD(_vcmple_oqps_method_2187)>(*this, lib, "vcmple_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqsd_method_2189 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmple_oqsd_method_2189)>(*this, lib, "vcmple_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqss_method_2191 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss>;
addExtern<DAS_CALL_METHOD(_vcmple_oqss_method_2191)>(*this, lib, "vcmple_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplepd_method_2193 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd>;
addExtern<DAS_CALL_METHOD(_vcmplepd_method_2193)>(*this, lib, "vcmplepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpleps_method_2195 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps>;
addExtern<DAS_CALL_METHOD(_vcmpleps_method_2195)>(*this, lib, "vcmpleps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplesd_method_2197 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd>;
addExtern<DAS_CALL_METHOD(_vcmplesd_method_2197)>(*this, lib, "vcmplesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpless_method_2199 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless>;
addExtern<DAS_CALL_METHOD(_vcmpless_method_2199)>(*this, lib, "vcmpless",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqpd_method_2201 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqpd_method_2201)>(*this, lib, "vcmplt_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqps_method_2203 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqps_method_2203)>(*this, lib, "vcmplt_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqsd_method_2205 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqsd_method_2205)>(*this, lib, "vcmplt_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqss_method_2207 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqss_method_2207)>(*this, lib, "vcmplt_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltpd_method_2209 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd>;
addExtern<DAS_CALL_METHOD(_vcmpltpd_method_2209)>(*this, lib, "vcmpltpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltps_method_2211 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps>;
addExtern<DAS_CALL_METHOD(_vcmpltps_method_2211)>(*this, lib, "vcmpltps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltsd_method_2213 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd>;
addExtern<DAS_CALL_METHOD(_vcmpltsd_method_2213)>(*this, lib, "vcmpltsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltss_method_2215 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss>;
addExtern<DAS_CALL_METHOD(_vcmpltss_method_2215)>(*this, lib, "vcmpltss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqpd_method_2217 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqpd_method_2217)>(*this, lib, "vcmpneq_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqps_method_2219 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqps_method_2219)>(*this, lib, "vcmpneq_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqsd_method_2221 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqsd_method_2221)>(*this, lib, "vcmpneq_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqss_method_2223 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqss_method_2223)>(*this, lib, "vcmpneq_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ospd_method_2225 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ospd_method_2225)>(*this, lib, "vcmpneq_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_osps_method_2227 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_osps_method_2227)>(*this, lib, "vcmpneq_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ossd_method_2229 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ossd_method_2229)>(*this, lib, "vcmpneq_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_osss_method_2231 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_osss_method_2231)>(*this, lib, "vcmpneq_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_uspd_method_2233 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_uspd_method_2233)>(*this, lib, "vcmpneq_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_usps_method_2235 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_usps_method_2235)>(*this, lib, "vcmpneq_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ussd_method_2237 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ussd_method_2237)>(*this, lib, "vcmpneq_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_usss_method_2239 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_usss_method_2239)>(*this, lib, "vcmpneq_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqpd_method_2241 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd>;
addExtern<DAS_CALL_METHOD(_vcmpneqpd_method_2241)>(*this, lib, "vcmpneqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqps_method_2243 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps>;
addExtern<DAS_CALL_METHOD(_vcmpneqps_method_2243)>(*this, lib, "vcmpneqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqsd_method_2245 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd>;
addExtern<DAS_CALL_METHOD(_vcmpneqsd_method_2245)>(*this, lib, "vcmpneqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqss_method_2247 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss>;
addExtern<DAS_CALL_METHOD(_vcmpneqss_method_2247)>(*this, lib, "vcmpneqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqpd_method_2249 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqpd_method_2249)>(*this, lib, "vcmpnge_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqps_method_2251 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqps_method_2251)>(*this, lib, "vcmpnge_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqsd_method_2253 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqsd_method_2253)>(*this, lib, "vcmpnge_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqss_method_2255 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqss_method_2255)>(*this, lib, "vcmpnge_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngepd_method_2257 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd>;
addExtern<DAS_CALL_METHOD(_vcmpngepd_method_2257)>(*this, lib, "vcmpngepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngeps_method_2259 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps>;
addExtern<DAS_CALL_METHOD(_vcmpngeps_method_2259)>(*this, lib, "vcmpngeps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngesd_method_2261 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd>;
addExtern<DAS_CALL_METHOD(_vcmpngesd_method_2261)>(*this, lib, "vcmpngesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngess_method_2263 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess>;
addExtern<DAS_CALL_METHOD(_vcmpngess_method_2263)>(*this, lib, "vcmpngess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqpd_method_2265 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqpd_method_2265)>(*this, lib, "vcmpngt_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqps_method_2267 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqps_method_2267)>(*this, lib, "vcmpngt_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqsd_method_2269 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqsd_method_2269)>(*this, lib, "vcmpngt_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqss_method_2271 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqss_method_2271)>(*this, lib, "vcmpngt_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtpd_method_2273 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd>;
addExtern<DAS_CALL_METHOD(_vcmpngtpd_method_2273)>(*this, lib, "vcmpngtpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtps_method_2275 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps>;
addExtern<DAS_CALL_METHOD(_vcmpngtps_method_2275)>(*this, lib, "vcmpngtps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtsd_method_2277 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd>;
addExtern<DAS_CALL_METHOD(_vcmpngtsd_method_2277)>(*this, lib, "vcmpngtsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtss_method_2279 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss>;
addExtern<DAS_CALL_METHOD(_vcmpngtss_method_2279)>(*this, lib, "vcmpngtss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqpd_method_2281 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqpd_method_2281)>(*this, lib, "vcmpnle_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqps_method_2283 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqps_method_2283)>(*this, lib, "vcmpnle_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqsd_method_2285 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqsd_method_2285)>(*this, lib, "vcmpnle_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqss_method_2287 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqss_method_2287)>(*this, lib, "vcmpnle_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlepd_method_2289 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd>;
addExtern<DAS_CALL_METHOD(_vcmpnlepd_method_2289)>(*this, lib, "vcmpnlepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnleps_method_2291 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps>;
addExtern<DAS_CALL_METHOD(_vcmpnleps_method_2291)>(*this, lib, "vcmpnleps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlesd_method_2293 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd>;
addExtern<DAS_CALL_METHOD(_vcmpnlesd_method_2293)>(*this, lib, "vcmpnlesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnless_method_2295 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless>;
addExtern<DAS_CALL_METHOD(_vcmpnless_method_2295)>(*this, lib, "vcmpnless",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqpd_method_2297 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqpd_method_2297)>(*this, lib, "vcmpnlt_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqps_method_2299 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqps_method_2299)>(*this, lib, "vcmpnlt_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqsd_method_2301 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqsd_method_2301)>(*this, lib, "vcmpnlt_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqss_method_2303 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqss_method_2303)>(*this, lib, "vcmpnlt_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltpd_method_2305 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd>;
addExtern<DAS_CALL_METHOD(_vcmpnltpd_method_2305)>(*this, lib, "vcmpnltpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltps_method_2307 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps>;
addExtern<DAS_CALL_METHOD(_vcmpnltps_method_2307)>(*this, lib, "vcmpnltps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltsd_method_2309 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd>;
addExtern<DAS_CALL_METHOD(_vcmpnltsd_method_2309)>(*this, lib, "vcmpnltsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltss_method_2311 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss>;
addExtern<DAS_CALL_METHOD(_vcmpnltss_method_2311)>(*this, lib, "vcmpnltss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_spd_method_2313 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd>;
addExtern<DAS_CALL_METHOD(_vcmpord_spd_method_2313)>(*this, lib, "vcmpord_spd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_sps_method_2315 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps>;
addExtern<DAS_CALL_METHOD(_vcmpord_sps_method_2315)>(*this, lib, "vcmpord_sps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_ssd_method_2317 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd>;
addExtern<DAS_CALL_METHOD(_vcmpord_ssd_method_2317)>(*this, lib, "vcmpord_ssd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_sss_method_2319 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss>;
addExtern<DAS_CALL_METHOD(_vcmpord_sss_method_2319)>(*this, lib, "vcmpord_sss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordpd_method_2321 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd>;
addExtern<DAS_CALL_METHOD(_vcmpordpd_method_2321)>(*this, lib, "vcmpordpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordps_method_2323 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps>;
addExtern<DAS_CALL_METHOD(_vcmpordps_method_2323)>(*this, lib, "vcmpordps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordsd_method_2325 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd>;
addExtern<DAS_CALL_METHOD(_vcmpordsd_method_2325)>(*this, lib, "vcmpordsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordss_method_2327 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss>;
addExtern<DAS_CALL_METHOD(_vcmpordss_method_2327)>(*this, lib, "vcmpordss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmppd_method_2329 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmppd>;
addExtern<DAS_CALL_METHOD(_vcmppd_method_2329)>(*this, lib, "vcmppd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmppd>::invoke")
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpps_method_2331 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpps>;
addExtern<DAS_CALL_METHOD(_vcmpps_method_2331)>(*this, lib, "vcmpps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpps>::invoke")
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpsd_method_2333 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpsd>;
addExtern<DAS_CALL_METHOD(_vcmpsd_method_2333)>(*this, lib, "vcmpsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpsd>::invoke")
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpss_method_2335 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpss>;
addExtern<DAS_CALL_METHOD(_vcmpss_method_2335)>(*this, lib, "vcmpss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpss>::invoke")
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_uspd_method_2337 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd>;
addExtern<DAS_CALL_METHOD(_vcmptrue_uspd_method_2337)>(*this, lib, "vcmptrue_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_usps_method_2339 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps>;
addExtern<DAS_CALL_METHOD(_vcmptrue_usps_method_2339)>(*this, lib, "vcmptrue_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_ussd_method_2341 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd>;
addExtern<DAS_CALL_METHOD(_vcmptrue_ussd_method_2341)>(*this, lib, "vcmptrue_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_usss_method_2343 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss>;
addExtern<DAS_CALL_METHOD(_vcmptrue_usss_method_2343)>(*this, lib, "vcmptrue_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruepd_method_2345 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd>;
addExtern<DAS_CALL_METHOD(_vcmptruepd_method_2345)>(*this, lib, "vcmptruepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrueps_method_2347 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps>;
addExtern<DAS_CALL_METHOD(_vcmptrueps_method_2347)>(*this, lib, "vcmptrueps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruesd_method_2349 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd>;
addExtern<DAS_CALL_METHOD(_vcmptruesd_method_2349)>(*this, lib, "vcmptruesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruess_method_2351 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess>;
addExtern<DAS_CALL_METHOD(_vcmptruess_method_2351)>(*this, lib, "vcmptruess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_spd_method_2353 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd>;
addExtern<DAS_CALL_METHOD(_vcmpunord_spd_method_2353)>(*this, lib, "vcmpunord_spd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_sps_method_2355 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps>;
addExtern<DAS_CALL_METHOD(_vcmpunord_sps_method_2355)>(*this, lib, "vcmpunord_sps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_ssd_method_2357 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd>;
addExtern<DAS_CALL_METHOD(_vcmpunord_ssd_method_2357)>(*this, lib, "vcmpunord_ssd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_sss_method_2359 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss>;
addExtern<DAS_CALL_METHOD(_vcmpunord_sss_method_2359)>(*this, lib, "vcmpunord_sss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordpd_method_2361 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd>;
addExtern<DAS_CALL_METHOD(_vcmpunordpd_method_2361)>(*this, lib, "vcmpunordpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordps_method_2363 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps>;
addExtern<DAS_CALL_METHOD(_vcmpunordps_method_2363)>(*this, lib, "vcmpunordps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordsd_method_2365 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd>;
addExtern<DAS_CALL_METHOD(_vcmpunordsd_method_2365)>(*this, lib, "vcmpunordsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordss_method_2367 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss>;
addExtern<DAS_CALL_METHOD(_vcmpunordss_method_2367)>(*this, lib, "vcmpunordss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcomisd_method_2369 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcomisd);
addExtern<DAS_CALL_METHOD(_vcomisd_method_2369)>(*this, lib, "vcomisd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcomisd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcomiss_method_2371 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcomiss);
addExtern<DAS_CALL_METHOD(_vcomiss_method_2371)>(*this, lib, "vcomiss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcomiss))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtdq2pd_method_2373 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtdq2pd);
addExtern<DAS_CALL_METHOD(_vcvtdq2pd_method_2373)>(*this, lib, "vcvtdq2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtdq2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtdq2ps_method_2375 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtdq2ps);
addExtern<DAS_CALL_METHOD(_vcvtdq2ps_method_2375)>(*this, lib, "vcvtdq2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtdq2ps))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2dq_method_2377 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2dq);
addExtern<DAS_CALL_METHOD(_vcvtpd2dq_method_2377)>(*this, lib, "vcvtpd2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2dq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2ps_method_2379 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2ps);
addExtern<DAS_CALL_METHOD(_vcvtpd2ps_method_2379)>(*this, lib, "vcvtpd2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2ps_method_2381 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2ps);
addExtern<DAS_CALL_METHOD(_vcvtph2ps_method_2381)>(*this, lib, "vcvtph2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2dq_method_2383 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2dq);
addExtern<DAS_CALL_METHOD(_vcvtps2dq_method_2383)>(*this, lib, "vcvtps2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2dq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2pd_method_2385 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2pd);
addExtern<DAS_CALL_METHOD(_vcvtps2pd_method_2385)>(*this, lib, "vcvtps2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2ph_method_2387 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2ph);
addExtern<DAS_CALL_METHOD(_vcvtps2ph_method_2387)>(*this, lib, "vcvtps2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2ph))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsd2si_method_2389 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si>;
addExtern<DAS_CALL_METHOD(_vcvtsd2si_method_2389)>(*this, lib, "vcvtsd2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsd2ss_method_2391 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsd2ss);
addExtern<DAS_CALL_METHOD(_vcvtsd2ss_method_2391)>(*this, lib, "vcvtsd2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsd2ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsi2sd_method_2393 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsi2sd);
addExtern<DAS_CALL_METHOD(_vcvtsi2sd_method_2393)>(*this, lib, "vcvtsi2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsi2sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsi2ss_method_2395 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsi2ss);
addExtern<DAS_CALL_METHOD(_vcvtsi2ss_method_2395)>(*this, lib, "vcvtsi2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsi2ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtss2sd_method_2397 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtss2sd);
addExtern<DAS_CALL_METHOD(_vcvtss2sd_method_2397)>(*this, lib, "vcvtss2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtss2sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtss2si_method_2399 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si>;
addExtern<DAS_CALL_METHOD(_vcvtss2si_method_2399)>(*this, lib, "vcvtss2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttpd2dq_method_2401 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttpd2dq);
addExtern<DAS_CALL_METHOD(_vcvttpd2dq_method_2401)>(*this, lib, "vcvttpd2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttpd2dq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttps2dq_method_2403 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttps2dq);
addExtern<DAS_CALL_METHOD(_vcvttps2dq_method_2403)>(*this, lib, "vcvttps2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttps2dq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttsd2si_method_2405 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si>;
addExtern<DAS_CALL_METHOD(_vcvttsd2si_method_2405)>(*this, lib, "vcvttsd2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttss2si_method_2407 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si>;
addExtern<DAS_CALL_METHOD(_vcvttss2si_method_2407)>(*this, lib, "vcvttss2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivpd_method_2409 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivpd);
addExtern<DAS_CALL_METHOD(_vdivpd_method_2409)>(*this, lib, "vdivpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivps_method_2411 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivps);
addExtern<DAS_CALL_METHOD(_vdivps_method_2411)>(*this, lib, "vdivps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivsd_method_2413 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivsd);
addExtern<DAS_CALL_METHOD(_vdivsd_method_2413)>(*this, lib, "vdivsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivss_method_2415 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivss);
addExtern<DAS_CALL_METHOD(_vdivss_method_2415)>(*this, lib, "vdivss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdppd_method_2417 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdppd);
addExtern<DAS_CALL_METHOD(_vdppd_method_2417)>(*this, lib, "vdppd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdppd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdpps_method_2419 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdpps);
addExtern<DAS_CALL_METHOD(_vdpps_method_2419)>(*this, lib, "vdpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdpps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractf128_method_2421 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractf128);
addExtern<DAS_CALL_METHOD(_vextractf128_method_2421)>(*this, lib, "vextractf128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractf128))
	->args({"self","op","y","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextracti128_method_2423 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextracti128);
addExtern<DAS_CALL_METHOD(_vextracti128_method_2423)>(*this, lib, "vextracti128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextracti128))
	->args({"self","op","y","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractps_method_2425 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractps);
addExtern<DAS_CALL_METHOD(_vextractps_method_2425)>(*this, lib, "vextractps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractps))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132pd_method_2427 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132pd);
addExtern<DAS_CALL_METHOD(_vfmadd132pd_method_2427)>(*this, lib, "vfmadd132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132ps_method_2429 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132ps);
addExtern<DAS_CALL_METHOD(_vfmadd132ps_method_2429)>(*this, lib, "vfmadd132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132sd_method_2431 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132sd);
addExtern<DAS_CALL_METHOD(_vfmadd132sd_method_2431)>(*this, lib, "vfmadd132sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132ss_method_2433 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132ss);
addExtern<DAS_CALL_METHOD(_vfmadd132ss_method_2433)>(*this, lib, "vfmadd132ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213pd_method_2435 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213pd);
addExtern<DAS_CALL_METHOD(_vfmadd213pd_method_2435)>(*this, lib, "vfmadd213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213ps_method_2437 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213ps);
addExtern<DAS_CALL_METHOD(_vfmadd213ps_method_2437)>(*this, lib, "vfmadd213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213sd_method_2439 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213sd);
addExtern<DAS_CALL_METHOD(_vfmadd213sd_method_2439)>(*this, lib, "vfmadd213sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213ss_method_2441 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213ss);
addExtern<DAS_CALL_METHOD(_vfmadd213ss_method_2441)>(*this, lib, "vfmadd213ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231pd_method_2443 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231pd);
addExtern<DAS_CALL_METHOD(_vfmadd231pd_method_2443)>(*this, lib, "vfmadd231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231ps_method_2445 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231ps);
addExtern<DAS_CALL_METHOD(_vfmadd231ps_method_2445)>(*this, lib, "vfmadd231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231sd_method_2447 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231sd);
addExtern<DAS_CALL_METHOD(_vfmadd231sd_method_2447)>(*this, lib, "vfmadd231sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231ss_method_2449 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231ss);
addExtern<DAS_CALL_METHOD(_vfmadd231ss_method_2449)>(*this, lib, "vfmadd231ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub132pd_method_2451 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub132pd);
addExtern<DAS_CALL_METHOD(_vfmaddsub132pd_method_2451)>(*this, lib, "vfmaddsub132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub132ps_method_2453 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub132ps);
addExtern<DAS_CALL_METHOD(_vfmaddsub132ps_method_2453)>(*this, lib, "vfmaddsub132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub213pd_method_2455 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub213pd);
addExtern<DAS_CALL_METHOD(_vfmaddsub213pd_method_2455)>(*this, lib, "vfmaddsub213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub213ps_method_2457 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub213ps);
addExtern<DAS_CALL_METHOD(_vfmaddsub213ps_method_2457)>(*this, lib, "vfmaddsub213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub231pd_method_2459 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub231pd);
addExtern<DAS_CALL_METHOD(_vfmaddsub231pd_method_2459)>(*this, lib, "vfmaddsub231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub231ps_method_2461 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub231ps);
addExtern<DAS_CALL_METHOD(_vfmaddsub231ps_method_2461)>(*this, lib, "vfmaddsub231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132pd_method_2463 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132pd);
addExtern<DAS_CALL_METHOD(_vfmsub132pd_method_2463)>(*this, lib, "vfmsub132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132ps_method_2465 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132ps);
addExtern<DAS_CALL_METHOD(_vfmsub132ps_method_2465)>(*this, lib, "vfmsub132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132sd_method_2467 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132sd);
addExtern<DAS_CALL_METHOD(_vfmsub132sd_method_2467)>(*this, lib, "vfmsub132sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132ss_method_2469 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132ss);
addExtern<DAS_CALL_METHOD(_vfmsub132ss_method_2469)>(*this, lib, "vfmsub132ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213pd_method_2471 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213pd);
addExtern<DAS_CALL_METHOD(_vfmsub213pd_method_2471)>(*this, lib, "vfmsub213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213ps_method_2473 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213ps);
addExtern<DAS_CALL_METHOD(_vfmsub213ps_method_2473)>(*this, lib, "vfmsub213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213sd_method_2475 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213sd);
addExtern<DAS_CALL_METHOD(_vfmsub213sd_method_2475)>(*this, lib, "vfmsub213sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213ss_method_2477 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213ss);
addExtern<DAS_CALL_METHOD(_vfmsub213ss_method_2477)>(*this, lib, "vfmsub213ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231pd_method_2479 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231pd);
addExtern<DAS_CALL_METHOD(_vfmsub231pd_method_2479)>(*this, lib, "vfmsub231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231ps_method_2481 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231ps);
addExtern<DAS_CALL_METHOD(_vfmsub231ps_method_2481)>(*this, lib, "vfmsub231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231sd_method_2483 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231sd);
addExtern<DAS_CALL_METHOD(_vfmsub231sd_method_2483)>(*this, lib, "vfmsub231sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231ss_method_2485 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231ss);
addExtern<DAS_CALL_METHOD(_vfmsub231ss_method_2485)>(*this, lib, "vfmsub231ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd132pd_method_2487 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd132pd);
addExtern<DAS_CALL_METHOD(_vfmsubadd132pd_method_2487)>(*this, lib, "vfmsubadd132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd132ps_method_2489 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd132ps);
addExtern<DAS_CALL_METHOD(_vfmsubadd132ps_method_2489)>(*this, lib, "vfmsubadd132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd213pd_method_2491 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd213pd);
addExtern<DAS_CALL_METHOD(_vfmsubadd213pd_method_2491)>(*this, lib, "vfmsubadd213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd213ps_method_2493 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd213ps);
addExtern<DAS_CALL_METHOD(_vfmsubadd213ps_method_2493)>(*this, lib, "vfmsubadd213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd231pd_method_2495 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd231pd);
addExtern<DAS_CALL_METHOD(_vfmsubadd231pd_method_2495)>(*this, lib, "vfmsubadd231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd231ps_method_2497 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd231ps);
addExtern<DAS_CALL_METHOD(_vfmsubadd231ps_method_2497)>(*this, lib, "vfmsubadd231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132pd_method_2499 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132pd);
addExtern<DAS_CALL_METHOD(_vfnmadd132pd_method_2499)>(*this, lib, "vfnmadd132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132ps_method_2501 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132ps);
addExtern<DAS_CALL_METHOD(_vfnmadd132ps_method_2501)>(*this, lib, "vfnmadd132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132sd_method_2503 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132sd);
addExtern<DAS_CALL_METHOD(_vfnmadd132sd_method_2503)>(*this, lib, "vfnmadd132sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132ss_method_2505 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132ss);
addExtern<DAS_CALL_METHOD(_vfnmadd132ss_method_2505)>(*this, lib, "vfnmadd132ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213pd_method_2507 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213pd);
addExtern<DAS_CALL_METHOD(_vfnmadd213pd_method_2507)>(*this, lib, "vfnmadd213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213ps_method_2509 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213ps);
addExtern<DAS_CALL_METHOD(_vfnmadd213ps_method_2509)>(*this, lib, "vfnmadd213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213sd_method_2511 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213sd);
addExtern<DAS_CALL_METHOD(_vfnmadd213sd_method_2511)>(*this, lib, "vfnmadd213sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213ss_method_2513 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213ss);
addExtern<DAS_CALL_METHOD(_vfnmadd213ss_method_2513)>(*this, lib, "vfnmadd213ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231pd_method_2515 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231pd);
addExtern<DAS_CALL_METHOD(_vfnmadd231pd_method_2515)>(*this, lib, "vfnmadd231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231ps_method_2517 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231ps);
addExtern<DAS_CALL_METHOD(_vfnmadd231ps_method_2517)>(*this, lib, "vfnmadd231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231sd_method_2519 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231sd);
addExtern<DAS_CALL_METHOD(_vfnmadd231sd_method_2519)>(*this, lib, "vfnmadd231sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231ss_method_2521 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231ss);
addExtern<DAS_CALL_METHOD(_vfnmadd231ss_method_2521)>(*this, lib, "vfnmadd231ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132pd_method_2523 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132pd);
addExtern<DAS_CALL_METHOD(_vfnmsub132pd_method_2523)>(*this, lib, "vfnmsub132pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132ps_method_2525 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132ps);
addExtern<DAS_CALL_METHOD(_vfnmsub132ps_method_2525)>(*this, lib, "vfnmsub132ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132sd_method_2527 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132sd);
addExtern<DAS_CALL_METHOD(_vfnmsub132sd_method_2527)>(*this, lib, "vfnmsub132sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132ss_method_2529 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132ss);
addExtern<DAS_CALL_METHOD(_vfnmsub132ss_method_2529)>(*this, lib, "vfnmsub132ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213pd_method_2531 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213pd);
addExtern<DAS_CALL_METHOD(_vfnmsub213pd_method_2531)>(*this, lib, "vfnmsub213pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213ps_method_2533 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213ps);
addExtern<DAS_CALL_METHOD(_vfnmsub213ps_method_2533)>(*this, lib, "vfnmsub213ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213sd_method_2535 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213sd);
addExtern<DAS_CALL_METHOD(_vfnmsub213sd_method_2535)>(*this, lib, "vfnmsub213sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213ss_method_2537 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213ss);
addExtern<DAS_CALL_METHOD(_vfnmsub213ss_method_2537)>(*this, lib, "vfnmsub213ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231pd_method_2539 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231pd);
addExtern<DAS_CALL_METHOD(_vfnmsub231pd_method_2539)>(*this, lib, "vfnmsub231pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231ps_method_2541 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231ps);
addExtern<DAS_CALL_METHOD(_vfnmsub231ps_method_2541)>(*this, lib, "vfnmsub231ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231sd_method_2543 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231sd);
addExtern<DAS_CALL_METHOD(_vfnmsub231sd_method_2543)>(*this, lib, "vfnmsub231sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231ss_method_2545 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231ss);
addExtern<DAS_CALL_METHOD(_vfnmsub231ss_method_2545)>(*this, lib, "vfnmsub231ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherdpd_method_2547 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdpd>;
addExtern<DAS_CALL_METHOD(_vgatherdpd_method_2547)>(*this, lib, "vgatherdpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdpd>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherdps_method_2549 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdps>;
addExtern<DAS_CALL_METHOD(_vgatherdps_method_2549)>(*this, lib, "vgatherdps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherdps>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherqpd_method_2551 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqpd>;
addExtern<DAS_CALL_METHOD(_vgatherqpd_method_2551)>(*this, lib, "vgatherqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqpd>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherqps_method_2553 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqps>;
addExtern<DAS_CALL_METHOD(_vgatherqps_method_2553)>(*this, lib, "vgatherqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vgatherqps>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgf2p8affineinvqb_method_2555 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgf2p8affineinvqb);
addExtern<DAS_CALL_METHOD(_vgf2p8affineinvqb_method_2555)>(*this, lib, "vgf2p8affineinvqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgf2p8affineinvqb))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgf2p8affineqb_method_2557 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgf2p8affineqb);
addExtern<DAS_CALL_METHOD(_vgf2p8affineqb_method_2557)>(*this, lib, "vgf2p8affineqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgf2p8affineqb))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgf2p8mulb_method_2559 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgf2p8mulb);
addExtern<DAS_CALL_METHOD(_vgf2p8mulb_method_2559)>(*this, lib, "vgf2p8mulb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgf2p8mulb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vhaddpd_method_2561 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vhaddpd);
addExtern<DAS_CALL_METHOD(_vhaddpd_method_2561)>(*this, lib, "vhaddpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vhaddpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vhaddps_method_2563 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vhaddps);
addExtern<DAS_CALL_METHOD(_vhaddps_method_2563)>(*this, lib, "vhaddps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vhaddps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vhsubpd_method_2565 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vhsubpd);
addExtern<DAS_CALL_METHOD(_vhsubpd_method_2565)>(*this, lib, "vhsubpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vhsubpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vhsubps_method_2567 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vhsubps);
addExtern<DAS_CALL_METHOD(_vhsubps_method_2567)>(*this, lib, "vhsubps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vhsubps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertf128_method_2569 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertf128);
addExtern<DAS_CALL_METHOD(_vinsertf128_method_2569)>(*this, lib, "vinsertf128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertf128))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinserti128_method_2571 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinserti128);
addExtern<DAS_CALL_METHOD(_vinserti128_method_2571)>(*this, lib, "vinserti128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinserti128))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertps_method_2573 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertps);
addExtern<DAS_CALL_METHOD(_vinsertps_method_2573)>(*this, lib, "vinsertps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vlddqu_method_2575 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vlddqu);
addExtern<DAS_CALL_METHOD(_vlddqu_method_2575)>(*this, lib, "vlddqu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vlddqu))
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vldmxcsr_method_2577 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vldmxcsr);
addExtern<DAS_CALL_METHOD(_vldmxcsr_method_2577)>(*this, lib, "vldmxcsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vldmxcsr))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaskmovdqu_method_2579 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaskmovdqu);
addExtern<DAS_CALL_METHOD(_vmaskmovdqu_method_2579)>(*this, lib, "vmaskmovdqu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaskmovdqu))
	->args({"self","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaskmovpd_method_2581 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovpd>;
addExtern<DAS_CALL_METHOD(_vmaskmovpd_method_2581)>(*this, lib, "vmaskmovpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovpd>::invoke")
	->args({"self","addr","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaskmovpd_method_2583 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovpd>;
addExtern<DAS_CALL_METHOD(_vmaskmovpd_method_2583)>(*this, lib, "vmaskmovpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovpd>::invoke")
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaskmovps_method_2585 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovps>;
addExtern<DAS_CALL_METHOD(_vmaskmovps_method_2585)>(*this, lib, "vmaskmovps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmaskmovps>::invoke")
	->args({"self","addr","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaskmovps_method_2587 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovps>;
addExtern<DAS_CALL_METHOD(_vmaskmovps_method_2587)>(*this, lib, "vmaskmovps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmaskmovps>::invoke")
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxpd_method_2589 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxpd);
addExtern<DAS_CALL_METHOD(_vmaxpd_method_2589)>(*this, lib, "vmaxpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxps_method_2591 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxps);
addExtern<DAS_CALL_METHOD(_vmaxps_method_2591)>(*this, lib, "vmaxps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxsd_method_2593 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxsd);
addExtern<DAS_CALL_METHOD(_vmaxsd_method_2593)>(*this, lib, "vmaxsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxss_method_2595 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxss);
addExtern<DAS_CALL_METHOD(_vmaxss_method_2595)>(*this, lib, "vmaxss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminpd_method_2597 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminpd);
addExtern<DAS_CALL_METHOD(_vminpd_method_2597)>(*this, lib, "vminpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminps_method_2599 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminps);
addExtern<DAS_CALL_METHOD(_vminps_method_2599)>(*this, lib, "vminps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminsd_method_2601 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminsd);
addExtern<DAS_CALL_METHOD(_vminsd_method_2601)>(*this, lib, "vminsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminss_method_2603 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminss);
addExtern<DAS_CALL_METHOD(_vminss_method_2603)>(*this, lib, "vminss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovapd_method_2605 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovapd>;
addExtern<DAS_CALL_METHOD(_vmovapd_method_2605)>(*this, lib, "vmovapd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovapd>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovapd_method_2607 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovapd>;
addExtern<DAS_CALL_METHOD(_vmovapd_method_2607)>(*this, lib, "vmovapd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovapd>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovaps_method_2609 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovaps>;
addExtern<DAS_CALL_METHOD(_vmovaps_method_2609)>(*this, lib, "vmovaps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovaps>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovaps_method_2611 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovaps>;
addExtern<DAS_CALL_METHOD(_vmovaps_method_2611)>(*this, lib, "vmovaps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovaps>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovd_method_2613 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovd>;
addExtern<DAS_CALL_METHOD(_vmovd_method_2613)>(*this, lib, "vmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovd>::invoke")
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovd_method_2615 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovd>;
addExtern<DAS_CALL_METHOD(_vmovd_method_2615)>(*this, lib, "vmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovd>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovddup_method_2617 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovddup);
addExtern<DAS_CALL_METHOD(_vmovddup_method_2617)>(*this, lib, "vmovddup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovddup))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa_method_2619 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa>;
addExtern<DAS_CALL_METHOD(_vmovdqa_method_2619)>(*this, lib, "vmovdqa",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa_method_2621 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa>;
addExtern<DAS_CALL_METHOD(_vmovdqa_method_2621)>(*this, lib, "vmovdqa",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu_method_2623 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu>;
addExtern<DAS_CALL_METHOD(_vmovdqu_method_2623)>(*this, lib, "vmovdqu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu_method_2625 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu>;
addExtern<DAS_CALL_METHOD(_vmovdqu_method_2625)>(*this, lib, "vmovdqu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovhlps_method_2627 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovhlps);
addExtern<DAS_CALL_METHOD(_vmovhlps_method_2627)>(*this, lib, "vmovhlps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovhlps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovhpd_method_2629 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhpd>;
addExtern<DAS_CALL_METHOD(_vmovhpd_method_2629)>(*this, lib, "vmovhpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhpd>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovhpd_method_2631 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhpd>;
addExtern<DAS_CALL_METHOD(_vmovhpd_method_2631)>(*this, lib, "vmovhpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhpd>::invoke")
	->args({"self","x","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovhps_method_2633 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhps>;
addExtern<DAS_CALL_METHOD(_vmovhps_method_2633)>(*this, lib, "vmovhps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovhps>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovhps_method_2635 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhps>;
addExtern<DAS_CALL_METHOD(_vmovhps_method_2635)>(*this, lib, "vmovhps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovhps>::invoke")
	->args({"self","x","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovlhps_method_2637 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovlhps);
addExtern<DAS_CALL_METHOD(_vmovlhps_method_2637)>(*this, lib, "vmovlhps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovlhps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovlpd_method_2639 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlpd>;
addExtern<DAS_CALL_METHOD(_vmovlpd_method_2639)>(*this, lib, "vmovlpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlpd>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovlpd_method_2641 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlpd>;
addExtern<DAS_CALL_METHOD(_vmovlpd_method_2641)>(*this, lib, "vmovlpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlpd>::invoke")
	->args({"self","x","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovlps_method_2643 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlps>;
addExtern<DAS_CALL_METHOD(_vmovlps_method_2643)>(*this, lib, "vmovlps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovlps>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovlps_method_2645 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlps>;
addExtern<DAS_CALL_METHOD(_vmovlps_method_2645)>(*this, lib, "vmovlps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovlps>::invoke")
	->args({"self","x","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovmskpd_method_2647 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovmskpd);
addExtern<DAS_CALL_METHOD(_vmovmskpd_method_2647)>(*this, lib, "vmovmskpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovmskpd))
	->args({"self","r","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovmskps_method_2649 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovmskps);
addExtern<DAS_CALL_METHOD(_vmovmskps_method_2649)>(*this, lib, "vmovmskps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovmskps))
	->args({"self","r","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovntdq_method_2651 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovntdq);
addExtern<DAS_CALL_METHOD(_vmovntdq_method_2651)>(*this, lib, "vmovntdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovntdq))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovntdqa_method_2653 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovntdqa);
addExtern<DAS_CALL_METHOD(_vmovntdqa_method_2653)>(*this, lib, "vmovntdqa",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovntdqa))
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovntpd_method_2655 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovntpd);
addExtern<DAS_CALL_METHOD(_vmovntpd_method_2655)>(*this, lib, "vmovntpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovntpd))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovntps_method_2657 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovntps);
addExtern<DAS_CALL_METHOD(_vmovntps_method_2657)>(*this, lib, "vmovntps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovntps))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovq_method_2659 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>;
addExtern<DAS_CALL_METHOD(_vmovq_method_2659)>(*this, lib, "vmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovq_method_2661 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovq>;
addExtern<DAS_CALL_METHOD(_vmovq_method_2661)>(*this, lib, "vmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovq>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovq_method_2663 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>;
addExtern<DAS_CALL_METHOD(_vmovq_method_2663)>(*this, lib, "vmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>::invoke")
	->args({"self","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsd_method_2665 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsd>;
addExtern<DAS_CALL_METHOD(_vmovsd_method_2665)>(*this, lib, "vmovsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsd>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsd_method_2667 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsd>;
addExtern<DAS_CALL_METHOD(_vmovsd_method_2667)>(*this, lib, "vmovsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsd>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsd_method_2669 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovsd>;
addExtern<DAS_CALL_METHOD(_vmovsd_method_2669)>(*this, lib, "vmovsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovsd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovshdup_method_2671 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovshdup);
addExtern<DAS_CALL_METHOD(_vmovshdup_method_2671)>(*this, lib, "vmovshdup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovshdup))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsldup_method_2673 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmovsldup);
addExtern<DAS_CALL_METHOD(_vmovsldup_method_2673)>(*this, lib, "vmovsldup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmovsldup))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovss_method_2675 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovss>;
addExtern<DAS_CALL_METHOD(_vmovss_method_2675)>(*this, lib, "vmovss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovss>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovss_method_2677 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovss>;
addExtern<DAS_CALL_METHOD(_vmovss_method_2677)>(*this, lib, "vmovss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovss>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovss_method_2679 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovss>;
addExtern<DAS_CALL_METHOD(_vmovss_method_2679)>(*this, lib, "vmovss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovss>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovupd_method_2681 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovupd>;
addExtern<DAS_CALL_METHOD(_vmovupd_method_2681)>(*this, lib, "vmovupd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovupd>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovupd_method_2683 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovupd>;
addExtern<DAS_CALL_METHOD(_vmovupd_method_2683)>(*this, lib, "vmovupd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovupd>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovups_method_2685 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovups>;
addExtern<DAS_CALL_METHOD(_vmovups_method_2685)>(*this, lib, "vmovups",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovups>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovups_method_2687 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovups>;
addExtern<DAS_CALL_METHOD(_vmovups_method_2687)>(*this, lib, "vmovups",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovups>::invoke")
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmpsadbw_method_2689 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmpsadbw);
addExtern<DAS_CALL_METHOD(_vmpsadbw_method_2689)>(*this, lib, "vmpsadbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmpsadbw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulpd_method_2691 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulpd);
addExtern<DAS_CALL_METHOD(_vmulpd_method_2691)>(*this, lib, "vmulpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulps_method_2693 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulps);
addExtern<DAS_CALL_METHOD(_vmulps_method_2693)>(*this, lib, "vmulps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulsd_method_2695 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulsd);
addExtern<DAS_CALL_METHOD(_vmulsd_method_2695)>(*this, lib, "vmulsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulss_method_2697 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulss);
addExtern<DAS_CALL_METHOD(_vmulss_method_2697)>(*this, lib, "vmulss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vorpd_method_2699 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vorpd);
addExtern<DAS_CALL_METHOD(_vorpd_method_2699)>(*this, lib, "vorpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vorpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vorps_method_2701 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vorps);
addExtern<DAS_CALL_METHOD(_vorps_method_2701)>(*this, lib, "vorps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vorps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpabsb_method_2703 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpabsb);
addExtern<DAS_CALL_METHOD(_vpabsb_method_2703)>(*this, lib, "vpabsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpabsb))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpabsd_method_2705 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpabsd);
addExtern<DAS_CALL_METHOD(_vpabsd_method_2705)>(*this, lib, "vpabsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpabsd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpabsw_method_2707 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpabsw);
addExtern<DAS_CALL_METHOD(_vpabsw_method_2707)>(*this, lib, "vpabsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpabsw))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpackssdw_method_2709 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpackssdw);
addExtern<DAS_CALL_METHOD(_vpackssdw_method_2709)>(*this, lib, "vpackssdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpackssdw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpacksswb_method_2711 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpacksswb);
addExtern<DAS_CALL_METHOD(_vpacksswb_method_2711)>(*this, lib, "vpacksswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpacksswb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpackusdw_method_2713 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpackusdw);
addExtern<DAS_CALL_METHOD(_vpackusdw_method_2713)>(*this, lib, "vpackusdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpackusdw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpackuswb_method_2715 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpackuswb);
addExtern<DAS_CALL_METHOD(_vpackuswb_method_2715)>(*this, lib, "vpackuswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpackuswb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddb_method_2717 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddb);
addExtern<DAS_CALL_METHOD(_vpaddb_method_2717)>(*this, lib, "vpaddb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddd_method_2719 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddd);
addExtern<DAS_CALL_METHOD(_vpaddd_method_2719)>(*this, lib, "vpaddd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddq_method_2721 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddq);
addExtern<DAS_CALL_METHOD(_vpaddq_method_2721)>(*this, lib, "vpaddq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddsb_method_2723 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddsb);
addExtern<DAS_CALL_METHOD(_vpaddsb_method_2723)>(*this, lib, "vpaddsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddsb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddsw_method_2725 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddsw);
addExtern<DAS_CALL_METHOD(_vpaddsw_method_2725)>(*this, lib, "vpaddsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddusb_method_2727 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddusb);
addExtern<DAS_CALL_METHOD(_vpaddusb_method_2727)>(*this, lib, "vpaddusb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddusb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddusw_method_2729 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddusw);
addExtern<DAS_CALL_METHOD(_vpaddusw_method_2729)>(*this, lib, "vpaddusw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddusw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpaddw_method_2731 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpaddw);
addExtern<DAS_CALL_METHOD(_vpaddw_method_2731)>(*this, lib, "vpaddw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpaddw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpalignr_method_2733 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpalignr);
addExtern<DAS_CALL_METHOD(_vpalignr_method_2733)>(*this, lib, "vpalignr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpalignr))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpand_method_2735 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpand);
addExtern<DAS_CALL_METHOD(_vpand_method_2735)>(*this, lib, "vpand",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpand))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpandn_method_2737 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpandn);
addExtern<DAS_CALL_METHOD(_vpandn_method_2737)>(*this, lib, "vpandn",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpandn))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpavgb_method_2739 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpavgb);
addExtern<DAS_CALL_METHOD(_vpavgb_method_2739)>(*this, lib, "vpavgb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpavgb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpavgw_method_2741 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpavgw);
addExtern<DAS_CALL_METHOD(_vpavgw_method_2741)>(*this, lib, "vpavgw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpavgw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendd_method_2743 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendd);
addExtern<DAS_CALL_METHOD(_vpblendd_method_2743)>(*this, lib, "vpblendd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendvb_method_2745 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendvb);
addExtern<DAS_CALL_METHOD(_vpblendvb_method_2745)>(*this, lib, "vpblendvb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendvb))
	->args({"self","x1","x2","op","x4"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendw_method_2747 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendw);
addExtern<DAS_CALL_METHOD(_vpblendw_method_2747)>(*this, lib, "vpblendw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastb_method_2749 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastb>;
addExtern<DAS_CALL_METHOD(_vpbroadcastb_method_2749)>(*this, lib, "vpbroadcastb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastb>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastd_method_2751 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastd>;
addExtern<DAS_CALL_METHOD(_vpbroadcastd_method_2751)>(*this, lib, "vpbroadcastd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastd>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastq_method_2753 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastq>;
addExtern<DAS_CALL_METHOD(_vpbroadcastq_method_2753)>(*this, lib, "vpbroadcastq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastq>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastw_method_2755 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastw>;
addExtern<DAS_CALL_METHOD(_vpbroadcastw_method_2755)>(*this, lib, "vpbroadcastw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpbroadcastw>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpclmulqdq_method_2757 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpclmulqdq);
addExtern<DAS_CALL_METHOD(_vpclmulqdq_method_2757)>(*this, lib, "vpclmulqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpclmulqdq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqb_method_2759 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb>;
addExtern<DAS_CALL_METHOD(_vpcmpeqb_method_2759)>(*this, lib, "vpcmpeqb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqd_method_2761 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd>;
addExtern<DAS_CALL_METHOD(_vpcmpeqd_method_2761)>(*this, lib, "vpcmpeqd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqq_method_2763 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq>;
addExtern<DAS_CALL_METHOD(_vpcmpeqq_method_2763)>(*this, lib, "vpcmpeqq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqw_method_2765 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw>;
addExtern<DAS_CALL_METHOD(_vpcmpeqw_method_2765)>(*this, lib, "vpcmpeqw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpestri_method_2767 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpestri);
addExtern<DAS_CALL_METHOD(_vpcmpestri_method_2767)>(*this, lib, "vpcmpestri",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpestri))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpestrm_method_2769 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpestrm);
addExtern<DAS_CALL_METHOD(_vpcmpestrm_method_2769)>(*this, lib, "vpcmpestrm",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpestrm))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtb_method_2771 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb>;
addExtern<DAS_CALL_METHOD(_vpcmpgtb_method_2771)>(*this, lib, "vpcmpgtb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtd_method_2773 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd>;
addExtern<DAS_CALL_METHOD(_vpcmpgtd_method_2773)>(*this, lib, "vpcmpgtd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtq_method_2775 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq>;
addExtern<DAS_CALL_METHOD(_vpcmpgtq_method_2775)>(*this, lib, "vpcmpgtq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtw_method_2777 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw>;
addExtern<DAS_CALL_METHOD(_vpcmpgtw_method_2777)>(*this, lib, "vpcmpgtw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpistri_method_2779 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpistri);
addExtern<DAS_CALL_METHOD(_vpcmpistri_method_2779)>(*this, lib, "vpcmpistri",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpistri))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpistrm_method_2781 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpistrm);
addExtern<DAS_CALL_METHOD(_vpcmpistrm_method_2781)>(*this, lib, "vpcmpistrm",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpistrm))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpdpbusd_method_2783 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpdpbusd);
addExtern<DAS_CALL_METHOD(_vpdpbusd_method_2783)>(*this, lib, "vpdpbusd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpdpbusd))
	->args({"self","x1","x2","op","encoding"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpdpbusds_method_2785 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpdpbusds);
addExtern<DAS_CALL_METHOD(_vpdpbusds_method_2785)>(*this, lib, "vpdpbusds",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpdpbusds))
	->args({"self","x1","x2","op","encoding"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpdpwssd_method_2787 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpdpwssd);
addExtern<DAS_CALL_METHOD(_vpdpwssd_method_2787)>(*this, lib, "vpdpwssd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpdpwssd))
	->args({"self","x1","x2","op","encoding"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpdpwssds_method_2789 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpdpwssds);
addExtern<DAS_CALL_METHOD(_vpdpwssds_method_2789)>(*this, lib, "vpdpwssds",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpdpwssds))
	->args({"self","x1","x2","op","encoding"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vperm2f128_method_2791 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vperm2f128);
addExtern<DAS_CALL_METHOD(_vperm2f128_method_2791)>(*this, lib, "vperm2f128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vperm2f128))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vperm2i128_method_2793 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vperm2i128);
addExtern<DAS_CALL_METHOD(_vperm2i128_method_2793)>(*this, lib, "vperm2i128",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vperm2i128))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermd_method_2795 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermd);
addExtern<DAS_CALL_METHOD(_vpermd_method_2795)>(*this, lib, "vpermd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermd))
	->args({"self","y1","y2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermilpd_method_2797 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilpd>;
addExtern<DAS_CALL_METHOD(_vpermilpd_method_2797)>(*this, lib, "vpermilpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilpd>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermilpd_method_2799 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermilpd>;
addExtern<DAS_CALL_METHOD(_vpermilpd_method_2799)>(*this, lib, "vpermilpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermilpd>::invoke")
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermilps_method_2801 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilps>;
addExtern<DAS_CALL_METHOD(_vpermilps_method_2801)>(*this, lib, "vpermilps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermilps>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermilps_method_2803 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermilps>;
addExtern<DAS_CALL_METHOD(_vpermilps_method_2803)>(*this, lib, "vpermilps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermilps>::invoke")
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermpd_method_2805 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermpd>;
addExtern<DAS_CALL_METHOD(_vpermpd_method_2805)>(*this, lib, "vpermpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermpd>::invoke")
	->args({"self","y","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermpd_method_2807 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Ymm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermpd>;
addExtern<DAS_CALL_METHOD(_vpermpd_method_2807)>(*this, lib, "vpermpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Ymm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermpd>::invoke")
	->args({"self","y1","y2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermps_method_2809 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermps);
addExtern<DAS_CALL_METHOD(_vpermps_method_2809)>(*this, lib, "vpermps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermps))
	->args({"self","y1","y2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermq_method_2811 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermq>;
addExtern<DAS_CALL_METHOD(_vpermq_method_2811)>(*this, lib, "vpermq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpermq>::invoke")
	->args({"self","y","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermq_method_2813 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Ymm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermq>;
addExtern<DAS_CALL_METHOD(_vpermq_method_2813)>(*this, lib, "vpermq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &, const Xbyak::Ymm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermq>::invoke")
	->args({"self","y1","y2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpextrb_method_2815 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpextrb);
addExtern<DAS_CALL_METHOD(_vpextrb_method_2815)>(*this, lib, "vpextrb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpextrb))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpextrd_method_2817 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpextrd);
addExtern<DAS_CALL_METHOD(_vpextrd_method_2817)>(*this, lib, "vpextrd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpextrd))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpextrq_method_2819 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpextrq);
addExtern<DAS_CALL_METHOD(_vpextrq_method_2819)>(*this, lib, "vpextrq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpextrq))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpextrw_method_2821 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpextrw);
addExtern<DAS_CALL_METHOD(_vpextrw_method_2821)>(*this, lib, "vpextrw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpextrw))
	->args({"self","op","x","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherdd_method_2823 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdd>;
addExtern<DAS_CALL_METHOD(_vpgatherdd_method_2823)>(*this, lib, "vpgatherdd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdd>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherdq_method_2825 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdq>;
addExtern<DAS_CALL_METHOD(_vpgatherdq_method_2825)>(*this, lib, "vpgatherdq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherdq>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherqd_method_2827 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqd>;
addExtern<DAS_CALL_METHOD(_vpgatherqd_method_2827)>(*this, lib, "vpgatherqd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqd>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherqq_method_2829 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqq>;
addExtern<DAS_CALL_METHOD(_vpgatherqq_method_2829)>(*this, lib, "vpgatherqq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpgatherqq>::invoke")
	->args({"self","x1","addr","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphaddd_method_2831 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphaddd);
addExtern<DAS_CALL_METHOD(_vphaddd_method_2831)>(*this, lib, "vphaddd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphaddd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphaddsw_method_2833 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphaddsw);
addExtern<DAS_CALL_METHOD(_vphaddsw_method_2833)>(*this, lib, "vphaddsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphaddsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphaddw_method_2835 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphaddw);
addExtern<DAS_CALL_METHOD(_vphaddw_method_2835)>(*this, lib, "vphaddw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphaddw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphminposuw_method_2837 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphminposuw);
addExtern<DAS_CALL_METHOD(_vphminposuw_method_2837)>(*this, lib, "vphminposuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphminposuw))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphsubd_method_2839 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphsubd);
addExtern<DAS_CALL_METHOD(_vphsubd_method_2839)>(*this, lib, "vphsubd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphsubd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphsubsw_method_2841 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphsubsw);
addExtern<DAS_CALL_METHOD(_vphsubsw_method_2841)>(*this, lib, "vphsubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphsubsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vphsubw_method_2843 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vphsubw);
addExtern<DAS_CALL_METHOD(_vphsubw_method_2843)>(*this, lib, "vphsubw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vphsubw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpinsrb_method_2845 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpinsrb);
addExtern<DAS_CALL_METHOD(_vpinsrb_method_2845)>(*this, lib, "vpinsrb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpinsrb))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpinsrd_method_2847 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpinsrd);
addExtern<DAS_CALL_METHOD(_vpinsrd_method_2847)>(*this, lib, "vpinsrd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpinsrd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpinsrq_method_2849 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpinsrq);
addExtern<DAS_CALL_METHOD(_vpinsrq_method_2849)>(*this, lib, "vpinsrq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpinsrq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpinsrw_method_2851 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpinsrw);
addExtern<DAS_CALL_METHOD(_vpinsrw_method_2851)>(*this, lib, "vpinsrw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpinsrw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaddubsw_method_2853 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaddubsw);
addExtern<DAS_CALL_METHOD(_vpmaddubsw_method_2853)>(*this, lib, "vpmaddubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaddubsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaddwd_method_2855 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaddwd);
addExtern<DAS_CALL_METHOD(_vpmaddwd_method_2855)>(*this, lib, "vpmaddwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaddwd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaskmovd_method_2857 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovd>;
addExtern<DAS_CALL_METHOD(_vpmaskmovd_method_2857)>(*this, lib, "vpmaskmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovd>::invoke")
	->args({"self","addr","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaskmovd_method_2859 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovd>;
addExtern<DAS_CALL_METHOD(_vpmaskmovd_method_2859)>(*this, lib, "vpmaskmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovd>::invoke")
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaskmovq_method_2861 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovq>;
addExtern<DAS_CALL_METHOD(_vpmaskmovq_method_2861)>(*this, lib, "vpmaskmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmaskmovq>::invoke")
	->args({"self","addr","x1","x2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaskmovq_method_2863 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovq>;
addExtern<DAS_CALL_METHOD(_vpmaskmovq_method_2863)>(*this, lib, "vpmaskmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpmaskmovq>::invoke")
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxsb_method_2865 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxsb);
addExtern<DAS_CALL_METHOD(_vpmaxsb_method_2865)>(*this, lib, "vpmaxsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxsb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxsd_method_2867 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxsd);
addExtern<DAS_CALL_METHOD(_vpmaxsd_method_2867)>(*this, lib, "vpmaxsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxsd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxsw_method_2869 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxsw);
addExtern<DAS_CALL_METHOD(_vpmaxsw_method_2869)>(*this, lib, "vpmaxsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxub_method_2871 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxub);
addExtern<DAS_CALL_METHOD(_vpmaxub_method_2871)>(*this, lib, "vpmaxub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxub))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxud_method_2873 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxud);
addExtern<DAS_CALL_METHOD(_vpmaxud_method_2873)>(*this, lib, "vpmaxud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxud))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxuw_method_2875 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxuw);
addExtern<DAS_CALL_METHOD(_vpmaxuw_method_2875)>(*this, lib, "vpmaxuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxuw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminsb_method_2877 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminsb);
addExtern<DAS_CALL_METHOD(_vpminsb_method_2877)>(*this, lib, "vpminsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminsb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminsd_method_2879 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminsd);
addExtern<DAS_CALL_METHOD(_vpminsd_method_2879)>(*this, lib, "vpminsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminsd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminsw_method_2881 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminsw);
addExtern<DAS_CALL_METHOD(_vpminsw_method_2881)>(*this, lib, "vpminsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminub_method_2883 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminub);
addExtern<DAS_CALL_METHOD(_vpminub_method_2883)>(*this, lib, "vpminub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminub))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminud_method_2885 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminud);
addExtern<DAS_CALL_METHOD(_vpminud_method_2885)>(*this, lib, "vpminud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminud))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminuw_method_2887 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminuw);
addExtern<DAS_CALL_METHOD(_vpminuw_method_2887)>(*this, lib, "vpminuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminuw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovmskb_method_2889 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovmskb);
addExtern<DAS_CALL_METHOD(_vpmovmskb_method_2889)>(*this, lib, "vpmovmskb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovmskb))
	->args({"self","r","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxbd_method_2891 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxbd);
addExtern<DAS_CALL_METHOD(_vpmovsxbd_method_2891)>(*this, lib, "vpmovsxbd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxbd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxbq_method_2893 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxbq);
addExtern<DAS_CALL_METHOD(_vpmovsxbq_method_2893)>(*this, lib, "vpmovsxbq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxbq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxbw_method_2895 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxbw);
addExtern<DAS_CALL_METHOD(_vpmovsxbw_method_2895)>(*this, lib, "vpmovsxbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxbw))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxdq_method_2897 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxdq);
addExtern<DAS_CALL_METHOD(_vpmovsxdq_method_2897)>(*this, lib, "vpmovsxdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxdq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxwd_method_2899 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxwd);
addExtern<DAS_CALL_METHOD(_vpmovsxwd_method_2899)>(*this, lib, "vpmovsxwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxwd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsxwq_method_2901 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsxwq);
addExtern<DAS_CALL_METHOD(_vpmovsxwq_method_2901)>(*this, lib, "vpmovsxwq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsxwq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxbd_method_2903 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxbd);
addExtern<DAS_CALL_METHOD(_vpmovzxbd_method_2903)>(*this, lib, "vpmovzxbd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxbd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxbq_method_2905 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxbq);
addExtern<DAS_CALL_METHOD(_vpmovzxbq_method_2905)>(*this, lib, "vpmovzxbq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxbq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxbw_method_2907 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxbw);
addExtern<DAS_CALL_METHOD(_vpmovzxbw_method_2907)>(*this, lib, "vpmovzxbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxbw))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxdq_method_2909 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxdq);
addExtern<DAS_CALL_METHOD(_vpmovzxdq_method_2909)>(*this, lib, "vpmovzxdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxdq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxwd_method_2911 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxwd);
addExtern<DAS_CALL_METHOD(_vpmovzxwd_method_2911)>(*this, lib, "vpmovzxwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxwd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovzxwq_method_2913 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovzxwq);
addExtern<DAS_CALL_METHOD(_vpmovzxwq_method_2913)>(*this, lib, "vpmovzxwq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovzxwq))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmuldq_method_2915 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmuldq);
addExtern<DAS_CALL_METHOD(_vpmuldq_method_2915)>(*this, lib, "vpmuldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmuldq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmulhrsw_method_2917 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmulhrsw);
addExtern<DAS_CALL_METHOD(_vpmulhrsw_method_2917)>(*this, lib, "vpmulhrsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmulhrsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmulhuw_method_2919 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmulhuw);
addExtern<DAS_CALL_METHOD(_vpmulhuw_method_2919)>(*this, lib, "vpmulhuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmulhuw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmulhw_method_2921 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmulhw);
addExtern<DAS_CALL_METHOD(_vpmulhw_method_2921)>(*this, lib, "vpmulhw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmulhw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmulld_method_2923 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmulld);
addExtern<DAS_CALL_METHOD(_vpmulld_method_2923)>(*this, lib, "vpmulld",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmulld))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmullw_method_2925 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmullw);
addExtern<DAS_CALL_METHOD(_vpmullw_method_2925)>(*this, lib, "vpmullw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmullw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmuludq_method_2927 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmuludq);
addExtern<DAS_CALL_METHOD(_vpmuludq_method_2927)>(*this, lib, "vpmuludq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmuludq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpor_method_2929 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpor);
addExtern<DAS_CALL_METHOD(_vpor_method_2929)>(*this, lib, "vpor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpor))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsadbw_method_2931 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsadbw);
addExtern<DAS_CALL_METHOD(_vpsadbw_method_2931)>(*this, lib, "vpsadbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsadbw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshufb_method_2933 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshufb);
addExtern<DAS_CALL_METHOD(_vpshufb_method_2933)>(*this, lib, "vpshufb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshufb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshufd_method_2935 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshufd);
addExtern<DAS_CALL_METHOD(_vpshufd_method_2935)>(*this, lib, "vpshufd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshufd))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshufhw_method_2937 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshufhw);
addExtern<DAS_CALL_METHOD(_vpshufhw_method_2937)>(*this, lib, "vpshufhw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshufhw))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshuflw_method_2939 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshuflw);
addExtern<DAS_CALL_METHOD(_vpshuflw_method_2939)>(*this, lib, "vpshuflw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshuflw))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsignb_method_2941 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsignb);
addExtern<DAS_CALL_METHOD(_vpsignb_method_2941)>(*this, lib, "vpsignb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsignb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsignd_method_2943 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsignd);
addExtern<DAS_CALL_METHOD(_vpsignd_method_2943)>(*this, lib, "vpsignd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsignd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsignw_method_2945 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsignw);
addExtern<DAS_CALL_METHOD(_vpsignw_method_2945)>(*this, lib, "vpsignw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsignw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpslld_method_2947 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpslld>;
addExtern<DAS_CALL_METHOD(_vpslld_method_2947)>(*this, lib, "vpslld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpslld>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpslld_method_2949 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpslld>;
addExtern<DAS_CALL_METHOD(_vpslld_method_2949)>(*this, lib, "vpslld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpslld>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpslldq_method_2951 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpslldq);
addExtern<DAS_CALL_METHOD(_vpslldq_method_2951)>(*this, lib, "vpslldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpslldq))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllq_method_2953 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsllq>;
addExtern<DAS_CALL_METHOD(_vpsllq_method_2953)>(*this, lib, "vpsllq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsllq>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllq_method_2955 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllq>;
addExtern<DAS_CALL_METHOD(_vpsllq_method_2955)>(*this, lib, "vpsllq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllq>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllvd_method_2957 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsllvd);
addExtern<DAS_CALL_METHOD(_vpsllvd_method_2957)>(*this, lib, "vpsllvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsllvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllvq_method_2959 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsllvq);
addExtern<DAS_CALL_METHOD(_vpsllvq_method_2959)>(*this, lib, "vpsllvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsllvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllw_method_2961 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsllw>;
addExtern<DAS_CALL_METHOD(_vpsllw_method_2961)>(*this, lib, "vpsllw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsllw>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllw_method_2963 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllw>;
addExtern<DAS_CALL_METHOD(_vpsllw_method_2963)>(*this, lib, "vpsllw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllw>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrad_method_2965 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrad>;
addExtern<DAS_CALL_METHOD(_vpsrad_method_2965)>(*this, lib, "vpsrad",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrad>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrad_method_2967 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrad>;
addExtern<DAS_CALL_METHOD(_vpsrad_method_2967)>(*this, lib, "vpsrad",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrad>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsravd_method_2969 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsravd);
addExtern<DAS_CALL_METHOD(_vpsravd_method_2969)>(*this, lib, "vpsravd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsravd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsraw_method_2971 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsraw>;
addExtern<DAS_CALL_METHOD(_vpsraw_method_2971)>(*this, lib, "vpsraw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsraw>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsraw_method_2973 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraw>;
addExtern<DAS_CALL_METHOD(_vpsraw_method_2973)>(*this, lib, "vpsraw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraw>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrld_method_2975 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrld>;
addExtern<DAS_CALL_METHOD(_vpsrld_method_2975)>(*this, lib, "vpsrld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrld>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrld_method_2977 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrld>;
addExtern<DAS_CALL_METHOD(_vpsrld_method_2977)>(*this, lib, "vpsrld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrld>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrldq_method_2979 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsrldq);
addExtern<DAS_CALL_METHOD(_vpsrldq_method_2979)>(*this, lib, "vpsrldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsrldq))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlq_method_2981 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrlq>;
addExtern<DAS_CALL_METHOD(_vpsrlq_method_2981)>(*this, lib, "vpsrlq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrlq>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlq_method_2983 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlq>;
addExtern<DAS_CALL_METHOD(_vpsrlq_method_2983)>(*this, lib, "vpsrlq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlq>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlvd_method_2985 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsrlvd);
addExtern<DAS_CALL_METHOD(_vpsrlvd_method_2985)>(*this, lib, "vpsrlvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsrlvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlvq_method_2987 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsrlvq);
addExtern<DAS_CALL_METHOD(_vpsrlvq_method_2987)>(*this, lib, "vpsrlvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsrlvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlw_method_2989 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrlw>;
addExtern<DAS_CALL_METHOD(_vpsrlw_method_2989)>(*this, lib, "vpsrlw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsrlw>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlw_method_2991 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlw>;
addExtern<DAS_CALL_METHOD(_vpsrlw_method_2991)>(*this, lib, "vpsrlw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlw>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubb_method_2993 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubb);
addExtern<DAS_CALL_METHOD(_vpsubb_method_2993)>(*this, lib, "vpsubb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubd_method_2995 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubd);
addExtern<DAS_CALL_METHOD(_vpsubd_method_2995)>(*this, lib, "vpsubd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubq_method_2997 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubq);
addExtern<DAS_CALL_METHOD(_vpsubq_method_2997)>(*this, lib, "vpsubq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubsb_method_2999 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubsb);
addExtern<DAS_CALL_METHOD(_vpsubsb_method_2999)>(*this, lib, "vpsubsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubsb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubsw_method_3001 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubsw);
addExtern<DAS_CALL_METHOD(_vpsubsw_method_3001)>(*this, lib, "vpsubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubsw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubusb_method_3003 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubusb);
addExtern<DAS_CALL_METHOD(_vpsubusb_method_3003)>(*this, lib, "vpsubusb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubusb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubusw_method_3005 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubusw);
addExtern<DAS_CALL_METHOD(_vpsubusw_method_3005)>(*this, lib, "vpsubusw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubusw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsubw_method_3007 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsubw);
addExtern<DAS_CALL_METHOD(_vpsubw_method_3007)>(*this, lib, "vpsubw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsubw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptest_method_3009 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptest);
addExtern<DAS_CALL_METHOD(_vptest_method_3009)>(*this, lib, "vptest",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptest))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpckhbw_method_3011 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpckhbw);
addExtern<DAS_CALL_METHOD(_vpunpckhbw_method_3011)>(*this, lib, "vpunpckhbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpckhbw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpckhdq_method_3013 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpckhdq);
addExtern<DAS_CALL_METHOD(_vpunpckhdq_method_3013)>(*this, lib, "vpunpckhdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpckhdq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpckhqdq_method_3015 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpckhqdq);
addExtern<DAS_CALL_METHOD(_vpunpckhqdq_method_3015)>(*this, lib, "vpunpckhqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpckhqdq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpckhwd_method_3017 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpckhwd);
addExtern<DAS_CALL_METHOD(_vpunpckhwd_method_3017)>(*this, lib, "vpunpckhwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpckhwd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpcklbw_method_3019 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpcklbw);
addExtern<DAS_CALL_METHOD(_vpunpcklbw_method_3019)>(*this, lib, "vpunpcklbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpcklbw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpckldq_method_3021 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpckldq);
addExtern<DAS_CALL_METHOD(_vpunpckldq_method_3021)>(*this, lib, "vpunpckldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpckldq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpcklqdq_method_3023 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpcklqdq);
addExtern<DAS_CALL_METHOD(_vpunpcklqdq_method_3023)>(*this, lib, "vpunpcklqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpcklqdq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpunpcklwd_method_3025 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpunpcklwd);
addExtern<DAS_CALL_METHOD(_vpunpcklwd_method_3025)>(*this, lib, "vpunpcklwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpunpcklwd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpxor_method_3027 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpxor);
addExtern<DAS_CALL_METHOD(_vpxor_method_3027)>(*this, lib, "vpxor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpxor))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcpps_method_3029 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcpps);
addExtern<DAS_CALL_METHOD(_vrcpps_method_3029)>(*this, lib, "vrcpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcpps))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcpss_method_3031 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcpss);
addExtern<DAS_CALL_METHOD(_vrcpss_method_3031)>(*this, lib, "vrcpss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcpss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vroundpd_method_3033 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vroundpd);
addExtern<DAS_CALL_METHOD(_vroundpd_method_3033)>(*this, lib, "vroundpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vroundpd))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vroundps_method_3035 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vroundps);
addExtern<DAS_CALL_METHOD(_vroundps_method_3035)>(*this, lib, "vroundps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vroundps))
	->args({"self","xm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vroundsd_method_3037 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vroundsd);
addExtern<DAS_CALL_METHOD(_vroundsd_method_3037)>(*this, lib, "vroundsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vroundsd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vroundss_method_3039 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vroundss);
addExtern<DAS_CALL_METHOD(_vroundss_method_3039)>(*this, lib, "vroundss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vroundss))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrtps_method_3041 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrtps);
addExtern<DAS_CALL_METHOD(_vrsqrtps_method_3041)>(*this, lib, "vrsqrtps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrtps))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrtss_method_3043 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrtss);
addExtern<DAS_CALL_METHOD(_vrsqrtss_method_3043)>(*this, lib, "vrsqrtss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrtss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vshufpd_method_3045 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshufpd);
addExtern<DAS_CALL_METHOD(_vshufpd_method_3045)>(*this, lib, "vshufpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshufpd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vshufps_method_3047 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshufps);
addExtern<DAS_CALL_METHOD(_vshufps_method_3047)>(*this, lib, "vshufps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshufps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtpd_method_3049 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtpd);
addExtern<DAS_CALL_METHOD(_vsqrtpd_method_3049)>(*this, lib, "vsqrtpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtpd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtps_method_3051 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtps);
addExtern<DAS_CALL_METHOD(_vsqrtps_method_3051)>(*this, lib, "vsqrtps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtps))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtsd_method_3053 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtsd);
addExtern<DAS_CALL_METHOD(_vsqrtsd_method_3053)>(*this, lib, "vsqrtsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtsd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtss_method_3055 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtss);
addExtern<DAS_CALL_METHOD(_vsqrtss_method_3055)>(*this, lib, "vsqrtss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vstmxcsr_method_3057 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vstmxcsr);
addExtern<DAS_CALL_METHOD(_vstmxcsr_method_3057)>(*this, lib, "vstmxcsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vstmxcsr))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubpd_method_3059 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubpd);
addExtern<DAS_CALL_METHOD(_vsubpd_method_3059)>(*this, lib, "vsubpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubps_method_3061 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubps);
addExtern<DAS_CALL_METHOD(_vsubps_method_3061)>(*this, lib, "vsubps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubsd_method_3063 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubsd);
addExtern<DAS_CALL_METHOD(_vsubsd_method_3063)>(*this, lib, "vsubsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubsd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubss_method_3065 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubss);
addExtern<DAS_CALL_METHOD(_vsubss_method_3065)>(*this, lib, "vsubss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubss))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vtestpd_method_3067 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vtestpd);
addExtern<DAS_CALL_METHOD(_vtestpd_method_3067)>(*this, lib, "vtestpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vtestpd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vtestps_method_3069 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vtestps);
addExtern<DAS_CALL_METHOD(_vtestps_method_3069)>(*this, lib, "vtestps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vtestps))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vucomisd_method_3071 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vucomisd);
addExtern<DAS_CALL_METHOD(_vucomisd_method_3071)>(*this, lib, "vucomisd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vucomisd))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vucomiss_method_3073 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vucomiss);
addExtern<DAS_CALL_METHOD(_vucomiss_method_3073)>(*this, lib, "vucomiss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vucomiss))
	->args({"self","xm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vunpckhpd_method_3075 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vunpckhpd);
addExtern<DAS_CALL_METHOD(_vunpckhpd_method_3075)>(*this, lib, "vunpckhpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vunpckhpd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vunpckhps_method_3077 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vunpckhps);
addExtern<DAS_CALL_METHOD(_vunpckhps_method_3077)>(*this, lib, "vunpckhps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vunpckhps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vunpcklpd_method_3079 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vunpcklpd);
addExtern<DAS_CALL_METHOD(_vunpcklpd_method_3079)>(*this, lib, "vunpcklpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vunpcklpd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vunpcklps_method_3081 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vunpcklps);
addExtern<DAS_CALL_METHOD(_vunpcklps_method_3081)>(*this, lib, "vunpcklps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vunpcklps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vxorpd_method_3083 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vxorpd);
addExtern<DAS_CALL_METHOD(_vxorpd_method_3083)>(*this, lib, "vxorpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vxorpd))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vxorps_method_3085 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vxorps);
addExtern<DAS_CALL_METHOD(_vxorps_method_3085)>(*this, lib, "vxorps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vxorps))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vzeroall_method_3087 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vzeroall);
addExtern<DAS_CALL_METHOD(_vzeroall_method_3087)>(*this, lib, "vzeroall",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vzeroall))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vzeroupper_method_3089 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vzeroupper);
addExtern<DAS_CALL_METHOD(_vzeroupper_method_3089)>(*this, lib, "vzeroupper",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vzeroupper))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _wait_method_3091 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::wait);
addExtern<DAS_CALL_METHOD(_wait_method_3091)>(*this, lib, "wait",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::wait))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _wbinvd_method_3093 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::wbinvd);
addExtern<DAS_CALL_METHOD(_wbinvd_method_3093)>(*this, lib, "wbinvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::wbinvd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _wrmsr_method_3095 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::wrmsr);
addExtern<DAS_CALL_METHOD(_wrmsr_method_3095)>(*this, lib, "wrmsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::wrmsr))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xadd_method_3097 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xadd);
addExtern<DAS_CALL_METHOD(_xadd_method_3097)>(*this, lib, "xadd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xadd))
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xgetbv_method_3099 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xgetbv);
addExtern<DAS_CALL_METHOD(_xgetbv_method_3099)>(*this, lib, "xgetbv",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xgetbv))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xlatb_method_3101 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xlatb);
addExtern<DAS_CALL_METHOD(_xlatb_method_3101)>(*this, lib, "xlatb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xlatb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xor__method_3103 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::xor_>;
addExtern<DAS_CALL_METHOD(_xor__method_3103)>(*this, lib, "xor_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::xor_>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xor__method_3105 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::xor_>;
addExtern<DAS_CALL_METHOD(_xor__method_3105)>(*this, lib, "xor_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::xor_>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xorpd_method_3107 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xorpd);
addExtern<DAS_CALL_METHOD(_xorpd_method_3107)>(*this, lib, "xorpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xorpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _xorps_method_3109 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::xorps);
addExtern<DAS_CALL_METHOD(_xorps_method_3109)>(*this, lib, "xorps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::xorps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jecxz_method_3111 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::jecxz>;
addExtern<DAS_CALL_METHOD(_jecxz_method_3111)>(*this, lib, "jecxz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::jecxz>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jecxz_method_3113 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jecxz>;
addExtern<DAS_CALL_METHOD(_jecxz_method_3113)>(*this, lib, "jecxz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jecxz>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jrcxz_method_3115 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::jrcxz>;
addExtern<DAS_CALL_METHOD(_jrcxz_method_3115)>(*this, lib, "jrcxz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::jrcxz>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jrcxz_method_3117 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jrcxz>;
addExtern<DAS_CALL_METHOD(_jrcxz_method_3117)>(*this, lib, "jrcxz",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::jrcxz>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cdqe_method_3119 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cdqe);
addExtern<DAS_CALL_METHOD(_cdqe_method_3119)>(*this, lib, "cdqe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cdqe))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cqo_method_3121 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cqo);
addExtern<DAS_CALL_METHOD(_cqo_method_3121)>(*this, lib, "cqo",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cqo))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpsq_method_3123 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpsq);
addExtern<DAS_CALL_METHOD(_cmpsq_method_3123)>(*this, lib, "cmpsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpsq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _popfq_method_3125 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::popfq);
addExtern<DAS_CALL_METHOD(_popfq_method_3125)>(*this, lib, "popfq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::popfq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pushfq_method_3127 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pushfq);
addExtern<DAS_CALL_METHOD(_pushfq_method_3127)>(*this, lib, "pushfq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pushfq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _lodsq_method_3129 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::lodsq);
addExtern<DAS_CALL_METHOD(_lodsq_method_3129)>(*this, lib, "lodsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::lodsq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsq_method_3131 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsq);
addExtern<DAS_CALL_METHOD(_movsq_method_3131)>(*this, lib, "movsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _scasq_method_3133 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::scasq);
addExtern<DAS_CALL_METHOD(_scasq_method_3133)>(*this, lib, "scasq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::scasq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _stosq_method_3135 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::stosq);
addExtern<DAS_CALL_METHOD(_stosq_method_3135)>(*this, lib, "stosq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::stosq))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _syscall_method_3137 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::syscall);
addExtern<DAS_CALL_METHOD(_syscall_method_3137)>(*this, lib, "syscall",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::syscall))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sysret_method_3139 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sysret);
addExtern<DAS_CALL_METHOD(_sysret_method_3139)>(*this, lib, "sysret",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sysret))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cmpxchg16b_method_3141 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cmpxchg16b);
addExtern<DAS_CALL_METHOD(_cmpxchg16b_method_3141)>(*this, lib, "cmpxchg16b",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cmpxchg16b))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _fxrstor64_method_3143 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::fxrstor64);
addExtern<DAS_CALL_METHOD(_fxrstor64_method_3143)>(*this, lib, "fxrstor64",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::fxrstor64))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movq_method_3145 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq>;
addExtern<DAS_CALL_METHOD(_movq_method_3145)>(*this, lib, "movq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq>::invoke")
	->args({"self","reg","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movq_method_3147 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::movq>;
addExtern<DAS_CALL_METHOD(_movq_method_3147)>(*this, lib, "movq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::movq>::invoke")
	->args({"self","mmx","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsxd_method_3149 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsxd);
addExtern<DAS_CALL_METHOD(_movsxd_method_3149)>(*this, lib, "movsxd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsxd))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pextrq_method_3151 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pextrq);
addExtern<DAS_CALL_METHOD(_pextrq_method_3151)>(*this, lib, "pextrq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pextrq))
	->args({"self","op","xmm","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pinsrq_method_3153 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pinsrq);
addExtern<DAS_CALL_METHOD(_pinsrq_method_3153)>(*this, lib, "pinsrq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pinsrq))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtss2si_method_3155 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si>;
addExtern<DAS_CALL_METHOD(_vcvtss2si_method_3155)>(*this, lib, "vcvtss2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttss2si_method_3157 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si>;
addExtern<DAS_CALL_METHOD(_vcvttss2si_method_3157)>(*this, lib, "vcvttss2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsd2si_method_3159 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si>;
addExtern<DAS_CALL_METHOD(_vcvtsd2si_method_3159)>(*this, lib, "vcvtsd2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttsd2si_method_3161 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si>;
addExtern<DAS_CALL_METHOD(_vcvttsd2si_method_3161)>(*this, lib, "vcvttsd2si",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si>::invoke")
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovq_method_3163 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vmovq>;
addExtern<DAS_CALL_METHOD(_vmovq_method_3163)>(*this, lib, "vmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vmovq>::invoke")
	->args({"self","x","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovq_method_3165 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>;
addExtern<DAS_CALL_METHOD(_vmovq_method_3165)>(*this, lib, "vmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq>::invoke")
	->args({"self","r","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ldtilecfg_method_3167 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ldtilecfg);
addExtern<DAS_CALL_METHOD(_ldtilecfg_method_3167)>(*this, lib, "ldtilecfg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ldtilecfg))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sttilecfg_method_3169 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sttilecfg);
addExtern<DAS_CALL_METHOD(_sttilecfg_method_3169)>(*this, lib, "sttilecfg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sttilecfg))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tileloadd_method_3171 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tileloadd);
addExtern<DAS_CALL_METHOD(_tileloadd_method_3171)>(*this, lib, "tileloadd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tileloadd))
	->args({"self","tm","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tileloaddt1_method_3173 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tileloaddt1);
addExtern<DAS_CALL_METHOD(_tileloaddt1_method_3173)>(*this, lib, "tileloaddt1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tileloaddt1))
	->args({"self","tm","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tilerelease_method_3175 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tilerelease);
addExtern<DAS_CALL_METHOD(_tilerelease_method_3175)>(*this, lib, "tilerelease",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tilerelease))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tilestored_method_3177 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tilestored);
addExtern<DAS_CALL_METHOD(_tilestored_method_3177)>(*this, lib, "tilestored",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tilestored))
	->args({"self","addr","tm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tilezero_method_3179 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tilezero);
addExtern<DAS_CALL_METHOD(_tilezero_method_3179)>(*this, lib, "tilezero",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tilezero))
	->args({"self","Tmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tdpbssd_method_3181 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tdpbssd);
addExtern<DAS_CALL_METHOD(_tdpbssd_method_3181)>(*this, lib, "tdpbssd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tdpbssd))
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tdpbsud_method_3183 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tdpbsud);
addExtern<DAS_CALL_METHOD(_tdpbsud_method_3183)>(*this, lib, "tdpbsud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tdpbsud))
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tdpbusd_method_3185 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tdpbusd);
addExtern<DAS_CALL_METHOD(_tdpbusd_method_3185)>(*this, lib, "tdpbusd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tdpbusd))
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tdpbuud_method_3187 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tdpbuud);
addExtern<DAS_CALL_METHOD(_tdpbuud_method_3187)>(*this, lib, "tdpbuud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tdpbuud))
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _tdpbf16ps_method_3189 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::tdpbf16ps);
addExtern<DAS_CALL_METHOD(_tdpbf16ps_method_3189)>(*this, lib, "tdpbf16ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::tdpbf16ps))
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kaddb_method_3191 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kaddb);
addExtern<DAS_CALL_METHOD(_kaddb_method_3191)>(*this, lib, "kaddb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kaddb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kaddd_method_3193 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kaddd);
addExtern<DAS_CALL_METHOD(_kaddd_method_3193)>(*this, lib, "kaddd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kaddd))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kaddq_method_3195 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kaddq);
addExtern<DAS_CALL_METHOD(_kaddq_method_3195)>(*this, lib, "kaddq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kaddq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kaddw_method_3197 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kaddw);
addExtern<DAS_CALL_METHOD(_kaddw_method_3197)>(*this, lib, "kaddw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kaddw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandb_method_3199 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandb);
addExtern<DAS_CALL_METHOD(_kandb_method_3199)>(*this, lib, "kandb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandd_method_3201 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandd);
addExtern<DAS_CALL_METHOD(_kandd_method_3201)>(*this, lib, "kandd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandd))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandnb_method_3203 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandnb);
addExtern<DAS_CALL_METHOD(_kandnb_method_3203)>(*this, lib, "kandnb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandnb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandnd_method_3205 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandnd);
addExtern<DAS_CALL_METHOD(_kandnd_method_3205)>(*this, lib, "kandnd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandnd))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandnq_method_3207 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandnq);
addExtern<DAS_CALL_METHOD(_kandnq_method_3207)>(*this, lib, "kandnq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandnq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandnw_method_3209 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandnw);
addExtern<DAS_CALL_METHOD(_kandnw_method_3209)>(*this, lib, "kandnw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandnw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandq_method_3211 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandq);
addExtern<DAS_CALL_METHOD(_kandq_method_3211)>(*this, lib, "kandq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kandw_method_3213 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kandw);
addExtern<DAS_CALL_METHOD(_kandw_method_3213)>(*this, lib, "kandw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kandw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovb_method_3215 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb>;
addExtern<DAS_CALL_METHOD(_kmovb_method_3215)>(*this, lib, "kmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb>::invoke")
	->args({"self","addr","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovb_method_3217 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovb>;
addExtern<DAS_CALL_METHOD(_kmovb_method_3217)>(*this, lib, "kmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovb>::invoke")
	->args({"self","k","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovb_method_3219 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovb>;
addExtern<DAS_CALL_METHOD(_kmovb_method_3219)>(*this, lib, "kmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovb>::invoke")
	->args({"self","k","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovb_method_3221 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb>;
addExtern<DAS_CALL_METHOD(_kmovb_method_3221)>(*this, lib, "kmovb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb>::invoke")
	->args({"self","r","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovd_method_3223 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd>;
addExtern<DAS_CALL_METHOD(_kmovd_method_3223)>(*this, lib, "kmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd>::invoke")
	->args({"self","addr","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovd_method_3225 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovd>;
addExtern<DAS_CALL_METHOD(_kmovd_method_3225)>(*this, lib, "kmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovd>::invoke")
	->args({"self","k","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovd_method_3227 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovd>;
addExtern<DAS_CALL_METHOD(_kmovd_method_3227)>(*this, lib, "kmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovd>::invoke")
	->args({"self","k","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovd_method_3229 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd>;
addExtern<DAS_CALL_METHOD(_kmovd_method_3229)>(*this, lib, "kmovd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd>::invoke")
	->args({"self","r","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovq_method_3231 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq>;
addExtern<DAS_CALL_METHOD(_kmovq_method_3231)>(*this, lib, "kmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq>::invoke")
	->args({"self","addr","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovq_method_3233 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovq>;
addExtern<DAS_CALL_METHOD(_kmovq_method_3233)>(*this, lib, "kmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovq>::invoke")
	->args({"self","k","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovw_method_3235 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw>;
addExtern<DAS_CALL_METHOD(_kmovw_method_3235)>(*this, lib, "kmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw>::invoke")
	->args({"self","addr","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovw_method_3237 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovw>;
addExtern<DAS_CALL_METHOD(_kmovw_method_3237)>(*this, lib, "kmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovw>::invoke")
	->args({"self","k","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovw_method_3239 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovw>;
addExtern<DAS_CALL_METHOD(_kmovw_method_3239)>(*this, lib, "kmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovw>::invoke")
	->args({"self","k","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovw_method_3241 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw>;
addExtern<DAS_CALL_METHOD(_kmovw_method_3241)>(*this, lib, "kmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw>::invoke")
	->args({"self","r","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _knotb_method_3243 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::knotb);
addExtern<DAS_CALL_METHOD(_knotb_method_3243)>(*this, lib, "knotb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::knotb))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _knotd_method_3245 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::knotd);
addExtern<DAS_CALL_METHOD(_knotd_method_3245)>(*this, lib, "knotd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::knotd))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _knotq_method_3247 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::knotq);
addExtern<DAS_CALL_METHOD(_knotq_method_3247)>(*this, lib, "knotq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::knotq))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _knotw_method_3249 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::knotw);
addExtern<DAS_CALL_METHOD(_knotw_method_3249)>(*this, lib, "knotw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::knotw))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _korb_method_3251 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::korb);
addExtern<DAS_CALL_METHOD(_korb_method_3251)>(*this, lib, "korb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::korb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kord_method_3253 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kord);
addExtern<DAS_CALL_METHOD(_kord_method_3253)>(*this, lib, "kord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kord))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _korq_method_3255 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::korq);
addExtern<DAS_CALL_METHOD(_korq_method_3255)>(*this, lib, "korq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::korq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kortestb_method_3257 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kortestb);
addExtern<DAS_CALL_METHOD(_kortestb_method_3257)>(*this, lib, "kortestb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kortestb))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kortestd_method_3259 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kortestd);
addExtern<DAS_CALL_METHOD(_kortestd_method_3259)>(*this, lib, "kortestd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kortestd))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kortestq_method_3261 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kortestq);
addExtern<DAS_CALL_METHOD(_kortestq_method_3261)>(*this, lib, "kortestq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kortestq))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kortestw_method_3263 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kortestw);
addExtern<DAS_CALL_METHOD(_kortestw_method_3263)>(*this, lib, "kortestw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kortestw))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _korw_method_3265 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::korw);
addExtern<DAS_CALL_METHOD(_korw_method_3265)>(*this, lib, "korw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::korw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftlb_method_3267 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftlb);
addExtern<DAS_CALL_METHOD(_kshiftlb_method_3267)>(*this, lib, "kshiftlb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftlb))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftld_method_3269 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftld);
addExtern<DAS_CALL_METHOD(_kshiftld_method_3269)>(*this, lib, "kshiftld",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftld))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftlq_method_3271 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftlq);
addExtern<DAS_CALL_METHOD(_kshiftlq_method_3271)>(*this, lib, "kshiftlq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftlq))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftlw_method_3273 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftlw);
addExtern<DAS_CALL_METHOD(_kshiftlw_method_3273)>(*this, lib, "kshiftlw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftlw))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftrb_method_3275 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftrb);
addExtern<DAS_CALL_METHOD(_kshiftrb_method_3275)>(*this, lib, "kshiftrb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftrb))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftrd_method_3277 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftrd);
addExtern<DAS_CALL_METHOD(_kshiftrd_method_3277)>(*this, lib, "kshiftrd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftrd))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftrq_method_3279 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftrq);
addExtern<DAS_CALL_METHOD(_kshiftrq_method_3279)>(*this, lib, "kshiftrq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftrq))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kshiftrw_method_3281 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kshiftrw);
addExtern<DAS_CALL_METHOD(_kshiftrw_method_3281)>(*this, lib, "kshiftrw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kshiftrw))
	->args({"self","r1","r2","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ktestb_method_3283 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ktestb);
addExtern<DAS_CALL_METHOD(_ktestb_method_3283)>(*this, lib, "ktestb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ktestb))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ktestd_method_3285 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ktestd);
addExtern<DAS_CALL_METHOD(_ktestd_method_3285)>(*this, lib, "ktestd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ktestd))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ktestq_method_3287 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ktestq);
addExtern<DAS_CALL_METHOD(_ktestq_method_3287)>(*this, lib, "ktestq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ktestq))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ktestw_method_3289 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ktestw);
addExtern<DAS_CALL_METHOD(_ktestw_method_3289)>(*this, lib, "ktestw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ktestw))
	->args({"self","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kunpckbw_method_3291 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kunpckbw);
addExtern<DAS_CALL_METHOD(_kunpckbw_method_3291)>(*this, lib, "kunpckbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kunpckbw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kunpckdq_method_3293 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kunpckdq);
addExtern<DAS_CALL_METHOD(_kunpckdq_method_3293)>(*this, lib, "kunpckdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kunpckdq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kunpckwd_method_3295 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kunpckwd);
addExtern<DAS_CALL_METHOD(_kunpckwd_method_3295)>(*this, lib, "kunpckwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kunpckwd))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxnorb_method_3297 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxnorb);
addExtern<DAS_CALL_METHOD(_kxnorb_method_3297)>(*this, lib, "kxnorb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxnorb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxnord_method_3299 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxnord);
addExtern<DAS_CALL_METHOD(_kxnord_method_3299)>(*this, lib, "kxnord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxnord))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxnorq_method_3301 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxnorq);
addExtern<DAS_CALL_METHOD(_kxnorq_method_3301)>(*this, lib, "kxnorq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxnorq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxnorw_method_3303 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxnorw);
addExtern<DAS_CALL_METHOD(_kxnorw_method_3303)>(*this, lib, "kxnorw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxnorw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxorb_method_3305 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxorb);
addExtern<DAS_CALL_METHOD(_kxorb_method_3305)>(*this, lib, "kxorb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxorb))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxord_method_3307 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxord);
addExtern<DAS_CALL_METHOD(_kxord_method_3307)>(*this, lib, "kxord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxord))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxorq_method_3309 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxorq);
addExtern<DAS_CALL_METHOD(_kxorq_method_3309)>(*this, lib, "kxorq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxorq))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kxorw_method_3311 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::kxorw);
addExtern<DAS_CALL_METHOD(_kxorw_method_3311)>(*this, lib, "kxorw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::kxorw))
	->args({"self","r1","r2","r3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _v4fmaddps_method_3313 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::v4fmaddps);
addExtern<DAS_CALL_METHOD(_v4fmaddps_method_3313)>(*this, lib, "v4fmaddps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::v4fmaddps))
	->args({"self","z1","z2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _v4fmaddss_method_3315 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::v4fmaddss);
addExtern<DAS_CALL_METHOD(_v4fmaddss_method_3315)>(*this, lib, "v4fmaddss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::v4fmaddss))
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _v4fnmaddps_method_3317 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::v4fnmaddps);
addExtern<DAS_CALL_METHOD(_v4fnmaddps_method_3317)>(*this, lib, "v4fnmaddps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::v4fnmaddps))
	->args({"self","z1","z2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _v4fnmaddss_method_3319 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::v4fnmaddss);
addExtern<DAS_CALL_METHOD(_v4fnmaddss_method_3319)>(*this, lib, "v4fnmaddss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::v4fnmaddss))
	->args({"self","x1","x2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddph_method_3321 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddph);
addExtern<DAS_CALL_METHOD(_vaddph_method_3321)>(*this, lib, "vaddph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vaddsh_method_3323 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vaddsh);
addExtern<DAS_CALL_METHOD(_vaddsh_method_3323)>(*this, lib, "vaddsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vaddsh))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _valignd_method_3325 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::valignd);
addExtern<DAS_CALL_METHOD(_valignd_method_3325)>(*this, lib, "valignd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::valignd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _valignq_method_3327 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::valignq);
addExtern<DAS_CALL_METHOD(_valignq_method_3327)>(*this, lib, "valignq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::valignq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendmpd_method_3329 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendmpd);
addExtern<DAS_CALL_METHOD(_vblendmpd_method_3329)>(*this, lib, "vblendmpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendmpd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vblendmps_method_3331 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vblendmps);
addExtern<DAS_CALL_METHOD(_vblendmps_method_3331)>(*this, lib, "vblendmps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vblendmps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf32x2_method_3333 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf32x2);
addExtern<DAS_CALL_METHOD(_vbroadcastf32x2_method_3333)>(*this, lib, "vbroadcastf32x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf32x2))
	->args({"self","y","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf32x4_method_3335 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf32x4);
addExtern<DAS_CALL_METHOD(_vbroadcastf32x4_method_3335)>(*this, lib, "vbroadcastf32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf32x4))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf32x8_method_3337 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf32x8);
addExtern<DAS_CALL_METHOD(_vbroadcastf32x8_method_3337)>(*this, lib, "vbroadcastf32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf32x8))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf64x2_method_3339 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf64x2);
addExtern<DAS_CALL_METHOD(_vbroadcastf64x2_method_3339)>(*this, lib, "vbroadcastf64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf64x2))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcastf64x4_method_3341 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcastf64x4);
addExtern<DAS_CALL_METHOD(_vbroadcastf64x4_method_3341)>(*this, lib, "vbroadcastf64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcastf64x4))
	->args({"self","y","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti32x2_method_3343 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti32x2);
addExtern<DAS_CALL_METHOD(_vbroadcasti32x2_method_3343)>(*this, lib, "vbroadcasti32x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti32x2))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti32x4_method_3345 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti32x4);
addExtern<DAS_CALL_METHOD(_vbroadcasti32x4_method_3345)>(*this, lib, "vbroadcasti32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti32x4))
	->args({"self","y","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti32x8_method_3347 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti32x8);
addExtern<DAS_CALL_METHOD(_vbroadcasti32x8_method_3347)>(*this, lib, "vbroadcasti32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti32x8))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti64x2_method_3349 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti64x2);
addExtern<DAS_CALL_METHOD(_vbroadcasti64x2_method_3349)>(*this, lib, "vbroadcasti64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti64x2))
	->args({"self","y","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vbroadcasti64x4_method_3351 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vbroadcasti64x4);
addExtern<DAS_CALL_METHOD(_vbroadcasti64x4_method_3351)>(*this, lib, "vbroadcasti64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vbroadcasti64x4))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ospd_method_3353 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ospd_method_3353)>(*this, lib, "vcmpeq_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_osps_method_3355 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_osps_method_3355)>(*this, lib, "vcmpeq_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ossd_method_3357 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ossd_method_3357)>(*this, lib, "vcmpeq_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_osss_method_3359 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_osss_method_3359)>(*this, lib, "vcmpeq_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqpd_method_3361 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqpd_method_3361)>(*this, lib, "vcmpeq_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqps_method_3363 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqps_method_3363)>(*this, lib, "vcmpeq_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqsd_method_3365 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqsd_method_3365)>(*this, lib, "vcmpeq_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uqss_method_3367 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uqss_method_3367)>(*this, lib, "vcmpeq_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_uspd_method_3369 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_uspd_method_3369)>(*this, lib, "vcmpeq_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_usps_method_3371 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps>;
addExtern<DAS_CALL_METHOD(_vcmpeq_usps_method_3371)>(*this, lib, "vcmpeq_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_ussd_method_3373 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd>;
addExtern<DAS_CALL_METHOD(_vcmpeq_ussd_method_3373)>(*this, lib, "vcmpeq_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeq_usss_method_3375 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss>;
addExtern<DAS_CALL_METHOD(_vcmpeq_usss_method_3375)>(*this, lib, "vcmpeq_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqpd_method_3377 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd>;
addExtern<DAS_CALL_METHOD(_vcmpeqpd_method_3377)>(*this, lib, "vcmpeqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqps_method_3379 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps>;
addExtern<DAS_CALL_METHOD(_vcmpeqps_method_3379)>(*this, lib, "vcmpeqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqsd_method_3381 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd>;
addExtern<DAS_CALL_METHOD(_vcmpeqsd_method_3381)>(*this, lib, "vcmpeqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpeqss_method_3383 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss>;
addExtern<DAS_CALL_METHOD(_vcmpeqss_method_3383)>(*this, lib, "vcmpeqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_ospd_method_3385 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_ospd_method_3385)>(*this, lib, "vcmpfalse_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_osps_method_3387 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_osps_method_3387)>(*this, lib, "vcmpfalse_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_ossd_method_3389 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_ossd_method_3389)>(*this, lib, "vcmpfalse_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalse_osss_method_3391 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss>;
addExtern<DAS_CALL_METHOD(_vcmpfalse_osss_method_3391)>(*this, lib, "vcmpfalse_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsepd_method_3393 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd>;
addExtern<DAS_CALL_METHOD(_vcmpfalsepd_method_3393)>(*this, lib, "vcmpfalsepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalseps_method_3395 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps>;
addExtern<DAS_CALL_METHOD(_vcmpfalseps_method_3395)>(*this, lib, "vcmpfalseps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsesd_method_3397 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd>;
addExtern<DAS_CALL_METHOD(_vcmpfalsesd_method_3397)>(*this, lib, "vcmpfalsesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpfalsess_method_3399 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess>;
addExtern<DAS_CALL_METHOD(_vcmpfalsess_method_3399)>(*this, lib, "vcmpfalsess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqpd_method_3401 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqpd_method_3401)>(*this, lib, "vcmpge_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqps_method_3403 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqps_method_3403)>(*this, lib, "vcmpge_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqsd_method_3405 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqsd_method_3405)>(*this, lib, "vcmpge_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpge_oqss_method_3407 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpge_oqss_method_3407)>(*this, lib, "vcmpge_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgepd_method_3409 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd>;
addExtern<DAS_CALL_METHOD(_vcmpgepd_method_3409)>(*this, lib, "vcmpgepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgeps_method_3411 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps>;
addExtern<DAS_CALL_METHOD(_vcmpgeps_method_3411)>(*this, lib, "vcmpgeps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgesd_method_3413 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd>;
addExtern<DAS_CALL_METHOD(_vcmpgesd_method_3413)>(*this, lib, "vcmpgesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgess_method_3415 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess>;
addExtern<DAS_CALL_METHOD(_vcmpgess_method_3415)>(*this, lib, "vcmpgess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqpd_method_3417 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqpd_method_3417)>(*this, lib, "vcmpgt_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqps_method_3419 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqps_method_3419)>(*this, lib, "vcmpgt_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqsd_method_3421 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqsd_method_3421)>(*this, lib, "vcmpgt_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgt_oqss_method_3423 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpgt_oqss_method_3423)>(*this, lib, "vcmpgt_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtpd_method_3425 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd>;
addExtern<DAS_CALL_METHOD(_vcmpgtpd_method_3425)>(*this, lib, "vcmpgtpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtps_method_3427 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps>;
addExtern<DAS_CALL_METHOD(_vcmpgtps_method_3427)>(*this, lib, "vcmpgtps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtsd_method_3429 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd>;
addExtern<DAS_CALL_METHOD(_vcmpgtsd_method_3429)>(*this, lib, "vcmpgtsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpgtss_method_3431 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss>;
addExtern<DAS_CALL_METHOD(_vcmpgtss_method_3431)>(*this, lib, "vcmpgtss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqpd_method_3433 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmple_oqpd_method_3433)>(*this, lib, "vcmple_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqps_method_3435 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps>;
addExtern<DAS_CALL_METHOD(_vcmple_oqps_method_3435)>(*this, lib, "vcmple_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqsd_method_3437 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmple_oqsd_method_3437)>(*this, lib, "vcmple_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmple_oqss_method_3439 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss>;
addExtern<DAS_CALL_METHOD(_vcmple_oqss_method_3439)>(*this, lib, "vcmple_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplepd_method_3441 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd>;
addExtern<DAS_CALL_METHOD(_vcmplepd_method_3441)>(*this, lib, "vcmplepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpleps_method_3443 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps>;
addExtern<DAS_CALL_METHOD(_vcmpleps_method_3443)>(*this, lib, "vcmpleps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplesd_method_3445 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd>;
addExtern<DAS_CALL_METHOD(_vcmplesd_method_3445)>(*this, lib, "vcmplesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpless_method_3447 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless>;
addExtern<DAS_CALL_METHOD(_vcmpless_method_3447)>(*this, lib, "vcmpless",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqpd_method_3449 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqpd_method_3449)>(*this, lib, "vcmplt_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqps_method_3451 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqps_method_3451)>(*this, lib, "vcmplt_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqsd_method_3453 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqsd_method_3453)>(*this, lib, "vcmplt_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmplt_oqss_method_3455 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss>;
addExtern<DAS_CALL_METHOD(_vcmplt_oqss_method_3455)>(*this, lib, "vcmplt_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltpd_method_3457 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd>;
addExtern<DAS_CALL_METHOD(_vcmpltpd_method_3457)>(*this, lib, "vcmpltpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltps_method_3459 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps>;
addExtern<DAS_CALL_METHOD(_vcmpltps_method_3459)>(*this, lib, "vcmpltps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltsd_method_3461 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd>;
addExtern<DAS_CALL_METHOD(_vcmpltsd_method_3461)>(*this, lib, "vcmpltsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpltss_method_3463 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss>;
addExtern<DAS_CALL_METHOD(_vcmpltss_method_3463)>(*this, lib, "vcmpltss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqpd_method_3465 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqpd_method_3465)>(*this, lib, "vcmpneq_oqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqps_method_3467 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqps_method_3467)>(*this, lib, "vcmpneq_oqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqsd_method_3469 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqsd_method_3469)>(*this, lib, "vcmpneq_oqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_oqss_method_3471 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_oqss_method_3471)>(*this, lib, "vcmpneq_oqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ospd_method_3473 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ospd_method_3473)>(*this, lib, "vcmpneq_ospd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_osps_method_3475 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_osps_method_3475)>(*this, lib, "vcmpneq_osps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ossd_method_3477 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ossd_method_3477)>(*this, lib, "vcmpneq_ossd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_osss_method_3479 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_osss_method_3479)>(*this, lib, "vcmpneq_osss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_uspd_method_3481 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_uspd_method_3481)>(*this, lib, "vcmpneq_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_usps_method_3483 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps>;
addExtern<DAS_CALL_METHOD(_vcmpneq_usps_method_3483)>(*this, lib, "vcmpneq_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_ussd_method_3485 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd>;
addExtern<DAS_CALL_METHOD(_vcmpneq_ussd_method_3485)>(*this, lib, "vcmpneq_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneq_usss_method_3487 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss>;
addExtern<DAS_CALL_METHOD(_vcmpneq_usss_method_3487)>(*this, lib, "vcmpneq_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqpd_method_3489 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd>;
addExtern<DAS_CALL_METHOD(_vcmpneqpd_method_3489)>(*this, lib, "vcmpneqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqps_method_3491 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps>;
addExtern<DAS_CALL_METHOD(_vcmpneqps_method_3491)>(*this, lib, "vcmpneqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqsd_method_3493 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd>;
addExtern<DAS_CALL_METHOD(_vcmpneqsd_method_3493)>(*this, lib, "vcmpneqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpneqss_method_3495 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss>;
addExtern<DAS_CALL_METHOD(_vcmpneqss_method_3495)>(*this, lib, "vcmpneqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqpd_method_3497 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqpd_method_3497)>(*this, lib, "vcmpnge_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqps_method_3499 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqps_method_3499)>(*this, lib, "vcmpnge_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqsd_method_3501 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqsd_method_3501)>(*this, lib, "vcmpnge_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnge_uqss_method_3503 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnge_uqss_method_3503)>(*this, lib, "vcmpnge_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngepd_method_3505 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd>;
addExtern<DAS_CALL_METHOD(_vcmpngepd_method_3505)>(*this, lib, "vcmpngepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngeps_method_3507 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps>;
addExtern<DAS_CALL_METHOD(_vcmpngeps_method_3507)>(*this, lib, "vcmpngeps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngesd_method_3509 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd>;
addExtern<DAS_CALL_METHOD(_vcmpngesd_method_3509)>(*this, lib, "vcmpngesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngess_method_3511 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess>;
addExtern<DAS_CALL_METHOD(_vcmpngess_method_3511)>(*this, lib, "vcmpngess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqpd_method_3513 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqpd_method_3513)>(*this, lib, "vcmpngt_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqps_method_3515 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqps_method_3515)>(*this, lib, "vcmpngt_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqsd_method_3517 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqsd_method_3517)>(*this, lib, "vcmpngt_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngt_uqss_method_3519 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpngt_uqss_method_3519)>(*this, lib, "vcmpngt_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtpd_method_3521 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd>;
addExtern<DAS_CALL_METHOD(_vcmpngtpd_method_3521)>(*this, lib, "vcmpngtpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtps_method_3523 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps>;
addExtern<DAS_CALL_METHOD(_vcmpngtps_method_3523)>(*this, lib, "vcmpngtps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtsd_method_3525 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd>;
addExtern<DAS_CALL_METHOD(_vcmpngtsd_method_3525)>(*this, lib, "vcmpngtsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpngtss_method_3527 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss>;
addExtern<DAS_CALL_METHOD(_vcmpngtss_method_3527)>(*this, lib, "vcmpngtss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqpd_method_3529 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqpd_method_3529)>(*this, lib, "vcmpnle_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqps_method_3531 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqps_method_3531)>(*this, lib, "vcmpnle_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqsd_method_3533 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqsd_method_3533)>(*this, lib, "vcmpnle_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnle_uqss_method_3535 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnle_uqss_method_3535)>(*this, lib, "vcmpnle_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlepd_method_3537 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd>;
addExtern<DAS_CALL_METHOD(_vcmpnlepd_method_3537)>(*this, lib, "vcmpnlepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnleps_method_3539 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps>;
addExtern<DAS_CALL_METHOD(_vcmpnleps_method_3539)>(*this, lib, "vcmpnleps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlesd_method_3541 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd>;
addExtern<DAS_CALL_METHOD(_vcmpnlesd_method_3541)>(*this, lib, "vcmpnlesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnless_method_3543 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless>;
addExtern<DAS_CALL_METHOD(_vcmpnless_method_3543)>(*this, lib, "vcmpnless",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqpd_method_3545 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqpd_method_3545)>(*this, lib, "vcmpnlt_uqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqps_method_3547 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqps_method_3547)>(*this, lib, "vcmpnlt_uqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqsd_method_3549 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqsd_method_3549)>(*this, lib, "vcmpnlt_uqsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnlt_uqss_method_3551 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss>;
addExtern<DAS_CALL_METHOD(_vcmpnlt_uqss_method_3551)>(*this, lib, "vcmpnlt_uqss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltpd_method_3553 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd>;
addExtern<DAS_CALL_METHOD(_vcmpnltpd_method_3553)>(*this, lib, "vcmpnltpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltps_method_3555 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps>;
addExtern<DAS_CALL_METHOD(_vcmpnltps_method_3555)>(*this, lib, "vcmpnltps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltsd_method_3557 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd>;
addExtern<DAS_CALL_METHOD(_vcmpnltsd_method_3557)>(*this, lib, "vcmpnltsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpnltss_method_3559 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss>;
addExtern<DAS_CALL_METHOD(_vcmpnltss_method_3559)>(*this, lib, "vcmpnltss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_spd_method_3561 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd>;
addExtern<DAS_CALL_METHOD(_vcmpord_spd_method_3561)>(*this, lib, "vcmpord_spd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_sps_method_3563 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps>;
addExtern<DAS_CALL_METHOD(_vcmpord_sps_method_3563)>(*this, lib, "vcmpord_sps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_ssd_method_3565 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd>;
addExtern<DAS_CALL_METHOD(_vcmpord_ssd_method_3565)>(*this, lib, "vcmpord_ssd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpord_sss_method_3567 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss>;
addExtern<DAS_CALL_METHOD(_vcmpord_sss_method_3567)>(*this, lib, "vcmpord_sss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordpd_method_3569 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd>;
addExtern<DAS_CALL_METHOD(_vcmpordpd_method_3569)>(*this, lib, "vcmpordpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordps_method_3571 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps>;
addExtern<DAS_CALL_METHOD(_vcmpordps_method_3571)>(*this, lib, "vcmpordps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordsd_method_3573 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd>;
addExtern<DAS_CALL_METHOD(_vcmpordsd_method_3573)>(*this, lib, "vcmpordsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpordss_method_3575 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss>;
addExtern<DAS_CALL_METHOD(_vcmpordss_method_3575)>(*this, lib, "vcmpordss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmppd_method_3577 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmppd>;
addExtern<DAS_CALL_METHOD(_vcmppd_method_3577)>(*this, lib, "vcmppd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmppd>::invoke")
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpph_method_3579 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcmpph);
addExtern<DAS_CALL_METHOD(_vcmpph_method_3579)>(*this, lib, "vcmpph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcmpph))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpps_method_3581 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpps>;
addExtern<DAS_CALL_METHOD(_vcmpps_method_3581)>(*this, lib, "vcmpps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpps>::invoke")
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpsd_method_3583 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpsd>;
addExtern<DAS_CALL_METHOD(_vcmpsd_method_3583)>(*this, lib, "vcmpsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpsd>::invoke")
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpsh_method_3585 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcmpsh);
addExtern<DAS_CALL_METHOD(_vcmpsh_method_3585)>(*this, lib, "vcmpsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcmpsh))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpss_method_3587 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpss>;
addExtern<DAS_CALL_METHOD(_vcmpss_method_3587)>(*this, lib, "vcmpss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vcmpss>::invoke")
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_uspd_method_3589 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd>;
addExtern<DAS_CALL_METHOD(_vcmptrue_uspd_method_3589)>(*this, lib, "vcmptrue_uspd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_usps_method_3591 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps>;
addExtern<DAS_CALL_METHOD(_vcmptrue_usps_method_3591)>(*this, lib, "vcmptrue_usps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_ussd_method_3593 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd>;
addExtern<DAS_CALL_METHOD(_vcmptrue_ussd_method_3593)>(*this, lib, "vcmptrue_ussd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrue_usss_method_3595 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss>;
addExtern<DAS_CALL_METHOD(_vcmptrue_usss_method_3595)>(*this, lib, "vcmptrue_usss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruepd_method_3597 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd>;
addExtern<DAS_CALL_METHOD(_vcmptruepd_method_3597)>(*this, lib, "vcmptruepd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptrueps_method_3599 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps>;
addExtern<DAS_CALL_METHOD(_vcmptrueps_method_3599)>(*this, lib, "vcmptrueps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruesd_method_3601 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd>;
addExtern<DAS_CALL_METHOD(_vcmptruesd_method_3601)>(*this, lib, "vcmptruesd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmptruess_method_3603 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess>;
addExtern<DAS_CALL_METHOD(_vcmptruess_method_3603)>(*this, lib, "vcmptruess",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_spd_method_3605 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd>;
addExtern<DAS_CALL_METHOD(_vcmpunord_spd_method_3605)>(*this, lib, "vcmpunord_spd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_sps_method_3607 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps>;
addExtern<DAS_CALL_METHOD(_vcmpunord_sps_method_3607)>(*this, lib, "vcmpunord_sps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_ssd_method_3609 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd>;
addExtern<DAS_CALL_METHOD(_vcmpunord_ssd_method_3609)>(*this, lib, "vcmpunord_ssd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunord_sss_method_3611 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss>;
addExtern<DAS_CALL_METHOD(_vcmpunord_sss_method_3611)>(*this, lib, "vcmpunord_sss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordpd_method_3613 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd>;
addExtern<DAS_CALL_METHOD(_vcmpunordpd_method_3613)>(*this, lib, "vcmpunordpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordps_method_3615 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps>;
addExtern<DAS_CALL_METHOD(_vcmpunordps_method_3615)>(*this, lib, "vcmpunordps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordsd_method_3617 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd>;
addExtern<DAS_CALL_METHOD(_vcmpunordsd_method_3617)>(*this, lib, "vcmpunordsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcmpunordss_method_3619 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss>;
addExtern<DAS_CALL_METHOD(_vcmpunordss_method_3619)>(*this, lib, "vcmpunordss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcomish_method_3621 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcomish);
addExtern<DAS_CALL_METHOD(_vcomish_method_3621)>(*this, lib, "vcomish",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcomish))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcompressb_method_3623 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcompressb);
addExtern<DAS_CALL_METHOD(_vcompressb_method_3623)>(*this, lib, "vcompressb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcompressb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcompresspd_method_3625 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcompresspd);
addExtern<DAS_CALL_METHOD(_vcompresspd_method_3625)>(*this, lib, "vcompresspd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcompresspd))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcompressps_method_3627 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcompressps);
addExtern<DAS_CALL_METHOD(_vcompressps_method_3627)>(*this, lib, "vcompressps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcompressps))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcompressw_method_3629 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcompressw);
addExtern<DAS_CALL_METHOD(_vcompressw_method_3629)>(*this, lib, "vcompressw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcompressw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtdq2ph_method_3631 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtdq2ph);
addExtern<DAS_CALL_METHOD(_vcvtdq2ph_method_3631)>(*this, lib, "vcvtdq2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtdq2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtne2ps2bf16_method_3633 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtne2ps2bf16);
addExtern<DAS_CALL_METHOD(_vcvtne2ps2bf16_method_3633)>(*this, lib, "vcvtne2ps2bf16",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtne2ps2bf16))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtneps2bf16_method_3635 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtneps2bf16);
addExtern<DAS_CALL_METHOD(_vcvtneps2bf16_method_3635)>(*this, lib, "vcvtneps2bf16",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtneps2bf16))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2ph_method_3637 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2ph);
addExtern<DAS_CALL_METHOD(_vcvtpd2ph_method_3637)>(*this, lib, "vcvtpd2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2qq_method_3639 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2qq);
addExtern<DAS_CALL_METHOD(_vcvtpd2qq_method_3639)>(*this, lib, "vcvtpd2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2udq_method_3641 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2udq);
addExtern<DAS_CALL_METHOD(_vcvtpd2udq_method_3641)>(*this, lib, "vcvtpd2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtpd2uqq_method_3643 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtpd2uqq);
addExtern<DAS_CALL_METHOD(_vcvtpd2uqq_method_3643)>(*this, lib, "vcvtpd2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtpd2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2dq_method_3645 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2dq);
addExtern<DAS_CALL_METHOD(_vcvtph2dq_method_3645)>(*this, lib, "vcvtph2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2dq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2pd_method_3647 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2pd);
addExtern<DAS_CALL_METHOD(_vcvtph2pd_method_3647)>(*this, lib, "vcvtph2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2psx_method_3649 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2psx);
addExtern<DAS_CALL_METHOD(_vcvtph2psx_method_3649)>(*this, lib, "vcvtph2psx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2psx))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2qq_method_3651 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2qq);
addExtern<DAS_CALL_METHOD(_vcvtph2qq_method_3651)>(*this, lib, "vcvtph2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2udq_method_3653 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2udq);
addExtern<DAS_CALL_METHOD(_vcvtph2udq_method_3653)>(*this, lib, "vcvtph2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2uqq_method_3655 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2uqq);
addExtern<DAS_CALL_METHOD(_vcvtph2uqq_method_3655)>(*this, lib, "vcvtph2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2uw_method_3657 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2uw);
addExtern<DAS_CALL_METHOD(_vcvtph2uw_method_3657)>(*this, lib, "vcvtph2uw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2uw))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtph2w_method_3659 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtph2w);
addExtern<DAS_CALL_METHOD(_vcvtph2w_method_3659)>(*this, lib, "vcvtph2w",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtph2w))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2phx_method_3661 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2phx);
addExtern<DAS_CALL_METHOD(_vcvtps2phx_method_3661)>(*this, lib, "vcvtps2phx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2phx))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2qq_method_3663 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2qq);
addExtern<DAS_CALL_METHOD(_vcvtps2qq_method_3663)>(*this, lib, "vcvtps2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2udq_method_3665 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2udq);
addExtern<DAS_CALL_METHOD(_vcvtps2udq_method_3665)>(*this, lib, "vcvtps2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtps2uqq_method_3667 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtps2uqq);
addExtern<DAS_CALL_METHOD(_vcvtps2uqq_method_3667)>(*this, lib, "vcvtps2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtps2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtqq2pd_method_3669 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtqq2pd);
addExtern<DAS_CALL_METHOD(_vcvtqq2pd_method_3669)>(*this, lib, "vcvtqq2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtqq2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtqq2ph_method_3671 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtqq2ph);
addExtern<DAS_CALL_METHOD(_vcvtqq2ph_method_3671)>(*this, lib, "vcvtqq2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtqq2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtqq2ps_method_3673 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtqq2ps);
addExtern<DAS_CALL_METHOD(_vcvtqq2ps_method_3673)>(*this, lib, "vcvtqq2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtqq2ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsd2sh_method_3675 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsd2sh);
addExtern<DAS_CALL_METHOD(_vcvtsd2sh_method_3675)>(*this, lib, "vcvtsd2sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsd2sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsd2usi_method_3677 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsd2usi);
addExtern<DAS_CALL_METHOD(_vcvtsd2usi_method_3677)>(*this, lib, "vcvtsd2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsd2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsh2sd_method_3679 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsh2sd);
addExtern<DAS_CALL_METHOD(_vcvtsh2sd_method_3679)>(*this, lib, "vcvtsh2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsh2sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsh2si_method_3681 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsh2si);
addExtern<DAS_CALL_METHOD(_vcvtsh2si_method_3681)>(*this, lib, "vcvtsh2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsh2si))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsh2ss_method_3683 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsh2ss);
addExtern<DAS_CALL_METHOD(_vcvtsh2ss_method_3683)>(*this, lib, "vcvtsh2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsh2ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsh2usi_method_3685 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsh2usi);
addExtern<DAS_CALL_METHOD(_vcvtsh2usi_method_3685)>(*this, lib, "vcvtsh2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsh2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtsi2sh_method_3687 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtsi2sh);
addExtern<DAS_CALL_METHOD(_vcvtsi2sh_method_3687)>(*this, lib, "vcvtsi2sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtsi2sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtss2sh_method_3689 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtss2sh);
addExtern<DAS_CALL_METHOD(_vcvtss2sh_method_3689)>(*this, lib, "vcvtss2sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtss2sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtss2usi_method_3691 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtss2usi);
addExtern<DAS_CALL_METHOD(_vcvtss2usi_method_3691)>(*this, lib, "vcvtss2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtss2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttpd2qq_method_3693 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttpd2qq);
addExtern<DAS_CALL_METHOD(_vcvttpd2qq_method_3693)>(*this, lib, "vcvttpd2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttpd2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttpd2udq_method_3695 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttpd2udq);
addExtern<DAS_CALL_METHOD(_vcvttpd2udq_method_3695)>(*this, lib, "vcvttpd2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttpd2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttpd2uqq_method_3697 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttpd2uqq);
addExtern<DAS_CALL_METHOD(_vcvttpd2uqq_method_3697)>(*this, lib, "vcvttpd2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttpd2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2dq_method_3699 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2dq);
addExtern<DAS_CALL_METHOD(_vcvttph2dq_method_3699)>(*this, lib, "vcvttph2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2dq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2qq_method_3701 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2qq);
addExtern<DAS_CALL_METHOD(_vcvttph2qq_method_3701)>(*this, lib, "vcvttph2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2udq_method_3703 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2udq);
addExtern<DAS_CALL_METHOD(_vcvttph2udq_method_3703)>(*this, lib, "vcvttph2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2uqq_method_3705 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2uqq);
addExtern<DAS_CALL_METHOD(_vcvttph2uqq_method_3705)>(*this, lib, "vcvttph2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2uw_method_3707 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2uw);
addExtern<DAS_CALL_METHOD(_vcvttph2uw_method_3707)>(*this, lib, "vcvttph2uw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2uw))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttph2w_method_3709 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttph2w);
addExtern<DAS_CALL_METHOD(_vcvttph2w_method_3709)>(*this, lib, "vcvttph2w",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttph2w))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttps2qq_method_3711 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttps2qq);
addExtern<DAS_CALL_METHOD(_vcvttps2qq_method_3711)>(*this, lib, "vcvttps2qq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttps2qq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttps2udq_method_3713 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttps2udq);
addExtern<DAS_CALL_METHOD(_vcvttps2udq_method_3713)>(*this, lib, "vcvttps2udq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttps2udq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttps2uqq_method_3715 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttps2uqq);
addExtern<DAS_CALL_METHOD(_vcvttps2uqq_method_3715)>(*this, lib, "vcvttps2uqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttps2uqq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttsd2usi_method_3717 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttsd2usi);
addExtern<DAS_CALL_METHOD(_vcvttsd2usi_method_3717)>(*this, lib, "vcvttsd2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttsd2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttsh2si_method_3719 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttsh2si);
addExtern<DAS_CALL_METHOD(_vcvttsh2si_method_3719)>(*this, lib, "vcvttsh2si",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttsh2si))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttsh2usi_method_3721 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttsh2usi);
addExtern<DAS_CALL_METHOD(_vcvttsh2usi_method_3721)>(*this, lib, "vcvttsh2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttsh2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvttss2usi_method_3723 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvttss2usi);
addExtern<DAS_CALL_METHOD(_vcvttss2usi_method_3723)>(*this, lib, "vcvttss2usi",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvttss2usi))
	->args({"self","r","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtudq2pd_method_3725 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtudq2pd);
addExtern<DAS_CALL_METHOD(_vcvtudq2pd_method_3725)>(*this, lib, "vcvtudq2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtudq2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtudq2ph_method_3727 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtudq2ph);
addExtern<DAS_CALL_METHOD(_vcvtudq2ph_method_3727)>(*this, lib, "vcvtudq2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtudq2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtudq2ps_method_3729 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtudq2ps);
addExtern<DAS_CALL_METHOD(_vcvtudq2ps_method_3729)>(*this, lib, "vcvtudq2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtudq2ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtuqq2pd_method_3731 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtuqq2pd);
addExtern<DAS_CALL_METHOD(_vcvtuqq2pd_method_3731)>(*this, lib, "vcvtuqq2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtuqq2pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtuqq2ph_method_3733 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtuqq2ph);
addExtern<DAS_CALL_METHOD(_vcvtuqq2ph_method_3733)>(*this, lib, "vcvtuqq2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtuqq2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtuqq2ps_method_3735 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtuqq2ps);
addExtern<DAS_CALL_METHOD(_vcvtuqq2ps_method_3735)>(*this, lib, "vcvtuqq2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtuqq2ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtusi2sd_method_3737 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtusi2sd);
addExtern<DAS_CALL_METHOD(_vcvtusi2sd_method_3737)>(*this, lib, "vcvtusi2sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtusi2sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtusi2sh_method_3739 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtusi2sh);
addExtern<DAS_CALL_METHOD(_vcvtusi2sh_method_3739)>(*this, lib, "vcvtusi2sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtusi2sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtusi2ss_method_3741 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtusi2ss);
addExtern<DAS_CALL_METHOD(_vcvtusi2ss_method_3741)>(*this, lib, "vcvtusi2ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtusi2ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtuw2ph_method_3743 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtuw2ph);
addExtern<DAS_CALL_METHOD(_vcvtuw2ph_method_3743)>(*this, lib, "vcvtuw2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtuw2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vcvtw2ph_method_3745 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vcvtw2ph);
addExtern<DAS_CALL_METHOD(_vcvtw2ph_method_3745)>(*this, lib, "vcvtw2ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vcvtw2ph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdbpsadbw_method_3747 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdbpsadbw);
addExtern<DAS_CALL_METHOD(_vdbpsadbw_method_3747)>(*this, lib, "vdbpsadbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdbpsadbw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivph_method_3749 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivph);
addExtern<DAS_CALL_METHOD(_vdivph_method_3749)>(*this, lib, "vdivph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdivsh_method_3751 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdivsh);
addExtern<DAS_CALL_METHOD(_vdivsh_method_3751)>(*this, lib, "vdivsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdivsh))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vdpbf16ps_method_3753 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vdpbf16ps);
addExtern<DAS_CALL_METHOD(_vdpbf16ps_method_3753)>(*this, lib, "vdpbf16ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vdpbf16ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vexp2pd_method_3755 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vexp2pd);
addExtern<DAS_CALL_METHOD(_vexp2pd_method_3755)>(*this, lib, "vexp2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vexp2pd))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vexp2ps_method_3757 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vexp2ps);
addExtern<DAS_CALL_METHOD(_vexp2ps_method_3757)>(*this, lib, "vexp2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vexp2ps))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vexpandpd_method_3759 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vexpandpd);
addExtern<DAS_CALL_METHOD(_vexpandpd_method_3759)>(*this, lib, "vexpandpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vexpandpd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vexpandps_method_3761 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vexpandps);
addExtern<DAS_CALL_METHOD(_vexpandps_method_3761)>(*this, lib, "vexpandps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vexpandps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractf32x4_method_3763 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractf32x4);
addExtern<DAS_CALL_METHOD(_vextractf32x4_method_3763)>(*this, lib, "vextractf32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractf32x4))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractf32x8_method_3765 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractf32x8);
addExtern<DAS_CALL_METHOD(_vextractf32x8_method_3765)>(*this, lib, "vextractf32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractf32x8))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractf64x2_method_3767 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractf64x2);
addExtern<DAS_CALL_METHOD(_vextractf64x2_method_3767)>(*this, lib, "vextractf64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractf64x2))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextractf64x4_method_3769 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextractf64x4);
addExtern<DAS_CALL_METHOD(_vextractf64x4_method_3769)>(*this, lib, "vextractf64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextractf64x4))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextracti32x4_method_3771 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextracti32x4);
addExtern<DAS_CALL_METHOD(_vextracti32x4_method_3771)>(*this, lib, "vextracti32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextracti32x4))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextracti32x8_method_3773 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextracti32x8);
addExtern<DAS_CALL_METHOD(_vextracti32x8_method_3773)>(*this, lib, "vextracti32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextracti32x8))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextracti64x2_method_3775 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextracti64x2);
addExtern<DAS_CALL_METHOD(_vextracti64x2_method_3775)>(*this, lib, "vextracti64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextracti64x2))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vextracti64x4_method_3777 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vextracti64x4);
addExtern<DAS_CALL_METHOD(_vextracti64x4_method_3777)>(*this, lib, "vextracti64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vextracti64x4))
	->args({"self","op","r","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfcmaddcph_method_3779 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfcmaddcph);
addExtern<DAS_CALL_METHOD(_vfcmaddcph_method_3779)>(*this, lib, "vfcmaddcph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfcmaddcph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfcmulcph_method_3781 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfcmulcph);
addExtern<DAS_CALL_METHOD(_vfcmulcph_method_3781)>(*this, lib, "vfcmulcph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfcmulcph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfixupimmpd_method_3783 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfixupimmpd);
addExtern<DAS_CALL_METHOD(_vfixupimmpd_method_3783)>(*this, lib, "vfixupimmpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfixupimmpd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfixupimmps_method_3785 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfixupimmps);
addExtern<DAS_CALL_METHOD(_vfixupimmps_method_3785)>(*this, lib, "vfixupimmps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfixupimmps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfixupimmsd_method_3787 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfixupimmsd);
addExtern<DAS_CALL_METHOD(_vfixupimmsd_method_3787)>(*this, lib, "vfixupimmsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfixupimmsd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfixupimmss_method_3789 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfixupimmss);
addExtern<DAS_CALL_METHOD(_vfixupimmss_method_3789)>(*this, lib, "vfixupimmss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfixupimmss))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132ph_method_3791 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132ph);
addExtern<DAS_CALL_METHOD(_vfmadd132ph_method_3791)>(*this, lib, "vfmadd132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd132sh_method_3793 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd132sh);
addExtern<DAS_CALL_METHOD(_vfmadd132sh_method_3793)>(*this, lib, "vfmadd132sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd132sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213ph_method_3795 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213ph);
addExtern<DAS_CALL_METHOD(_vfmadd213ph_method_3795)>(*this, lib, "vfmadd213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd213sh_method_3797 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd213sh);
addExtern<DAS_CALL_METHOD(_vfmadd213sh_method_3797)>(*this, lib, "vfmadd213sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd213sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231ph_method_3799 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231ph);
addExtern<DAS_CALL_METHOD(_vfmadd231ph_method_3799)>(*this, lib, "vfmadd231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmadd231sh_method_3801 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmadd231sh);
addExtern<DAS_CALL_METHOD(_vfmadd231sh_method_3801)>(*this, lib, "vfmadd231sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmadd231sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddcph_method_3803 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddcph);
addExtern<DAS_CALL_METHOD(_vfmaddcph_method_3803)>(*this, lib, "vfmaddcph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddcph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub132ph_method_3805 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub132ph);
addExtern<DAS_CALL_METHOD(_vfmaddsub132ph_method_3805)>(*this, lib, "vfmaddsub132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub213ph_method_3807 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub213ph);
addExtern<DAS_CALL_METHOD(_vfmaddsub213ph_method_3807)>(*this, lib, "vfmaddsub213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmaddsub231ph_method_3809 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmaddsub231ph);
addExtern<DAS_CALL_METHOD(_vfmaddsub231ph_method_3809)>(*this, lib, "vfmaddsub231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmaddsub231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132ph_method_3811 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132ph);
addExtern<DAS_CALL_METHOD(_vfmsub132ph_method_3811)>(*this, lib, "vfmsub132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub132sh_method_3813 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub132sh);
addExtern<DAS_CALL_METHOD(_vfmsub132sh_method_3813)>(*this, lib, "vfmsub132sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub132sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213ph_method_3815 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213ph);
addExtern<DAS_CALL_METHOD(_vfmsub213ph_method_3815)>(*this, lib, "vfmsub213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub213sh_method_3817 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub213sh);
addExtern<DAS_CALL_METHOD(_vfmsub213sh_method_3817)>(*this, lib, "vfmsub213sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub213sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231ph_method_3819 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231ph);
addExtern<DAS_CALL_METHOD(_vfmsub231ph_method_3819)>(*this, lib, "vfmsub231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsub231sh_method_3821 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsub231sh);
addExtern<DAS_CALL_METHOD(_vfmsub231sh_method_3821)>(*this, lib, "vfmsub231sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsub231sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd132ph_method_3823 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd132ph);
addExtern<DAS_CALL_METHOD(_vfmsubadd132ph_method_3823)>(*this, lib, "vfmsubadd132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd213ph_method_3825 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd213ph);
addExtern<DAS_CALL_METHOD(_vfmsubadd213ph_method_3825)>(*this, lib, "vfmsubadd213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmsubadd231ph_method_3827 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmsubadd231ph);
addExtern<DAS_CALL_METHOD(_vfmsubadd231ph_method_3827)>(*this, lib, "vfmsubadd231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmsubadd231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfmulcph_method_3829 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfmulcph);
addExtern<DAS_CALL_METHOD(_vfmulcph_method_3829)>(*this, lib, "vfmulcph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfmulcph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132ph_method_3831 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132ph);
addExtern<DAS_CALL_METHOD(_vfnmadd132ph_method_3831)>(*this, lib, "vfnmadd132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd132sh_method_3833 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd132sh);
addExtern<DAS_CALL_METHOD(_vfnmadd132sh_method_3833)>(*this, lib, "vfnmadd132sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd132sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213ph_method_3835 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213ph);
addExtern<DAS_CALL_METHOD(_vfnmadd213ph_method_3835)>(*this, lib, "vfnmadd213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd213sh_method_3837 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd213sh);
addExtern<DAS_CALL_METHOD(_vfnmadd213sh_method_3837)>(*this, lib, "vfnmadd213sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd213sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231ph_method_3839 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231ph);
addExtern<DAS_CALL_METHOD(_vfnmadd231ph_method_3839)>(*this, lib, "vfnmadd231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmadd231sh_method_3841 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmadd231sh);
addExtern<DAS_CALL_METHOD(_vfnmadd231sh_method_3841)>(*this, lib, "vfnmadd231sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmadd231sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132ph_method_3843 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132ph);
addExtern<DAS_CALL_METHOD(_vfnmsub132ph_method_3843)>(*this, lib, "vfnmsub132ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub132sh_method_3845 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub132sh);
addExtern<DAS_CALL_METHOD(_vfnmsub132sh_method_3845)>(*this, lib, "vfnmsub132sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub132sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213ph_method_3847 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213ph);
addExtern<DAS_CALL_METHOD(_vfnmsub213ph_method_3847)>(*this, lib, "vfnmsub213ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub213sh_method_3849 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub213sh);
addExtern<DAS_CALL_METHOD(_vfnmsub213sh_method_3849)>(*this, lib, "vfnmsub213sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub213sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231ph_method_3851 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231ph);
addExtern<DAS_CALL_METHOD(_vfnmsub231ph_method_3851)>(*this, lib, "vfnmsub231ph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231ph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfnmsub231sh_method_3853 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfnmsub231sh);
addExtern<DAS_CALL_METHOD(_vfnmsub231sh_method_3853)>(*this, lib, "vfnmsub231sh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfnmsub231sh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclasspd_method_3855 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclasspd);
addExtern<DAS_CALL_METHOD(_vfpclasspd_method_3855)>(*this, lib, "vfpclasspd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclasspd))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclassph_method_3857 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclassph);
addExtern<DAS_CALL_METHOD(_vfpclassph_method_3857)>(*this, lib, "vfpclassph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclassph))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclassps_method_3859 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclassps);
addExtern<DAS_CALL_METHOD(_vfpclassps_method_3859)>(*this, lib, "vfpclassps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclassps))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclasssd_method_3861 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclasssd);
addExtern<DAS_CALL_METHOD(_vfpclasssd_method_3861)>(*this, lib, "vfpclasssd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclasssd))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclasssh_method_3863 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclasssh);
addExtern<DAS_CALL_METHOD(_vfpclasssh_method_3863)>(*this, lib, "vfpclasssh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclasssh))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vfpclassss_method_3865 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vfpclassss);
addExtern<DAS_CALL_METHOD(_vfpclassss_method_3865)>(*this, lib, "vfpclassss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vfpclassss))
	->args({"self","k","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherdpd_method_3867 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdpd>;
addExtern<DAS_CALL_METHOD(_vgatherdpd_method_3867)>(*this, lib, "vgatherdpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdpd>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherdps_method_3869 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdps>;
addExtern<DAS_CALL_METHOD(_vgatherdps_method_3869)>(*this, lib, "vgatherdps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdps>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf0dpd_method_3871 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf0dpd);
addExtern<DAS_CALL_METHOD(_vgatherpf0dpd_method_3871)>(*this, lib, "vgatherpf0dpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf0dpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf0dps_method_3873 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf0dps);
addExtern<DAS_CALL_METHOD(_vgatherpf0dps_method_3873)>(*this, lib, "vgatherpf0dps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf0dps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf0qpd_method_3875 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf0qpd);
addExtern<DAS_CALL_METHOD(_vgatherpf0qpd_method_3875)>(*this, lib, "vgatherpf0qpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf0qpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf0qps_method_3877 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf0qps);
addExtern<DAS_CALL_METHOD(_vgatherpf0qps_method_3877)>(*this, lib, "vgatherpf0qps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf0qps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf1dpd_method_3879 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf1dpd);
addExtern<DAS_CALL_METHOD(_vgatherpf1dpd_method_3879)>(*this, lib, "vgatherpf1dpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf1dpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf1dps_method_3881 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf1dps);
addExtern<DAS_CALL_METHOD(_vgatherpf1dps_method_3881)>(*this, lib, "vgatherpf1dps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf1dps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf1qpd_method_3883 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf1qpd);
addExtern<DAS_CALL_METHOD(_vgatherpf1qpd_method_3883)>(*this, lib, "vgatherpf1qpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf1qpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherpf1qps_method_3885 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgatherpf1qps);
addExtern<DAS_CALL_METHOD(_vgatherpf1qps_method_3885)>(*this, lib, "vgatherpf1qps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgatherpf1qps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherqpd_method_3887 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqpd>;
addExtern<DAS_CALL_METHOD(_vgatherqpd_method_3887)>(*this, lib, "vgatherqpd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqpd>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgatherqps_method_3889 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqps>;
addExtern<DAS_CALL_METHOD(_vgatherqps_method_3889)>(*this, lib, "vgatherqps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqps>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexppd_method_3891 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexppd);
addExtern<DAS_CALL_METHOD(_vgetexppd_method_3891)>(*this, lib, "vgetexppd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexppd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexpph_method_3893 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexpph);
addExtern<DAS_CALL_METHOD(_vgetexpph_method_3893)>(*this, lib, "vgetexpph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexpph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexpps_method_3895 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexpps);
addExtern<DAS_CALL_METHOD(_vgetexpps_method_3895)>(*this, lib, "vgetexpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexpps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexpsd_method_3897 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexpsd);
addExtern<DAS_CALL_METHOD(_vgetexpsd_method_3897)>(*this, lib, "vgetexpsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexpsd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexpsh_method_3899 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexpsh);
addExtern<DAS_CALL_METHOD(_vgetexpsh_method_3899)>(*this, lib, "vgetexpsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexpsh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetexpss_method_3901 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetexpss);
addExtern<DAS_CALL_METHOD(_vgetexpss_method_3901)>(*this, lib, "vgetexpss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetexpss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantpd_method_3903 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantpd);
addExtern<DAS_CALL_METHOD(_vgetmantpd_method_3903)>(*this, lib, "vgetmantpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantpd))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantph_method_3905 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantph);
addExtern<DAS_CALL_METHOD(_vgetmantph_method_3905)>(*this, lib, "vgetmantph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantph))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantps_method_3907 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantps);
addExtern<DAS_CALL_METHOD(_vgetmantps_method_3907)>(*this, lib, "vgetmantps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantps))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantsd_method_3909 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantsd);
addExtern<DAS_CALL_METHOD(_vgetmantsd_method_3909)>(*this, lib, "vgetmantsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantsd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantsh_method_3911 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantsh);
addExtern<DAS_CALL_METHOD(_vgetmantsh_method_3911)>(*this, lib, "vgetmantsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantsh))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vgetmantss_method_3913 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vgetmantss);
addExtern<DAS_CALL_METHOD(_vgetmantss_method_3913)>(*this, lib, "vgetmantss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vgetmantss))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertf32x4_method_3915 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertf32x4);
addExtern<DAS_CALL_METHOD(_vinsertf32x4_method_3915)>(*this, lib, "vinsertf32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertf32x4))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertf32x8_method_3917 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertf32x8);
addExtern<DAS_CALL_METHOD(_vinsertf32x8_method_3917)>(*this, lib, "vinsertf32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertf32x8))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertf64x2_method_3919 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertf64x2);
addExtern<DAS_CALL_METHOD(_vinsertf64x2_method_3919)>(*this, lib, "vinsertf64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertf64x2))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinsertf64x4_method_3921 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinsertf64x4);
addExtern<DAS_CALL_METHOD(_vinsertf64x4_method_3921)>(*this, lib, "vinsertf64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinsertf64x4))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinserti32x4_method_3923 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinserti32x4);
addExtern<DAS_CALL_METHOD(_vinserti32x4_method_3923)>(*this, lib, "vinserti32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinserti32x4))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinserti32x8_method_3925 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinserti32x8);
addExtern<DAS_CALL_METHOD(_vinserti32x8_method_3925)>(*this, lib, "vinserti32x8",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinserti32x8))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinserti64x2_method_3927 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinserti64x2);
addExtern<DAS_CALL_METHOD(_vinserti64x2_method_3927)>(*this, lib, "vinserti64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinserti64x2))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vinserti64x4_method_3929 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vinserti64x4);
addExtern<DAS_CALL_METHOD(_vinserti64x4_method_3929)>(*this, lib, "vinserti64x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vinserti64x4))
	->args({"self","r1","r2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxph_method_3931 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxph);
addExtern<DAS_CALL_METHOD(_vmaxph_method_3931)>(*this, lib, "vmaxph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmaxsh_method_3933 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmaxsh);
addExtern<DAS_CALL_METHOD(_vmaxsh_method_3933)>(*this, lib, "vmaxsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmaxsh))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminph_method_3935 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminph);
addExtern<DAS_CALL_METHOD(_vminph_method_3935)>(*this, lib, "vminph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vminsh_method_3937 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vminsh);
addExtern<DAS_CALL_METHOD(_vminsh_method_3937)>(*this, lib, "vminsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vminsh))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa32_method_3939 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa32>;
addExtern<DAS_CALL_METHOD(_vmovdqa32_method_3939)>(*this, lib, "vmovdqa32",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa32>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa32_method_3941 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa32>;
addExtern<DAS_CALL_METHOD(_vmovdqa32_method_3941)>(*this, lib, "vmovdqa32",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa32>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa64_method_3943 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa64>;
addExtern<DAS_CALL_METHOD(_vmovdqa64_method_3943)>(*this, lib, "vmovdqa64",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa64>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqa64_method_3945 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa64>;
addExtern<DAS_CALL_METHOD(_vmovdqa64_method_3945)>(*this, lib, "vmovdqa64",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa64>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu16_method_3947 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu16>;
addExtern<DAS_CALL_METHOD(_vmovdqu16_method_3947)>(*this, lib, "vmovdqu16",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu16>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu16_method_3949 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu16>;
addExtern<DAS_CALL_METHOD(_vmovdqu16_method_3949)>(*this, lib, "vmovdqu16",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu16>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu32_method_3951 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu32>;
addExtern<DAS_CALL_METHOD(_vmovdqu32_method_3951)>(*this, lib, "vmovdqu32",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu32>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu32_method_3953 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu32>;
addExtern<DAS_CALL_METHOD(_vmovdqu32_method_3953)>(*this, lib, "vmovdqu32",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu32>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu64_method_3955 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu64>;
addExtern<DAS_CALL_METHOD(_vmovdqu64_method_3955)>(*this, lib, "vmovdqu64",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu64>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu64_method_3957 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu64>;
addExtern<DAS_CALL_METHOD(_vmovdqu64_method_3957)>(*this, lib, "vmovdqu64",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu64>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu8_method_3959 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu8>;
addExtern<DAS_CALL_METHOD(_vmovdqu8_method_3959)>(*this, lib, "vmovdqu8",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu8>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovdqu8_method_3961 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu8>;
addExtern<DAS_CALL_METHOD(_vmovdqu8_method_3961)>(*this, lib, "vmovdqu8",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu8>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsh_method_3963 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh>;
addExtern<DAS_CALL_METHOD(_vmovsh_method_3963)>(*this, lib, "vmovsh",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsh_method_3965 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsh>;
addExtern<DAS_CALL_METHOD(_vmovsh_method_3965)>(*this, lib, "vmovsh",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsh>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovsh_method_3967 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh>;
addExtern<DAS_CALL_METHOD(_vmovsh_method_3967)>(*this, lib, "vmovsh",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh>::invoke")
	->args({"self","x1","x2","x3"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovw_method_3969 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw>;
addExtern<DAS_CALL_METHOD(_vmovw_method_3969)>(*this, lib, "vmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw>::invoke")
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovw_method_3971 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw>;
addExtern<DAS_CALL_METHOD(_vmovw_method_3971)>(*this, lib, "vmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw>::invoke")
	->args({"self","r","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmovw_method_3973 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovw>;
addExtern<DAS_CALL_METHOD(_vmovw_method_3973)>(*this, lib, "vmovw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovw>::invoke")
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulph_method_3975 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulph);
addExtern<DAS_CALL_METHOD(_vmulph_method_3975)>(*this, lib, "vmulph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vmulsh_method_3977 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vmulsh);
addExtern<DAS_CALL_METHOD(_vmulsh_method_3977)>(*this, lib, "vmulsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vmulsh))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vp2intersectd_method_3979 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vp2intersectd);
addExtern<DAS_CALL_METHOD(_vp2intersectd_method_3979)>(*this, lib, "vp2intersectd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vp2intersectd))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vp2intersectq_method_3981 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vp2intersectq);
addExtern<DAS_CALL_METHOD(_vp2intersectq_method_3981)>(*this, lib, "vp2intersectq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vp2intersectq))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vp4dpwssd_method_3983 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vp4dpwssd);
addExtern<DAS_CALL_METHOD(_vp4dpwssd_method_3983)>(*this, lib, "vp4dpwssd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vp4dpwssd))
	->args({"self","z1","z2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vp4dpwssds_method_3985 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vp4dpwssds);
addExtern<DAS_CALL_METHOD(_vp4dpwssds_method_3985)>(*this, lib, "vp4dpwssds",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vp4dpwssds))
	->args({"self","z1","z2","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpabsq_method_3987 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpabsq);
addExtern<DAS_CALL_METHOD(_vpabsq_method_3987)>(*this, lib, "vpabsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpabsq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpandd_method_3989 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpandd);
addExtern<DAS_CALL_METHOD(_vpandd_method_3989)>(*this, lib, "vpandd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpandd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpandnd_method_3991 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpandnd);
addExtern<DAS_CALL_METHOD(_vpandnd_method_3991)>(*this, lib, "vpandnd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpandnd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpandnq_method_3993 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpandnq);
addExtern<DAS_CALL_METHOD(_vpandnq_method_3993)>(*this, lib, "vpandnq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpandnq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpandq_method_3995 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpandq);
addExtern<DAS_CALL_METHOD(_vpandq_method_3995)>(*this, lib, "vpandq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpandq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendmb_method_3997 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendmb);
addExtern<DAS_CALL_METHOD(_vpblendmb_method_3997)>(*this, lib, "vpblendmb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendmb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendmd_method_3999 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendmd);
addExtern<DAS_CALL_METHOD(_vpblendmd_method_3999)>(*this, lib, "vpblendmd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendmd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendmq_method_4001 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendmq);
addExtern<DAS_CALL_METHOD(_vpblendmq_method_4001)>(*this, lib, "vpblendmq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendmq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpblendmw_method_4003 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpblendmw);
addExtern<DAS_CALL_METHOD(_vpblendmw_method_4003)>(*this, lib, "vpblendmw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpblendmw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastb_method_4005 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::vpbroadcastb>;
addExtern<DAS_CALL_METHOD(_vpbroadcastb_method_4005)>(*this, lib, "vpbroadcastb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::vpbroadcastb>::invoke")
	->args({"self","x","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastd_method_4007 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::vpbroadcastd>;
addExtern<DAS_CALL_METHOD(_vpbroadcastd_method_4007)>(*this, lib, "vpbroadcastd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::vpbroadcastd>::invoke")
	->args({"self","x","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastmb2q_method_4009 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpbroadcastmb2q);
addExtern<DAS_CALL_METHOD(_vpbroadcastmb2q_method_4009)>(*this, lib, "vpbroadcastmb2q",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpbroadcastmb2q))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastmw2d_method_4011 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpbroadcastmw2d);
addExtern<DAS_CALL_METHOD(_vpbroadcastmw2d_method_4011)>(*this, lib, "vpbroadcastmw2d",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpbroadcastmw2d))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastw_method_4013 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg16 &),&Xbyak::CodeGenerator::vpbroadcastw>;
addExtern<DAS_CALL_METHOD(_vpbroadcastw_method_4013)>(*this, lib, "vpbroadcastw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg16 &),&Xbyak::CodeGenerator::vpbroadcastw>::invoke")
	->args({"self","x","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpb_method_4015 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpb);
addExtern<DAS_CALL_METHOD(_vpcmpb_method_4015)>(*this, lib, "vpcmpb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpb))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpd_method_4017 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpd);
addExtern<DAS_CALL_METHOD(_vpcmpd_method_4017)>(*this, lib, "vpcmpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpd))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqb_method_4019 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb>;
addExtern<DAS_CALL_METHOD(_vpcmpeqb_method_4019)>(*this, lib, "vpcmpeqb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqd_method_4021 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd>;
addExtern<DAS_CALL_METHOD(_vpcmpeqd_method_4021)>(*this, lib, "vpcmpeqd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqq_method_4023 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq>;
addExtern<DAS_CALL_METHOD(_vpcmpeqq_method_4023)>(*this, lib, "vpcmpeqq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpeqw_method_4025 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw>;
addExtern<DAS_CALL_METHOD(_vpcmpeqw_method_4025)>(*this, lib, "vpcmpeqw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtb_method_4027 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb>;
addExtern<DAS_CALL_METHOD(_vpcmpgtb_method_4027)>(*this, lib, "vpcmpgtb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtd_method_4029 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd>;
addExtern<DAS_CALL_METHOD(_vpcmpgtd_method_4029)>(*this, lib, "vpcmpgtd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtq_method_4031 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq>;
addExtern<DAS_CALL_METHOD(_vpcmpgtq_method_4031)>(*this, lib, "vpcmpgtq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpgtw_method_4033 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw>;
addExtern<DAS_CALL_METHOD(_vpcmpgtw_method_4033)>(*this, lib, "vpcmpgtw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw>::invoke")
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpq_method_4035 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpq);
addExtern<DAS_CALL_METHOD(_vpcmpq_method_4035)>(*this, lib, "vpcmpq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpq))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpub_method_4037 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpub);
addExtern<DAS_CALL_METHOD(_vpcmpub_method_4037)>(*this, lib, "vpcmpub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpub))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpud_method_4039 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpud);
addExtern<DAS_CALL_METHOD(_vpcmpud_method_4039)>(*this, lib, "vpcmpud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpud))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpuq_method_4041 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpuq);
addExtern<DAS_CALL_METHOD(_vpcmpuq_method_4041)>(*this, lib, "vpcmpuq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpuq))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpuw_method_4043 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpuw);
addExtern<DAS_CALL_METHOD(_vpcmpuw_method_4043)>(*this, lib, "vpcmpuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpuw))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcmpw_method_4045 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcmpw);
addExtern<DAS_CALL_METHOD(_vpcmpw_method_4045)>(*this, lib, "vpcmpw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcmpw))
	->args({"self","k","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcompressd_method_4047 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcompressd);
addExtern<DAS_CALL_METHOD(_vpcompressd_method_4047)>(*this, lib, "vpcompressd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcompressd))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpcompressq_method_4049 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpcompressq);
addExtern<DAS_CALL_METHOD(_vpcompressq_method_4049)>(*this, lib, "vpcompressq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpcompressq))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpconflictd_method_4051 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpconflictd);
addExtern<DAS_CALL_METHOD(_vpconflictd_method_4051)>(*this, lib, "vpconflictd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpconflictd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpconflictq_method_4053 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpconflictq);
addExtern<DAS_CALL_METHOD(_vpconflictq_method_4053)>(*this, lib, "vpconflictq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpconflictq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermb_method_4055 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermb);
addExtern<DAS_CALL_METHOD(_vpermb_method_4055)>(*this, lib, "vpermb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2b_method_4057 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2b);
addExtern<DAS_CALL_METHOD(_vpermi2b_method_4057)>(*this, lib, "vpermi2b",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2b))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2d_method_4059 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2d);
addExtern<DAS_CALL_METHOD(_vpermi2d_method_4059)>(*this, lib, "vpermi2d",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2d))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2pd_method_4061 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2pd);
addExtern<DAS_CALL_METHOD(_vpermi2pd_method_4061)>(*this, lib, "vpermi2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2ps_method_4063 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2ps);
addExtern<DAS_CALL_METHOD(_vpermi2ps_method_4063)>(*this, lib, "vpermi2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2q_method_4065 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2q);
addExtern<DAS_CALL_METHOD(_vpermi2q_method_4065)>(*this, lib, "vpermi2q",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2q))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermi2w_method_4067 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermi2w);
addExtern<DAS_CALL_METHOD(_vpermi2w_method_4067)>(*this, lib, "vpermi2w",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermi2w))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2b_method_4069 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2b);
addExtern<DAS_CALL_METHOD(_vpermt2b_method_4069)>(*this, lib, "vpermt2b",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2b))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2d_method_4071 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2d);
addExtern<DAS_CALL_METHOD(_vpermt2d_method_4071)>(*this, lib, "vpermt2d",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2d))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2pd_method_4073 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2pd);
addExtern<DAS_CALL_METHOD(_vpermt2pd_method_4073)>(*this, lib, "vpermt2pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2pd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2ps_method_4075 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2ps);
addExtern<DAS_CALL_METHOD(_vpermt2ps_method_4075)>(*this, lib, "vpermt2ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2ps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2q_method_4077 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2q);
addExtern<DAS_CALL_METHOD(_vpermt2q_method_4077)>(*this, lib, "vpermt2q",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2q))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermt2w_method_4079 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermt2w);
addExtern<DAS_CALL_METHOD(_vpermt2w_method_4079)>(*this, lib, "vpermt2w",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermt2w))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpermw_method_4081 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpermw);
addExtern<DAS_CALL_METHOD(_vpermw_method_4081)>(*this, lib, "vpermw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpermw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpexpandb_method_4083 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpexpandb);
addExtern<DAS_CALL_METHOD(_vpexpandb_method_4083)>(*this, lib, "vpexpandb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpexpandb))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpexpandd_method_4085 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpexpandd);
addExtern<DAS_CALL_METHOD(_vpexpandd_method_4085)>(*this, lib, "vpexpandd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpexpandd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpexpandq_method_4087 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpexpandq);
addExtern<DAS_CALL_METHOD(_vpexpandq_method_4087)>(*this, lib, "vpexpandq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpexpandq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpexpandw_method_4089 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpexpandw);
addExtern<DAS_CALL_METHOD(_vpexpandw_method_4089)>(*this, lib, "vpexpandw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpexpandw))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherdd_method_4091 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdd>;
addExtern<DAS_CALL_METHOD(_vpgatherdd_method_4091)>(*this, lib, "vpgatherdd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdd>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherdq_method_4093 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdq>;
addExtern<DAS_CALL_METHOD(_vpgatherdq_method_4093)>(*this, lib, "vpgatherdq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdq>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherqd_method_4095 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqd>;
addExtern<DAS_CALL_METHOD(_vpgatherqd_method_4095)>(*this, lib, "vpgatherqd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqd>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpgatherqq_method_4097 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqq>;
addExtern<DAS_CALL_METHOD(_vpgatherqq_method_4097)>(*this, lib, "vpgatherqq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqq>::invoke")
	->args({"self","x","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vplzcntd_method_4099 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vplzcntd);
addExtern<DAS_CALL_METHOD(_vplzcntd_method_4099)>(*this, lib, "vplzcntd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vplzcntd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vplzcntq_method_4101 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vplzcntq);
addExtern<DAS_CALL_METHOD(_vplzcntq_method_4101)>(*this, lib, "vplzcntq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vplzcntq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmadd52huq_method_4103 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmadd52huq);
addExtern<DAS_CALL_METHOD(_vpmadd52huq_method_4103)>(*this, lib, "vpmadd52huq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmadd52huq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmadd52luq_method_4105 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmadd52luq);
addExtern<DAS_CALL_METHOD(_vpmadd52luq_method_4105)>(*this, lib, "vpmadd52luq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmadd52luq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxsq_method_4107 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxsq);
addExtern<DAS_CALL_METHOD(_vpmaxsq_method_4107)>(*this, lib, "vpmaxsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxsq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmaxuq_method_4109 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmaxuq);
addExtern<DAS_CALL_METHOD(_vpmaxuq_method_4109)>(*this, lib, "vpmaxuq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmaxuq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminsq_method_4111 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminsq);
addExtern<DAS_CALL_METHOD(_vpminsq_method_4111)>(*this, lib, "vpminsq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminsq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpminuq_method_4113 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpminuq);
addExtern<DAS_CALL_METHOD(_vpminuq_method_4113)>(*this, lib, "vpminuq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpminuq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovb2m_method_4115 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovb2m);
addExtern<DAS_CALL_METHOD(_vpmovb2m_method_4115)>(*this, lib, "vpmovb2m",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovb2m))
	->args({"self","k","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovd2m_method_4117 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovd2m);
addExtern<DAS_CALL_METHOD(_vpmovd2m_method_4117)>(*this, lib, "vpmovd2m",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovd2m))
	->args({"self","k","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovdb_method_4119 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovdb);
addExtern<DAS_CALL_METHOD(_vpmovdb_method_4119)>(*this, lib, "vpmovdb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovdb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovdw_method_4121 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovdw);
addExtern<DAS_CALL_METHOD(_vpmovdw_method_4121)>(*this, lib, "vpmovdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovdw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovm2b_method_4123 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovm2b);
addExtern<DAS_CALL_METHOD(_vpmovm2b_method_4123)>(*this, lib, "vpmovm2b",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovm2b))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovm2d_method_4125 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovm2d);
addExtern<DAS_CALL_METHOD(_vpmovm2d_method_4125)>(*this, lib, "vpmovm2d",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovm2d))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovm2q_method_4127 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovm2q);
addExtern<DAS_CALL_METHOD(_vpmovm2q_method_4127)>(*this, lib, "vpmovm2q",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovm2q))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovm2w_method_4129 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovm2w);
addExtern<DAS_CALL_METHOD(_vpmovm2w_method_4129)>(*this, lib, "vpmovm2w",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovm2w))
	->args({"self","x","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovq2m_method_4131 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovq2m);
addExtern<DAS_CALL_METHOD(_vpmovq2m_method_4131)>(*this, lib, "vpmovq2m",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovq2m))
	->args({"self","k","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovqb_method_4133 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovqb);
addExtern<DAS_CALL_METHOD(_vpmovqb_method_4133)>(*this, lib, "vpmovqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovqb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovqd_method_4135 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovqd);
addExtern<DAS_CALL_METHOD(_vpmovqd_method_4135)>(*this, lib, "vpmovqd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovqd))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovqw_method_4137 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovqw);
addExtern<DAS_CALL_METHOD(_vpmovqw_method_4137)>(*this, lib, "vpmovqw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovqw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsdb_method_4139 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsdb);
addExtern<DAS_CALL_METHOD(_vpmovsdb_method_4139)>(*this, lib, "vpmovsdb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsdb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsdw_method_4141 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsdw);
addExtern<DAS_CALL_METHOD(_vpmovsdw_method_4141)>(*this, lib, "vpmovsdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsdw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsqb_method_4143 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsqb);
addExtern<DAS_CALL_METHOD(_vpmovsqb_method_4143)>(*this, lib, "vpmovsqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsqb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsqd_method_4145 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsqd);
addExtern<DAS_CALL_METHOD(_vpmovsqd_method_4145)>(*this, lib, "vpmovsqd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsqd))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovsqw_method_4147 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovsqw);
addExtern<DAS_CALL_METHOD(_vpmovsqw_method_4147)>(*this, lib, "vpmovsqw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovsqw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovswb_method_4149 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovswb);
addExtern<DAS_CALL_METHOD(_vpmovswb_method_4149)>(*this, lib, "vpmovswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovswb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovusdb_method_4151 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovusdb);
addExtern<DAS_CALL_METHOD(_vpmovusdb_method_4151)>(*this, lib, "vpmovusdb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovusdb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovusdw_method_4153 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovusdw);
addExtern<DAS_CALL_METHOD(_vpmovusdw_method_4153)>(*this, lib, "vpmovusdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovusdw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovusqb_method_4155 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovusqb);
addExtern<DAS_CALL_METHOD(_vpmovusqb_method_4155)>(*this, lib, "vpmovusqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovusqb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovusqd_method_4157 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovusqd);
addExtern<DAS_CALL_METHOD(_vpmovusqd_method_4157)>(*this, lib, "vpmovusqd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovusqd))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovusqw_method_4159 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovusqw);
addExtern<DAS_CALL_METHOD(_vpmovusqw_method_4159)>(*this, lib, "vpmovusqw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovusqw))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovuswb_method_4161 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovuswb);
addExtern<DAS_CALL_METHOD(_vpmovuswb_method_4161)>(*this, lib, "vpmovuswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovuswb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovw2m_method_4163 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovw2m);
addExtern<DAS_CALL_METHOD(_vpmovw2m_method_4163)>(*this, lib, "vpmovw2m",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovw2m))
	->args({"self","k","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmovwb_method_4165 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmovwb);
addExtern<DAS_CALL_METHOD(_vpmovwb_method_4165)>(*this, lib, "vpmovwb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmovwb))
	->args({"self","op","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmullq_method_4167 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmullq);
addExtern<DAS_CALL_METHOD(_vpmullq_method_4167)>(*this, lib, "vpmullq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmullq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpmultishiftqb_method_4169 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpmultishiftqb);
addExtern<DAS_CALL_METHOD(_vpmultishiftqb_method_4169)>(*this, lib, "vpmultishiftqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpmultishiftqb))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpopcntb_method_4171 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpopcntb);
addExtern<DAS_CALL_METHOD(_vpopcntb_method_4171)>(*this, lib, "vpopcntb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpopcntb))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpopcntd_method_4173 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpopcntd);
addExtern<DAS_CALL_METHOD(_vpopcntd_method_4173)>(*this, lib, "vpopcntd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpopcntd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpopcntq_method_4175 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpopcntq);
addExtern<DAS_CALL_METHOD(_vpopcntq_method_4175)>(*this, lib, "vpopcntq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpopcntq))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpopcntw_method_4177 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpopcntw);
addExtern<DAS_CALL_METHOD(_vpopcntw_method_4177)>(*this, lib, "vpopcntw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpopcntw))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpord_method_4179 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpord);
addExtern<DAS_CALL_METHOD(_vpord_method_4179)>(*this, lib, "vpord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpord))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vporq_method_4181 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vporq);
addExtern<DAS_CALL_METHOD(_vporq_method_4181)>(*this, lib, "vporq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vporq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprold_method_4183 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprold);
addExtern<DAS_CALL_METHOD(_vprold_method_4183)>(*this, lib, "vprold",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprold))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprolq_method_4185 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprolq);
addExtern<DAS_CALL_METHOD(_vprolq_method_4185)>(*this, lib, "vprolq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprolq))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprolvd_method_4187 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprolvd);
addExtern<DAS_CALL_METHOD(_vprolvd_method_4187)>(*this, lib, "vprolvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprolvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprolvq_method_4189 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprolvq);
addExtern<DAS_CALL_METHOD(_vprolvq_method_4189)>(*this, lib, "vprolvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprolvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprord_method_4191 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprord);
addExtern<DAS_CALL_METHOD(_vprord_method_4191)>(*this, lib, "vprord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprord))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprorq_method_4193 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprorq);
addExtern<DAS_CALL_METHOD(_vprorq_method_4193)>(*this, lib, "vprorq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprorq))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprorvd_method_4195 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprorvd);
addExtern<DAS_CALL_METHOD(_vprorvd_method_4195)>(*this, lib, "vprorvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprorvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vprorvq_method_4197 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vprorvq);
addExtern<DAS_CALL_METHOD(_vprorvq_method_4197)>(*this, lib, "vprorvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vprorvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpscatterdd_method_4199 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpscatterdd);
addExtern<DAS_CALL_METHOD(_vpscatterdd_method_4199)>(*this, lib, "vpscatterdd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpscatterdd))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpscatterdq_method_4201 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpscatterdq);
addExtern<DAS_CALL_METHOD(_vpscatterdq_method_4201)>(*this, lib, "vpscatterdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpscatterdq))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpscatterqd_method_4203 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpscatterqd);
addExtern<DAS_CALL_METHOD(_vpscatterqd_method_4203)>(*this, lib, "vpscatterqd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpscatterqd))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpscatterqq_method_4205 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpscatterqq);
addExtern<DAS_CALL_METHOD(_vpscatterqq_method_4205)>(*this, lib, "vpscatterqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpscatterqq))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldd_method_4207 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldd);
addExtern<DAS_CALL_METHOD(_vpshldd_method_4207)>(*this, lib, "vpshldd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldq_method_4209 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldq);
addExtern<DAS_CALL_METHOD(_vpshldq_method_4209)>(*this, lib, "vpshldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldvd_method_4211 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldvd);
addExtern<DAS_CALL_METHOD(_vpshldvd_method_4211)>(*this, lib, "vpshldvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldvq_method_4213 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldvq);
addExtern<DAS_CALL_METHOD(_vpshldvq_method_4213)>(*this, lib, "vpshldvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldvw_method_4215 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldvw);
addExtern<DAS_CALL_METHOD(_vpshldvw_method_4215)>(*this, lib, "vpshldvw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldvw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshldw_method_4217 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshldw);
addExtern<DAS_CALL_METHOD(_vpshldw_method_4217)>(*this, lib, "vpshldw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshldw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdd_method_4219 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdd);
addExtern<DAS_CALL_METHOD(_vpshrdd_method_4219)>(*this, lib, "vpshrdd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdq_method_4221 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdq);
addExtern<DAS_CALL_METHOD(_vpshrdq_method_4221)>(*this, lib, "vpshrdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdvd_method_4223 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdvd);
addExtern<DAS_CALL_METHOD(_vpshrdvd_method_4223)>(*this, lib, "vpshrdvd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdvd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdvq_method_4225 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdvq);
addExtern<DAS_CALL_METHOD(_vpshrdvq_method_4225)>(*this, lib, "vpshrdvq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdvq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdvw_method_4227 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdvw);
addExtern<DAS_CALL_METHOD(_vpshrdvw_method_4227)>(*this, lib, "vpshrdvw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdvw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshrdw_method_4229 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshrdw);
addExtern<DAS_CALL_METHOD(_vpshrdw_method_4229)>(*this, lib, "vpshrdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshrdw))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpshufbitqmb_method_4231 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpshufbitqmb);
addExtern<DAS_CALL_METHOD(_vpshufbitqmb_method_4231)>(*this, lib, "vpshufbitqmb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpshufbitqmb))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsllvw_method_4233 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsllvw);
addExtern<DAS_CALL_METHOD(_vpsllvw_method_4233)>(*this, lib, "vpsllvw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsllvw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsraq_method_4235 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsraq>;
addExtern<DAS_CALL_METHOD(_vpsraq_method_4235)>(*this, lib, "vpsraq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &, uint8_t),&Xbyak::CodeGenerator::vpsraq>::invoke")
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsraq_method_4237 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraq>;
addExtern<DAS_CALL_METHOD(_vpsraq_method_4237)>(*this, lib, "vpsraq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraq>::invoke")
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsravq_method_4239 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsravq);
addExtern<DAS_CALL_METHOD(_vpsravq_method_4239)>(*this, lib, "vpsravq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsravq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsravw_method_4241 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsravw);
addExtern<DAS_CALL_METHOD(_vpsravw_method_4241)>(*this, lib, "vpsravw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsravw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpsrlvw_method_4243 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpsrlvw);
addExtern<DAS_CALL_METHOD(_vpsrlvw_method_4243)>(*this, lib, "vpsrlvw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpsrlvw))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpternlogd_method_4245 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpternlogd);
addExtern<DAS_CALL_METHOD(_vpternlogd_method_4245)>(*this, lib, "vpternlogd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpternlogd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpternlogq_method_4247 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpternlogq);
addExtern<DAS_CALL_METHOD(_vpternlogq_method_4247)>(*this, lib, "vpternlogq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpternlogq))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestmb_method_4249 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestmb);
addExtern<DAS_CALL_METHOD(_vptestmb_method_4249)>(*this, lib, "vptestmb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestmb))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestmd_method_4251 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestmd);
addExtern<DAS_CALL_METHOD(_vptestmd_method_4251)>(*this, lib, "vptestmd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestmd))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestmq_method_4253 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestmq);
addExtern<DAS_CALL_METHOD(_vptestmq_method_4253)>(*this, lib, "vptestmq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestmq))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestmw_method_4255 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestmw);
addExtern<DAS_CALL_METHOD(_vptestmw_method_4255)>(*this, lib, "vptestmw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestmw))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestnmb_method_4257 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestnmb);
addExtern<DAS_CALL_METHOD(_vptestnmb_method_4257)>(*this, lib, "vptestnmb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestnmb))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestnmd_method_4259 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestnmd);
addExtern<DAS_CALL_METHOD(_vptestnmd_method_4259)>(*this, lib, "vptestnmd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestnmd))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestnmq_method_4261 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestnmq);
addExtern<DAS_CALL_METHOD(_vptestnmq_method_4261)>(*this, lib, "vptestnmq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestnmq))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vptestnmw_method_4263 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vptestnmw);
addExtern<DAS_CALL_METHOD(_vptestnmw_method_4263)>(*this, lib, "vptestnmw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vptestnmw))
	->args({"self","k","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpxord_method_4265 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpxord);
addExtern<DAS_CALL_METHOD(_vpxord_method_4265)>(*this, lib, "vpxord",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpxord))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpxorq_method_4267 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vpxorq);
addExtern<DAS_CALL_METHOD(_vpxorq_method_4267)>(*this, lib, "vpxorq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vpxorq))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrangepd_method_4269 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrangepd);
addExtern<DAS_CALL_METHOD(_vrangepd_method_4269)>(*this, lib, "vrangepd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrangepd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrangeps_method_4271 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrangeps);
addExtern<DAS_CALL_METHOD(_vrangeps_method_4271)>(*this, lib, "vrangeps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrangeps))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrangesd_method_4273 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrangesd);
addExtern<DAS_CALL_METHOD(_vrangesd_method_4273)>(*this, lib, "vrangesd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrangesd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrangess_method_4275 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrangess);
addExtern<DAS_CALL_METHOD(_vrangess_method_4275)>(*this, lib, "vrangess",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrangess))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp14pd_method_4277 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp14pd);
addExtern<DAS_CALL_METHOD(_vrcp14pd_method_4277)>(*this, lib, "vrcp14pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp14pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp14ps_method_4279 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp14ps);
addExtern<DAS_CALL_METHOD(_vrcp14ps_method_4279)>(*this, lib, "vrcp14ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp14ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp14sd_method_4281 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp14sd);
addExtern<DAS_CALL_METHOD(_vrcp14sd_method_4281)>(*this, lib, "vrcp14sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp14sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp14ss_method_4283 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp14ss);
addExtern<DAS_CALL_METHOD(_vrcp14ss_method_4283)>(*this, lib, "vrcp14ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp14ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp28pd_method_4285 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp28pd);
addExtern<DAS_CALL_METHOD(_vrcp28pd_method_4285)>(*this, lib, "vrcp28pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp28pd))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp28ps_method_4287 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp28ps);
addExtern<DAS_CALL_METHOD(_vrcp28ps_method_4287)>(*this, lib, "vrcp28ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp28ps))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp28sd_method_4289 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp28sd);
addExtern<DAS_CALL_METHOD(_vrcp28sd_method_4289)>(*this, lib, "vrcp28sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp28sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcp28ss_method_4291 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcp28ss);
addExtern<DAS_CALL_METHOD(_vrcp28ss_method_4291)>(*this, lib, "vrcp28ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcp28ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcpph_method_4293 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcpph);
addExtern<DAS_CALL_METHOD(_vrcpph_method_4293)>(*this, lib, "vrcpph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcpph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrcpsh_method_4295 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrcpsh);
addExtern<DAS_CALL_METHOD(_vrcpsh_method_4295)>(*this, lib, "vrcpsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrcpsh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreducepd_method_4297 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreducepd);
addExtern<DAS_CALL_METHOD(_vreducepd_method_4297)>(*this, lib, "vreducepd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreducepd))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreduceph_method_4299 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreduceph);
addExtern<DAS_CALL_METHOD(_vreduceph_method_4299)>(*this, lib, "vreduceph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreduceph))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreduceps_method_4301 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreduceps);
addExtern<DAS_CALL_METHOD(_vreduceps_method_4301)>(*this, lib, "vreduceps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreduceps))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreducesd_method_4303 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreducesd);
addExtern<DAS_CALL_METHOD(_vreducesd_method_4303)>(*this, lib, "vreducesd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreducesd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreducesh_method_4305 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreducesh);
addExtern<DAS_CALL_METHOD(_vreducesh_method_4305)>(*this, lib, "vreducesh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreducesh))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vreducess_method_4307 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vreducess);
addExtern<DAS_CALL_METHOD(_vreducess_method_4307)>(*this, lib, "vreducess",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vreducess))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscalepd_method_4309 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscalepd);
addExtern<DAS_CALL_METHOD(_vrndscalepd_method_4309)>(*this, lib, "vrndscalepd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscalepd))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscaleph_method_4311 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscaleph);
addExtern<DAS_CALL_METHOD(_vrndscaleph_method_4311)>(*this, lib, "vrndscaleph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscaleph))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscaleps_method_4313 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscaleps);
addExtern<DAS_CALL_METHOD(_vrndscaleps_method_4313)>(*this, lib, "vrndscaleps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscaleps))
	->args({"self","x","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscalesd_method_4315 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscalesd);
addExtern<DAS_CALL_METHOD(_vrndscalesd_method_4315)>(*this, lib, "vrndscalesd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscalesd))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscalesh_method_4317 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscalesh);
addExtern<DAS_CALL_METHOD(_vrndscalesh_method_4317)>(*this, lib, "vrndscalesh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscalesh))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrndscaless_method_4319 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrndscaless);
addExtern<DAS_CALL_METHOD(_vrndscaless_method_4319)>(*this, lib, "vrndscaless",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrndscaless))
	->args({"self","x1","x2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt14pd_method_4321 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt14pd);
addExtern<DAS_CALL_METHOD(_vrsqrt14pd_method_4321)>(*this, lib, "vrsqrt14pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt14pd))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt14ps_method_4323 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt14ps);
addExtern<DAS_CALL_METHOD(_vrsqrt14ps_method_4323)>(*this, lib, "vrsqrt14ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt14ps))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt14sd_method_4325 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt14sd);
addExtern<DAS_CALL_METHOD(_vrsqrt14sd_method_4325)>(*this, lib, "vrsqrt14sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt14sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt14ss_method_4327 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt14ss);
addExtern<DAS_CALL_METHOD(_vrsqrt14ss_method_4327)>(*this, lib, "vrsqrt14ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt14ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt28pd_method_4329 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt28pd);
addExtern<DAS_CALL_METHOD(_vrsqrt28pd_method_4329)>(*this, lib, "vrsqrt28pd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt28pd))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt28ps_method_4331 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt28ps);
addExtern<DAS_CALL_METHOD(_vrsqrt28ps_method_4331)>(*this, lib, "vrsqrt28ps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt28ps))
	->args({"self","z","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt28sd_method_4333 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt28sd);
addExtern<DAS_CALL_METHOD(_vrsqrt28sd_method_4333)>(*this, lib, "vrsqrt28sd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt28sd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrt28ss_method_4335 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrt28ss);
addExtern<DAS_CALL_METHOD(_vrsqrt28ss_method_4335)>(*this, lib, "vrsqrt28ss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrt28ss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrtph_method_4337 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrtph);
addExtern<DAS_CALL_METHOD(_vrsqrtph_method_4337)>(*this, lib, "vrsqrtph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrtph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vrsqrtsh_method_4339 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vrsqrtsh);
addExtern<DAS_CALL_METHOD(_vrsqrtsh_method_4339)>(*this, lib, "vrsqrtsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vrsqrtsh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefpd_method_4341 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefpd);
addExtern<DAS_CALL_METHOD(_vscalefpd_method_4341)>(*this, lib, "vscalefpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefpd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefph_method_4343 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefph);
addExtern<DAS_CALL_METHOD(_vscalefph_method_4343)>(*this, lib, "vscalefph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefph))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefps_method_4345 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefps);
addExtern<DAS_CALL_METHOD(_vscalefps_method_4345)>(*this, lib, "vscalefps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefps))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefsd_method_4347 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefsd);
addExtern<DAS_CALL_METHOD(_vscalefsd_method_4347)>(*this, lib, "vscalefsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefsd))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefsh_method_4349 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefsh);
addExtern<DAS_CALL_METHOD(_vscalefsh_method_4349)>(*this, lib, "vscalefsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefsh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscalefss_method_4351 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscalefss);
addExtern<DAS_CALL_METHOD(_vscalefss_method_4351)>(*this, lib, "vscalefss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscalefss))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterdpd_method_4353 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterdpd);
addExtern<DAS_CALL_METHOD(_vscatterdpd_method_4353)>(*this, lib, "vscatterdpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterdpd))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterdps_method_4355 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterdps);
addExtern<DAS_CALL_METHOD(_vscatterdps_method_4355)>(*this, lib, "vscatterdps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterdps))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf0dpd_method_4357 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf0dpd);
addExtern<DAS_CALL_METHOD(_vscatterpf0dpd_method_4357)>(*this, lib, "vscatterpf0dpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf0dpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf0dps_method_4359 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf0dps);
addExtern<DAS_CALL_METHOD(_vscatterpf0dps_method_4359)>(*this, lib, "vscatterpf0dps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf0dps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf0qpd_method_4361 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf0qpd);
addExtern<DAS_CALL_METHOD(_vscatterpf0qpd_method_4361)>(*this, lib, "vscatterpf0qpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf0qpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf0qps_method_4363 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf0qps);
addExtern<DAS_CALL_METHOD(_vscatterpf0qps_method_4363)>(*this, lib, "vscatterpf0qps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf0qps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf1dpd_method_4365 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf1dpd);
addExtern<DAS_CALL_METHOD(_vscatterpf1dpd_method_4365)>(*this, lib, "vscatterpf1dpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf1dpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf1dps_method_4367 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf1dps);
addExtern<DAS_CALL_METHOD(_vscatterpf1dps_method_4367)>(*this, lib, "vscatterpf1dps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf1dps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf1qpd_method_4369 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf1qpd);
addExtern<DAS_CALL_METHOD(_vscatterpf1qpd_method_4369)>(*this, lib, "vscatterpf1qpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf1qpd))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterpf1qps_method_4371 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterpf1qps);
addExtern<DAS_CALL_METHOD(_vscatterpf1qps_method_4371)>(*this, lib, "vscatterpf1qps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterpf1qps))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterqpd_method_4373 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterqpd);
addExtern<DAS_CALL_METHOD(_vscatterqpd_method_4373)>(*this, lib, "vscatterqpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterqpd))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vscatterqps_method_4375 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vscatterqps);
addExtern<DAS_CALL_METHOD(_vscatterqps_method_4375)>(*this, lib, "vscatterqps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vscatterqps))
	->args({"self","addr","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vshuff32x4_method_4377 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshuff32x4);
addExtern<DAS_CALL_METHOD(_vshuff32x4_method_4377)>(*this, lib, "vshuff32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshuff32x4))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vshuff64x2_method_4379 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshuff64x2);
addExtern<DAS_CALL_METHOD(_vshuff64x2_method_4379)>(*this, lib, "vshuff64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshuff64x2))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vshufi32x4_method_4381 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshufi32x4);
addExtern<DAS_CALL_METHOD(_vshufi32x4_method_4381)>(*this, lib, "vshufi32x4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshufi32x4))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vshufi64x2_method_4383 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vshufi64x2);
addExtern<DAS_CALL_METHOD(_vshufi64x2_method_4383)>(*this, lib, "vshufi64x2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vshufi64x2))
	->args({"self","y1","y2","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtph_method_4385 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtph);
addExtern<DAS_CALL_METHOD(_vsqrtph_method_4385)>(*this, lib, "vsqrtph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtph))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsqrtsh_method_4387 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsqrtsh);
addExtern<DAS_CALL_METHOD(_vsqrtsh_method_4387)>(*this, lib, "vsqrtsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsqrtsh))
	->args({"self","x1","x2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubph_method_4389 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubph);
addExtern<DAS_CALL_METHOD(_vsubph_method_4389)>(*this, lib, "vsubph",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubph))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vsubsh_method_4391 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vsubsh);
addExtern<DAS_CALL_METHOD(_vsubsh_method_4391)>(*this, lib, "vsubsh",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vsubsh))
	->args({"self","xmm","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vucomish_method_4393 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vucomish);
addExtern<DAS_CALL_METHOD(_vucomish_method_4393)>(*this, lib, "vucomish",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vucomish))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovq_method_4395 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::kmovq>;
addExtern<DAS_CALL_METHOD(_kmovq_method_4395)>(*this, lib, "kmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::kmovq>::invoke")
	->args({"self","k","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _kmovq_method_4397 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq>;
addExtern<DAS_CALL_METHOD(_kmovq_method_4397)>(*this, lib, "kmovq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &, const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq>::invoke")
	->args({"self","r","k"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vpbroadcastq_method_4399 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vpbroadcastq>;
addExtern<DAS_CALL_METHOD(_vpbroadcastq_method_4399)>(*this, lib, "vpbroadcastq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vpbroadcastq>::invoke")
	->args({"self","x","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _align_method_4401 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::align);
addExtern<DAS_CALL_METHOD(_align_method_4401)>(*this, lib, "align",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::align))
	->args({"self","x","useMultiByteNop"})
		->arg_init(2,make_smart<ExprConstBool>(true))
;
#endif
