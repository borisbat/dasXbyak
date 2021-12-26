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
void Module_dasXBYAK::initFunctions_19() {
	using _method_1757 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps >;
	addExtern<DAS_CALL_METHOD(_method_1757)>(*this,lib,"vcmpneqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpneqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1758 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd >;
	addExtern<DAS_CALL_METHOD(_method_1758)>(*this,lib,"vcmpneqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpneqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1759 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss >;
	addExtern<DAS_CALL_METHOD(_method_1759)>(*this,lib,"vcmpneqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpneqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1760 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1760)>(*this,lib,"vcmpnge_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnge_uqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1761 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1761)>(*this,lib,"vcmpnge_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnge_uqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1762 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1762)>(*this,lib,"vcmpnge_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnge_uqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1763 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1763)>(*this,lib,"vcmpnge_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnge_uqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1764 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd >;
	addExtern<DAS_CALL_METHOD(_method_1764)>(*this,lib,"vcmpngepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngepd >::invoke")
		->args({"self","k","x","op"});
	using _method_1765 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps >;
	addExtern<DAS_CALL_METHOD(_method_1765)>(*this,lib,"vcmpngeps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngeps >::invoke")
		->args({"self","k","x","op"});
	using _method_1766 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd >;
	addExtern<DAS_CALL_METHOD(_method_1766)>(*this,lib,"vcmpngesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngesd >::invoke")
		->args({"self","k","x","op"});
	using _method_1767 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess >;
	addExtern<DAS_CALL_METHOD(_method_1767)>(*this,lib,"vcmpngess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngess >::invoke")
		->args({"self","k","x","op"});
	using _method_1768 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1768)>(*this,lib,"vcmpngt_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngt_uqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1769 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1769)>(*this,lib,"vcmpngt_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngt_uqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1770 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1770)>(*this,lib,"vcmpngt_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngt_uqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1771 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1771)>(*this,lib,"vcmpngt_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngt_uqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1772 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd >;
	addExtern<DAS_CALL_METHOD(_method_1772)>(*this,lib,"vcmpngtpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngtpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1773 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps >;
	addExtern<DAS_CALL_METHOD(_method_1773)>(*this,lib,"vcmpngtps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngtps >::invoke")
		->args({"self","k","x","op"});
	using _method_1774 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd >;
	addExtern<DAS_CALL_METHOD(_method_1774)>(*this,lib,"vcmpngtsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngtsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1775 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss >;
	addExtern<DAS_CALL_METHOD(_method_1775)>(*this,lib,"vcmpngtss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpngtss >::invoke")
		->args({"self","k","x","op"});
	using _method_1776 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1776)>(*this,lib,"vcmpnle_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnle_uqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1777 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1777)>(*this,lib,"vcmpnle_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnle_uqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1778 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1778)>(*this,lib,"vcmpnle_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnle_uqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1779 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1779)>(*this,lib,"vcmpnle_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnle_uqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1780 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd >;
	addExtern<DAS_CALL_METHOD(_method_1780)>(*this,lib,"vcmpnlepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnlepd >::invoke")
		->args({"self","k","x","op"});
	using _method_1781 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps >;
	addExtern<DAS_CALL_METHOD(_method_1781)>(*this,lib,"vcmpnleps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnleps >::invoke")
		->args({"self","k","x","op"});
	using _method_1782 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd >;
	addExtern<DAS_CALL_METHOD(_method_1782)>(*this,lib,"vcmpnlesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnlesd >::invoke")
		->args({"self","k","x","op"});
	using _method_1783 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless >;
	addExtern<DAS_CALL_METHOD(_method_1783)>(*this,lib,"vcmpnless",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnless >::invoke")
		->args({"self","k","x","op"});
	using _method_1784 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1784)>(*this,lib,"vcmpnlt_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnlt_uqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1785 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1785)>(*this,lib,"vcmpnlt_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnlt_uqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1786 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1786)>(*this,lib,"vcmpnlt_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnlt_uqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1787 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1787)>(*this,lib,"vcmpnlt_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnlt_uqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1788 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd >;
	addExtern<DAS_CALL_METHOD(_method_1788)>(*this,lib,"vcmpnltpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnltpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1789 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps >;
	addExtern<DAS_CALL_METHOD(_method_1789)>(*this,lib,"vcmpnltps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnltps >::invoke")
		->args({"self","k","x","op"});
	using _method_1790 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd >;
	addExtern<DAS_CALL_METHOD(_method_1790)>(*this,lib,"vcmpnltsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnltsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1791 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss >;
	addExtern<DAS_CALL_METHOD(_method_1791)>(*this,lib,"vcmpnltss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpnltss >::invoke")
		->args({"self","k","x","op"});
	using _method_1792 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd >;
	addExtern<DAS_CALL_METHOD(_method_1792)>(*this,lib,"vcmpord_spd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpord_spd >::invoke")
		->args({"self","k","x","op"});
	using _method_1793 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps >;
	addExtern<DAS_CALL_METHOD(_method_1793)>(*this,lib,"vcmpord_sps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpord_sps >::invoke")
		->args({"self","k","x","op"});
	using _method_1794 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd >;
	addExtern<DAS_CALL_METHOD(_method_1794)>(*this,lib,"vcmpord_ssd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpord_ssd >::invoke")
		->args({"self","k","x","op"});
	using _method_1795 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss >;
	addExtern<DAS_CALL_METHOD(_method_1795)>(*this,lib,"vcmpord_sss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpord_sss >::invoke")
		->args({"self","k","x","op"});
	using _method_1796 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd >;
	addExtern<DAS_CALL_METHOD(_method_1796)>(*this,lib,"vcmpordpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpordpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1797 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps >;
	addExtern<DAS_CALL_METHOD(_method_1797)>(*this,lib,"vcmpordps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpordps >::invoke")
		->args({"self","k","x","op"});
	using _method_1798 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd >;
	addExtern<DAS_CALL_METHOD(_method_1798)>(*this,lib,"vcmpordsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpordsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1799 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss >;
	addExtern<DAS_CALL_METHOD(_method_1799)>(*this,lib,"vcmpordss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpordss >::invoke")
		->args({"self","k","x","op"});
	using _method_1800 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmppd >;
	addExtern<DAS_CALL_METHOD(_method_1800)>(*this,lib,"vcmppd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::vcmppd >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1801 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpph >;
	addExtern<DAS_CALL_METHOD(_method_1801)>(*this,lib,"vcmpph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::vcmpph >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1802 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpps >;
	addExtern<DAS_CALL_METHOD(_method_1802)>(*this,lib,"vcmpps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::vcmpps >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1803 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpsd >;
	addExtern<DAS_CALL_METHOD(_method_1803)>(*this,lib,"vcmpsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::vcmpsd >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1804 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpsh >;
	addExtern<DAS_CALL_METHOD(_method_1804)>(*this,lib,"vcmpsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::vcmpsh >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1805 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpss >;
	addExtern<DAS_CALL_METHOD(_method_1805)>(*this,lib,"vcmpss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char) , &Xbyak::CodeGenerator::vcmpss >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1806 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd >;
	addExtern<DAS_CALL_METHOD(_method_1806)>(*this,lib,"vcmptrue_uspd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmptrue_uspd >::invoke")
		->args({"self","k","x","op"});
	using _method_1807 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps >;
	addExtern<DAS_CALL_METHOD(_method_1807)>(*this,lib,"vcmptrue_usps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmptrue_usps >::invoke")
		->args({"self","k","x","op"});
	using _method_1808 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd >;
	addExtern<DAS_CALL_METHOD(_method_1808)>(*this,lib,"vcmptrue_ussd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmptrue_ussd >::invoke")
		->args({"self","k","x","op"});
	using _method_1809 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss >;
	addExtern<DAS_CALL_METHOD(_method_1809)>(*this,lib,"vcmptrue_usss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmptrue_usss >::invoke")
		->args({"self","k","x","op"});
	using _method_1810 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd >;
	addExtern<DAS_CALL_METHOD(_method_1810)>(*this,lib,"vcmptruepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmptruepd >::invoke")
		->args({"self","k","x","op"});
	using _method_1811 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps >;
	addExtern<DAS_CALL_METHOD(_method_1811)>(*this,lib,"vcmptrueps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmptrueps >::invoke")
		->args({"self","k","x","op"});
	using _method_1812 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd >;
	addExtern<DAS_CALL_METHOD(_method_1812)>(*this,lib,"vcmptruesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmptruesd >::invoke")
		->args({"self","k","x","op"});
	using _method_1813 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess >;
	addExtern<DAS_CALL_METHOD(_method_1813)>(*this,lib,"vcmptruess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmptruess >::invoke")
		->args({"self","k","x","op"});
	using _method_1814 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd >;
	addExtern<DAS_CALL_METHOD(_method_1814)>(*this,lib,"vcmpunord_spd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpunord_spd >::invoke")
		->args({"self","k","x","op"});
	using _method_1815 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps >;
	addExtern<DAS_CALL_METHOD(_method_1815)>(*this,lib,"vcmpunord_sps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpunord_sps >::invoke")
		->args({"self","k","x","op"});
	using _method_1816 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd >;
	addExtern<DAS_CALL_METHOD(_method_1816)>(*this,lib,"vcmpunord_ssd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpunord_ssd >::invoke")
		->args({"self","k","x","op"});
	using _method_1817 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss >;
	addExtern<DAS_CALL_METHOD(_method_1817)>(*this,lib,"vcmpunord_sss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpunord_sss >::invoke")
		->args({"self","k","x","op"});
	using _method_1818 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd >;
	addExtern<DAS_CALL_METHOD(_method_1818)>(*this,lib,"vcmpunordpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpunordpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1819 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps >;
	addExtern<DAS_CALL_METHOD(_method_1819)>(*this,lib,"vcmpunordps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpunordps >::invoke")
		->args({"self","k","x","op"});
	using _method_1820 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd >;
	addExtern<DAS_CALL_METHOD(_method_1820)>(*this,lib,"vcmpunordsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpunordsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1821 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss >;
	addExtern<DAS_CALL_METHOD(_method_1821)>(*this,lib,"vcmpunordss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcmpunordss >::invoke")
		->args({"self","k","x","op"});
	using _method_1822 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcomish >;
	addExtern<DAS_CALL_METHOD(_method_1822)>(*this,lib,"vcomish",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcomish >::invoke")
		->args({"self","x","op"});
	using _method_1823 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompressb >;
	addExtern<DAS_CALL_METHOD(_method_1823)>(*this,lib,"vcompressb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &) , &Xbyak::CodeGenerator::vcompressb >::invoke")
		->args({"self","op","x"});
	using _method_1824 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompresspd >;
	addExtern<DAS_CALL_METHOD(_method_1824)>(*this,lib,"vcompresspd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &) , &Xbyak::CodeGenerator::vcompresspd >::invoke")
		->args({"self","op","x"});
	using _method_1825 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompressps >;
	addExtern<DAS_CALL_METHOD(_method_1825)>(*this,lib,"vcompressps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &) , &Xbyak::CodeGenerator::vcompressps >::invoke")
		->args({"self","op","x"});
	using _method_1826 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompressw >;
	addExtern<DAS_CALL_METHOD(_method_1826)>(*this,lib,"vcompressw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &) , &Xbyak::CodeGenerator::vcompressw >::invoke")
		->args({"self","op","x"});
	using _method_1827 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtdq2ph >;
	addExtern<DAS_CALL_METHOD(_method_1827)>(*this,lib,"vcvtdq2ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtdq2ph >::invoke")
		->args({"self","x","op"});
	using _method_1828 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtne2ps2bf16 >;
	addExtern<DAS_CALL_METHOD(_method_1828)>(*this,lib,"vcvtne2ps2bf16",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtne2ps2bf16 >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1829 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtneps2bf16 >;
	addExtern<DAS_CALL_METHOD(_method_1829)>(*this,lib,"vcvtneps2bf16",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtneps2bf16 >::invoke")
		->args({"self","x","op"});
	using _method_1830 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2ph >;
	addExtern<DAS_CALL_METHOD(_method_1830)>(*this,lib,"vcvtpd2ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtpd2ph >::invoke")
		->args({"self","x","op"});
	using _method_1831 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2qq >;
	addExtern<DAS_CALL_METHOD(_method_1831)>(*this,lib,"vcvtpd2qq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtpd2qq >::invoke")
		->args({"self","x","op"});
	using _method_1832 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2udq >;
	addExtern<DAS_CALL_METHOD(_method_1832)>(*this,lib,"vcvtpd2udq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtpd2udq >::invoke")
		->args({"self","x","op"});
	using _method_1833 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2uqq >;
	addExtern<DAS_CALL_METHOD(_method_1833)>(*this,lib,"vcvtpd2uqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtpd2uqq >::invoke")
		->args({"self","x","op"});
	using _method_1834 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2dq >;
	addExtern<DAS_CALL_METHOD(_method_1834)>(*this,lib,"vcvtph2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtph2dq >::invoke")
		->args({"self","x","op"});
	using _method_1835 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2pd >;
	addExtern<DAS_CALL_METHOD(_method_1835)>(*this,lib,"vcvtph2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtph2pd >::invoke")
		->args({"self","x","op"});
	using _method_1836 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2psx >;
	addExtern<DAS_CALL_METHOD(_method_1836)>(*this,lib,"vcvtph2psx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtph2psx >::invoke")
		->args({"self","x","op"});
	using _method_1837 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2qq >;
	addExtern<DAS_CALL_METHOD(_method_1837)>(*this,lib,"vcvtph2qq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtph2qq >::invoke")
		->args({"self","x","op"});
	using _method_1838 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2udq >;
	addExtern<DAS_CALL_METHOD(_method_1838)>(*this,lib,"vcvtph2udq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtph2udq >::invoke")
		->args({"self","x","op"});
	using _method_1839 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2uqq >;
	addExtern<DAS_CALL_METHOD(_method_1839)>(*this,lib,"vcvtph2uqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtph2uqq >::invoke")
		->args({"self","x","op"});
	using _method_1840 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2uw >;
	addExtern<DAS_CALL_METHOD(_method_1840)>(*this,lib,"vcvtph2uw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtph2uw >::invoke")
		->args({"self","x","op"});
	using _method_1841 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2w >;
	addExtern<DAS_CALL_METHOD(_method_1841)>(*this,lib,"vcvtph2w",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtph2w >::invoke")
		->args({"self","x","op"});
	using _method_1842 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2phx >;
	addExtern<DAS_CALL_METHOD(_method_1842)>(*this,lib,"vcvtps2phx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtps2phx >::invoke")
		->args({"self","x","op"});
	using _method_1843 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2qq >;
	addExtern<DAS_CALL_METHOD(_method_1843)>(*this,lib,"vcvtps2qq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtps2qq >::invoke")
		->args({"self","x","op"});
	using _method_1844 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2udq >;
	addExtern<DAS_CALL_METHOD(_method_1844)>(*this,lib,"vcvtps2udq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtps2udq >::invoke")
		->args({"self","x","op"});
	using _method_1845 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2uqq >;
	addExtern<DAS_CALL_METHOD(_method_1845)>(*this,lib,"vcvtps2uqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtps2uqq >::invoke")
		->args({"self","x","op"});
	using _method_1846 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtqq2pd >;
	addExtern<DAS_CALL_METHOD(_method_1846)>(*this,lib,"vcvtqq2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtqq2pd >::invoke")
		->args({"self","x","op"});
	using _method_1847 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtqq2ph >;
	addExtern<DAS_CALL_METHOD(_method_1847)>(*this,lib,"vcvtqq2ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtqq2ph >::invoke")
		->args({"self","x","op"});
	using _method_1848 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtqq2ps >;
	addExtern<DAS_CALL_METHOD(_method_1848)>(*this,lib,"vcvtqq2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtqq2ps >::invoke")
		->args({"self","x","op"});
	using _method_1849 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2sh >;
	addExtern<DAS_CALL_METHOD(_method_1849)>(*this,lib,"vcvtsd2sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtsd2sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1850 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2usi >;
	addExtern<DAS_CALL_METHOD(_method_1850)>(*this,lib,"vcvtsd2usi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtsd2usi >::invoke")
		->args({"self","r","op"});
	using _method_1851 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2sd >;
	addExtern<DAS_CALL_METHOD(_method_1851)>(*this,lib,"vcvtsh2sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtsh2sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1852 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2si >;
	addExtern<DAS_CALL_METHOD(_method_1852)>(*this,lib,"vcvtsh2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtsh2si >::invoke")
		->args({"self","r","op"});
	using _method_1853 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2ss >;
	addExtern<DAS_CALL_METHOD(_method_1853)>(*this,lib,"vcvtsh2ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtsh2ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1854 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2usi >;
	addExtern<DAS_CALL_METHOD(_method_1854)>(*this,lib,"vcvtsh2usi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtsh2usi >::invoke")
		->args({"self","r","op"});
	using _method_1855 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsi2sh >;
	addExtern<DAS_CALL_METHOD(_method_1855)>(*this,lib,"vcvtsi2sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtsi2sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1856 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2sh >;
	addExtern<DAS_CALL_METHOD(_method_1856)>(*this,lib,"vcvtss2sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &) , &Xbyak::CodeGenerator::vcvtss2sh >::invoke")
		->args({"self","x1","x2","op"});
}
}

