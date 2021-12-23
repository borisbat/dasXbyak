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
	using _method_1787 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1787)>(*this,lib,"vcmpnlt_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1788 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd >;
	addExtern<DAS_CALL_METHOD(_method_1788)>(*this,lib,"vcmpnltpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1789 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps >;
	addExtern<DAS_CALL_METHOD(_method_1789)>(*this,lib,"vcmpnltps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltps >::invoke")
		->args({"self","k","x","op"});
	using _method_1790 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd >;
	addExtern<DAS_CALL_METHOD(_method_1790)>(*this,lib,"vcmpnltsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1791 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss >;
	addExtern<DAS_CALL_METHOD(_method_1791)>(*this,lib,"vcmpnltss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnltss >::invoke")
		->args({"self","k","x","op"});
	using _method_1792 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd >;
	addExtern<DAS_CALL_METHOD(_method_1792)>(*this,lib,"vcmpord_spd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_spd >::invoke")
		->args({"self","k","x","op"});
	using _method_1793 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps >;
	addExtern<DAS_CALL_METHOD(_method_1793)>(*this,lib,"vcmpord_sps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sps >::invoke")
		->args({"self","k","x","op"});
	using _method_1794 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd >;
	addExtern<DAS_CALL_METHOD(_method_1794)>(*this,lib,"vcmpord_ssd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_ssd >::invoke")
		->args({"self","k","x","op"});
	using _method_1795 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss >;
	addExtern<DAS_CALL_METHOD(_method_1795)>(*this,lib,"vcmpord_sss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpord_sss >::invoke")
		->args({"self","k","x","op"});
	using _method_1796 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd >;
	addExtern<DAS_CALL_METHOD(_method_1796)>(*this,lib,"vcmpordpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1797 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps >;
	addExtern<DAS_CALL_METHOD(_method_1797)>(*this,lib,"vcmpordps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordps >::invoke")
		->args({"self","k","x","op"});
	using _method_1798 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd >;
	addExtern<DAS_CALL_METHOD(_method_1798)>(*this,lib,"vcmpordsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1799 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss >;
	addExtern<DAS_CALL_METHOD(_method_1799)>(*this,lib,"vcmpordss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpordss >::invoke")
		->args({"self","k","x","op"});
	using _method_1800 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmppd >;
	addExtern<DAS_CALL_METHOD(_method_1800)>(*this,lib,"vcmppd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmppd >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1801 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpph >;
	addExtern<DAS_CALL_METHOD(_method_1801)>(*this,lib,"vcmpph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpph >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1802 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpps >;
	addExtern<DAS_CALL_METHOD(_method_1802)>(*this,lib,"vcmpps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpps >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1803 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpsd >;
	addExtern<DAS_CALL_METHOD(_method_1803)>(*this,lib,"vcmpsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpsd >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1804 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpsh >;
	addExtern<DAS_CALL_METHOD(_method_1804)>(*this,lib,"vcmpsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpsh >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1805 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpss >;
	addExtern<DAS_CALL_METHOD(_method_1805)>(*this,lib,"vcmpss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vcmpss >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_1806 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd >;
	addExtern<DAS_CALL_METHOD(_method_1806)>(*this,lib,"vcmptrue_uspd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_uspd >::invoke")
		->args({"self","k","x","op"});
	using _method_1807 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps >;
	addExtern<DAS_CALL_METHOD(_method_1807)>(*this,lib,"vcmptrue_usps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usps >::invoke")
		->args({"self","k","x","op"});
	using _method_1808 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd >;
	addExtern<DAS_CALL_METHOD(_method_1808)>(*this,lib,"vcmptrue_ussd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_ussd >::invoke")
		->args({"self","k","x","op"});
	using _method_1809 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss >;
	addExtern<DAS_CALL_METHOD(_method_1809)>(*this,lib,"vcmptrue_usss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrue_usss >::invoke")
		->args({"self","k","x","op"});
	using _method_1810 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd >;
	addExtern<DAS_CALL_METHOD(_method_1810)>(*this,lib,"vcmptruepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruepd >::invoke")
		->args({"self","k","x","op"});
	using _method_1811 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps >;
	addExtern<DAS_CALL_METHOD(_method_1811)>(*this,lib,"vcmptrueps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptrueps >::invoke")
		->args({"self","k","x","op"});
	using _method_1812 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd >;
	addExtern<DAS_CALL_METHOD(_method_1812)>(*this,lib,"vcmptruesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruesd >::invoke")
		->args({"self","k","x","op"});
	using _method_1813 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess >;
	addExtern<DAS_CALL_METHOD(_method_1813)>(*this,lib,"vcmptruess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmptruess >::invoke")
		->args({"self","k","x","op"});
	using _method_1814 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd >;
	addExtern<DAS_CALL_METHOD(_method_1814)>(*this,lib,"vcmpunord_spd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_spd >::invoke")
		->args({"self","k","x","op"});
	using _method_1815 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps >;
	addExtern<DAS_CALL_METHOD(_method_1815)>(*this,lib,"vcmpunord_sps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sps >::invoke")
		->args({"self","k","x","op"});
	using _method_1816 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd >;
	addExtern<DAS_CALL_METHOD(_method_1816)>(*this,lib,"vcmpunord_ssd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_ssd >::invoke")
		->args({"self","k","x","op"});
	using _method_1817 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss >;
	addExtern<DAS_CALL_METHOD(_method_1817)>(*this,lib,"vcmpunord_sss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunord_sss >::invoke")
		->args({"self","k","x","op"});
	using _method_1818 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd >;
	addExtern<DAS_CALL_METHOD(_method_1818)>(*this,lib,"vcmpunordpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1819 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps >;
	addExtern<DAS_CALL_METHOD(_method_1819)>(*this,lib,"vcmpunordps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordps >::invoke")
		->args({"self","k","x","op"});
	using _method_1820 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd >;
	addExtern<DAS_CALL_METHOD(_method_1820)>(*this,lib,"vcmpunordsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1821 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss >;
	addExtern<DAS_CALL_METHOD(_method_1821)>(*this,lib,"vcmpunordss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpunordss >::invoke")
		->args({"self","k","x","op"});
	using _method_1822 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcomish >;
	addExtern<DAS_CALL_METHOD(_method_1822)>(*this,lib,"vcomish",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcomish >::invoke")
		->args({"self","x","op"});
	using _method_1823 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompressb >;
	addExtern<DAS_CALL_METHOD(_method_1823)>(*this,lib,"vcompressb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompressb >::invoke")
		->args({"self","op","x"});
	using _method_1824 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompresspd >;
	addExtern<DAS_CALL_METHOD(_method_1824)>(*this,lib,"vcompresspd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompresspd >::invoke")
		->args({"self","op","x"});
	using _method_1825 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompressps >;
	addExtern<DAS_CALL_METHOD(_method_1825)>(*this,lib,"vcompressps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompressps >::invoke")
		->args({"self","op","x"});
	using _method_1826 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompressw >;
	addExtern<DAS_CALL_METHOD(_method_1826)>(*this,lib,"vcompressw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vcompressw >::invoke")
		->args({"self","op","x"});
	using _method_1827 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtdq2ph >;
	addExtern<DAS_CALL_METHOD(_method_1827)>(*this,lib,"vcvtdq2ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtdq2ph >::invoke")
		->args({"self","x","op"});
	using _method_1828 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtne2ps2bf16 >;
	addExtern<DAS_CALL_METHOD(_method_1828)>(*this,lib,"vcvtne2ps2bf16",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtne2ps2bf16 >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1829 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtneps2bf16 >;
	addExtern<DAS_CALL_METHOD(_method_1829)>(*this,lib,"vcvtneps2bf16",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtneps2bf16 >::invoke")
		->args({"self","x","op"});
	using _method_1830 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2ph >;
	addExtern<DAS_CALL_METHOD(_method_1830)>(*this,lib,"vcvtpd2ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2ph >::invoke")
		->args({"self","x","op"});
	using _method_1831 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2qq >;
	addExtern<DAS_CALL_METHOD(_method_1831)>(*this,lib,"vcvtpd2qq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2qq >::invoke")
		->args({"self","x","op"});
	using _method_1832 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2udq >;
	addExtern<DAS_CALL_METHOD(_method_1832)>(*this,lib,"vcvtpd2udq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2udq >::invoke")
		->args({"self","x","op"});
	using _method_1833 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2uqq >;
	addExtern<DAS_CALL_METHOD(_method_1833)>(*this,lib,"vcvtpd2uqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtpd2uqq >::invoke")
		->args({"self","x","op"});
	using _method_1834 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2dq >;
	addExtern<DAS_CALL_METHOD(_method_1834)>(*this,lib,"vcvtph2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2dq >::invoke")
		->args({"self","x","op"});
	using _method_1835 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2pd >;
	addExtern<DAS_CALL_METHOD(_method_1835)>(*this,lib,"vcvtph2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2pd >::invoke")
		->args({"self","x","op"});
	using _method_1836 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2psx >;
	addExtern<DAS_CALL_METHOD(_method_1836)>(*this,lib,"vcvtph2psx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2psx >::invoke")
		->args({"self","x","op"});
	using _method_1837 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2qq >;
	addExtern<DAS_CALL_METHOD(_method_1837)>(*this,lib,"vcvtph2qq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2qq >::invoke")
		->args({"self","x","op"});
	using _method_1838 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2udq >;
	addExtern<DAS_CALL_METHOD(_method_1838)>(*this,lib,"vcvtph2udq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2udq >::invoke")
		->args({"self","x","op"});
	using _method_1839 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2uqq >;
	addExtern<DAS_CALL_METHOD(_method_1839)>(*this,lib,"vcvtph2uqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2uqq >::invoke")
		->args({"self","x","op"});
	using _method_1840 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2uw >;
	addExtern<DAS_CALL_METHOD(_method_1840)>(*this,lib,"vcvtph2uw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2uw >::invoke")
		->args({"self","x","op"});
	using _method_1841 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2w >;
	addExtern<DAS_CALL_METHOD(_method_1841)>(*this,lib,"vcvtph2w",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtph2w >::invoke")
		->args({"self","x","op"});
	using _method_1842 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2phx >;
	addExtern<DAS_CALL_METHOD(_method_1842)>(*this,lib,"vcvtps2phx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2phx >::invoke")
		->args({"self","x","op"});
	using _method_1843 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2qq >;
	addExtern<DAS_CALL_METHOD(_method_1843)>(*this,lib,"vcvtps2qq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2qq >::invoke")
		->args({"self","x","op"});
	using _method_1844 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2udq >;
	addExtern<DAS_CALL_METHOD(_method_1844)>(*this,lib,"vcvtps2udq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2udq >::invoke")
		->args({"self","x","op"});
	using _method_1845 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2uqq >;
	addExtern<DAS_CALL_METHOD(_method_1845)>(*this,lib,"vcvtps2uqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtps2uqq >::invoke")
		->args({"self","x","op"});
	using _method_1846 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtqq2pd >;
	addExtern<DAS_CALL_METHOD(_method_1846)>(*this,lib,"vcvtqq2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtqq2pd >::invoke")
		->args({"self","x","op"});
	using _method_1847 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtqq2ph >;
	addExtern<DAS_CALL_METHOD(_method_1847)>(*this,lib,"vcvtqq2ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtqq2ph >::invoke")
		->args({"self","x","op"});
	using _method_1848 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtqq2ps >;
	addExtern<DAS_CALL_METHOD(_method_1848)>(*this,lib,"vcvtqq2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtqq2ps >::invoke")
		->args({"self","x","op"});
	using _method_1849 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2sh >;
	addExtern<DAS_CALL_METHOD(_method_1849)>(*this,lib,"vcvtsd2sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1850 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2usi >;
	addExtern<DAS_CALL_METHOD(_method_1850)>(*this,lib,"vcvtsd2usi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2usi >::invoke")
		->args({"self","r","op"});
	using _method_1851 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2sd >;
	addExtern<DAS_CALL_METHOD(_method_1851)>(*this,lib,"vcvtsh2sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1852 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2si >;
	addExtern<DAS_CALL_METHOD(_method_1852)>(*this,lib,"vcvtsh2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2si >::invoke")
		->args({"self","r","op"});
	using _method_1853 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2ss >;
	addExtern<DAS_CALL_METHOD(_method_1853)>(*this,lib,"vcvtsh2ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1854 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2usi >;
	addExtern<DAS_CALL_METHOD(_method_1854)>(*this,lib,"vcvtsh2usi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsh2usi >::invoke")
		->args({"self","r","op"});
	using _method_1855 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsi2sh >;
	addExtern<DAS_CALL_METHOD(_method_1855)>(*this,lib,"vcvtsi2sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsi2sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1856 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2sh >;
	addExtern<DAS_CALL_METHOD(_method_1856)>(*this,lib,"vcvtss2sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1857 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2usi >;
	addExtern<DAS_CALL_METHOD(_method_1857)>(*this,lib,"vcvtss2usi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2usi >::invoke")
		->args({"self","r","op"});
	using _method_1858 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttpd2qq >;
	addExtern<DAS_CALL_METHOD(_method_1858)>(*this,lib,"vcvttpd2qq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttpd2qq >::invoke")
		->args({"self","x","op"});
	using _method_1859 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttpd2udq >;
	addExtern<DAS_CALL_METHOD(_method_1859)>(*this,lib,"vcvttpd2udq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttpd2udq >::invoke")
		->args({"self","x","op"});
	using _method_1860 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttpd2uqq >;
	addExtern<DAS_CALL_METHOD(_method_1860)>(*this,lib,"vcvttpd2uqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttpd2uqq >::invoke")
		->args({"self","x","op"});
	using _method_1861 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2dq >;
	addExtern<DAS_CALL_METHOD(_method_1861)>(*this,lib,"vcvttph2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2dq >::invoke")
		->args({"self","x","op"});
	using _method_1862 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2qq >;
	addExtern<DAS_CALL_METHOD(_method_1862)>(*this,lib,"vcvttph2qq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2qq >::invoke")
		->args({"self","x","op"});
	using _method_1863 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2udq >;
	addExtern<DAS_CALL_METHOD(_method_1863)>(*this,lib,"vcvttph2udq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2udq >::invoke")
		->args({"self","x","op"});
	using _method_1864 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2uqq >;
	addExtern<DAS_CALL_METHOD(_method_1864)>(*this,lib,"vcvttph2uqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2uqq >::invoke")
		->args({"self","x","op"});
	using _method_1865 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2uw >;
	addExtern<DAS_CALL_METHOD(_method_1865)>(*this,lib,"vcvttph2uw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2uw >::invoke")
		->args({"self","x","op"});
	using _method_1866 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2w >;
	addExtern<DAS_CALL_METHOD(_method_1866)>(*this,lib,"vcvttph2w",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttph2w >::invoke")
		->args({"self","x","op"});
	using _method_1867 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttps2qq >;
	addExtern<DAS_CALL_METHOD(_method_1867)>(*this,lib,"vcvttps2qq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttps2qq >::invoke")
		->args({"self","x","op"});
	using _method_1868 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttps2udq >;
	addExtern<DAS_CALL_METHOD(_method_1868)>(*this,lib,"vcvttps2udq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttps2udq >::invoke")
		->args({"self","x","op"});
	using _method_1869 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttps2uqq >;
	addExtern<DAS_CALL_METHOD(_method_1869)>(*this,lib,"vcvttps2uqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttps2uqq >::invoke")
		->args({"self","x","op"});
	using _method_1870 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2usi >;
	addExtern<DAS_CALL_METHOD(_method_1870)>(*this,lib,"vcvttsd2usi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2usi >::invoke")
		->args({"self","r","op"});
	using _method_1871 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsh2si >;
	addExtern<DAS_CALL_METHOD(_method_1871)>(*this,lib,"vcvttsh2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsh2si >::invoke")
		->args({"self","r","op"});
	using _method_1872 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsh2usi >;
	addExtern<DAS_CALL_METHOD(_method_1872)>(*this,lib,"vcvttsh2usi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsh2usi >::invoke")
		->args({"self","r","op"});
	using _method_1873 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2usi >;
	addExtern<DAS_CALL_METHOD(_method_1873)>(*this,lib,"vcvttss2usi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2usi >::invoke")
		->args({"self","r","op"});
	using _method_1874 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtudq2pd >;
	addExtern<DAS_CALL_METHOD(_method_1874)>(*this,lib,"vcvtudq2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtudq2pd >::invoke")
		->args({"self","x","op"});
	using _method_1875 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtudq2ph >;
	addExtern<DAS_CALL_METHOD(_method_1875)>(*this,lib,"vcvtudq2ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtudq2ph >::invoke")
		->args({"self","x","op"});
	using _method_1876 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtudq2ps >;
	addExtern<DAS_CALL_METHOD(_method_1876)>(*this,lib,"vcvtudq2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtudq2ps >::invoke")
		->args({"self","x","op"});
	using _method_1877 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtuqq2pd >;
	addExtern<DAS_CALL_METHOD(_method_1877)>(*this,lib,"vcvtuqq2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtuqq2pd >::invoke")
		->args({"self","x","op"});
	using _method_1878 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtuqq2ph >;
	addExtern<DAS_CALL_METHOD(_method_1878)>(*this,lib,"vcvtuqq2ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtuqq2ph >::invoke")
		->args({"self","x","op"});
	using _method_1879 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtuqq2ps >;
	addExtern<DAS_CALL_METHOD(_method_1879)>(*this,lib,"vcvtuqq2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtuqq2ps >::invoke")
		->args({"self","x","op"});
	using _method_1880 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtusi2sd >;
	addExtern<DAS_CALL_METHOD(_method_1880)>(*this,lib,"vcvtusi2sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtusi2sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1881 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtusi2sh >;
	addExtern<DAS_CALL_METHOD(_method_1881)>(*this,lib,"vcvtusi2sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtusi2sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1882 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtusi2ss >;
	addExtern<DAS_CALL_METHOD(_method_1882)>(*this,lib,"vcvtusi2ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtusi2ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1883 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtuw2ph >;
	addExtern<DAS_CALL_METHOD(_method_1883)>(*this,lib,"vcvtuw2ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtuw2ph >::invoke")
		->args({"self","x","op"});
	using _method_1884 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtw2ph >;
	addExtern<DAS_CALL_METHOD(_method_1884)>(*this,lib,"vcvtw2ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtw2ph >::invoke")
		->args({"self","x","op"});
	using _method_1885 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vdbpsadbw >;
	addExtern<DAS_CALL_METHOD(_method_1885)>(*this,lib,"vdbpsadbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vdbpsadbw >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1886 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivph >;
	addExtern<DAS_CALL_METHOD(_method_1886)>(*this,lib,"vdivph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivph >::invoke")
		->args({"self","xmm","op1","op2"});
}
}

