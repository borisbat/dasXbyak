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
void Module_dasXBYAK::initFunctions_10() {
	using _method_887 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,int),&Xbyak::CodeGenerator::pslldq >;
	addExtern<DAS_CALL_METHOD(_method_887)>(*this,lib,"pslldq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,int),&Xbyak::CodeGenerator::pslldq >::invoke")
		->args({"self","xmm","imm8"});
	using _method_888 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psllq >;
	addExtern<DAS_CALL_METHOD(_method_888)>(*this,lib,"psllq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psllq >::invoke")
		->args({"self","mmx","op"});
	using _method_889 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psllq >;
	addExtern<DAS_CALL_METHOD(_method_889)>(*this,lib,"psllq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psllq >::invoke")
		->args({"self","mmx","imm8"});
	using _method_890 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psllw >;
	addExtern<DAS_CALL_METHOD(_method_890)>(*this,lib,"psllw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psllw >::invoke")
		->args({"self","mmx","op"});
	using _method_891 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psllw >;
	addExtern<DAS_CALL_METHOD(_method_891)>(*this,lib,"psllw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psllw >::invoke")
		->args({"self","mmx","imm8"});
	using _method_892 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psrad >;
	addExtern<DAS_CALL_METHOD(_method_892)>(*this,lib,"psrad",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psrad >::invoke")
		->args({"self","mmx","op"});
	using _method_893 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psrad >;
	addExtern<DAS_CALL_METHOD(_method_893)>(*this,lib,"psrad",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psrad >::invoke")
		->args({"self","mmx","imm8"});
	using _method_894 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psraw >;
	addExtern<DAS_CALL_METHOD(_method_894)>(*this,lib,"psraw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psraw >::invoke")
		->args({"self","mmx","op"});
	using _method_895 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psraw >;
	addExtern<DAS_CALL_METHOD(_method_895)>(*this,lib,"psraw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psraw >::invoke")
		->args({"self","mmx","imm8"});
	using _method_896 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psrld >;
	addExtern<DAS_CALL_METHOD(_method_896)>(*this,lib,"psrld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psrld >::invoke")
		->args({"self","mmx","op"});
	using _method_897 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psrld >;
	addExtern<DAS_CALL_METHOD(_method_897)>(*this,lib,"psrld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psrld >::invoke")
		->args({"self","mmx","imm8"});
	using _method_898 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,int),&Xbyak::CodeGenerator::psrldq >;
	addExtern<DAS_CALL_METHOD(_method_898)>(*this,lib,"psrldq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,int),&Xbyak::CodeGenerator::psrldq >::invoke")
		->args({"self","xmm","imm8"});
	using _method_899 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlq >;
	addExtern<DAS_CALL_METHOD(_method_899)>(*this,lib,"psrlq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlq >::invoke")
		->args({"self","mmx","op"});
	using _method_900 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psrlq >;
	addExtern<DAS_CALL_METHOD(_method_900)>(*this,lib,"psrlq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psrlq >::invoke")
		->args({"self","mmx","imm8"});
	using _method_901 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlw >;
	addExtern<DAS_CALL_METHOD(_method_901)>(*this,lib,"psrlw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlw >::invoke")
		->args({"self","mmx","op"});
	using _method_902 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psrlw >;
	addExtern<DAS_CALL_METHOD(_method_902)>(*this,lib,"psrlw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::psrlw >::invoke")
		->args({"self","mmx","imm8"});
	using _method_903 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubb >;
	addExtern<DAS_CALL_METHOD(_method_903)>(*this,lib,"psubb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubb >::invoke")
		->args({"self","mmx","op"});
	using _method_904 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubd >;
	addExtern<DAS_CALL_METHOD(_method_904)>(*this,lib,"psubd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubd >::invoke")
		->args({"self","mmx","op"});
	using _method_905 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubq >;
	addExtern<DAS_CALL_METHOD(_method_905)>(*this,lib,"psubq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubq >::invoke")
		->args({"self","mmx","op"});
	using _method_906 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubsb >;
	addExtern<DAS_CALL_METHOD(_method_906)>(*this,lib,"psubsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubsb >::invoke")
		->args({"self","mmx","op"});
	using _method_907 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubsw >;
	addExtern<DAS_CALL_METHOD(_method_907)>(*this,lib,"psubsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubsw >::invoke")
		->args({"self","mmx","op"});
	using _method_908 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubusb >;
	addExtern<DAS_CALL_METHOD(_method_908)>(*this,lib,"psubusb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubusb >::invoke")
		->args({"self","mmx","op"});
	using _method_909 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubusw >;
	addExtern<DAS_CALL_METHOD(_method_909)>(*this,lib,"psubusw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubusw >::invoke")
		->args({"self","mmx","op"});
	using _method_910 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubw >;
	addExtern<DAS_CALL_METHOD(_method_910)>(*this,lib,"psubw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psubw >::invoke")
		->args({"self","mmx","op"});
	using _method_911 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::ptest >;
	addExtern<DAS_CALL_METHOD(_method_911)>(*this,lib,"ptest",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::ptest >::invoke")
		->args({"self","xmm","op"});
	using _method_912 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpckhbw >;
	addExtern<DAS_CALL_METHOD(_method_912)>(*this,lib,"punpckhbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpckhbw >::invoke")
		->args({"self","mmx","op"});
	using _method_913 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpckhdq >;
	addExtern<DAS_CALL_METHOD(_method_913)>(*this,lib,"punpckhdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpckhdq >::invoke")
		->args({"self","mmx","op"});
	using _method_914 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpckhqdq >;
	addExtern<DAS_CALL_METHOD(_method_914)>(*this,lib,"punpckhqdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpckhqdq >::invoke")
		->args({"self","xmm","op"});
	using _method_915 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpckhwd >;
	addExtern<DAS_CALL_METHOD(_method_915)>(*this,lib,"punpckhwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpckhwd >::invoke")
		->args({"self","mmx","op"});
	using _method_916 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpcklbw >;
	addExtern<DAS_CALL_METHOD(_method_916)>(*this,lib,"punpcklbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpcklbw >::invoke")
		->args({"self","mmx","op"});
	using _method_917 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpckldq >;
	addExtern<DAS_CALL_METHOD(_method_917)>(*this,lib,"punpckldq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpckldq >::invoke")
		->args({"self","mmx","op"});
	using _method_918 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpcklqdq >;
	addExtern<DAS_CALL_METHOD(_method_918)>(*this,lib,"punpcklqdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpcklqdq >::invoke")
		->args({"self","xmm","op"});
	using _method_919 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpcklwd >;
	addExtern<DAS_CALL_METHOD(_method_919)>(*this,lib,"punpcklwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::punpcklwd >::invoke")
		->args({"self","mmx","op"});
	using _method_920 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::pushf >;
	addExtern<DAS_CALL_METHOD(_method_920)>(*this,lib,"pushf",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::pushf >::invoke")
		->args({"self"});
	using _method_921 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pxor >;
	addExtern<DAS_CALL_METHOD(_method_921)>(*this,lib,"pxor",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pxor >::invoke")
		->args({"self","mmx","op"});
	using _method_922 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcl >;
	addExtern<DAS_CALL_METHOD(_method_922)>(*this,lib,"rcl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcl >::invoke")
		->args({"self","op","_cl"});
	using _method_923 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::rcl >;
	addExtern<DAS_CALL_METHOD(_method_923)>(*this,lib,"rcl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::rcl >::invoke")
		->args({"self","op","imm"});
	using _method_924 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::rcpps >;
	addExtern<DAS_CALL_METHOD(_method_924)>(*this,lib,"rcpps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::rcpps >::invoke")
		->args({"self","xmm","op"});
	using _method_925 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::rcpss >;
	addExtern<DAS_CALL_METHOD(_method_925)>(*this,lib,"rcpss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::rcpss >::invoke")
		->args({"self","xmm","op"});
	using _method_926 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcr >;
	addExtern<DAS_CALL_METHOD(_method_926)>(*this,lib,"rcr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcr >::invoke")
		->args({"self","op","_cl"});
	using _method_927 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::rcr >;
	addExtern<DAS_CALL_METHOD(_method_927)>(*this,lib,"rcr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::rcr >::invoke")
		->args({"self","op","imm"});
	using _method_928 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::rdmsr >;
	addExtern<DAS_CALL_METHOD(_method_928)>(*this,lib,"rdmsr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::rdmsr >::invoke")
		->args({"self"});
	using _method_929 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::rdpmc >;
	addExtern<DAS_CALL_METHOD(_method_929)>(*this,lib,"rdpmc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::rdpmc >::invoke")
		->args({"self"});
	using _method_930 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &),&Xbyak::CodeGenerator::rdrand >;
	addExtern<DAS_CALL_METHOD(_method_930)>(*this,lib,"rdrand",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &),&Xbyak::CodeGenerator::rdrand >::invoke")
		->args({"self","r"});
	using _method_931 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &),&Xbyak::CodeGenerator::rdseed >;
	addExtern<DAS_CALL_METHOD(_method_931)>(*this,lib,"rdseed",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &),&Xbyak::CodeGenerator::rdseed >::invoke")
		->args({"self","r"});
	using _method_932 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::rdtsc >;
	addExtern<DAS_CALL_METHOD(_method_932)>(*this,lib,"rdtsc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::rdtsc >::invoke")
		->args({"self"});
	using _method_933 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::rdtscp >;
	addExtern<DAS_CALL_METHOD(_method_933)>(*this,lib,"rdtscp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::rdtscp >::invoke")
		->args({"self"});
	using _method_934 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::rep >;
	addExtern<DAS_CALL_METHOD(_method_934)>(*this,lib,"rep",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::rep >::invoke")
		->args({"self"});
	using _method_935 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::repe >;
	addExtern<DAS_CALL_METHOD(_method_935)>(*this,lib,"repe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::repe >::invoke")
		->args({"self"});
	using _method_936 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::repne >;
	addExtern<DAS_CALL_METHOD(_method_936)>(*this,lib,"repne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::repne >::invoke")
		->args({"self"});
	using _method_937 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::repnz >;
	addExtern<DAS_CALL_METHOD(_method_937)>(*this,lib,"repnz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::repnz >::invoke")
		->args({"self"});
	using _method_938 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::repz >;
	addExtern<DAS_CALL_METHOD(_method_938)>(*this,lib,"repz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::repz >::invoke")
		->args({"self"});
	using _method_939 = das::das_call_member< void (Xbyak::CodeGenerator::*)(int),&Xbyak::CodeGenerator::ret >;
	addExtern<DAS_CALL_METHOD(_method_939)>(*this,lib,"ret",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(int),&Xbyak::CodeGenerator::ret >::invoke")
		->args({"self","imm"});
	using _method_940 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rol >;
	addExtern<DAS_CALL_METHOD(_method_940)>(*this,lib,"rol",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rol >::invoke")
		->args({"self","op","_cl"});
	using _method_941 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::rol >;
	addExtern<DAS_CALL_METHOD(_method_941)>(*this,lib,"rol",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::rol >::invoke")
		->args({"self","op","imm"});
	using _method_942 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::ror >;
	addExtern<DAS_CALL_METHOD(_method_942)>(*this,lib,"ror",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::ror >::invoke")
		->args({"self","op","_cl"});
	using _method_943 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::ror >;
	addExtern<DAS_CALL_METHOD(_method_943)>(*this,lib,"ror",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::ror >::invoke")
		->args({"self","op","imm"});
	using _method_944 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::rorx >;
	addExtern<DAS_CALL_METHOD(_method_944)>(*this,lib,"rorx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::rorx >::invoke")
		->args({"self","r","op","imm"});
	using _method_945 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::roundpd >;
	addExtern<DAS_CALL_METHOD(_method_945)>(*this,lib,"roundpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::roundpd >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_946 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::roundps >;
	addExtern<DAS_CALL_METHOD(_method_946)>(*this,lib,"roundps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::roundps >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_947 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::roundsd >;
	addExtern<DAS_CALL_METHOD(_method_947)>(*this,lib,"roundsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::roundsd >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_948 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::roundss >;
	addExtern<DAS_CALL_METHOD(_method_948)>(*this,lib,"roundss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::roundss >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_949 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::rsqrtps >;
	addExtern<DAS_CALL_METHOD(_method_949)>(*this,lib,"rsqrtps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::rsqrtps >::invoke")
		->args({"self","xmm","op"});
	using _method_950 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::rsqrtss >;
	addExtern<DAS_CALL_METHOD(_method_950)>(*this,lib,"rsqrtss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::rsqrtss >::invoke")
		->args({"self","xmm","op"});
	using _method_951 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sahf >;
	addExtern<DAS_CALL_METHOD(_method_951)>(*this,lib,"sahf",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::sahf >::invoke")
		->args({"self"});
	using _method_952 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sal >;
	addExtern<DAS_CALL_METHOD(_method_952)>(*this,lib,"sal",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sal >::invoke")
		->args({"self","op","_cl"});
	using _method_953 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::sal >;
	addExtern<DAS_CALL_METHOD(_method_953)>(*this,lib,"sal",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::sal >::invoke")
		->args({"self","op","imm"});
	using _method_954 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sar >;
	addExtern<DAS_CALL_METHOD(_method_954)>(*this,lib,"sar",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sar >::invoke")
		->args({"self","op","_cl"});
	using _method_955 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::sar >;
	addExtern<DAS_CALL_METHOD(_method_955)>(*this,lib,"sar",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,int),&Xbyak::CodeGenerator::sar >::invoke")
		->args({"self","op","imm"});
	using _method_956 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::sarx >;
	addExtern<DAS_CALL_METHOD(_method_956)>(*this,lib,"sarx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::sarx >::invoke")
		->args({"self","r1","op","r2"});
	using _method_957 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::sbb >;
	addExtern<DAS_CALL_METHOD(_method_957)>(*this,lib,"sbb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::sbb >::invoke")
		->args({"self","op","imm"});
	using _method_958 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sbb >;
	addExtern<DAS_CALL_METHOD(_method_958)>(*this,lib,"sbb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::sbb >::invoke")
		->args({"self","op1","op2"});
	using _method_959 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::scasb >;
	addExtern<DAS_CALL_METHOD(_method_959)>(*this,lib,"scasb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::scasb >::invoke")
		->args({"self"});
	using _method_960 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::scasd >;
	addExtern<DAS_CALL_METHOD(_method_960)>(*this,lib,"scasd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::scasd >::invoke")
		->args({"self"});
	using _method_961 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::scasw >;
	addExtern<DAS_CALL_METHOD(_method_961)>(*this,lib,"scasw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::scasw >::invoke")
		->args({"self"});
	using _method_962 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::seta >;
	addExtern<DAS_CALL_METHOD(_method_962)>(*this,lib,"seta",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::seta >::invoke")
		->args({"self","op"});
	using _method_963 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setae >;
	addExtern<DAS_CALL_METHOD(_method_963)>(*this,lib,"setae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setae >::invoke")
		->args({"self","op"});
	using _method_964 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setb >;
	addExtern<DAS_CALL_METHOD(_method_964)>(*this,lib,"setb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setb >::invoke")
		->args({"self","op"});
	using _method_965 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setbe >;
	addExtern<DAS_CALL_METHOD(_method_965)>(*this,lib,"setbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setbe >::invoke")
		->args({"self","op"});
	using _method_966 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setc >;
	addExtern<DAS_CALL_METHOD(_method_966)>(*this,lib,"setc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setc >::invoke")
		->args({"self","op"});
	using _method_967 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::sete >;
	addExtern<DAS_CALL_METHOD(_method_967)>(*this,lib,"sete",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::sete >::invoke")
		->args({"self","op"});
	using _method_968 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setg >;
	addExtern<DAS_CALL_METHOD(_method_968)>(*this,lib,"setg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setg >::invoke")
		->args({"self","op"});
	using _method_969 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setge >;
	addExtern<DAS_CALL_METHOD(_method_969)>(*this,lib,"setge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setge >::invoke")
		->args({"self","op"});
	using _method_970 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setl >;
	addExtern<DAS_CALL_METHOD(_method_970)>(*this,lib,"setl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setl >::invoke")
		->args({"self","op"});
	using _method_971 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setle >;
	addExtern<DAS_CALL_METHOD(_method_971)>(*this,lib,"setle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setle >::invoke")
		->args({"self","op"});
	using _method_972 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setna >;
	addExtern<DAS_CALL_METHOD(_method_972)>(*this,lib,"setna",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setna >::invoke")
		->args({"self","op"});
	using _method_973 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnae >;
	addExtern<DAS_CALL_METHOD(_method_973)>(*this,lib,"setnae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnae >::invoke")
		->args({"self","op"});
	using _method_974 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnb >;
	addExtern<DAS_CALL_METHOD(_method_974)>(*this,lib,"setnb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnb >::invoke")
		->args({"self","op"});
	using _method_975 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnbe >;
	addExtern<DAS_CALL_METHOD(_method_975)>(*this,lib,"setnbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnbe >::invoke")
		->args({"self","op"});
	using _method_976 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnc >;
	addExtern<DAS_CALL_METHOD(_method_976)>(*this,lib,"setnc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnc >::invoke")
		->args({"self","op"});
	using _method_977 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setne >;
	addExtern<DAS_CALL_METHOD(_method_977)>(*this,lib,"setne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setne >::invoke")
		->args({"self","op"});
	using _method_978 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setng >;
	addExtern<DAS_CALL_METHOD(_method_978)>(*this,lib,"setng",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setng >::invoke")
		->args({"self","op"});
	using _method_979 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnge >;
	addExtern<DAS_CALL_METHOD(_method_979)>(*this,lib,"setnge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnge >::invoke")
		->args({"self","op"});
	using _method_980 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnl >;
	addExtern<DAS_CALL_METHOD(_method_980)>(*this,lib,"setnl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnl >::invoke")
		->args({"self","op"});
	using _method_981 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnle >;
	addExtern<DAS_CALL_METHOD(_method_981)>(*this,lib,"setnle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnle >::invoke")
		->args({"self","op"});
	using _method_982 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setno >;
	addExtern<DAS_CALL_METHOD(_method_982)>(*this,lib,"setno",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setno >::invoke")
		->args({"self","op"});
	using _method_983 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnp >;
	addExtern<DAS_CALL_METHOD(_method_983)>(*this,lib,"setnp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnp >::invoke")
		->args({"self","op"});
	using _method_984 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setns >;
	addExtern<DAS_CALL_METHOD(_method_984)>(*this,lib,"setns",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setns >::invoke")
		->args({"self","op"});
	using _method_985 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnz >;
	addExtern<DAS_CALL_METHOD(_method_985)>(*this,lib,"setnz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::setnz >::invoke")
		->args({"self","op"});
	using _method_986 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::seto >;
	addExtern<DAS_CALL_METHOD(_method_986)>(*this,lib,"seto",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::seto >::invoke")
		->args({"self","op"});
}
}

