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
void Module_dasXBYAK::initFunctions_8() {
	using _method_687 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loop >;
	addExtern<DAS_CALL_METHOD(_method_687)>(*this,lib,"loop",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loop >::invoke")
		->args({"self","label"});
	using _method_688 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::loop >;
	addExtern<DAS_CALL_METHOD(_method_688)>(*this,lib,"loop",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::loop >::invoke")
		->args({"self","label"});
	using _method_689 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loope >;
	addExtern<DAS_CALL_METHOD(_method_689)>(*this,lib,"loope",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loope >::invoke")
		->args({"self","label"});
	using _method_690 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loope >;
	addExtern<DAS_CALL_METHOD(_method_690)>(*this,lib,"loope",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loope >::invoke")
		->args({"self","label"});
	using _method_691 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::loope >;
	addExtern<DAS_CALL_METHOD(_method_691)>(*this,lib,"loope",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::loope >::invoke")
		->args({"self","label"});
	using _method_692 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loopne >;
	addExtern<DAS_CALL_METHOD(_method_692)>(*this,lib,"loopne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loopne >::invoke")
		->args({"self","label"});
	using _method_693 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loopne >;
	addExtern<DAS_CALL_METHOD(_method_693)>(*this,lib,"loopne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::loopne >::invoke")
		->args({"self","label"});
	using _method_694 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::loopne >;
	addExtern<DAS_CALL_METHOD(_method_694)>(*this,lib,"loopne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::loopne >::invoke")
		->args({"self","label"});
	using _method_695 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Address &),&Xbyak::CodeGenerator::lss >;
	addExtern<DAS_CALL_METHOD(_method_695)>(*this,lib,"lss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Address &),&Xbyak::CodeGenerator::lss >::invoke")
		->args({"self","reg","addr"});
	using _method_696 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::lzcnt >;
	addExtern<DAS_CALL_METHOD(_method_696)>(*this,lib,"lzcnt",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::lzcnt >::invoke")
		->args({"self","reg","op"});
	using _method_697 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::maskmovdqu >;
	addExtern<DAS_CALL_METHOD(_method_697)>(*this,lib,"maskmovdqu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::maskmovdqu >::invoke")
		->args({"self","reg1","reg2"});
	using _method_698 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::maskmovq >;
	addExtern<DAS_CALL_METHOD(_method_698)>(*this,lib,"maskmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::maskmovq >::invoke")
		->args({"self","reg1","reg2"});
	using _method_699 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::maxpd >;
	addExtern<DAS_CALL_METHOD(_method_699)>(*this,lib,"maxpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::maxpd >::invoke")
		->args({"self","xmm","op"});
	using _method_700 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::maxps >;
	addExtern<DAS_CALL_METHOD(_method_700)>(*this,lib,"maxps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::maxps >::invoke")
		->args({"self","xmm","op"});
	using _method_701 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::maxsd >;
	addExtern<DAS_CALL_METHOD(_method_701)>(*this,lib,"maxsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::maxsd >::invoke")
		->args({"self","xmm","op"});
	using _method_702 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::maxss >;
	addExtern<DAS_CALL_METHOD(_method_702)>(*this,lib,"maxss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::maxss >::invoke")
		->args({"self","xmm","op"});
	using _method_703 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::mfence >;
	addExtern<DAS_CALL_METHOD(_method_703)>(*this,lib,"mfence",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::mfence >::invoke")
		->args({"self"});
	using _method_704 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::minpd >;
	addExtern<DAS_CALL_METHOD(_method_704)>(*this,lib,"minpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::minpd >::invoke")
		->args({"self","xmm","op"});
	using _method_705 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::minps >;
	addExtern<DAS_CALL_METHOD(_method_705)>(*this,lib,"minps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::minps >::invoke")
		->args({"self","xmm","op"});
	using _method_706 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::minsd >;
	addExtern<DAS_CALL_METHOD(_method_706)>(*this,lib,"minsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::minsd >::invoke")
		->args({"self","xmm","op"});
	using _method_707 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::minss >;
	addExtern<DAS_CALL_METHOD(_method_707)>(*this,lib,"minss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::minss >::invoke")
		->args({"self","xmm","op"});
	using _method_708 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::monitor >;
	addExtern<DAS_CALL_METHOD(_method_708)>(*this,lib,"monitor",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::monitor >::invoke")
		->args({"self"});
	using _method_709 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::monitorx >;
	addExtern<DAS_CALL_METHOD(_method_709)>(*this,lib,"monitorx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::monitorx >::invoke")
		->args({"self"});
	using _method_710 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movapd >;
	addExtern<DAS_CALL_METHOD(_method_710)>(*this,lib,"movapd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movapd >::invoke")
		->args({"self","addr","xmm"});
	using _method_711 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movapd >;
	addExtern<DAS_CALL_METHOD(_method_711)>(*this,lib,"movapd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movapd >::invoke")
		->args({"self","xmm","op"});
	using _method_712 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movaps >;
	addExtern<DAS_CALL_METHOD(_method_712)>(*this,lib,"movaps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movaps >::invoke")
		->args({"self","addr","xmm"});
	using _method_713 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movaps >;
	addExtern<DAS_CALL_METHOD(_method_713)>(*this,lib,"movaps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movaps >::invoke")
		->args({"self","xmm","op"});
	using _method_714 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Reg &),&Xbyak::CodeGenerator::movbe >;
	addExtern<DAS_CALL_METHOD(_method_714)>(*this,lib,"movbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Reg &),&Xbyak::CodeGenerator::movbe >::invoke")
		->args({"self","addr","reg"});
	using _method_715 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Address &),&Xbyak::CodeGenerator::movbe >;
	addExtern<DAS_CALL_METHOD(_method_715)>(*this,lib,"movbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Address &),&Xbyak::CodeGenerator::movbe >::invoke")
		->args({"self","reg","addr"});
	using _method_716 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd >;
	addExtern<DAS_CALL_METHOD(_method_716)>(*this,lib,"movd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd >::invoke")
		->args({"self","addr","mmx"});
	using _method_717 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Address &),&Xbyak::CodeGenerator::movd >;
	addExtern<DAS_CALL_METHOD(_method_717)>(*this,lib,"movd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Address &),&Xbyak::CodeGenerator::movd >::invoke")
		->args({"self","mmx","addr"});
	using _method_718 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Reg32 &),&Xbyak::CodeGenerator::movd >;
	addExtern<DAS_CALL_METHOD(_method_718)>(*this,lib,"movd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Reg32 &),&Xbyak::CodeGenerator::movd >::invoke")
		->args({"self","mmx","reg"});
	using _method_719 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd >;
	addExtern<DAS_CALL_METHOD(_method_719)>(*this,lib,"movd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd >::invoke")
		->args({"self","reg","mmx"});
	using _method_720 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movddup >;
	addExtern<DAS_CALL_METHOD(_method_720)>(*this,lib,"movddup",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movddup >::invoke")
		->args({"self","xmm","op"});
	using _method_721 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdq2q >;
	addExtern<DAS_CALL_METHOD(_method_721)>(*this,lib,"movdq2q",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdq2q >::invoke")
		->args({"self","mmx","xmm"});
	using _method_722 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqa >;
	addExtern<DAS_CALL_METHOD(_method_722)>(*this,lib,"movdqa",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqa >::invoke")
		->args({"self","addr","xmm"});
	using _method_723 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqa >;
	addExtern<DAS_CALL_METHOD(_method_723)>(*this,lib,"movdqa",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqa >::invoke")
		->args({"self","xmm","op"});
	using _method_724 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqu >;
	addExtern<DAS_CALL_METHOD(_method_724)>(*this,lib,"movdqu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqu >::invoke")
		->args({"self","addr","xmm"});
	using _method_725 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqu >;
	addExtern<DAS_CALL_METHOD(_method_725)>(*this,lib,"movdqu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqu >::invoke")
		->args({"self","xmm","op"});
	using _method_726 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movhlps >;
	addExtern<DAS_CALL_METHOD(_method_726)>(*this,lib,"movhlps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movhlps >::invoke")
		->args({"self","reg1","reg2"});
	using _method_727 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movhpd >;
	addExtern<DAS_CALL_METHOD(_method_727)>(*this,lib,"movhpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movhpd >::invoke")
		->args({"self","op1","op2"});
	using _method_728 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movhps >;
	addExtern<DAS_CALL_METHOD(_method_728)>(*this,lib,"movhps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movhps >::invoke")
		->args({"self","op1","op2"});
	using _method_729 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movlhps >;
	addExtern<DAS_CALL_METHOD(_method_729)>(*this,lib,"movlhps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movlhps >::invoke")
		->args({"self","reg1","reg2"});
	using _method_730 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movlpd >;
	addExtern<DAS_CALL_METHOD(_method_730)>(*this,lib,"movlpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movlpd >::invoke")
		->args({"self","op1","op2"});
	using _method_731 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movlps >;
	addExtern<DAS_CALL_METHOD(_method_731)>(*this,lib,"movlps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movlps >::invoke")
		->args({"self","op1","op2"});
	using _method_732 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movmskpd >;
	addExtern<DAS_CALL_METHOD(_method_732)>(*this,lib,"movmskpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movmskpd >::invoke")
		->args({"self","reg","xmm"});
	using _method_733 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movmskps >;
	addExtern<DAS_CALL_METHOD(_method_733)>(*this,lib,"movmskps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movmskps >::invoke")
		->args({"self","reg","xmm"});
	using _method_734 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movntdq >;
	addExtern<DAS_CALL_METHOD(_method_734)>(*this,lib,"movntdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movntdq >::invoke")
		->args({"self","addr","reg"});
	using _method_735 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::movntdqa >;
	addExtern<DAS_CALL_METHOD(_method_735)>(*this,lib,"movntdqa",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::movntdqa >::invoke")
		->args({"self","xmm","addr"});
	using _method_736 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::movnti >;
	addExtern<DAS_CALL_METHOD(_method_736)>(*this,lib,"movnti",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::movnti >::invoke")
		->args({"self","addr","reg"});
	using _method_737 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movntpd >;
	addExtern<DAS_CALL_METHOD(_method_737)>(*this,lib,"movntpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movntpd >::invoke")
		->args({"self","addr","reg"});
	using _method_738 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movntps >;
	addExtern<DAS_CALL_METHOD(_method_738)>(*this,lib,"movntps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movntps >::invoke")
		->args({"self","addr","xmm"});
	using _method_739 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movntq >;
	addExtern<DAS_CALL_METHOD(_method_739)>(*this,lib,"movntq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movntq >::invoke")
		->args({"self","addr","mmx"});
	using _method_740 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq >;
	addExtern<DAS_CALL_METHOD(_method_740)>(*this,lib,"movq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq >::invoke")
		->args({"self","addr","mmx"});
	using _method_741 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movq >;
	addExtern<DAS_CALL_METHOD(_method_741)>(*this,lib,"movq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movq >::invoke")
		->args({"self","mmx","op"});
	using _method_742 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq2dq >;
	addExtern<DAS_CALL_METHOD(_method_742)>(*this,lib,"movq2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq2dq >::invoke")
		->args({"self","xmm","mmx"});
	using _method_743 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsb >;
	addExtern<DAS_CALL_METHOD(_method_743)>(*this,lib,"movsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsb >::invoke")
		->args({"self"});
	using _method_744 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsd >;
	addExtern<DAS_CALL_METHOD(_method_744)>(*this,lib,"movsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsd >::invoke")
		->args({"self"});
	using _method_745 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movsd >;
	addExtern<DAS_CALL_METHOD(_method_745)>(*this,lib,"movsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movsd >::invoke")
		->args({"self","addr","xmm"});
	using _method_746 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movsd >;
	addExtern<DAS_CALL_METHOD(_method_746)>(*this,lib,"movsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movsd >::invoke")
		->args({"self","xmm","op"});
	using _method_747 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movshdup >;
	addExtern<DAS_CALL_METHOD(_method_747)>(*this,lib,"movshdup",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movshdup >::invoke")
		->args({"self","xmm","op"});
	using _method_748 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movsldup >;
	addExtern<DAS_CALL_METHOD(_method_748)>(*this,lib,"movsldup",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movsldup >::invoke")
		->args({"self","xmm","op"});
	using _method_749 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movss >;
	addExtern<DAS_CALL_METHOD(_method_749)>(*this,lib,"movss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movss >::invoke")
		->args({"self","addr","xmm"});
	using _method_750 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movss >;
	addExtern<DAS_CALL_METHOD(_method_750)>(*this,lib,"movss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movss >::invoke")
		->args({"self","xmm","op"});
	using _method_751 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsw >;
	addExtern<DAS_CALL_METHOD(_method_751)>(*this,lib,"movsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsw >::invoke")
		->args({"self"});
	using _method_752 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movsx >;
	addExtern<DAS_CALL_METHOD(_method_752)>(*this,lib,"movsx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movsx >::invoke")
		->args({"self","reg","op"});
	using _method_753 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movupd >;
	addExtern<DAS_CALL_METHOD(_method_753)>(*this,lib,"movupd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movupd >::invoke")
		->args({"self","addr","xmm"});
	using _method_754 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movupd >;
	addExtern<DAS_CALL_METHOD(_method_754)>(*this,lib,"movupd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movupd >::invoke")
		->args({"self","xmm","op"});
	using _method_755 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movups >;
	addExtern<DAS_CALL_METHOD(_method_755)>(*this,lib,"movups",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::movups >::invoke")
		->args({"self","addr","xmm"});
	using _method_756 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movups >;
	addExtern<DAS_CALL_METHOD(_method_756)>(*this,lib,"movups",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movups >::invoke")
		->args({"self","xmm","op"});
	using _method_757 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movzx >;
	addExtern<DAS_CALL_METHOD(_method_757)>(*this,lib,"movzx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movzx >::invoke")
		->args({"self","reg","op"});
	using _method_758 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::mpsadbw >;
	addExtern<DAS_CALL_METHOD(_method_758)>(*this,lib,"mpsadbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::mpsadbw >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_759 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::mul >;
	addExtern<DAS_CALL_METHOD(_method_759)>(*this,lib,"mul",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::mul >::invoke")
		->args({"self","op"});
	using _method_760 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulpd >;
	addExtern<DAS_CALL_METHOD(_method_760)>(*this,lib,"mulpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulpd >::invoke")
		->args({"self","xmm","op"});
	using _method_761 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulps >;
	addExtern<DAS_CALL_METHOD(_method_761)>(*this,lib,"mulps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulps >::invoke")
		->args({"self","xmm","op"});
	using _method_762 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulsd >;
	addExtern<DAS_CALL_METHOD(_method_762)>(*this,lib,"mulsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulsd >::invoke")
		->args({"self","xmm","op"});
	using _method_763 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulss >;
	addExtern<DAS_CALL_METHOD(_method_763)>(*this,lib,"mulss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulss >::invoke")
		->args({"self","xmm","op"});
	using _method_764 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulx >;
	addExtern<DAS_CALL_METHOD(_method_764)>(*this,lib,"mulx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulx >::invoke")
		->args({"self","r1","r2","op"});
	using _method_765 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::mwait >;
	addExtern<DAS_CALL_METHOD(_method_765)>(*this,lib,"mwait",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::mwait >::invoke")
		->args({"self"});
	using _method_766 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::mwaitx >;
	addExtern<DAS_CALL_METHOD(_method_766)>(*this,lib,"mwaitx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::mwaitx >::invoke")
		->args({"self"});
	using _method_767 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::neg >;
	addExtern<DAS_CALL_METHOD(_method_767)>(*this,lib,"neg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::neg >::invoke")
		->args({"self","op"});
	using _method_768 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::not_ >;
	addExtern<DAS_CALL_METHOD(_method_768)>(*this,lib,"not_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::not_ >::invoke")
		->args({"self","op"});
	using _method_769 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::or_ >;
	addExtern<DAS_CALL_METHOD(_method_769)>(*this,lib,"or_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::or_ >::invoke")
		->args({"self","op","imm"});
	using _method_770 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::or_ >;
	addExtern<DAS_CALL_METHOD(_method_770)>(*this,lib,"or_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::or_ >::invoke")
		->args({"self","op1","op2"});
	using _method_771 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::orpd >;
	addExtern<DAS_CALL_METHOD(_method_771)>(*this,lib,"orpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::orpd >::invoke")
		->args({"self","xmm","op"});
	using _method_772 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::orps >;
	addExtern<DAS_CALL_METHOD(_method_772)>(*this,lib,"orps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::orps >::invoke")
		->args({"self","xmm","op"});
	using _method_773 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &),&Xbyak::CodeGenerator::out_ >;
	addExtern<DAS_CALL_METHOD(_method_773)>(*this,lib,"out_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &),&Xbyak::CodeGenerator::out_ >::invoke")
		->args({"self","d","a"});
	using _method_774 = das::das_call_member< void (Xbyak::CodeGenerator::*)(unsigned char,const Xbyak::Reg &),&Xbyak::CodeGenerator::out_ >;
	addExtern<DAS_CALL_METHOD(_method_774)>(*this,lib,"out_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(unsigned char,const Xbyak::Reg &),&Xbyak::CodeGenerator::out_ >::invoke")
		->args({"self","v","a"});
	using _method_775 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::outsb >;
	addExtern<DAS_CALL_METHOD(_method_775)>(*this,lib,"outsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::outsb >::invoke")
		->args({"self"});
	using _method_776 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::outsd >;
	addExtern<DAS_CALL_METHOD(_method_776)>(*this,lib,"outsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::outsd >::invoke")
		->args({"self"});
	using _method_777 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::outsw >;
	addExtern<DAS_CALL_METHOD(_method_777)>(*this,lib,"outsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::outsw >::invoke")
		->args({"self"});
	using _method_778 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pabsb >;
	addExtern<DAS_CALL_METHOD(_method_778)>(*this,lib,"pabsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pabsb >::invoke")
		->args({"self","mmx","op"});
	using _method_779 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pabsd >;
	addExtern<DAS_CALL_METHOD(_method_779)>(*this,lib,"pabsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pabsd >::invoke")
		->args({"self","mmx","op"});
	using _method_780 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pabsw >;
	addExtern<DAS_CALL_METHOD(_method_780)>(*this,lib,"pabsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pabsw >::invoke")
		->args({"self","mmx","op"});
	using _method_781 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packssdw >;
	addExtern<DAS_CALL_METHOD(_method_781)>(*this,lib,"packssdw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packssdw >::invoke")
		->args({"self","mmx","op"});
	using _method_782 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packsswb >;
	addExtern<DAS_CALL_METHOD(_method_782)>(*this,lib,"packsswb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packsswb >::invoke")
		->args({"self","mmx","op"});
	using _method_783 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packusdw >;
	addExtern<DAS_CALL_METHOD(_method_783)>(*this,lib,"packusdw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packusdw >::invoke")
		->args({"self","xmm","op"});
	using _method_784 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packuswb >;
	addExtern<DAS_CALL_METHOD(_method_784)>(*this,lib,"packuswb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packuswb >::invoke")
		->args({"self","mmx","op"});
	using _method_785 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddb >;
	addExtern<DAS_CALL_METHOD(_method_785)>(*this,lib,"paddb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddb >::invoke")
		->args({"self","mmx","op"});
	using _method_786 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddd >;
	addExtern<DAS_CALL_METHOD(_method_786)>(*this,lib,"paddd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddd >::invoke")
		->args({"self","mmx","op"});
}
}

