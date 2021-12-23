// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "dasXBYAK.h"
#include "need_dasXBYAK.h"
namespace das {
void Module_dasXBYAK::initFunctions_1() {
	addExtern<const char * (*)(int),Xbyak::ConvertErrorToString>(*this,lib,"ConvertErrorToString",SideEffects::worstDefault,"Xbyak::ConvertErrorToString")
		->args({"err"});
	addExtern<int & (*)(),Xbyak::local::GetErrorRef, SimNode_ExtFuncCallRef>(*this,lib,"GetErrorRef",SideEffects::worstDefault,"Xbyak::local::GetErrorRef");
	addExtern<void (*)(int),Xbyak::local::SetError>(*this,lib,"SetError",SideEffects::worstDefault,"Xbyak::local::SetError")
		->args({"err"});
	addExtern<void (*)(),Xbyak::ClearError>(*this,lib,"ClearError",SideEffects::worstDefault,"Xbyak::ClearError");
	addExtern<int (*)(),Xbyak::GetError>(*this,lib,"GetError",SideEffects::worstDefault,"Xbyak::GetError");
	addExtern<void * (*)(unsigned long long,unsigned long long),Xbyak::AlignedMalloc>(*this,lib,"AlignedMalloc",SideEffects::worstDefault,"Xbyak::AlignedMalloc")
		->args({"size","alignment"});
	addExtern<void (*)(void *),Xbyak::AlignedFree>(*this,lib,"AlignedFree",SideEffects::worstDefault,"Xbyak::AlignedFree")
		->args({"p"});
	addExtern<bool (*)(unsigned int),Xbyak::inner::IsInDisp8>(*this,lib,"IsInDisp8",SideEffects::worstDefault,"Xbyak::inner::IsInDisp8")
		->args({"x"});
	addExtern<bool (*)(unsigned long long),Xbyak::inner::IsInInt32>(*this,lib,"IsInInt32",SideEffects::worstDefault,"Xbyak::inner::IsInInt32")
		->args({"x"});
	addExtern<unsigned int (*)(unsigned long long),Xbyak::inner::VerifyInInt32>(*this,lib,"VerifyInInt32",SideEffects::worstDefault,"Xbyak::inner::VerifyInInt32")
		->args({"x"});
	using _method_1 = das::das_call_member< Xbyak::Operand::Kind (Xbyak::Operand::*)() const,&Xbyak::Operand::getKind >;
	addExtern<DAS_CALL_METHOD(_method_1)>(*this,lib,"getKind",SideEffects::worstDefault,"das_call_member< Xbyak::Operand::Kind (Xbyak::Operand::*)() const,&Xbyak::Operand::getKind >::invoke")
		->args({"self"});
	using _method_2 = das::das_call_member< int (Xbyak::Operand::*)() const,&Xbyak::Operand::getIdx >;
	addExtern<DAS_CALL_METHOD(_method_2)>(*this,lib,"getIdx",SideEffects::worstDefault,"das_call_member< int (Xbyak::Operand::*)() const,&Xbyak::Operand::getIdx >::invoke")
		->args({"self"});
	using _method_3 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isNone >;
	addExtern<DAS_CALL_METHOD(_method_3)>(*this,lib,"isNone",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isNone >::invoke")
		->args({"self"});
	using _method_4 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isMMX >;
	addExtern<DAS_CALL_METHOD(_method_4)>(*this,lib,"isMMX",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isMMX >::invoke")
		->args({"self"});
	using _method_5 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isXMM >;
	addExtern<DAS_CALL_METHOD(_method_5)>(*this,lib,"isXMM",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isXMM >::invoke")
		->args({"self"});
	using _method_6 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isYMM >;
	addExtern<DAS_CALL_METHOD(_method_6)>(*this,lib,"isYMM",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isYMM >::invoke")
		->args({"self"});
	using _method_7 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isZMM >;
	addExtern<DAS_CALL_METHOD(_method_7)>(*this,lib,"isZMM",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isZMM >::invoke")
		->args({"self"});
	using _method_8 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isTMM >;
	addExtern<DAS_CALL_METHOD(_method_8)>(*this,lib,"isTMM",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isTMM >::invoke")
		->args({"self"});
	using _method_9 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isXMEM >;
	addExtern<DAS_CALL_METHOD(_method_9)>(*this,lib,"isXMEM",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isXMEM >::invoke")
		->args({"self"});
	using _method_10 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isYMEM >;
	addExtern<DAS_CALL_METHOD(_method_10)>(*this,lib,"isYMEM",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isYMEM >::invoke")
		->args({"self"});
	using _method_11 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isZMEM >;
	addExtern<DAS_CALL_METHOD(_method_11)>(*this,lib,"isZMEM",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isZMEM >::invoke")
		->args({"self"});
	using _method_12 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isOPMASK >;
	addExtern<DAS_CALL_METHOD(_method_12)>(*this,lib,"isOPMASK",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isOPMASK >::invoke")
		->args({"self"});
	using _method_13 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isBNDREG >;
	addExtern<DAS_CALL_METHOD(_method_13)>(*this,lib,"isBNDREG",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isBNDREG >::invoke")
		->args({"self"});
	using _method_14 = das::das_call_member< bool (Xbyak::Operand::*)(int) const,&Xbyak::Operand::isREG >;
	addExtern<DAS_CALL_METHOD(_method_14)>(*this,lib,"isREG",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)(int) const,&Xbyak::Operand::isREG >::invoke")
		->args({"self","bit"});
	using _method_15 = das::das_call_member< bool (Xbyak::Operand::*)(int) const,&Xbyak::Operand::isMEM >;
	addExtern<DAS_CALL_METHOD(_method_15)>(*this,lib,"isMEM",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)(int) const,&Xbyak::Operand::isMEM >::invoke")
		->args({"self","bit"});
	using _method_16 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isFPU >;
	addExtern<DAS_CALL_METHOD(_method_16)>(*this,lib,"isFPU",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isFPU >::invoke")
		->args({"self"});
	using _method_17 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isExt8bit >;
	addExtern<DAS_CALL_METHOD(_method_17)>(*this,lib,"isExt8bit",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isExt8bit >::invoke")
		->args({"self"});
	using _method_18 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isExtIdx >;
	addExtern<DAS_CALL_METHOD(_method_18)>(*this,lib,"isExtIdx",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isExtIdx >::invoke")
		->args({"self"});
	using _method_19 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isExtIdx2 >;
	addExtern<DAS_CALL_METHOD(_method_19)>(*this,lib,"isExtIdx2",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isExtIdx2 >::invoke")
		->args({"self"});
	using _method_20 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::hasEvex >;
	addExtern<DAS_CALL_METHOD(_method_20)>(*this,lib,"hasEvex",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::hasEvex >::invoke")
		->args({"self"});
	using _method_21 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::hasRex >;
	addExtern<DAS_CALL_METHOD(_method_21)>(*this,lib,"hasRex",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::hasRex >::invoke")
		->args({"self"});
	using _method_22 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::hasZero >;
	addExtern<DAS_CALL_METHOD(_method_22)>(*this,lib,"hasZero",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::hasZero >::invoke")
		->args({"self"});
	using _method_23 = das::das_call_member< int (Xbyak::Operand::*)() const,&Xbyak::Operand::getOpmaskIdx >;
	addExtern<DAS_CALL_METHOD(_method_23)>(*this,lib,"getOpmaskIdx",SideEffects::worstDefault,"das_call_member< int (Xbyak::Operand::*)() const,&Xbyak::Operand::getOpmaskIdx >::invoke")
		->args({"self"});
	using _method_24 = das::das_call_member< int (Xbyak::Operand::*)() const,&Xbyak::Operand::getRounding >;
	addExtern<DAS_CALL_METHOD(_method_24)>(*this,lib,"getRounding",SideEffects::worstDefault,"das_call_member< int (Xbyak::Operand::*)() const,&Xbyak::Operand::getRounding >::invoke")
		->args({"self"});
	using _method_25 = das::das_call_member< void (Xbyak::Operand::*)(Xbyak::Operand::Kind),&Xbyak::Operand::setKind >;
	addExtern<DAS_CALL_METHOD(_method_25)>(*this,lib,"setKind",SideEffects::worstDefault,"das_call_member< void (Xbyak::Operand::*)(Xbyak::Operand::Kind),&Xbyak::Operand::setKind >::invoke")
		->args({"self","kind"});
	using _method_26 = das::das_call_member< void (Xbyak::Operand::*)(int),&Xbyak::Operand::setBit >;
	addExtern<DAS_CALL_METHOD(_method_26)>(*this,lib,"setBit",SideEffects::worstDefault,"das_call_member< void (Xbyak::Operand::*)(int),&Xbyak::Operand::setBit >::invoke")
		->args({"self","bit"});
	using _method_27 = das::das_call_member< void (Xbyak::Operand::*)(int,bool),&Xbyak::Operand::setOpmaskIdx >;
	addExtern<DAS_CALL_METHOD(_method_27)>(*this,lib,"setOpmaskIdx",SideEffects::worstDefault,"das_call_member< void (Xbyak::Operand::*)(int,bool),&Xbyak::Operand::setOpmaskIdx >::invoke")
		->args({"self","idx",""});
	using _method_28 = das::das_call_member< void (Xbyak::Operand::*)(int),&Xbyak::Operand::setRounding >;
	addExtern<DAS_CALL_METHOD(_method_28)>(*this,lib,"setRounding",SideEffects::worstDefault,"das_call_member< void (Xbyak::Operand::*)(int),&Xbyak::Operand::setRounding >::invoke")
		->args({"self","idx"});
	using _method_29 = das::das_call_member< void (Xbyak::Operand::*)(),&Xbyak::Operand::setZero >;
	addExtern<DAS_CALL_METHOD(_method_29)>(*this,lib,"setZero",SideEffects::worstDefault,"das_call_member< void (Xbyak::Operand::*)(),&Xbyak::Operand::setZero >::invoke")
		->args({"self"});
	using _method_30 = das::das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isHigh8bit >;
	addExtern<DAS_CALL_METHOD(_method_30)>(*this,lib,"isHigh8bit",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)() const,&Xbyak::Operand::isHigh8bit >::invoke")
		->args({"self"});
	using _method_31 = das::das_call_member< bool (Xbyak::Operand::*)(int,unsigned int) const,&Xbyak::Operand::is >;
	addExtern<DAS_CALL_METHOD(_method_31)>(*this,lib,"is",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)(int,unsigned int) const,&Xbyak::Operand::is >::invoke")
		->args({"self","kind","bit"});
	using _method_32 = das::das_call_member< bool (Xbyak::Operand::*)(unsigned int) const,&Xbyak::Operand::isBit >;
	addExtern<DAS_CALL_METHOD(_method_32)>(*this,lib,"isBit",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)(unsigned int) const,&Xbyak::Operand::isBit >::invoke")
		->args({"self","bit"});
	using _method_33 = das::das_call_member< unsigned int (Xbyak::Operand::*)() const,&Xbyak::Operand::getBit >;
	addExtern<DAS_CALL_METHOD(_method_33)>(*this,lib,"getBit",SideEffects::worstDefault,"das_call_member< unsigned int (Xbyak::Operand::*)() const,&Xbyak::Operand::getBit >::invoke")
		->args({"self"});
	using _method_34 = das::das_call_member< const char * (Xbyak::Operand::*)() const,&Xbyak::Operand::toString >;
	addExtern<DAS_CALL_METHOD(_method_34)>(*this,lib,"toString",SideEffects::worstDefault,"das_call_member< const char * (Xbyak::Operand::*)() const,&Xbyak::Operand::toString >::invoke")
		->args({"self"});
	using _method_35 = das::das_call_member< bool (Xbyak::Operand::*)(const Xbyak::Operand &) const,&Xbyak::Operand::isEqualIfNotInherited >;
	addExtern<DAS_CALL_METHOD(_method_35)>(*this,lib,"isEqualIfNotInherited",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)(const Xbyak::Operand &) const,&Xbyak::Operand::isEqualIfNotInherited >::invoke")
		->args({"self","rhs"});
	using _method_36 = das::das_call_member< bool (Xbyak::Operand::*)(const Xbyak::Operand &) const,&Xbyak::Operand::operator== >;
	addExtern<DAS_CALL_METHOD(_method_36)>(*this,lib,"==",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)(const Xbyak::Operand &) const,&Xbyak::Operand::operator== >::invoke")
		->args({"self","rhs"});
	using _method_37 = das::das_call_member< bool (Xbyak::Operand::*)(const Xbyak::Operand &) const,&Xbyak::Operand::operator!= >;
	addExtern<DAS_CALL_METHOD(_method_37)>(*this,lib,"!=",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Operand::*)(const Xbyak::Operand &) const,&Xbyak::Operand::operator!= >::invoke")
		->args({"self","rhs"});
	using _method_38 = das::das_call_member< const Xbyak::Address & (Xbyak::Operand::*)() const,&Xbyak::Operand::getAddress >;
	addExtern<DAS_CALL_METHOD(_method_38), SimNode_ExtFuncCallRef>(*this,lib,"getAddress",SideEffects::worstDefault,"das_call_member< const Xbyak::Address & (Xbyak::Operand::*)() const,&Xbyak::Operand::getAddress >::invoke")
		->args({"self"});
	using _method_39 = das::das_call_member< const Xbyak::Reg & (Xbyak::Operand::*)() const,&Xbyak::Operand::getReg >;
	addExtern<DAS_CALL_METHOD(_method_39), SimNode_ExtFuncCallRef>(*this,lib,"getReg",SideEffects::worstDefault,"das_call_member< const Xbyak::Reg & (Xbyak::Operand::*)() const,&Xbyak::Operand::getReg >::invoke")
		->args({"self"});
	using _method_40 = das::das_call_member< Xbyak::Reg (Xbyak::Reg::*)(int) const,&Xbyak::Reg::changeBit >;
	addExtern<DAS_CALL_METHOD(_method_40),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"changeBit",SideEffects::worstDefault,"das_call_member< Xbyak::Reg (Xbyak::Reg::*)(int) const,&Xbyak::Reg::changeBit >::invoke")
		->args({"self","bit"});
	using _method_41 = das::das_call_member< unsigned char (Xbyak::Reg::*)() const,&Xbyak::Reg::getRexW >;
	addExtern<DAS_CALL_METHOD(_method_41)>(*this,lib,"getRexW",SideEffects::worstDefault,"das_call_member< unsigned char (Xbyak::Reg::*)() const,&Xbyak::Reg::getRexW >::invoke")
		->args({"self"});
	using _method_42 = das::das_call_member< unsigned char (Xbyak::Reg::*)() const,&Xbyak::Reg::getRexR >;
	addExtern<DAS_CALL_METHOD(_method_42)>(*this,lib,"getRexR",SideEffects::worstDefault,"das_call_member< unsigned char (Xbyak::Reg::*)() const,&Xbyak::Reg::getRexR >::invoke")
		->args({"self"});
	using _method_43 = das::das_call_member< unsigned char (Xbyak::Reg::*)() const,&Xbyak::Reg::getRexX >;
	addExtern<DAS_CALL_METHOD(_method_43)>(*this,lib,"getRexX",SideEffects::worstDefault,"das_call_member< unsigned char (Xbyak::Reg::*)() const,&Xbyak::Reg::getRexX >::invoke")
		->args({"self"});
	using _method_44 = das::das_call_member< unsigned char (Xbyak::Reg::*)() const,&Xbyak::Reg::getRexB >;
	addExtern<DAS_CALL_METHOD(_method_44)>(*this,lib,"getRexB",SideEffects::worstDefault,"das_call_member< unsigned char (Xbyak::Reg::*)() const,&Xbyak::Reg::getRexB >::invoke")
		->args({"self"});
	using _method_45 = das::das_call_member< unsigned char (Xbyak::Reg::*)(const Xbyak::Reg &) const,&Xbyak::Reg::getRex >;
	addExtern<DAS_CALL_METHOD(_method_45)>(*this,lib,"getRex",SideEffects::worstDefault,"das_call_member< unsigned char (Xbyak::Reg::*)(const Xbyak::Reg &) const,&Xbyak::Reg::getRex >::invoke")
		->args({"self","base"});
	using _method_46 = das::das_call_member< Xbyak::Reg8 (Xbyak::Reg::*)() const,&Xbyak::Reg::cvt8 >;
	addExtern<DAS_CALL_METHOD(_method_46),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"cvt8",SideEffects::worstDefault,"das_call_member< Xbyak::Reg8 (Xbyak::Reg::*)() const,&Xbyak::Reg::cvt8 >::invoke")
		->args({"self"});
	using _method_47 = das::das_call_member< Xbyak::Reg16 (Xbyak::Reg::*)() const,&Xbyak::Reg::cvt16 >;
	addExtern<DAS_CALL_METHOD(_method_47),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"cvt16",SideEffects::worstDefault,"das_call_member< Xbyak::Reg16 (Xbyak::Reg::*)() const,&Xbyak::Reg::cvt16 >::invoke")
		->args({"self"});
	using _method_48 = das::das_call_member< Xbyak::Reg32 (Xbyak::Reg::*)() const,&Xbyak::Reg::cvt32 >;
	addExtern<DAS_CALL_METHOD(_method_48),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"cvt32",SideEffects::worstDefault,"das_call_member< Xbyak::Reg32 (Xbyak::Reg::*)() const,&Xbyak::Reg::cvt32 >::invoke")
		->args({"self"});
	using _method_49 = das::das_call_member< Xbyak::Reg64 (Xbyak::Reg::*)() const,&Xbyak::Reg::cvt64 >;
	addExtern<DAS_CALL_METHOD(_method_49),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"cvt64",SideEffects::worstDefault,"das_call_member< Xbyak::Reg64 (Xbyak::Reg::*)() const,&Xbyak::Reg::cvt64 >::invoke")
		->args({"self"});
	using _method_50 = das::das_call_member< Xbyak::Xmm (Xbyak::Xmm::*)(const Xbyak::EvexModifierRounding &) const,&Xbyak::Xmm::operator| >;
	addExtern<DAS_CALL_METHOD(_method_50),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"|",SideEffects::worstDefault,"das_call_member< Xbyak::Xmm (Xbyak::Xmm::*)(const Xbyak::EvexModifierRounding &) const,&Xbyak::Xmm::operator| >::invoke")
		->args({"self","emr"});
	using _method_51 = das::das_call_member< Xbyak::Xmm (Xbyak::Xmm::*)(int) const,&Xbyak::Xmm::copyAndSetIdx >;
	addExtern<DAS_CALL_METHOD(_method_51),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"copyAndSetIdx",SideEffects::worstDefault,"das_call_member< Xbyak::Xmm (Xbyak::Xmm::*)(int) const,&Xbyak::Xmm::copyAndSetIdx >::invoke")
		->args({"self","idx"});
	using _method_52 = das::das_call_member< Xbyak::Xmm (Xbyak::Xmm::*)(Xbyak::Operand::Kind) const,&Xbyak::Xmm::copyAndSetKind >;
	addExtern<DAS_CALL_METHOD(_method_52),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"copyAndSetKind",SideEffects::worstDefault,"das_call_member< Xbyak::Xmm (Xbyak::Xmm::*)(Xbyak::Operand::Kind) const,&Xbyak::Xmm::copyAndSetKind >::invoke")
		->args({"self","kind"});
	using _method_53 = das::das_call_member< Xbyak::Ymm (Xbyak::Ymm::*)(const Xbyak::EvexModifierRounding &) const,&Xbyak::Ymm::operator| >;
	addExtern<DAS_CALL_METHOD(_method_53),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"|",SideEffects::worstDefault,"das_call_member< Xbyak::Ymm (Xbyak::Ymm::*)(const Xbyak::EvexModifierRounding &) const,&Xbyak::Ymm::operator| >::invoke")
		->args({"self","emr"});
	using _method_54 = das::das_call_member< Xbyak::Zmm (Xbyak::Zmm::*)(const Xbyak::EvexModifierRounding &) const,&Xbyak::Zmm::operator| >;
	addExtern<DAS_CALL_METHOD(_method_54),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"|",SideEffects::worstDefault,"das_call_member< Xbyak::Zmm (Xbyak::Zmm::*)(const Xbyak::EvexModifierRounding &) const,&Xbyak::Zmm::operator| >::invoke")
		->args({"self","emr"});
	using _method_55 = das::das_call_member< int (Xbyak::Segment::*)() const,&Xbyak::Segment::getIdx >;
	addExtern<DAS_CALL_METHOD(_method_55)>(*this,lib,"getIdx",SideEffects::worstDefault,"das_call_member< int (Xbyak::Segment::*)() const,&Xbyak::Segment::getIdx >::invoke")
		->args({"self"});
	using _method_56 = das::das_call_member< const char * (Xbyak::Segment::*)() const,&Xbyak::Segment::toString >;
	addExtern<DAS_CALL_METHOD(_method_56)>(*this,lib,"toString",SideEffects::worstDefault,"das_call_member< const char * (Xbyak::Segment::*)() const,&Xbyak::Segment::toString >::invoke")
		->args({"self"});
	using _method_57 = das::das_call_member< bool (Xbyak::RegExp::*)(int) const,&Xbyak::RegExp::isVsib >;
	addExtern<DAS_CALL_METHOD(_method_57)>(*this,lib,"isVsib",SideEffects::worstDefault,"das_call_member< bool (Xbyak::RegExp::*)(int) const,&Xbyak::RegExp::isVsib >::invoke")
		->args({"self","bit"});
	using _method_58 = das::das_call_member< Xbyak::RegExp (Xbyak::RegExp::*)() const,&Xbyak::RegExp::optimize >;
	addExtern<DAS_CALL_METHOD(_method_58),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"optimize",SideEffects::worstDefault,"das_call_member< Xbyak::RegExp (Xbyak::RegExp::*)() const,&Xbyak::RegExp::optimize >::invoke")
		->args({"self"});
	using _method_59 = das::das_call_member< bool (Xbyak::RegExp::*)(const Xbyak::RegExp &) const,&Xbyak::RegExp::operator== >;
	addExtern<DAS_CALL_METHOD(_method_59)>(*this,lib,"==",SideEffects::worstDefault,"das_call_member< bool (Xbyak::RegExp::*)(const Xbyak::RegExp &) const,&Xbyak::RegExp::operator== >::invoke")
		->args({"self","rhs"});
	using _method_60 = das::das_call_member< const Xbyak::Reg & (Xbyak::RegExp::*)() const,&Xbyak::RegExp::getBase >;
	addExtern<DAS_CALL_METHOD(_method_60), SimNode_ExtFuncCallRef>(*this,lib,"getBase",SideEffects::worstDefault,"das_call_member< const Xbyak::Reg & (Xbyak::RegExp::*)() const,&Xbyak::RegExp::getBase >::invoke")
		->args({"self"});
	using _method_61 = das::das_call_member< const Xbyak::Reg & (Xbyak::RegExp::*)() const,&Xbyak::RegExp::getIndex >;
	addExtern<DAS_CALL_METHOD(_method_61), SimNode_ExtFuncCallRef>(*this,lib,"getIndex",SideEffects::worstDefault,"das_call_member< const Xbyak::Reg & (Xbyak::RegExp::*)() const,&Xbyak::RegExp::getIndex >::invoke")
		->args({"self"});
	using _method_62 = das::das_call_member< int (Xbyak::RegExp::*)() const,&Xbyak::RegExp::getScale >;
	addExtern<DAS_CALL_METHOD(_method_62)>(*this,lib,"getScale",SideEffects::worstDefault,"das_call_member< int (Xbyak::RegExp::*)() const,&Xbyak::RegExp::getScale >::invoke")
		->args({"self"});
	using _method_63 = das::das_call_member< unsigned long long (Xbyak::RegExp::*)() const,&Xbyak::RegExp::getDisp >;
	addExtern<DAS_CALL_METHOD(_method_63)>(*this,lib,"getDisp",SideEffects::worstDefault,"das_call_member< unsigned long long (Xbyak::RegExp::*)() const,&Xbyak::RegExp::getDisp >::invoke")
		->args({"self"});
	using _method_64 = das::das_call_member< void (Xbyak::RegExp::*)() const,&Xbyak::RegExp::verify >;
	addExtern<DAS_CALL_METHOD(_method_64)>(*this,lib,"verify",SideEffects::worstDefault,"das_call_member< void (Xbyak::RegExp::*)() const,&Xbyak::RegExp::verify >::invoke")
		->args({"self"});
	using _method_65 = das::das_call_member< unsigned char (Xbyak::RegExp::*)() const,&Xbyak::RegExp::getRex >;
	addExtern<DAS_CALL_METHOD(_method_65)>(*this,lib,"getRex",SideEffects::worstDefault,"das_call_member< unsigned char (Xbyak::RegExp::*)() const,&Xbyak::RegExp::getRex >::invoke")
		->args({"self"});
	addExtern<Xbyak::RegExp (*)(const Xbyak::RegExp &,const Xbyak::RegExp &),Xbyak::operator+,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"+",SideEffects::worstDefault,"Xbyak::operator+")
		->args({"a","b"});
	addExtern<Xbyak::RegExp (*)(const Xbyak::Reg &,int),Xbyak::operator*,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"*",SideEffects::worstDefault,"Xbyak::operator*")
		->args({"r","scale"});
	addExtern<Xbyak::RegExp (*)(int,const Xbyak::Reg &),Xbyak::operator*,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"*",SideEffects::worstDefault,"Xbyak::operator*")
		->args({"scale","r"});
	addExtern<Xbyak::RegExp (*)(const Xbyak::RegExp &,unsigned long long),Xbyak::operator-,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"-",SideEffects::worstDefault,"Xbyak::operator-")
		->args({"e","disp"});
	using _method_66 = das::das_call_member< bool (Xbyak::CodeArray::*)(Xbyak::CodeArray::ProtectMode,bool),&Xbyak::CodeArray::setProtectMode >;
	addExtern<DAS_CALL_METHOD(_method_66)>(*this,lib,"setProtectMode",SideEffects::worstDefault,"das_call_member< bool (Xbyak::CodeArray::*)(Xbyak::CodeArray::ProtectMode,bool),&Xbyak::CodeArray::setProtectMode >::invoke")
		->args({"self","mode","throwException"});
	using _method_67 = das::das_call_member< bool (Xbyak::CodeArray::*)(bool),&Xbyak::CodeArray::setProtectModeRE >;
	addExtern<DAS_CALL_METHOD(_method_67)>(*this,lib,"setProtectModeRE",SideEffects::worstDefault,"das_call_member< bool (Xbyak::CodeArray::*)(bool),&Xbyak::CodeArray::setProtectModeRE >::invoke")
		->args({"self","throwException"});
	using _method_68 = das::das_call_member< bool (Xbyak::CodeArray::*)(bool),&Xbyak::CodeArray::setProtectModeRW >;
	addExtern<DAS_CALL_METHOD(_method_68)>(*this,lib,"setProtectModeRW",SideEffects::worstDefault,"das_call_member< bool (Xbyak::CodeArray::*)(bool),&Xbyak::CodeArray::setProtectModeRW >::invoke")
		->args({"self","throwException"});
	using _method_69 = das::das_call_member< void (Xbyak::CodeArray::*)(),&Xbyak::CodeArray::resetSize >;
	addExtern<DAS_CALL_METHOD(_method_69)>(*this,lib,"resetSize",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeArray::*)(),&Xbyak::CodeArray::resetSize >::invoke")
		->args({"self"});
	using _method_70 = das::das_call_member< void (Xbyak::CodeArray::*)(int),&Xbyak::CodeArray::db >;
	addExtern<DAS_CALL_METHOD(_method_70)>(*this,lib,"db",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeArray::*)(int),&Xbyak::CodeArray::db >::invoke")
		->args({"self","code"});
	using _method_71 = das::das_call_member< void (Xbyak::CodeArray::*)(const unsigned char *,unsigned long long),&Xbyak::CodeArray::db >;
	addExtern<DAS_CALL_METHOD(_method_71)>(*this,lib,"db",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeArray::*)(const unsigned char *,unsigned long long),&Xbyak::CodeArray::db >::invoke")
		->args({"self","code","codeSize"});
	using _method_72 = das::das_call_member< void (Xbyak::CodeArray::*)(unsigned long long,unsigned long long),&Xbyak::CodeArray::db >;
	addExtern<DAS_CALL_METHOD(_method_72)>(*this,lib,"db",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeArray::*)(unsigned long long,unsigned long long),&Xbyak::CodeArray::db >::invoke")
		->args({"self","code","codeSize"});
	using _method_73 = das::das_call_member< void (Xbyak::CodeArray::*)(unsigned int),&Xbyak::CodeArray::dw >;
	addExtern<DAS_CALL_METHOD(_method_73)>(*this,lib,"dw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeArray::*)(unsigned int),&Xbyak::CodeArray::dw >::invoke")
		->args({"self","code"});
	using _method_74 = das::das_call_member< void (Xbyak::CodeArray::*)(unsigned int),&Xbyak::CodeArray::dd >;
	addExtern<DAS_CALL_METHOD(_method_74)>(*this,lib,"dd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeArray::*)(unsigned int),&Xbyak::CodeArray::dd >::invoke")
		->args({"self","code"});
	using _method_75 = das::das_call_member< void (Xbyak::CodeArray::*)(unsigned long long),&Xbyak::CodeArray::dq >;
	addExtern<DAS_CALL_METHOD(_method_75)>(*this,lib,"dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeArray::*)(unsigned long long),&Xbyak::CodeArray::dq >::invoke")
		->args({"self","code"});
	using _method_76 = das::das_call_member< const unsigned char * (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::getCode >;
	addExtern<DAS_CALL_METHOD(_method_76)>(*this,lib,"getCode",SideEffects::worstDefault,"das_call_member< const unsigned char * (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::getCode >::invoke")
		->args({"self"});
	using _method_77 = das::das_call_member< const unsigned char * (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::getCurr >;
	addExtern<DAS_CALL_METHOD(_method_77)>(*this,lib,"getCurr",SideEffects::worstDefault,"das_call_member< const unsigned char * (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::getCurr >::invoke")
		->args({"self"});
	using _method_78 = das::das_call_member< unsigned long long (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::getSize >;
	addExtern<DAS_CALL_METHOD(_method_78)>(*this,lib,"getSize",SideEffects::worstDefault,"das_call_member< unsigned long long (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::getSize >::invoke")
		->args({"self"});
	using _method_79 = das::das_call_member< void (Xbyak::CodeArray::*)(unsigned long long),&Xbyak::CodeArray::setSize >;
	addExtern<DAS_CALL_METHOD(_method_79)>(*this,lib,"setSize",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeArray::*)(unsigned long long),&Xbyak::CodeArray::setSize >::invoke")
		->args({"self","size"});
	using _method_80 = das::das_call_member< void (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::dump >;
	addExtern<DAS_CALL_METHOD(_method_80)>(*this,lib,"dump",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::dump >::invoke")
		->args({"self"});
	using _method_81 = das::das_call_member< void (Xbyak::CodeArray::*)(unsigned long long,unsigned long long,unsigned long long),&Xbyak::CodeArray::rewrite >;
	addExtern<DAS_CALL_METHOD(_method_81)>(*this,lib,"rewrite",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeArray::*)(unsigned long long,unsigned long long,unsigned long long),&Xbyak::CodeArray::rewrite >::invoke")
		->args({"self","offset","disp","size"});
	using _method_82 = das::das_call_member< void (Xbyak::CodeArray::*)(unsigned long long,unsigned long long,int,Xbyak::inner::LabelMode),&Xbyak::CodeArray::save >;
	addExtern<DAS_CALL_METHOD(_method_82)>(*this,lib,"save",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeArray::*)(unsigned long long,unsigned long long,int,Xbyak::inner::LabelMode),&Xbyak::CodeArray::save >::invoke")
		->args({"self","offset","val","size","mode"});
	using _method_83 = das::das_call_member< bool (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::isAutoGrow >;
	addExtern<DAS_CALL_METHOD(_method_83)>(*this,lib,"isAutoGrow",SideEffects::worstDefault,"das_call_member< bool (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::isAutoGrow >::invoke")
		->args({"self"});
	using _method_84 = das::das_call_member< bool (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::isCalledCalcJmpAddress >;
	addExtern<DAS_CALL_METHOD(_method_84)>(*this,lib,"isCalledCalcJmpAddress",SideEffects::worstDefault,"das_call_member< bool (Xbyak::CodeArray::*)() const,&Xbyak::CodeArray::isCalledCalcJmpAddress >::invoke")
		->args({"self"});
	using _method_85 = das::das_call_member< Xbyak::RegExp (Xbyak::Address::*)(bool) const,&Xbyak::Address::getRegExp >;
	addExtern<DAS_CALL_METHOD(_method_85),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"getRegExp",SideEffects::worstDefault,"das_call_member< Xbyak::RegExp (Xbyak::Address::*)(bool) const,&Xbyak::Address::getRegExp >::invoke")
		->args({"self","optimize"});
	using _method_86 = das::das_call_member< Xbyak::Address::Mode (Xbyak::Address::*)() const,&Xbyak::Address::getMode >;
	addExtern<DAS_CALL_METHOD(_method_86)>(*this,lib,"getMode",SideEffects::worstDefault,"das_call_member< Xbyak::Address::Mode (Xbyak::Address::*)() const,&Xbyak::Address::getMode >::invoke")
		->args({"self"});
}
}

