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
void Module_dasXBYAK::initFunctions_18() {
	using _method_1687 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcasti64x4 >;
	addExtern<DAS_CALL_METHOD(_method_1687)>(*this,lib,"vbroadcasti64x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcasti64x4 >::invoke")
		->args({"self","z","op"});
	using _method_1688 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd >;
	addExtern<DAS_CALL_METHOD(_method_1688)>(*this,lib,"vcmpeq_ospd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ospd >::invoke")
		->args({"self","k","x","op"});
	using _method_1689 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps >;
	addExtern<DAS_CALL_METHOD(_method_1689)>(*this,lib,"vcmpeq_osps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osps >::invoke")
		->args({"self","k","x","op"});
	using _method_1690 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd >;
	addExtern<DAS_CALL_METHOD(_method_1690)>(*this,lib,"vcmpeq_ossd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ossd >::invoke")
		->args({"self","k","x","op"});
	using _method_1691 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss >;
	addExtern<DAS_CALL_METHOD(_method_1691)>(*this,lib,"vcmpeq_osss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_osss >::invoke")
		->args({"self","k","x","op"});
	using _method_1692 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1692)>(*this,lib,"vcmpeq_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1693 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1693)>(*this,lib,"vcmpeq_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1694 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1694)>(*this,lib,"vcmpeq_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1695 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1695)>(*this,lib,"vcmpeq_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1696 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd >;
	addExtern<DAS_CALL_METHOD(_method_1696)>(*this,lib,"vcmpeq_uspd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_uspd >::invoke")
		->args({"self","k","x","op"});
	using _method_1697 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps >;
	addExtern<DAS_CALL_METHOD(_method_1697)>(*this,lib,"vcmpeq_usps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usps >::invoke")
		->args({"self","k","x","op"});
	using _method_1698 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd >;
	addExtern<DAS_CALL_METHOD(_method_1698)>(*this,lib,"vcmpeq_ussd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_ussd >::invoke")
		->args({"self","k","x","op"});
	using _method_1699 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss >;
	addExtern<DAS_CALL_METHOD(_method_1699)>(*this,lib,"vcmpeq_usss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeq_usss >::invoke")
		->args({"self","k","x","op"});
	using _method_1700 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd >;
	addExtern<DAS_CALL_METHOD(_method_1700)>(*this,lib,"vcmpeqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1701 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps >;
	addExtern<DAS_CALL_METHOD(_method_1701)>(*this,lib,"vcmpeqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1702 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd >;
	addExtern<DAS_CALL_METHOD(_method_1702)>(*this,lib,"vcmpeqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1703 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss >;
	addExtern<DAS_CALL_METHOD(_method_1703)>(*this,lib,"vcmpeqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpeqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1704 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd >;
	addExtern<DAS_CALL_METHOD(_method_1704)>(*this,lib,"vcmpfalse_ospd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ospd >::invoke")
		->args({"self","k","x","op"});
	using _method_1705 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps >;
	addExtern<DAS_CALL_METHOD(_method_1705)>(*this,lib,"vcmpfalse_osps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osps >::invoke")
		->args({"self","k","x","op"});
	using _method_1706 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd >;
	addExtern<DAS_CALL_METHOD(_method_1706)>(*this,lib,"vcmpfalse_ossd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_ossd >::invoke")
		->args({"self","k","x","op"});
	using _method_1707 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss >;
	addExtern<DAS_CALL_METHOD(_method_1707)>(*this,lib,"vcmpfalse_osss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalse_osss >::invoke")
		->args({"self","k","x","op"});
	using _method_1708 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd >;
	addExtern<DAS_CALL_METHOD(_method_1708)>(*this,lib,"vcmpfalsepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsepd >::invoke")
		->args({"self","k","x","op"});
	using _method_1709 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps >;
	addExtern<DAS_CALL_METHOD(_method_1709)>(*this,lib,"vcmpfalseps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalseps >::invoke")
		->args({"self","k","x","op"});
	using _method_1710 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd >;
	addExtern<DAS_CALL_METHOD(_method_1710)>(*this,lib,"vcmpfalsesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsesd >::invoke")
		->args({"self","k","x","op"});
	using _method_1711 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess >;
	addExtern<DAS_CALL_METHOD(_method_1711)>(*this,lib,"vcmpfalsess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpfalsess >::invoke")
		->args({"self","k","x","op"});
	using _method_1712 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd >;
	addExtern<DAS_CALL_METHOD(_method_1712)>(*this,lib,"vcmpge_oqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1713 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps >;
	addExtern<DAS_CALL_METHOD(_method_1713)>(*this,lib,"vcmpge_oqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1714 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd >;
	addExtern<DAS_CALL_METHOD(_method_1714)>(*this,lib,"vcmpge_oqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1715 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss >;
	addExtern<DAS_CALL_METHOD(_method_1715)>(*this,lib,"vcmpge_oqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpge_oqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1716 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd >;
	addExtern<DAS_CALL_METHOD(_method_1716)>(*this,lib,"vcmpgepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgepd >::invoke")
		->args({"self","k","x","op"});
	using _method_1717 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps >;
	addExtern<DAS_CALL_METHOD(_method_1717)>(*this,lib,"vcmpgeps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgeps >::invoke")
		->args({"self","k","x","op"});
	using _method_1718 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd >;
	addExtern<DAS_CALL_METHOD(_method_1718)>(*this,lib,"vcmpgesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgesd >::invoke")
		->args({"self","k","x","op"});
	using _method_1719 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess >;
	addExtern<DAS_CALL_METHOD(_method_1719)>(*this,lib,"vcmpgess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgess >::invoke")
		->args({"self","k","x","op"});
	using _method_1720 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd >;
	addExtern<DAS_CALL_METHOD(_method_1720)>(*this,lib,"vcmpgt_oqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1721 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps >;
	addExtern<DAS_CALL_METHOD(_method_1721)>(*this,lib,"vcmpgt_oqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1722 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd >;
	addExtern<DAS_CALL_METHOD(_method_1722)>(*this,lib,"vcmpgt_oqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1723 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss >;
	addExtern<DAS_CALL_METHOD(_method_1723)>(*this,lib,"vcmpgt_oqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgt_oqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1724 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd >;
	addExtern<DAS_CALL_METHOD(_method_1724)>(*this,lib,"vcmpgtpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1725 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps >;
	addExtern<DAS_CALL_METHOD(_method_1725)>(*this,lib,"vcmpgtps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtps >::invoke")
		->args({"self","k","x","op"});
	using _method_1726 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd >;
	addExtern<DAS_CALL_METHOD(_method_1726)>(*this,lib,"vcmpgtsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1727 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss >;
	addExtern<DAS_CALL_METHOD(_method_1727)>(*this,lib,"vcmpgtss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpgtss >::invoke")
		->args({"self","k","x","op"});
	using _method_1728 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd >;
	addExtern<DAS_CALL_METHOD(_method_1728)>(*this,lib,"vcmple_oqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1729 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps >;
	addExtern<DAS_CALL_METHOD(_method_1729)>(*this,lib,"vcmple_oqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1730 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd >;
	addExtern<DAS_CALL_METHOD(_method_1730)>(*this,lib,"vcmple_oqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1731 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss >;
	addExtern<DAS_CALL_METHOD(_method_1731)>(*this,lib,"vcmple_oqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmple_oqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1732 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd >;
	addExtern<DAS_CALL_METHOD(_method_1732)>(*this,lib,"vcmplepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplepd >::invoke")
		->args({"self","k","x","op"});
	using _method_1733 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps >;
	addExtern<DAS_CALL_METHOD(_method_1733)>(*this,lib,"vcmpleps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpleps >::invoke")
		->args({"self","k","x","op"});
	using _method_1734 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd >;
	addExtern<DAS_CALL_METHOD(_method_1734)>(*this,lib,"vcmplesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplesd >::invoke")
		->args({"self","k","x","op"});
	using _method_1735 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless >;
	addExtern<DAS_CALL_METHOD(_method_1735)>(*this,lib,"vcmpless",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpless >::invoke")
		->args({"self","k","x","op"});
	using _method_1736 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd >;
	addExtern<DAS_CALL_METHOD(_method_1736)>(*this,lib,"vcmplt_oqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1737 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps >;
	addExtern<DAS_CALL_METHOD(_method_1737)>(*this,lib,"vcmplt_oqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1738 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd >;
	addExtern<DAS_CALL_METHOD(_method_1738)>(*this,lib,"vcmplt_oqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1739 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss >;
	addExtern<DAS_CALL_METHOD(_method_1739)>(*this,lib,"vcmplt_oqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmplt_oqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1740 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd >;
	addExtern<DAS_CALL_METHOD(_method_1740)>(*this,lib,"vcmpltpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1741 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps >;
	addExtern<DAS_CALL_METHOD(_method_1741)>(*this,lib,"vcmpltps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltps >::invoke")
		->args({"self","k","x","op"});
	using _method_1742 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd >;
	addExtern<DAS_CALL_METHOD(_method_1742)>(*this,lib,"vcmpltsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1743 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss >;
	addExtern<DAS_CALL_METHOD(_method_1743)>(*this,lib,"vcmpltss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpltss >::invoke")
		->args({"self","k","x","op"});
	using _method_1744 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd >;
	addExtern<DAS_CALL_METHOD(_method_1744)>(*this,lib,"vcmpneq_oqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1745 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps >;
	addExtern<DAS_CALL_METHOD(_method_1745)>(*this,lib,"vcmpneq_oqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1746 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd >;
	addExtern<DAS_CALL_METHOD(_method_1746)>(*this,lib,"vcmpneq_oqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1747 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss >;
	addExtern<DAS_CALL_METHOD(_method_1747)>(*this,lib,"vcmpneq_oqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_oqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1748 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd >;
	addExtern<DAS_CALL_METHOD(_method_1748)>(*this,lib,"vcmpneq_ospd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ospd >::invoke")
		->args({"self","k","x","op"});
	using _method_1749 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps >;
	addExtern<DAS_CALL_METHOD(_method_1749)>(*this,lib,"vcmpneq_osps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osps >::invoke")
		->args({"self","k","x","op"});
	using _method_1750 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd >;
	addExtern<DAS_CALL_METHOD(_method_1750)>(*this,lib,"vcmpneq_ossd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ossd >::invoke")
		->args({"self","k","x","op"});
	using _method_1751 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss >;
	addExtern<DAS_CALL_METHOD(_method_1751)>(*this,lib,"vcmpneq_osss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_osss >::invoke")
		->args({"self","k","x","op"});
	using _method_1752 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd >;
	addExtern<DAS_CALL_METHOD(_method_1752)>(*this,lib,"vcmpneq_uspd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_uspd >::invoke")
		->args({"self","k","x","op"});
	using _method_1753 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps >;
	addExtern<DAS_CALL_METHOD(_method_1753)>(*this,lib,"vcmpneq_usps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usps >::invoke")
		->args({"self","k","x","op"});
	using _method_1754 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd >;
	addExtern<DAS_CALL_METHOD(_method_1754)>(*this,lib,"vcmpneq_ussd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_ussd >::invoke")
		->args({"self","k","x","op"});
	using _method_1755 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss >;
	addExtern<DAS_CALL_METHOD(_method_1755)>(*this,lib,"vcmpneq_usss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneq_usss >::invoke")
		->args({"self","k","x","op"});
	using _method_1756 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd >;
	addExtern<DAS_CALL_METHOD(_method_1756)>(*this,lib,"vcmpneqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1757 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps >;
	addExtern<DAS_CALL_METHOD(_method_1757)>(*this,lib,"vcmpneqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1758 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd >;
	addExtern<DAS_CALL_METHOD(_method_1758)>(*this,lib,"vcmpneqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1759 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss >;
	addExtern<DAS_CALL_METHOD(_method_1759)>(*this,lib,"vcmpneqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpneqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1760 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1760)>(*this,lib,"vcmpnge_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1761 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1761)>(*this,lib,"vcmpnge_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1762 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1762)>(*this,lib,"vcmpnge_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1763 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1763)>(*this,lib,"vcmpnge_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnge_uqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1764 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd >;
	addExtern<DAS_CALL_METHOD(_method_1764)>(*this,lib,"vcmpngepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngepd >::invoke")
		->args({"self","k","x","op"});
	using _method_1765 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps >;
	addExtern<DAS_CALL_METHOD(_method_1765)>(*this,lib,"vcmpngeps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngeps >::invoke")
		->args({"self","k","x","op"});
	using _method_1766 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd >;
	addExtern<DAS_CALL_METHOD(_method_1766)>(*this,lib,"vcmpngesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngesd >::invoke")
		->args({"self","k","x","op"});
	using _method_1767 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess >;
	addExtern<DAS_CALL_METHOD(_method_1767)>(*this,lib,"vcmpngess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngess >::invoke")
		->args({"self","k","x","op"});
	using _method_1768 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1768)>(*this,lib,"vcmpngt_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1769 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1769)>(*this,lib,"vcmpngt_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1770 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1770)>(*this,lib,"vcmpngt_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1771 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1771)>(*this,lib,"vcmpngt_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngt_uqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1772 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd >;
	addExtern<DAS_CALL_METHOD(_method_1772)>(*this,lib,"vcmpngtpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1773 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps >;
	addExtern<DAS_CALL_METHOD(_method_1773)>(*this,lib,"vcmpngtps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtps >::invoke")
		->args({"self","k","x","op"});
	using _method_1774 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd >;
	addExtern<DAS_CALL_METHOD(_method_1774)>(*this,lib,"vcmpngtsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1775 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss >;
	addExtern<DAS_CALL_METHOD(_method_1775)>(*this,lib,"vcmpngtss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpngtss >::invoke")
		->args({"self","k","x","op"});
	using _method_1776 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1776)>(*this,lib,"vcmpnle_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1777 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1777)>(*this,lib,"vcmpnle_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1778 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1778)>(*this,lib,"vcmpnle_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqsd >::invoke")
		->args({"self","k","x","op"});
	using _method_1779 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss >;
	addExtern<DAS_CALL_METHOD(_method_1779)>(*this,lib,"vcmpnle_uqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnle_uqss >::invoke")
		->args({"self","k","x","op"});
	using _method_1780 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd >;
	addExtern<DAS_CALL_METHOD(_method_1780)>(*this,lib,"vcmpnlepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlepd >::invoke")
		->args({"self","k","x","op"});
	using _method_1781 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps >;
	addExtern<DAS_CALL_METHOD(_method_1781)>(*this,lib,"vcmpnleps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnleps >::invoke")
		->args({"self","k","x","op"});
	using _method_1782 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd >;
	addExtern<DAS_CALL_METHOD(_method_1782)>(*this,lib,"vcmpnlesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlesd >::invoke")
		->args({"self","k","x","op"});
	using _method_1783 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless >;
	addExtern<DAS_CALL_METHOD(_method_1783)>(*this,lib,"vcmpnless",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnless >::invoke")
		->args({"self","k","x","op"});
	using _method_1784 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd >;
	addExtern<DAS_CALL_METHOD(_method_1784)>(*this,lib,"vcmpnlt_uqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqpd >::invoke")
		->args({"self","k","x","op"});
	using _method_1785 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps >;
	addExtern<DAS_CALL_METHOD(_method_1785)>(*this,lib,"vcmpnlt_uqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqps >::invoke")
		->args({"self","k","x","op"});
	using _method_1786 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd >;
	addExtern<DAS_CALL_METHOD(_method_1786)>(*this,lib,"vcmpnlt_uqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcmpnlt_uqsd >::invoke")
		->args({"self","k","x","op"});
}
}

