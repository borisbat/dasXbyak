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
void Module_dasXBYAK::initFunctions_9() {
	using _method_757 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::movzx >;
	addExtern<DAS_CALL_METHOD(_method_757)>(*this,lib,"movzx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::movzx >::invoke")
		->args({"self","reg","op"});
	using _method_758 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::mpsadbw >;
	addExtern<DAS_CALL_METHOD(_method_758)>(*this,lib,"mpsadbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int) , &Xbyak::CodeGenerator::mpsadbw >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_759 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::mul >;
	addExtern<DAS_CALL_METHOD(_method_759)>(*this,lib,"mul",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &) , &Xbyak::CodeGenerator::mul >::invoke")
		->args({"self","op"});
	using _method_760 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulpd >;
	addExtern<DAS_CALL_METHOD(_method_760)>(*this,lib,"mulpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::mulpd >::invoke")
		->args({"self","xmm","op"});
	using _method_761 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulps >;
	addExtern<DAS_CALL_METHOD(_method_761)>(*this,lib,"mulps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::mulps >::invoke")
		->args({"self","xmm","op"});
	using _method_762 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulsd >;
	addExtern<DAS_CALL_METHOD(_method_762)>(*this,lib,"mulsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::mulsd >::invoke")
		->args({"self","xmm","op"});
	using _method_763 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulss >;
	addExtern<DAS_CALL_METHOD(_method_763)>(*this,lib,"mulss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::mulss >::invoke")
		->args({"self","xmm","op"});
	using _method_764 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mulx >;
	addExtern<DAS_CALL_METHOD(_method_764)>(*this,lib,"mulx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::mulx >::invoke")
		->args({"self","r1","r2","op"});
	using _method_765 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::mwait >;
	addExtern<DAS_CALL_METHOD(_method_765)>(*this,lib,"mwait",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)() , &Xbyak::CodeGenerator::mwait >::invoke")
		->args({"self"});
	using _method_766 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::mwaitx >;
	addExtern<DAS_CALL_METHOD(_method_766)>(*this,lib,"mwaitx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)() , &Xbyak::CodeGenerator::mwaitx >::invoke")
		->args({"self"});
	using _method_767 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::neg >;
	addExtern<DAS_CALL_METHOD(_method_767)>(*this,lib,"neg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &) , &Xbyak::CodeGenerator::neg >::invoke")
		->args({"self","op"});
	using _method_768 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::not_ >;
	addExtern<DAS_CALL_METHOD(_method_768)>(*this,lib,"not_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &) , &Xbyak::CodeGenerator::not_ >::invoke")
		->args({"self","op"});
	using _method_769 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::or_ >;
	addExtern<DAS_CALL_METHOD(_method_769)>(*this,lib,"or_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int) , &Xbyak::CodeGenerator::or_ >::invoke")
		->args({"self","op","imm"});
	using _method_770 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::or_ >;
	addExtern<DAS_CALL_METHOD(_method_770)>(*this,lib,"or_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::or_ >::invoke")
		->args({"self","op1","op2"});
	using _method_771 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::orpd >;
	addExtern<DAS_CALL_METHOD(_method_771)>(*this,lib,"orpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::orpd >::invoke")
		->args({"self","xmm","op"});
	using _method_772 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::orps >;
	addExtern<DAS_CALL_METHOD(_method_772)>(*this,lib,"orps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::orps >::invoke")
		->args({"self","xmm","op"});
	using _method_773 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &),&Xbyak::CodeGenerator::out_ >;
	addExtern<DAS_CALL_METHOD(_method_773)>(*this,lib,"out_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Reg &) , &Xbyak::CodeGenerator::out_ >::invoke")
		->args({"self","d","a"});
	using _method_774 = das::das_call_member< void (Xbyak::CodeGenerator::*)(unsigned char,const Xbyak::Reg &),&Xbyak::CodeGenerator::out_ >;
	addExtern<DAS_CALL_METHOD(_method_774)>(*this,lib,"out_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(unsigned char,const Xbyak::Reg &) , &Xbyak::CodeGenerator::out_ >::invoke")
		->args({"self","v","a"});
	using _method_775 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::outsb >;
	addExtern<DAS_CALL_METHOD(_method_775)>(*this,lib,"outsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)() , &Xbyak::CodeGenerator::outsb >::invoke")
		->args({"self"});
	using _method_776 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::outsd >;
	addExtern<DAS_CALL_METHOD(_method_776)>(*this,lib,"outsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)() , &Xbyak::CodeGenerator::outsd >::invoke")
		->args({"self"});
	using _method_777 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::outsw >;
	addExtern<DAS_CALL_METHOD(_method_777)>(*this,lib,"outsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)() , &Xbyak::CodeGenerator::outsw >::invoke")
		->args({"self"});
	using _method_778 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pabsb >;
	addExtern<DAS_CALL_METHOD(_method_778)>(*this,lib,"pabsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pabsb >::invoke")
		->args({"self","mmx","op"});
	using _method_779 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pabsd >;
	addExtern<DAS_CALL_METHOD(_method_779)>(*this,lib,"pabsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pabsd >::invoke")
		->args({"self","mmx","op"});
	using _method_780 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pabsw >;
	addExtern<DAS_CALL_METHOD(_method_780)>(*this,lib,"pabsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pabsw >::invoke")
		->args({"self","mmx","op"});
	using _method_781 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packssdw >;
	addExtern<DAS_CALL_METHOD(_method_781)>(*this,lib,"packssdw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::packssdw >::invoke")
		->args({"self","mmx","op"});
	using _method_782 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packsswb >;
	addExtern<DAS_CALL_METHOD(_method_782)>(*this,lib,"packsswb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::packsswb >::invoke")
		->args({"self","mmx","op"});
	using _method_783 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packusdw >;
	addExtern<DAS_CALL_METHOD(_method_783)>(*this,lib,"packusdw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::packusdw >::invoke")
		->args({"self","xmm","op"});
	using _method_784 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::packuswb >;
	addExtern<DAS_CALL_METHOD(_method_784)>(*this,lib,"packuswb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::packuswb >::invoke")
		->args({"self","mmx","op"});
	using _method_785 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddb >;
	addExtern<DAS_CALL_METHOD(_method_785)>(*this,lib,"paddb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::paddb >::invoke")
		->args({"self","mmx","op"});
	using _method_786 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddd >;
	addExtern<DAS_CALL_METHOD(_method_786)>(*this,lib,"paddd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::paddd >::invoke")
		->args({"self","mmx","op"});
	using _method_787 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddq >;
	addExtern<DAS_CALL_METHOD(_method_787)>(*this,lib,"paddq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::paddq >::invoke")
		->args({"self","mmx","op"});
	using _method_788 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddsb >;
	addExtern<DAS_CALL_METHOD(_method_788)>(*this,lib,"paddsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::paddsb >::invoke")
		->args({"self","mmx","op"});
	using _method_789 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddsw >;
	addExtern<DAS_CALL_METHOD(_method_789)>(*this,lib,"paddsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::paddsw >::invoke")
		->args({"self","mmx","op"});
	using _method_790 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddusb >;
	addExtern<DAS_CALL_METHOD(_method_790)>(*this,lib,"paddusb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::paddusb >::invoke")
		->args({"self","mmx","op"});
	using _method_791 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddusw >;
	addExtern<DAS_CALL_METHOD(_method_791)>(*this,lib,"paddusw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::paddusw >::invoke")
		->args({"self","mmx","op"});
	using _method_792 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddw >;
	addExtern<DAS_CALL_METHOD(_method_792)>(*this,lib,"paddw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::paddw >::invoke")
		->args({"self","mmx","op"});
	using _method_793 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::palignr >;
	addExtern<DAS_CALL_METHOD(_method_793)>(*this,lib,"palignr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,int) , &Xbyak::CodeGenerator::palignr >::invoke")
		->args({"self","mmx","op","imm"});
	using _method_794 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pand >;
	addExtern<DAS_CALL_METHOD(_method_794)>(*this,lib,"pand",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pand >::invoke")
		->args({"self","mmx","op"});
	using _method_795 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pandn >;
	addExtern<DAS_CALL_METHOD(_method_795)>(*this,lib,"pandn",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pandn >::invoke")
		->args({"self","mmx","op"});
	using _method_796 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::pause >;
	addExtern<DAS_CALL_METHOD(_method_796)>(*this,lib,"pause",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)() , &Xbyak::CodeGenerator::pause >::invoke")
		->args({"self"});
	using _method_797 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pavgb >;
	addExtern<DAS_CALL_METHOD(_method_797)>(*this,lib,"pavgb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pavgb >::invoke")
		->args({"self","mmx","op"});
	using _method_798 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pavgw >;
	addExtern<DAS_CALL_METHOD(_method_798)>(*this,lib,"pavgw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pavgw >::invoke")
		->args({"self","mmx","op"});
	using _method_799 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pblendvb >;
	addExtern<DAS_CALL_METHOD(_method_799)>(*this,lib,"pblendvb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pblendvb >::invoke")
		->args({"self","xmm","op"});
	using _method_800 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::pblendw >;
	addExtern<DAS_CALL_METHOD(_method_800)>(*this,lib,"pblendw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int) , &Xbyak::CodeGenerator::pblendw >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_801 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmulhqhdq >;
	addExtern<DAS_CALL_METHOD(_method_801)>(*this,lib,"pclmulhqhdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pclmulhqhdq >::invoke")
		->args({"self","xmm","op"});
	using _method_802 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmulhqlqdq >;
	addExtern<DAS_CALL_METHOD(_method_802)>(*this,lib,"pclmulhqlqdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pclmulhqlqdq >::invoke")
		->args({"self","xmm","op"});
	using _method_803 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmullqhdq >;
	addExtern<DAS_CALL_METHOD(_method_803)>(*this,lib,"pclmullqhdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pclmullqhdq >::invoke")
		->args({"self","xmm","op"});
	using _method_804 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmullqlqdq >;
	addExtern<DAS_CALL_METHOD(_method_804)>(*this,lib,"pclmullqlqdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pclmullqlqdq >::invoke")
		->args({"self","xmm","op"});
	using _method_805 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::pclmulqdq >;
	addExtern<DAS_CALL_METHOD(_method_805)>(*this,lib,"pclmulqdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int) , &Xbyak::CodeGenerator::pclmulqdq >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_806 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqb >;
	addExtern<DAS_CALL_METHOD(_method_806)>(*this,lib,"pcmpeqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pcmpeqb >::invoke")
		->args({"self","mmx","op"});
	using _method_807 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqd >;
	addExtern<DAS_CALL_METHOD(_method_807)>(*this,lib,"pcmpeqd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pcmpeqd >::invoke")
		->args({"self","mmx","op"});
	using _method_808 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqq >;
	addExtern<DAS_CALL_METHOD(_method_808)>(*this,lib,"pcmpeqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pcmpeqq >::invoke")
		->args({"self","xmm","op"});
	using _method_809 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqw >;
	addExtern<DAS_CALL_METHOD(_method_809)>(*this,lib,"pcmpeqw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pcmpeqw >::invoke")
		->args({"self","mmx","op"});
	using _method_810 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpestri >;
	addExtern<DAS_CALL_METHOD(_method_810)>(*this,lib,"pcmpestri",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::pcmpestri >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_811 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpestrm >;
	addExtern<DAS_CALL_METHOD(_method_811)>(*this,lib,"pcmpestrm",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::pcmpestrm >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_812 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtb >;
	addExtern<DAS_CALL_METHOD(_method_812)>(*this,lib,"pcmpgtb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pcmpgtb >::invoke")
		->args({"self","mmx","op"});
	using _method_813 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtd >;
	addExtern<DAS_CALL_METHOD(_method_813)>(*this,lib,"pcmpgtd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pcmpgtd >::invoke")
		->args({"self","mmx","op"});
	using _method_814 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtq >;
	addExtern<DAS_CALL_METHOD(_method_814)>(*this,lib,"pcmpgtq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pcmpgtq >::invoke")
		->args({"self","xmm","op"});
	using _method_815 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtw >;
	addExtern<DAS_CALL_METHOD(_method_815)>(*this,lib,"pcmpgtw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pcmpgtw >::invoke")
		->args({"self","mmx","op"});
	using _method_816 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpistri >;
	addExtern<DAS_CALL_METHOD(_method_816)>(*this,lib,"pcmpistri",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::pcmpistri >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_817 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpistrm >;
	addExtern<DAS_CALL_METHOD(_method_817)>(*this,lib,"pcmpistrm",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::pcmpistrm >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_818 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pdep >;
	addExtern<DAS_CALL_METHOD(_method_818)>(*this,lib,"pdep",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pdep >::invoke")
		->args({"self","r1","r2","op"});
	using _method_819 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pext >;
	addExtern<DAS_CALL_METHOD(_method_819)>(*this,lib,"pext",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pext >::invoke")
		->args({"self","r1","r2","op"});
	using _method_820 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::pextrb >;
	addExtern<DAS_CALL_METHOD(_method_820)>(*this,lib,"pextrb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char) , &Xbyak::CodeGenerator::pextrb >::invoke")
		->args({"self","op","xmm","imm"});
	using _method_821 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::pextrd >;
	addExtern<DAS_CALL_METHOD(_method_821)>(*this,lib,"pextrd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char) , &Xbyak::CodeGenerator::pextrd >::invoke")
		->args({"self","op","xmm","imm"});
	using _method_822 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Mmx &,unsigned char),&Xbyak::CodeGenerator::pextrw >;
	addExtern<DAS_CALL_METHOD(_method_822)>(*this,lib,"pextrw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Mmx &,unsigned char) , &Xbyak::CodeGenerator::pextrw >::invoke")
		->args({"self","op","xmm","imm"});
	using _method_823 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phaddd >;
	addExtern<DAS_CALL_METHOD(_method_823)>(*this,lib,"phaddd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::phaddd >::invoke")
		->args({"self","mmx","op"});
	using _method_824 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phaddsw >;
	addExtern<DAS_CALL_METHOD(_method_824)>(*this,lib,"phaddsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::phaddsw >::invoke")
		->args({"self","mmx","op"});
	using _method_825 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phaddw >;
	addExtern<DAS_CALL_METHOD(_method_825)>(*this,lib,"phaddw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::phaddw >::invoke")
		->args({"self","mmx","op"});
	using _method_826 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phminposuw >;
	addExtern<DAS_CALL_METHOD(_method_826)>(*this,lib,"phminposuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::phminposuw >::invoke")
		->args({"self","xmm","op"});
	using _method_827 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phsubd >;
	addExtern<DAS_CALL_METHOD(_method_827)>(*this,lib,"phsubd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::phsubd >::invoke")
		->args({"self","mmx","op"});
	using _method_828 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phsubsw >;
	addExtern<DAS_CALL_METHOD(_method_828)>(*this,lib,"phsubsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::phsubsw >::invoke")
		->args({"self","mmx","op"});
	using _method_829 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phsubw >;
	addExtern<DAS_CALL_METHOD(_method_829)>(*this,lib,"phsubw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::phsubw >::invoke")
		->args({"self","mmx","op"});
	using _method_830 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pinsrb >;
	addExtern<DAS_CALL_METHOD(_method_830)>(*this,lib,"pinsrb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::pinsrb >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_831 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pinsrd >;
	addExtern<DAS_CALL_METHOD(_method_831)>(*this,lib,"pinsrd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::pinsrd >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_832 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::pinsrw >;
	addExtern<DAS_CALL_METHOD(_method_832)>(*this,lib,"pinsrw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,int) , &Xbyak::CodeGenerator::pinsrw >::invoke")
		->args({"self","mmx","op","imm"});
	using _method_833 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaddubsw >;
	addExtern<DAS_CALL_METHOD(_method_833)>(*this,lib,"pmaddubsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmaddubsw >::invoke")
		->args({"self","mmx","op"});
	using _method_834 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaddwd >;
	addExtern<DAS_CALL_METHOD(_method_834)>(*this,lib,"pmaddwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmaddwd >::invoke")
		->args({"self","mmx","op"});
	using _method_835 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxsb >;
	addExtern<DAS_CALL_METHOD(_method_835)>(*this,lib,"pmaxsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmaxsb >::invoke")
		->args({"self","xmm","op"});
	using _method_836 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxsd >;
	addExtern<DAS_CALL_METHOD(_method_836)>(*this,lib,"pmaxsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmaxsd >::invoke")
		->args({"self","xmm","op"});
	using _method_837 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxsw >;
	addExtern<DAS_CALL_METHOD(_method_837)>(*this,lib,"pmaxsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmaxsw >::invoke")
		->args({"self","mmx","op"});
	using _method_838 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxub >;
	addExtern<DAS_CALL_METHOD(_method_838)>(*this,lib,"pmaxub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmaxub >::invoke")
		->args({"self","mmx","op"});
	using _method_839 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxud >;
	addExtern<DAS_CALL_METHOD(_method_839)>(*this,lib,"pmaxud",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmaxud >::invoke")
		->args({"self","xmm","op"});
	using _method_840 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxuw >;
	addExtern<DAS_CALL_METHOD(_method_840)>(*this,lib,"pmaxuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmaxuw >::invoke")
		->args({"self","xmm","op"});
	using _method_841 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminsb >;
	addExtern<DAS_CALL_METHOD(_method_841)>(*this,lib,"pminsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pminsb >::invoke")
		->args({"self","xmm","op"});
	using _method_842 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminsd >;
	addExtern<DAS_CALL_METHOD(_method_842)>(*this,lib,"pminsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pminsd >::invoke")
		->args({"self","xmm","op"});
	using _method_843 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminsw >;
	addExtern<DAS_CALL_METHOD(_method_843)>(*this,lib,"pminsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pminsw >::invoke")
		->args({"self","mmx","op"});
	using _method_844 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminub >;
	addExtern<DAS_CALL_METHOD(_method_844)>(*this,lib,"pminub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pminub >::invoke")
		->args({"self","mmx","op"});
	using _method_845 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminud >;
	addExtern<DAS_CALL_METHOD(_method_845)>(*this,lib,"pminud",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pminud >::invoke")
		->args({"self","xmm","op"});
	using _method_846 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminuw >;
	addExtern<DAS_CALL_METHOD(_method_846)>(*this,lib,"pminuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pminuw >::invoke")
		->args({"self","xmm","op"});
	using _method_847 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::pmovmskb >;
	addExtern<DAS_CALL_METHOD(_method_847)>(*this,lib,"pmovmskb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Mmx &) , &Xbyak::CodeGenerator::pmovmskb >::invoke")
		->args({"self","reg","mmx"});
	using _method_848 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxbd >;
	addExtern<DAS_CALL_METHOD(_method_848)>(*this,lib,"pmovsxbd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmovsxbd >::invoke")
		->args({"self","xmm","op"});
	using _method_849 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxbq >;
	addExtern<DAS_CALL_METHOD(_method_849)>(*this,lib,"pmovsxbq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmovsxbq >::invoke")
		->args({"self","xmm","op"});
	using _method_850 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxbw >;
	addExtern<DAS_CALL_METHOD(_method_850)>(*this,lib,"pmovsxbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmovsxbw >::invoke")
		->args({"self","xmm","op"});
	using _method_851 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxdq >;
	addExtern<DAS_CALL_METHOD(_method_851)>(*this,lib,"pmovsxdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmovsxdq >::invoke")
		->args({"self","xmm","op"});
	using _method_852 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxwd >;
	addExtern<DAS_CALL_METHOD(_method_852)>(*this,lib,"pmovsxwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmovsxwd >::invoke")
		->args({"self","xmm","op"});
	using _method_853 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxwq >;
	addExtern<DAS_CALL_METHOD(_method_853)>(*this,lib,"pmovsxwq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmovsxwq >::invoke")
		->args({"self","xmm","op"});
	using _method_854 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxbd >;
	addExtern<DAS_CALL_METHOD(_method_854)>(*this,lib,"pmovzxbd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmovzxbd >::invoke")
		->args({"self","xmm","op"});
	using _method_855 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxbq >;
	addExtern<DAS_CALL_METHOD(_method_855)>(*this,lib,"pmovzxbq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmovzxbq >::invoke")
		->args({"self","xmm","op"});
	using _method_856 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxbw >;
	addExtern<DAS_CALL_METHOD(_method_856)>(*this,lib,"pmovzxbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::pmovzxbw >::invoke")
		->args({"self","xmm","op"});
}
}

