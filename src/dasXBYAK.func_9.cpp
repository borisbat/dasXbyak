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
	using _method_787 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddq >;
	addExtern<DAS_CALL_METHOD(_method_787)>(*this,lib,"paddq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddq >::invoke")
		->args({"self","mmx","op"});
	using _method_788 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddsb >;
	addExtern<DAS_CALL_METHOD(_method_788)>(*this,lib,"paddsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddsb >::invoke")
		->args({"self","mmx","op"});
	using _method_789 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddsw >;
	addExtern<DAS_CALL_METHOD(_method_789)>(*this,lib,"paddsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddsw >::invoke")
		->args({"self","mmx","op"});
	using _method_790 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddusb >;
	addExtern<DAS_CALL_METHOD(_method_790)>(*this,lib,"paddusb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddusb >::invoke")
		->args({"self","mmx","op"});
	using _method_791 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddusw >;
	addExtern<DAS_CALL_METHOD(_method_791)>(*this,lib,"paddusw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddusw >::invoke")
		->args({"self","mmx","op"});
	using _method_792 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddw >;
	addExtern<DAS_CALL_METHOD(_method_792)>(*this,lib,"paddw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::paddw >::invoke")
		->args({"self","mmx","op"});
	using _method_793 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::palignr >;
	addExtern<DAS_CALL_METHOD(_method_793)>(*this,lib,"palignr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::palignr >::invoke")
		->args({"self","mmx","op","imm"});
	using _method_794 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pand >;
	addExtern<DAS_CALL_METHOD(_method_794)>(*this,lib,"pand",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pand >::invoke")
		->args({"self","mmx","op"});
	using _method_795 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pandn >;
	addExtern<DAS_CALL_METHOD(_method_795)>(*this,lib,"pandn",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pandn >::invoke")
		->args({"self","mmx","op"});
	using _method_796 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::pause >;
	addExtern<DAS_CALL_METHOD(_method_796)>(*this,lib,"pause",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::pause >::invoke")
		->args({"self"});
	using _method_797 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pavgb >;
	addExtern<DAS_CALL_METHOD(_method_797)>(*this,lib,"pavgb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pavgb >::invoke")
		->args({"self","mmx","op"});
	using _method_798 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pavgw >;
	addExtern<DAS_CALL_METHOD(_method_798)>(*this,lib,"pavgw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pavgw >::invoke")
		->args({"self","mmx","op"});
	using _method_799 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pblendvb >;
	addExtern<DAS_CALL_METHOD(_method_799)>(*this,lib,"pblendvb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pblendvb >::invoke")
		->args({"self","xmm","op"});
	using _method_800 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::pblendw >;
	addExtern<DAS_CALL_METHOD(_method_800)>(*this,lib,"pblendw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::pblendw >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_801 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmulhqhdq >;
	addExtern<DAS_CALL_METHOD(_method_801)>(*this,lib,"pclmulhqhdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmulhqhdq >::invoke")
		->args({"self","xmm","op"});
	using _method_802 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmulhqlqdq >;
	addExtern<DAS_CALL_METHOD(_method_802)>(*this,lib,"pclmulhqlqdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmulhqlqdq >::invoke")
		->args({"self","xmm","op"});
	using _method_803 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmullqhdq >;
	addExtern<DAS_CALL_METHOD(_method_803)>(*this,lib,"pclmullqhdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmullqhdq >::invoke")
		->args({"self","xmm","op"});
	using _method_804 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmullqlqdq >;
	addExtern<DAS_CALL_METHOD(_method_804)>(*this,lib,"pclmullqlqdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pclmullqlqdq >::invoke")
		->args({"self","xmm","op"});
	using _method_805 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::pclmulqdq >;
	addExtern<DAS_CALL_METHOD(_method_805)>(*this,lib,"pclmulqdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::pclmulqdq >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_806 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqb >;
	addExtern<DAS_CALL_METHOD(_method_806)>(*this,lib,"pcmpeqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqb >::invoke")
		->args({"self","mmx","op"});
	using _method_807 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqd >;
	addExtern<DAS_CALL_METHOD(_method_807)>(*this,lib,"pcmpeqd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqd >::invoke")
		->args({"self","mmx","op"});
	using _method_808 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqq >;
	addExtern<DAS_CALL_METHOD(_method_808)>(*this,lib,"pcmpeqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqq >::invoke")
		->args({"self","xmm","op"});
	using _method_809 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqw >;
	addExtern<DAS_CALL_METHOD(_method_809)>(*this,lib,"pcmpeqw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpeqw >::invoke")
		->args({"self","mmx","op"});
	using _method_810 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpestri >;
	addExtern<DAS_CALL_METHOD(_method_810)>(*this,lib,"pcmpestri",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpestri >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_811 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpestrm >;
	addExtern<DAS_CALL_METHOD(_method_811)>(*this,lib,"pcmpestrm",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpestrm >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_812 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtb >;
	addExtern<DAS_CALL_METHOD(_method_812)>(*this,lib,"pcmpgtb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtb >::invoke")
		->args({"self","mmx","op"});
	using _method_813 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtd >;
	addExtern<DAS_CALL_METHOD(_method_813)>(*this,lib,"pcmpgtd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtd >::invoke")
		->args({"self","mmx","op"});
	using _method_814 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtq >;
	addExtern<DAS_CALL_METHOD(_method_814)>(*this,lib,"pcmpgtq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtq >::invoke")
		->args({"self","xmm","op"});
	using _method_815 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtw >;
	addExtern<DAS_CALL_METHOD(_method_815)>(*this,lib,"pcmpgtw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pcmpgtw >::invoke")
		->args({"self","mmx","op"});
	using _method_816 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpistri >;
	addExtern<DAS_CALL_METHOD(_method_816)>(*this,lib,"pcmpistri",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpistri >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_817 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpistrm >;
	addExtern<DAS_CALL_METHOD(_method_817)>(*this,lib,"pcmpistrm",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pcmpistrm >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_818 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pdep >;
	addExtern<DAS_CALL_METHOD(_method_818)>(*this,lib,"pdep",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pdep >::invoke")
		->args({"self","r1","r2","op"});
	using _method_819 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pext >;
	addExtern<DAS_CALL_METHOD(_method_819)>(*this,lib,"pext",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pext >::invoke")
		->args({"self","r1","r2","op"});
	using _method_820 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::pextrb >;
	addExtern<DAS_CALL_METHOD(_method_820)>(*this,lib,"pextrb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::pextrb >::invoke")
		->args({"self","op","xmm","imm"});
	using _method_821 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::pextrd >;
	addExtern<DAS_CALL_METHOD(_method_821)>(*this,lib,"pextrd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::pextrd >::invoke")
		->args({"self","op","xmm","imm"});
	using _method_822 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Mmx &,unsigned char),&Xbyak::CodeGenerator::pextrw >;
	addExtern<DAS_CALL_METHOD(_method_822)>(*this,lib,"pextrw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Mmx &,unsigned char),&Xbyak::CodeGenerator::pextrw >::invoke")
		->args({"self","op","xmm","imm"});
	using _method_823 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phaddd >;
	addExtern<DAS_CALL_METHOD(_method_823)>(*this,lib,"phaddd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phaddd >::invoke")
		->args({"self","mmx","op"});
	using _method_824 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phaddsw >;
	addExtern<DAS_CALL_METHOD(_method_824)>(*this,lib,"phaddsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phaddsw >::invoke")
		->args({"self","mmx","op"});
	using _method_825 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phaddw >;
	addExtern<DAS_CALL_METHOD(_method_825)>(*this,lib,"phaddw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phaddw >::invoke")
		->args({"self","mmx","op"});
	using _method_826 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phminposuw >;
	addExtern<DAS_CALL_METHOD(_method_826)>(*this,lib,"phminposuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phminposuw >::invoke")
		->args({"self","xmm","op"});
	using _method_827 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phsubd >;
	addExtern<DAS_CALL_METHOD(_method_827)>(*this,lib,"phsubd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phsubd >::invoke")
		->args({"self","mmx","op"});
	using _method_828 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phsubsw >;
	addExtern<DAS_CALL_METHOD(_method_828)>(*this,lib,"phsubsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phsubsw >::invoke")
		->args({"self","mmx","op"});
	using _method_829 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phsubw >;
	addExtern<DAS_CALL_METHOD(_method_829)>(*this,lib,"phsubw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::phsubw >::invoke")
		->args({"self","mmx","op"});
	using _method_830 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pinsrb >;
	addExtern<DAS_CALL_METHOD(_method_830)>(*this,lib,"pinsrb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pinsrb >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_831 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pinsrd >;
	addExtern<DAS_CALL_METHOD(_method_831)>(*this,lib,"pinsrd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pinsrd >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_832 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::pinsrw >;
	addExtern<DAS_CALL_METHOD(_method_832)>(*this,lib,"pinsrw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::pinsrw >::invoke")
		->args({"self","mmx","op","imm"});
	using _method_833 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaddubsw >;
	addExtern<DAS_CALL_METHOD(_method_833)>(*this,lib,"pmaddubsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaddubsw >::invoke")
		->args({"self","mmx","op"});
	using _method_834 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaddwd >;
	addExtern<DAS_CALL_METHOD(_method_834)>(*this,lib,"pmaddwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaddwd >::invoke")
		->args({"self","mmx","op"});
	using _method_835 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxsb >;
	addExtern<DAS_CALL_METHOD(_method_835)>(*this,lib,"pmaxsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxsb >::invoke")
		->args({"self","xmm","op"});
	using _method_836 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxsd >;
	addExtern<DAS_CALL_METHOD(_method_836)>(*this,lib,"pmaxsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxsd >::invoke")
		->args({"self","xmm","op"});
	using _method_837 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxsw >;
	addExtern<DAS_CALL_METHOD(_method_837)>(*this,lib,"pmaxsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxsw >::invoke")
		->args({"self","mmx","op"});
	using _method_838 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxub >;
	addExtern<DAS_CALL_METHOD(_method_838)>(*this,lib,"pmaxub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxub >::invoke")
		->args({"self","mmx","op"});
	using _method_839 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxud >;
	addExtern<DAS_CALL_METHOD(_method_839)>(*this,lib,"pmaxud",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxud >::invoke")
		->args({"self","xmm","op"});
	using _method_840 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxuw >;
	addExtern<DAS_CALL_METHOD(_method_840)>(*this,lib,"pmaxuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmaxuw >::invoke")
		->args({"self","xmm","op"});
	using _method_841 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminsb >;
	addExtern<DAS_CALL_METHOD(_method_841)>(*this,lib,"pminsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminsb >::invoke")
		->args({"self","xmm","op"});
	using _method_842 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminsd >;
	addExtern<DAS_CALL_METHOD(_method_842)>(*this,lib,"pminsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminsd >::invoke")
		->args({"self","xmm","op"});
	using _method_843 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminsw >;
	addExtern<DAS_CALL_METHOD(_method_843)>(*this,lib,"pminsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminsw >::invoke")
		->args({"self","mmx","op"});
	using _method_844 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminub >;
	addExtern<DAS_CALL_METHOD(_method_844)>(*this,lib,"pminub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminub >::invoke")
		->args({"self","mmx","op"});
	using _method_845 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminud >;
	addExtern<DAS_CALL_METHOD(_method_845)>(*this,lib,"pminud",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminud >::invoke")
		->args({"self","xmm","op"});
	using _method_846 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminuw >;
	addExtern<DAS_CALL_METHOD(_method_846)>(*this,lib,"pminuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pminuw >::invoke")
		->args({"self","xmm","op"});
	using _method_847 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::pmovmskb >;
	addExtern<DAS_CALL_METHOD(_method_847)>(*this,lib,"pmovmskb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Mmx &),&Xbyak::CodeGenerator::pmovmskb >::invoke")
		->args({"self","reg","mmx"});
	using _method_848 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxbd >;
	addExtern<DAS_CALL_METHOD(_method_848)>(*this,lib,"pmovsxbd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxbd >::invoke")
		->args({"self","xmm","op"});
	using _method_849 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxbq >;
	addExtern<DAS_CALL_METHOD(_method_849)>(*this,lib,"pmovsxbq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxbq >::invoke")
		->args({"self","xmm","op"});
	using _method_850 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxbw >;
	addExtern<DAS_CALL_METHOD(_method_850)>(*this,lib,"pmovsxbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxbw >::invoke")
		->args({"self","xmm","op"});
	using _method_851 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxdq >;
	addExtern<DAS_CALL_METHOD(_method_851)>(*this,lib,"pmovsxdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxdq >::invoke")
		->args({"self","xmm","op"});
	using _method_852 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxwd >;
	addExtern<DAS_CALL_METHOD(_method_852)>(*this,lib,"pmovsxwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxwd >::invoke")
		->args({"self","xmm","op"});
	using _method_853 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxwq >;
	addExtern<DAS_CALL_METHOD(_method_853)>(*this,lib,"pmovsxwq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovsxwq >::invoke")
		->args({"self","xmm","op"});
	using _method_854 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxbd >;
	addExtern<DAS_CALL_METHOD(_method_854)>(*this,lib,"pmovzxbd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxbd >::invoke")
		->args({"self","xmm","op"});
	using _method_855 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxbq >;
	addExtern<DAS_CALL_METHOD(_method_855)>(*this,lib,"pmovzxbq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxbq >::invoke")
		->args({"self","xmm","op"});
	using _method_856 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxbw >;
	addExtern<DAS_CALL_METHOD(_method_856)>(*this,lib,"pmovzxbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxbw >::invoke")
		->args({"self","xmm","op"});
	using _method_857 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxdq >;
	addExtern<DAS_CALL_METHOD(_method_857)>(*this,lib,"pmovzxdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxdq >::invoke")
		->args({"self","xmm","op"});
	using _method_858 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxwd >;
	addExtern<DAS_CALL_METHOD(_method_858)>(*this,lib,"pmovzxwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxwd >::invoke")
		->args({"self","xmm","op"});
	using _method_859 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxwq >;
	addExtern<DAS_CALL_METHOD(_method_859)>(*this,lib,"pmovzxwq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmovzxwq >::invoke")
		->args({"self","xmm","op"});
	using _method_860 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmuldq >;
	addExtern<DAS_CALL_METHOD(_method_860)>(*this,lib,"pmuldq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmuldq >::invoke")
		->args({"self","xmm","op"});
	using _method_861 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmulhrsw >;
	addExtern<DAS_CALL_METHOD(_method_861)>(*this,lib,"pmulhrsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmulhrsw >::invoke")
		->args({"self","mmx","op"});
	using _method_862 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmulhuw >;
	addExtern<DAS_CALL_METHOD(_method_862)>(*this,lib,"pmulhuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmulhuw >::invoke")
		->args({"self","mmx","op"});
	using _method_863 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmulhw >;
	addExtern<DAS_CALL_METHOD(_method_863)>(*this,lib,"pmulhw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmulhw >::invoke")
		->args({"self","mmx","op"});
	using _method_864 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmulld >;
	addExtern<DAS_CALL_METHOD(_method_864)>(*this,lib,"pmulld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmulld >::invoke")
		->args({"self","xmm","op"});
	using _method_865 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmullw >;
	addExtern<DAS_CALL_METHOD(_method_865)>(*this,lib,"pmullw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmullw >::invoke")
		->args({"self","mmx","op"});
	using _method_866 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmuludq >;
	addExtern<DAS_CALL_METHOD(_method_866)>(*this,lib,"pmuludq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pmuludq >::invoke")
		->args({"self","mmx","op"});
	using _method_867 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::popcnt >;
	addExtern<DAS_CALL_METHOD(_method_867)>(*this,lib,"popcnt",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::popcnt >::invoke")
		->args({"self","reg","op"});
	using _method_868 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::popf >;
	addExtern<DAS_CALL_METHOD(_method_868)>(*this,lib,"popf",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::popf >::invoke")
		->args({"self"});
	using _method_869 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::por >;
	addExtern<DAS_CALL_METHOD(_method_869)>(*this,lib,"por",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::por >::invoke")
		->args({"self","mmx","op"});
	using _method_870 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetchnta >;
	addExtern<DAS_CALL_METHOD(_method_870)>(*this,lib,"prefetchnta",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetchnta >::invoke")
		->args({"self","addr"});
	using _method_871 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetcht0 >;
	addExtern<DAS_CALL_METHOD(_method_871)>(*this,lib,"prefetcht0",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetcht0 >::invoke")
		->args({"self","addr"});
	using _method_872 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetcht1 >;
	addExtern<DAS_CALL_METHOD(_method_872)>(*this,lib,"prefetcht1",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetcht1 >::invoke")
		->args({"self","addr"});
	using _method_873 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetcht2 >;
	addExtern<DAS_CALL_METHOD(_method_873)>(*this,lib,"prefetcht2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetcht2 >::invoke")
		->args({"self","addr"});
	using _method_874 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetchw >;
	addExtern<DAS_CALL_METHOD(_method_874)>(*this,lib,"prefetchw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetchw >::invoke")
		->args({"self","addr"});
	using _method_875 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetchwt1 >;
	addExtern<DAS_CALL_METHOD(_method_875)>(*this,lib,"prefetchwt1",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::prefetchwt1 >::invoke")
		->args({"self","addr"});
	using _method_876 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psadbw >;
	addExtern<DAS_CALL_METHOD(_method_876)>(*this,lib,"psadbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psadbw >::invoke")
		->args({"self","mmx","op"});
	using _method_877 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pshufb >;
	addExtern<DAS_CALL_METHOD(_method_877)>(*this,lib,"pshufb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pshufb >::invoke")
		->args({"self","mmx","op"});
	using _method_878 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pshufd >;
	addExtern<DAS_CALL_METHOD(_method_878)>(*this,lib,"pshufd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pshufd >::invoke")
		->args({"self","mmx","op","imm8"});
	using _method_879 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pshufhw >;
	addExtern<DAS_CALL_METHOD(_method_879)>(*this,lib,"pshufhw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pshufhw >::invoke")
		->args({"self","mmx","op","imm8"});
	using _method_880 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pshuflw >;
	addExtern<DAS_CALL_METHOD(_method_880)>(*this,lib,"pshuflw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pshuflw >::invoke")
		->args({"self","mmx","op","imm8"});
	using _method_881 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pshufw >;
	addExtern<DAS_CALL_METHOD(_method_881)>(*this,lib,"pshufw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pshufw >::invoke")
		->args({"self","mmx","op","imm8"});
	using _method_882 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psignb >;
	addExtern<DAS_CALL_METHOD(_method_882)>(*this,lib,"psignb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psignb >::invoke")
		->args({"self","mmx","op"});
	using _method_883 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psignd >;
	addExtern<DAS_CALL_METHOD(_method_883)>(*this,lib,"psignd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psignd >::invoke")
		->args({"self","mmx","op"});
	using _method_884 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psignw >;
	addExtern<DAS_CALL_METHOD(_method_884)>(*this,lib,"psignw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::psignw >::invoke")
		->args({"self","mmx","op"});
	using _method_885 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pslld >;
	addExtern<DAS_CALL_METHOD(_method_885)>(*this,lib,"pslld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,const Xbyak::Operand &),&Xbyak::CodeGenerator::pslld >::invoke")
		->args({"self","mmx","op"});
	using _method_886 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::pslld >;
	addExtern<DAS_CALL_METHOD(_method_886)>(*this,lib,"pslld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &,int),&Xbyak::CodeGenerator::pslld >::invoke")
		->args({"self","mmx","imm8"});
}
}

