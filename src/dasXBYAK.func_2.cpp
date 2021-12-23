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
void Module_dasXBYAK::initFunctions_2() {
	using _method_87 = das::das_call_member< bool (Xbyak::Address::*)() const,&Xbyak::Address::is32bit >;
	addExtern<DAS_CALL_METHOD(_method_87)>(*this,lib,"is32bit",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Address::*)() const,&Xbyak::Address::is32bit >::invoke")
		->args({"self"});
	using _method_88 = das::das_call_member< bool (Xbyak::Address::*)() const,&Xbyak::Address::isOnlyDisp >;
	addExtern<DAS_CALL_METHOD(_method_88)>(*this,lib,"isOnlyDisp",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Address::*)() const,&Xbyak::Address::isOnlyDisp >::invoke")
		->args({"self"});
	using _method_89 = das::das_call_member< unsigned long long (Xbyak::Address::*)() const,&Xbyak::Address::getDisp >;
	addExtern<DAS_CALL_METHOD(_method_89)>(*this,lib,"getDisp",SideEffects::worstDefault,"das_call_member< unsigned long long (Xbyak::Address::*)() const,&Xbyak::Address::getDisp >::invoke")
		->args({"self"});
	using _method_90 = das::das_call_member< unsigned char (Xbyak::Address::*)() const,&Xbyak::Address::getRex >;
	addExtern<DAS_CALL_METHOD(_method_90)>(*this,lib,"getRex",SideEffects::worstDefault,"das_call_member< unsigned char (Xbyak::Address::*)() const,&Xbyak::Address::getRex >::invoke")
		->args({"self"});
	using _method_91 = das::das_call_member< bool (Xbyak::Address::*)() const,&Xbyak::Address::is64bitDisp >;
	addExtern<DAS_CALL_METHOD(_method_91)>(*this,lib,"is64bitDisp",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Address::*)() const,&Xbyak::Address::is64bitDisp >::invoke")
		->args({"self"});
	using _method_92 = das::das_call_member< bool (Xbyak::Address::*)() const,&Xbyak::Address::isBroadcast >;
	addExtern<DAS_CALL_METHOD(_method_92)>(*this,lib,"isBroadcast",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Address::*)() const,&Xbyak::Address::isBroadcast >::invoke")
		->args({"self"});
	using _method_93 = das::das_call_member< const Xbyak::Label * (Xbyak::Address::*)() const,&Xbyak::Address::getLabel >;
	addExtern<DAS_CALL_METHOD(_method_93)>(*this,lib,"getLabel",SideEffects::worstDefault,"das_call_member< const Xbyak::Label * (Xbyak::Address::*)() const,&Xbyak::Address::getLabel >::invoke")
		->args({"self"});
	using _method_94 = das::das_call_member< bool (Xbyak::Address::*)(const Xbyak::Address &) const,&Xbyak::Address::operator== >;
	addExtern<DAS_CALL_METHOD(_method_94)>(*this,lib,"==",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Address::*)(const Xbyak::Address &) const,&Xbyak::Address::operator== >::invoke")
		->args({"self","rhs"});
	using _method_95 = das::das_call_member< bool (Xbyak::Address::*)(const Xbyak::Address &) const,&Xbyak::Address::operator!= >;
	addExtern<DAS_CALL_METHOD(_method_95)>(*this,lib,"!=",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Address::*)(const Xbyak::Address &) const,&Xbyak::Address::operator!= >::invoke")
		->args({"self","rhs"});
	using _method_96 = das::das_call_member< bool (Xbyak::Address::*)() const,&Xbyak::Address::isVsib >;
	addExtern<DAS_CALL_METHOD(_method_96)>(*this,lib,"isVsib",SideEffects::worstDefault,"das_call_member< bool (Xbyak::Address::*)() const,&Xbyak::Address::isVsib >::invoke")
		->args({"self"});
	using _method_97 = das::das_call_member< Xbyak::Address (Xbyak::AddressFrame::*)(const Xbyak::RegExp &) const,&Xbyak::AddressFrame::operator[] >;
	addExtern<DAS_CALL_METHOD(_method_97),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"[]",SideEffects::worstDefault,"das_call_member< Xbyak::Address (Xbyak::AddressFrame::*)(const Xbyak::RegExp &) const,&Xbyak::AddressFrame::operator[] >::invoke")
		->args({"self","e"});
	using _method_98 = das::das_call_member< Xbyak::Address (Xbyak::AddressFrame::*)(const void *) const,&Xbyak::AddressFrame::operator[] >;
	addExtern<DAS_CALL_METHOD(_method_98),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"[]",SideEffects::worstDefault,"das_call_member< Xbyak::Address (Xbyak::AddressFrame::*)(const void *) const,&Xbyak::AddressFrame::operator[] >::invoke")
		->args({"self","disp"});
	using _method_99 = das::das_call_member< Xbyak::Address (Xbyak::AddressFrame::*)(unsigned long long) const,&Xbyak::AddressFrame::operator[] >;
	addExtern<DAS_CALL_METHOD(_method_99),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"[]",SideEffects::worstDefault,"das_call_member< Xbyak::Address (Xbyak::AddressFrame::*)(unsigned long long) const,&Xbyak::AddressFrame::operator[] >::invoke")
		->args({"self","disp"});
	using _method_100 = das::das_call_member< Xbyak::Address (Xbyak::AddressFrame::*)(const Xbyak::RegRip &) const,&Xbyak::AddressFrame::operator[] >;
	addExtern<DAS_CALL_METHOD(_method_100),SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"[]",SideEffects::worstDefault,"das_call_member< Xbyak::Address (Xbyak::AddressFrame::*)(const Xbyak::RegRip &) const,&Xbyak::AddressFrame::operator[] >::invoke")
		->args({"self","addr"});
	using _method_101 = das::das_call_member< void (Xbyak::Label::*)(),&Xbyak::Label::clear >;
	addExtern<DAS_CALL_METHOD(_method_101)>(*this,lib,"clear",SideEffects::worstDefault,"das_call_member< void (Xbyak::Label::*)(),&Xbyak::Label::clear >::invoke")
		->args({"self"});
	using _method_102 = das::das_call_member< int (Xbyak::Label::*)() const,&Xbyak::Label::getId >;
	addExtern<DAS_CALL_METHOD(_method_102)>(*this,lib,"getId",SideEffects::worstDefault,"das_call_member< int (Xbyak::Label::*)() const,&Xbyak::Label::getId >::invoke")
		->args({"self"});
	using _method_103 = das::das_call_member< const unsigned char * (Xbyak::Label::*)() const,&Xbyak::Label::getAddress >;
	addExtern<DAS_CALL_METHOD(_method_103)>(*this,lib,"getAddress",SideEffects::worstDefault,"das_call_member< const unsigned char * (Xbyak::Label::*)() const,&Xbyak::Label::getAddress >::invoke")
		->args({"self"});
	using _method_104 = das::das_call_member< void (Xbyak::LabelManager::*)(),&Xbyak::LabelManager::reset >;
	addExtern<DAS_CALL_METHOD(_method_104)>(*this,lib,"reset",SideEffects::worstDefault,"das_call_member< void (Xbyak::LabelManager::*)(),&Xbyak::LabelManager::reset >::invoke")
		->args({"self"});
	using _method_105 = das::das_call_member< void (Xbyak::LabelManager::*)(),&Xbyak::LabelManager::enterLocal >;
	addExtern<DAS_CALL_METHOD(_method_105)>(*this,lib,"enterLocal",SideEffects::worstDefault,"das_call_member< void (Xbyak::LabelManager::*)(),&Xbyak::LabelManager::enterLocal >::invoke")
		->args({"self"});
	using _method_106 = das::das_call_member< void (Xbyak::LabelManager::*)(),&Xbyak::LabelManager::leaveLocal >;
	addExtern<DAS_CALL_METHOD(_method_106)>(*this,lib,"leaveLocal",SideEffects::worstDefault,"das_call_member< void (Xbyak::LabelManager::*)(),&Xbyak::LabelManager::leaveLocal >::invoke")
		->args({"self"});
	using _method_107 = das::das_call_member< void (Xbyak::LabelManager::*)(Xbyak::CodeArray *),&Xbyak::LabelManager::set >;
	addExtern<DAS_CALL_METHOD(_method_107)>(*this,lib,"set",SideEffects::worstDefault,"das_call_member< void (Xbyak::LabelManager::*)(Xbyak::CodeArray *),&Xbyak::LabelManager::set >::invoke")
		->args({"self","base"});
	using _method_108 = das::das_call_member< void (Xbyak::LabelManager::*)(std::basic_string<char>),&Xbyak::LabelManager::defineSlabel >;
	addExtern<DAS_CALL_METHOD(_method_108)>(*this,lib,"defineSlabel",SideEffects::worstDefault,"das_call_member< void (Xbyak::LabelManager::*)(std::basic_string<char>),&Xbyak::LabelManager::defineSlabel >::invoke")
		->args({"self","label"});
	using _method_109 = das::das_call_member< void (Xbyak::LabelManager::*)(Xbyak::Label &),&Xbyak::LabelManager::defineClabel >;
	addExtern<DAS_CALL_METHOD(_method_109)>(*this,lib,"defineClabel",SideEffects::worstDefault,"das_call_member< void (Xbyak::LabelManager::*)(Xbyak::Label &),&Xbyak::LabelManager::defineClabel >::invoke")
		->args({"self","label"});
	using _method_110 = das::das_call_member< void (Xbyak::LabelManager::*)(Xbyak::Label &,const Xbyak::Label &),&Xbyak::LabelManager::assign >;
	addExtern<DAS_CALL_METHOD(_method_110)>(*this,lib,"assign",SideEffects::worstDefault,"das_call_member< void (Xbyak::LabelManager::*)(Xbyak::Label &,const Xbyak::Label &),&Xbyak::LabelManager::assign >::invoke")
		->args({"self","dst","src"});
	using _method_111 = das::das_call_member< bool (Xbyak::LabelManager::*)(unsigned long long *,std::basic_string<char> &) const,&Xbyak::LabelManager::getOffset >;
	addExtern<DAS_CALL_METHOD(_method_111)>(*this,lib,"getOffset",SideEffects::worstDefault,"das_call_member< bool (Xbyak::LabelManager::*)(unsigned long long *,std::basic_string<char> &) const,&Xbyak::LabelManager::getOffset >::invoke")
		->args({"self","offset","label"});
	using _method_112 = das::das_call_member< bool (Xbyak::LabelManager::*)(unsigned long long *,const Xbyak::Label &) const,&Xbyak::LabelManager::getOffset >;
	addExtern<DAS_CALL_METHOD(_method_112)>(*this,lib,"getOffset",SideEffects::worstDefault,"das_call_member< bool (Xbyak::LabelManager::*)(unsigned long long *,const Xbyak::Label &) const,&Xbyak::LabelManager::getOffset >::invoke")
		->args({"self","offset","label"});
	using _method_113 = das::das_call_member< void (Xbyak::LabelManager::*)(const std::basic_string<char> &,const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel >;
	addExtern<DAS_CALL_METHOD(_method_113)>(*this,lib,"addUndefinedLabel",SideEffects::worstDefault,"das_call_member< void (Xbyak::LabelManager::*)(const std::basic_string<char> &,const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel >::invoke")
		->args({"self","label","jmp"});
	using _method_114 = das::das_call_member< void (Xbyak::LabelManager::*)(const Xbyak::Label &,const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel >;
	addExtern<DAS_CALL_METHOD(_method_114)>(*this,lib,"addUndefinedLabel",SideEffects::worstDefault,"das_call_member< void (Xbyak::LabelManager::*)(const Xbyak::Label &,const Xbyak::JmpLabel &),&Xbyak::LabelManager::addUndefinedLabel >::invoke")
		->args({"self","label","jmp"});
	using _method_115 = das::das_call_member< bool (Xbyak::LabelManager::*)() const,&Xbyak::LabelManager::hasUndefSlabel >;
	addExtern<DAS_CALL_METHOD(_method_115)>(*this,lib,"hasUndefSlabel",SideEffects::worstDefault,"das_call_member< bool (Xbyak::LabelManager::*)() const,&Xbyak::LabelManager::hasUndefSlabel >::invoke")
		->args({"self"});
	using _method_116 = das::das_call_member< bool (Xbyak::LabelManager::*)() const,&Xbyak::LabelManager::hasUndefClabel >;
	addExtern<DAS_CALL_METHOD(_method_116)>(*this,lib,"hasUndefClabel",SideEffects::worstDefault,"das_call_member< bool (Xbyak::LabelManager::*)() const,&Xbyak::LabelManager::hasUndefClabel >::invoke")
		->args({"self"});
	using _method_117 = das::das_call_member< const unsigned char * (Xbyak::LabelManager::*)() const,&Xbyak::LabelManager::getCode >;
	addExtern<DAS_CALL_METHOD(_method_117)>(*this,lib,"getCode",SideEffects::worstDefault,"das_call_member< const unsigned char * (Xbyak::LabelManager::*)() const,&Xbyak::LabelManager::getCode >::invoke")
		->args({"self"});
	using _method_118 = das::das_call_member< bool (Xbyak::LabelManager::*)() const,&Xbyak::LabelManager::isReady >;
	addExtern<DAS_CALL_METHOD(_method_118)>(*this,lib,"isReady",SideEffects::worstDefault,"das_call_member< bool (Xbyak::LabelManager::*)() const,&Xbyak::LabelManager::isReady >::invoke")
		->args({"self"});
	using _method_119 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::rex >;
	addExtern<DAS_CALL_METHOD(_method_119)>(*this,lib,"rex",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::rex >::invoke")
		->args({"self","op1","op2"});
	using _method_120 = das::das_call_member< unsigned int (Xbyak::CodeGenerator::*)(int) const,&Xbyak::CodeGenerator::getPP >;
	addExtern<DAS_CALL_METHOD(_method_120)>(*this,lib,"getPP",SideEffects::worstDefault,"das_call_member< unsigned int (Xbyak::CodeGenerator::*)(int) const,&Xbyak::CodeGenerator::getPP >::invoke")
		->args({"self","type"});
	using _method_121 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &,const Xbyak::Operand *,int,int,bool),&Xbyak::CodeGenerator::vex >;
	addExtern<DAS_CALL_METHOD(_method_121)>(*this,lib,"vex",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &,const Xbyak::Operand *,int,int,bool),&Xbyak::CodeGenerator::vex >::invoke")
		->args({"self","reg","base","v","type","code","x"});
	using _method_122 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,int) const,&Xbyak::CodeGenerator::verifySAE >;
	addExtern<DAS_CALL_METHOD(_method_122)>(*this,lib,"verifySAE",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,int) const,&Xbyak::CodeGenerator::verifySAE >::invoke")
		->args({"self","r","type"});
	using _method_123 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,int) const,&Xbyak::CodeGenerator::verifyER >;
	addExtern<DAS_CALL_METHOD(_method_123)>(*this,lib,"verifyER",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,int) const,&Xbyak::CodeGenerator::verifyER >::invoke")
		->args({"self","r","type"});
	using _method_124 = das::das_call_member< int (Xbyak::CodeGenerator::*)(int,int,int,int),&Xbyak::CodeGenerator::verifyDuplicate >;
	addExtern<DAS_CALL_METHOD(_method_124)>(*this,lib,"verifyDuplicate",SideEffects::worstDefault,"das_call_member< int (Xbyak::CodeGenerator::*)(int,int,int,int),&Xbyak::CodeGenerator::verifyDuplicate >::invoke")
		->args({"self","a","b","c","err"});
	using _method_125 = das::das_call_member< int (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &,const Xbyak::Operand *,int,int,bool,bool,int,unsigned int,bool),&Xbyak::CodeGenerator::evex >;
	addExtern<DAS_CALL_METHOD(_method_125)>(*this,lib,"evex",SideEffects::worstDefault,"das_call_member< int (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &,const Xbyak::Operand *,int,int,bool,bool,int,unsigned int,bool),&Xbyak::CodeGenerator::evex >::invoke")
		->args({"self","reg","base","v","type","code","x","b","aaa","VL","Hi16Vidx"});
	using _method_126 = das::das_call_member< void (Xbyak::CodeGenerator::*)(int,int,int),&Xbyak::CodeGenerator::setModRM >;
	addExtern<DAS_CALL_METHOD(_method_126)>(*this,lib,"setModRM",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(int,int,int),&Xbyak::CodeGenerator::setModRM >::invoke")
		->args({"self","mod","r1","r2"});
	using _method_127 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::RegExp &,int,int),&Xbyak::CodeGenerator::setSIB >;
	addExtern<DAS_CALL_METHOD(_method_127)>(*this,lib,"setSIB",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::RegExp &,int,int),&Xbyak::CodeGenerator::setSIB >::invoke")
		->args({"self","e","reg","disp8N"});
	using _method_128 = das::das_call_member< bool (Xbyak::CodeGenerator::*)(unsigned int) const,&Xbyak::CodeGenerator::isInDisp16 >;
	addExtern<DAS_CALL_METHOD(_method_128)>(*this,lib,"isInDisp16",SideEffects::worstDefault,"das_call_member< bool (Xbyak::CodeGenerator::*)(unsigned int) const,&Xbyak::CodeGenerator::isInDisp16 >::invoke")
		->args({"self","x"});
	using _method_129 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &,int,int,int),&Xbyak::CodeGenerator::opModR >;
	addExtern<DAS_CALL_METHOD(_method_129)>(*this,lib,"opModR",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &,int,int,int),&Xbyak::CodeGenerator::opModR >::invoke")
		->args({"self","reg1","reg2","code0","code1","code2"});
	using _method_130 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Reg &,int,int,int,int),&Xbyak::CodeGenerator::opModM >;
	addExtern<DAS_CALL_METHOD(_method_130)>(*this,lib,"opModM",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Reg &,int,int,int,int),&Xbyak::CodeGenerator::opModM >::invoke")
		->args({"self","addr","reg","code0","code1","code2","immSize"});
	using _method_131 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Reg &,int,int),&Xbyak::CodeGenerator::opLoadSeg >;
	addExtern<DAS_CALL_METHOD(_method_131)>(*this,lib,"opLoadSeg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Reg &,int,int),&Xbyak::CodeGenerator::opLoadSeg >::invoke")
		->args({"self","addr","reg","code0","code1"});
	using _method_132 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Reg &,int,int),&Xbyak::CodeGenerator::opMIB >;
	addExtern<DAS_CALL_METHOD(_method_132)>(*this,lib,"opMIB",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Reg &,int,int),&Xbyak::CodeGenerator::opMIB >::invoke")
		->args({"self","addr","reg","code0","code1"});
	using _method_133 = das::das_call_member< void (Xbyak::CodeGenerator::*)(unsigned int,Xbyak::CodeGenerator::LabelType,unsigned char,unsigned char,unsigned char),&Xbyak::CodeGenerator::makeJmp >;
	addExtern<DAS_CALL_METHOD(_method_133)>(*this,lib,"makeJmp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(unsigned int,Xbyak::CodeGenerator::LabelType,unsigned char,unsigned char,unsigned char),&Xbyak::CodeGenerator::makeJmp >::invoke")
		->args({"self","disp","type","shortCode","longCode","longPref"});
	using _method_134 = das::das_call_member< bool (Xbyak::CodeGenerator::*)(Xbyak::CodeGenerator::LabelType) const,&Xbyak::CodeGenerator::isNEAR >;
	addExtern<DAS_CALL_METHOD(_method_134)>(*this,lib,"isNEAR",SideEffects::worstDefault,"das_call_member< bool (Xbyak::CodeGenerator::*)(Xbyak::CodeGenerator::LabelType) const,&Xbyak::CodeGenerator::isNEAR >::invoke")
		->args({"self","type"});
	using _method_135 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *,Xbyak::CodeGenerator::LabelType,unsigned char,unsigned char,unsigned char),&Xbyak::CodeGenerator::opJmpAbs >;
	addExtern<DAS_CALL_METHOD(_method_135)>(*this,lib,"opJmpAbs",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *,Xbyak::CodeGenerator::LabelType,unsigned char,unsigned char,unsigned char),&Xbyak::CodeGenerator::opJmpAbs >::invoke")
		->args({"self","addr","type","shortCode","longCode","longPref"});
	using _method_136 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,int,int,int,bool),&Xbyak::CodeGenerator::opAddr >;
	addExtern<DAS_CALL_METHOD(_method_136)>(*this,lib,"opAddr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,int,int,int,bool),&Xbyak::CodeGenerator::opAddr >::invoke")
		->args({"self","addr","reg","immSize","disp8N","permitVisb"});
	using _method_137 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &,int,int,bool (const Xbyak::Operand &, const Xbyak::Operand &),int,int),&Xbyak::CodeGenerator::opGen >;
	addExtern<DAS_CALL_METHOD(_method_137)>(*this,lib,"opGen",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &,int,int,bool (const Xbyak::Operand &, const Xbyak::Operand &),int,int),&Xbyak::CodeGenerator::opGen >::invoke")
		->args({"self","reg","op","code","pref","isValid","imm8","preCode"});
	using _method_138 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int,int,int),&Xbyak::CodeGenerator::opMMX_IMM >;
	addExtern<DAS_CALL_METHOD(_method_138)>(*this,lib,"opMMX_IMM",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int,int,int),&Xbyak::CodeGenerator::opMMX_IMM >::invoke")
		->args({"self","mmx","imm8","code","ext"});
	using _method_139 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,int,int,int,int),&Xbyak::CodeGenerator::opMMX >;
	addExtern<DAS_CALL_METHOD(_method_139)>(*this,lib,"opMMX",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,int,int,int,int),&Xbyak::CodeGenerator::opMMX >::invoke")
		->args({"self","mmx","op","code","pref","imm8","preCode"});
	using _method_140 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opMovXMM >;
	addExtern<DAS_CALL_METHOD(_method_140)>(*this,lib,"opMovXMM",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opMovXMM >::invoke")
		->args({"self","op1","op2","code","pref"});
	using _method_141 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Mmx &,int,int,bool),&Xbyak::CodeGenerator::opExt >;
	addExtern<DAS_CALL_METHOD(_method_141)>(*this,lib,"opExt",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Mmx &,int,int,bool),&Xbyak::CodeGenerator::opExt >::invoke")
		->args({"self","op","mmx","code","imm","hasMMX2"});
	using _method_142 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int,int,int,int,int,bool,int),&Xbyak::CodeGenerator::opR_ModM >;
	addExtern<DAS_CALL_METHOD(_method_142)>(*this,lib,"opR_ModM",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int,int,int,int,int,bool,int),&Xbyak::CodeGenerator::opR_ModM >::invoke")
		->args({"self","op","bit","ext","code0","code1","code2","disableRex","immSize"});
	using _method_143 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opShift >;
	addExtern<DAS_CALL_METHOD(_method_143)>(*this,lib,"opShift",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opShift >::invoke")
		->args({"self","op","imm","ext"});
	using _method_144 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &,int),&Xbyak::CodeGenerator::opShift >;
	addExtern<DAS_CALL_METHOD(_method_144)>(*this,lib,"opShift",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &,int),&Xbyak::CodeGenerator::opShift >::invoke")
		->args({"self","op","_cl","ext"});
	using _method_145 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &,bool,bool,int,int,int,int),&Xbyak::CodeGenerator::opModRM >;
	addExtern<DAS_CALL_METHOD(_method_145)>(*this,lib,"opModRM",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &,bool,bool,int,int,int,int),&Xbyak::CodeGenerator::opModRM >::invoke")
		->args({"self","op1","op2","condR","condM","code0","code1","code2","immSize"});
	using _method_146 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &,unsigned char,int,const Xbyak::Reg8 *),&Xbyak::CodeGenerator::opShxd >;
	addExtern<DAS_CALL_METHOD(_method_146)>(*this,lib,"opShxd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &,unsigned char,int,const Xbyak::Reg8 *),&Xbyak::CodeGenerator::opShxd >::invoke")
		->args({"self","op","reg","imm","code","_cl"});
	using _method_147 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::opRM_RM >;
	addExtern<DAS_CALL_METHOD(_method_147)>(*this,lib,"opRM_RM",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::opRM_RM >::invoke")
		->args({"self","op1","op2","code"});
	using _method_148 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int,int,int),&Xbyak::CodeGenerator::opRM_I >;
	addExtern<DAS_CALL_METHOD(_method_148)>(*this,lib,"opRM_I",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int,int,int),&Xbyak::CodeGenerator::opRM_I >::invoke")
		->args({"self","op","imm","code","ext"});
	using _method_149 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opIncDec >;
	addExtern<DAS_CALL_METHOD(_method_149)>(*this,lib,"opIncDec",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opIncDec >::invoke")
		->args({"self","op","code","ext"});
	using _method_150 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int,int,int),&Xbyak::CodeGenerator::opPushPop >;
	addExtern<DAS_CALL_METHOD(_method_150)>(*this,lib,"opPushPop",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int,int,int),&Xbyak::CodeGenerator::opPushPop >::invoke")
		->args({"self","op","code","ext","alt"});
	using _method_151 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &) const,&Xbyak::CodeGenerator::verifyMemHasSize >;
	addExtern<DAS_CALL_METHOD(_method_151)>(*this,lib,"verifyMemHasSize",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &) const,&Xbyak::CodeGenerator::verifyMemHasSize >::invoke")
		->args({"self","op"});
	using _method_152 = das::das_call_member< int (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,unsigned long long),&Xbyak::CodeGenerator::mov_imm >;
	addExtern<DAS_CALL_METHOD(_method_152)>(*this,lib,"mov_imm",SideEffects::worstDefault,"das_call_member< int (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,unsigned long long),&Xbyak::CodeGenerator::mov_imm >::invoke")
		->args({"self","reg","imm"});
	using _method_153 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::opMovxx >;
	addExtern<DAS_CALL_METHOD(_method_153)>(*this,lib,"opMovxx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::opMovxx >::invoke")
		->args({"self","reg","op","code"});
	using _method_154 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char),&Xbyak::CodeGenerator::opFpuMem >;
	addExtern<DAS_CALL_METHOD(_method_154)>(*this,lib,"opFpuMem",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char),&Xbyak::CodeGenerator::opFpuMem >::invoke")
		->args({"self","addr","m16","m32","m64","ext","m64ext"});
	using _method_155 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &,unsigned int,unsigned int),&Xbyak::CodeGenerator::opFpuFpu >;
	addExtern<DAS_CALL_METHOD(_method_155)>(*this,lib,"opFpuFpu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,const Xbyak::Fpu &,unsigned int,unsigned int),&Xbyak::CodeGenerator::opFpuFpu >::invoke")
		->args({"self","reg1","reg2","code1","code2"});
	using _method_156 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,unsigned char,unsigned char),&Xbyak::CodeGenerator::opFpu >;
	addExtern<DAS_CALL_METHOD(_method_156)>(*this,lib,"opFpu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Fpu &,unsigned char,unsigned char),&Xbyak::CodeGenerator::opFpu >::invoke")
		->args({"self","reg","code1","code2"});
	using _method_157 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand *,const Xbyak::Operand &,int,int,int),&Xbyak::CodeGenerator::opVex >;
	addExtern<DAS_CALL_METHOD(_method_157)>(*this,lib,"opVex",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand *,const Xbyak::Operand &,int,int,int),&Xbyak::CodeGenerator::opVex >::invoke")
		->args({"self","r","p1","op2","type","code","imm8"});
	using _method_158 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Operand &,int,unsigned char,bool,int),&Xbyak::CodeGenerator::opGpr >;
	addExtern<DAS_CALL_METHOD(_method_158)>(*this,lib,"opGpr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Operand &,int,unsigned char,bool,int),&Xbyak::CodeGenerator::opGpr >::invoke")
		->args({"self","r","op1","op2","type","code","isR_R_RM","imm8"});
	using _method_159 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &,int,int,int),&Xbyak::CodeGenerator::opAVX_X_X_XM >;
	addExtern<DAS_CALL_METHOD(_method_159)>(*this,lib,"opAVX_X_X_XM",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &,int,int,int),&Xbyak::CodeGenerator::opAVX_X_X_XM >::invoke")
		->args({"self","x1","op1","op2","type","code0","imm8"});
	using _method_160 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,int,int,int),&Xbyak::CodeGenerator::opAVX_K_X_XM >;
	addExtern<DAS_CALL_METHOD(_method_160)>(*this,lib,"opAVX_K_X_XM",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,int,int,int),&Xbyak::CodeGenerator::opAVX_K_X_XM >::invoke")
		->args({"self","k","x2","op3","type","code0","imm8"});
	using _method_161 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &) const,&Xbyak::CodeGenerator::checkCvt1 >;
	addExtern<DAS_CALL_METHOD(_method_161)>(*this,lib,"checkCvt1",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &) const,&Xbyak::CodeGenerator::checkCvt1 >::invoke")
		->args({"self","x","op"});
	using _method_162 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) const,&Xbyak::CodeGenerator::checkCvt2 >;
	addExtern<DAS_CALL_METHOD(_method_162)>(*this,lib,"checkCvt2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) const,&Xbyak::CodeGenerator::checkCvt2 >::invoke")
		->args({"self","x","op"});
	using _method_163 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opCvt >;
	addExtern<DAS_CALL_METHOD(_method_163)>(*this,lib,"opCvt",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opCvt >::invoke")
		->args({"self","x","op","type","code"});
	using _method_164 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opCvt2 >;
	addExtern<DAS_CALL_METHOD(_method_164)>(*this,lib,"opCvt2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opCvt2 >::invoke")
		->args({"self","x","op","type","code"});
	using _method_165 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,int,int,int,unsigned char),&Xbyak::CodeGenerator::opCvt3 >;
	addExtern<DAS_CALL_METHOD(_method_165)>(*this,lib,"opCvt3",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,int,int,int,unsigned char),&Xbyak::CodeGenerator::opCvt3 >::invoke")
		->args({"self","x1","x2","op","type","type64","type32","code"});
	using _method_166 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) const,&Xbyak::CodeGenerator::checkCvt4 >;
	addExtern<DAS_CALL_METHOD(_method_166)>(*this,lib,"checkCvt4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) const,&Xbyak::CodeGenerator::checkCvt4 >::invoke")
		->args({"self","x","op"});
	using _method_167 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opCvt5 >;
	addExtern<DAS_CALL_METHOD(_method_167)>(*this,lib,"opCvt5",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int,int),&Xbyak::CodeGenerator::opCvt5 >::invoke")
		->args({"self","x","op","type","code"});
	using _method_168 = das::das_call_member< const Xbyak::Xmm & (Xbyak::CodeGenerator::*)(const Xbyak::Operand &) const,&Xbyak::CodeGenerator::cvtIdx0 >;
	addExtern<DAS_CALL_METHOD(_method_168), SimNode_ExtFuncCallRef>(*this,lib,"cvtIdx0",SideEffects::worstDefault,"das_call_member< const Xbyak::Xmm & (Xbyak::CodeGenerator::*)(const Xbyak::Operand &) const,&Xbyak::CodeGenerator::cvtIdx0 >::invoke")
		->args({"self","x"});
	using _method_169 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int,int,int),&Xbyak::CodeGenerator::opAVX_X_XM_IMM >;
	addExtern<DAS_CALL_METHOD(_method_169)>(*this,lib,"opAVX_X_XM_IMM",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int,int,int),&Xbyak::CodeGenerator::opAVX_X_XM_IMM >::invoke")
		->args({"self","x","op","type","code","imm8"});
	using _method_170 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &,unsigned char,unsigned char,unsigned char),&Xbyak::CodeGenerator::opSp1 >;
	addExtern<DAS_CALL_METHOD(_method_170)>(*this,lib,"opSp1",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &,unsigned char,unsigned char,unsigned char),&Xbyak::CodeGenerator::opSp1 >::invoke")
		->args({"self","reg","op","pref","code0","code1"});
	using _method_171 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &,int,unsigned char,int),&Xbyak::CodeGenerator::opGather >;
	addExtern<DAS_CALL_METHOD(_method_171)>(*this,lib,"opGather",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,const Xbyak::Xmm &,int,unsigned char,int),&Xbyak::CodeGenerator::opGather >::invoke")
		->args({"self","x1","addr","x2","type","code","mode"});
	using _method_172 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg &,int) const,&Xbyak::CodeGenerator::checkGather2 >;
	addExtern<DAS_CALL_METHOD(_method_172)>(*this,lib,"checkGather2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg &,int) const,&Xbyak::CodeGenerator::checkGather2 >::invoke")
		->args({"self","x1","x2","mode"});
	using _method_173 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,int,unsigned char,int),&Xbyak::CodeGenerator::opGather2 >;
	addExtern<DAS_CALL_METHOD(_method_173)>(*this,lib,"opGather2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &,int,unsigned char,int),&Xbyak::CodeGenerator::opGather2 >::invoke")
		->args({"self","x","addr","type","code","mode"});
	using _method_174 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,int,unsigned char,bool),&Xbyak::CodeGenerator::opVmov >;
	addExtern<DAS_CALL_METHOD(_method_174)>(*this,lib,"opVmov",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,int,unsigned char,bool),&Xbyak::CodeGenerator::opVmov >::invoke")
		->args({"self","op","x","type","code","mode"});
	using _method_175 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &,int,unsigned char,Xbyak::Operand::Kind),&Xbyak::CodeGenerator::opGatherFetch >;
	addExtern<DAS_CALL_METHOD(_method_175)>(*this,lib,"opGatherFetch",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &,int,unsigned char,Xbyak::Operand::Kind),&Xbyak::CodeGenerator::opGatherFetch >::invoke")
		->args({"self","addr","x","type","code","kind"});
	using _method_176 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,int,int,Xbyak::PreferredEncoding),&Xbyak::CodeGenerator::opVnni >;
	addExtern<DAS_CALL_METHOD(_method_176)>(*this,lib,"opVnni",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,int,int,Xbyak::PreferredEncoding),&Xbyak::CodeGenerator::opVnni >::invoke")
		->args({"self","x1","x2","op","type","code0","encoding"});
	using _method_177 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &,unsigned char),&Xbyak::CodeGenerator::opInOut >;
	addExtern<DAS_CALL_METHOD(_method_177)>(*this,lib,"opInOut",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &,unsigned char),&Xbyak::CodeGenerator::opInOut >::invoke")
		->args({"self","a","d","code"});
	using _method_178 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,unsigned char,unsigned char),&Xbyak::CodeGenerator::opInOut >;
	addExtern<DAS_CALL_METHOD(_method_178)>(*this,lib,"opInOut",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,unsigned char,unsigned char),&Xbyak::CodeGenerator::opInOut >::invoke")
		->args({"self","a","code","v"});
	using _method_179 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Address &,int,int),&Xbyak::CodeGenerator::opAMX >;
	addExtern<DAS_CALL_METHOD(_method_179)>(*this,lib,"opAMX",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Address &,int,int),&Xbyak::CodeGenerator::opAMX >::invoke")
		->args({"self","t1","addr","type","code0"});
	using _method_180 = das::das_call_member< unsigned int (Xbyak::CodeGenerator::*)() const,&Xbyak::CodeGenerator::getVersion >;
	addExtern<DAS_CALL_METHOD(_method_180)>(*this,lib,"getVersion",SideEffects::worstDefault,"das_call_member< unsigned int (Xbyak::CodeGenerator::*)() const,&Xbyak::CodeGenerator::getVersion >::invoke")
		->args({"self"});
	using _method_181 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::inLocalLabel >;
	addExtern<DAS_CALL_METHOD(_method_181)>(*this,lib,"inLocalLabel",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::inLocalLabel >::invoke")
		->args({"self"});
	using _method_182 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::outLocalLabel >;
	addExtern<DAS_CALL_METHOD(_method_182)>(*this,lib,"outLocalLabel",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::outLocalLabel >::invoke")
		->args({"self"});
	using _method_183 = das::das_call_member< void (Xbyak::CodeGenerator::*)(Xbyak::Label &,const Xbyak::Label &),&Xbyak::CodeGenerator::assignL >;
	addExtern<DAS_CALL_METHOD(_method_183)>(*this,lib,"assignL",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(Xbyak::Label &,const Xbyak::Label &),&Xbyak::CodeGenerator::assignL >::invoke")
		->args({"self","dst","src"});
	using _method_184 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::putL >;
	addExtern<DAS_CALL_METHOD(_method_184)>(*this,lib,"putL",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::putL >::invoke")
		->args({"self","label"});
	using _method_185 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::putL >;
	addExtern<DAS_CALL_METHOD(_method_185)>(*this,lib,"putL",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::putL >::invoke")
		->args({"self","label"});
	using _method_186 = das::das_call_member< void (Xbyak::CodeGenerator::*)(bool),&Xbyak::CodeGenerator::setDefaultJmpNEAR >;
	addExtern<DAS_CALL_METHOD(_method_186)>(*this,lib,"setDefaultJmpNEAR",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(bool),&Xbyak::CodeGenerator::setDefaultJmpNEAR >::invoke")
		->args({"self","isNear"});
}
}

