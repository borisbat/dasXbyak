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
void Module_dasXBYAK::initFunctions_17() {
	using _method_1587 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::pextrq >;
	addExtern<DAS_CALL_METHOD(_method_1587)>(*this,lib,"pextrq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &,unsigned char),&Xbyak::CodeGenerator::pextrq >::invoke")
		->args({"self","op","xmm","imm"});
	using _method_1588 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pinsrq >;
	addExtern<DAS_CALL_METHOD(_method_1588)>(*this,lib,"pinsrq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::pinsrq >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_1589 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si >;
	addExtern<DAS_CALL_METHOD(_method_1589)>(*this,lib,"vcvtss2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtss2si >::invoke")
		->args({"self","r","op"});
	using _method_1590 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si >;
	addExtern<DAS_CALL_METHOD(_method_1590)>(*this,lib,"vcvttss2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttss2si >::invoke")
		->args({"self","r","op"});
	using _method_1591 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si >;
	addExtern<DAS_CALL_METHOD(_method_1591)>(*this,lib,"vcvtsd2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvtsd2si >::invoke")
		->args({"self","r","op"});
	using _method_1592 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si >;
	addExtern<DAS_CALL_METHOD(_method_1592)>(*this,lib,"vcvttsd2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vcvttsd2si >::invoke")
		->args({"self","r","op"});
	using _method_1593 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vmovq >;
	addExtern<DAS_CALL_METHOD(_method_1593)>(*this,lib,"vmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg64 &),&Xbyak::CodeGenerator::vmovq >::invoke")
		->args({"self","x","r"});
	using _method_1594 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq >;
	addExtern<DAS_CALL_METHOD(_method_1594)>(*this,lib,"vmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovq >::invoke")
		->args({"self","r","x"});
	using _method_1595 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::ldtilecfg >;
	addExtern<DAS_CALL_METHOD(_method_1595)>(*this,lib,"ldtilecfg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::ldtilecfg >::invoke")
		->args({"self","addr"});
	using _method_1596 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::sttilecfg >;
	addExtern<DAS_CALL_METHOD(_method_1596)>(*this,lib,"sttilecfg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::sttilecfg >::invoke")
		->args({"self","addr"});
	using _method_1597 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::tileloadd >;
	addExtern<DAS_CALL_METHOD(_method_1597)>(*this,lib,"tileloadd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::tileloadd >::invoke")
		->args({"self","tm","addr"});
	using _method_1598 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::tileloaddt1 >;
	addExtern<DAS_CALL_METHOD(_method_1598)>(*this,lib,"tileloaddt1",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::tileloaddt1 >::invoke")
		->args({"self","tm","addr"});
	using _method_1599 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::tilerelease >;
	addExtern<DAS_CALL_METHOD(_method_1599)>(*this,lib,"tilerelease",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::tilerelease >::invoke")
		->args({"self"});
	using _method_1600 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tilestored >;
	addExtern<DAS_CALL_METHOD(_method_1600)>(*this,lib,"tilestored",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tilestored >::invoke")
		->args({"self","addr","tm"});
	using _method_1601 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &),&Xbyak::CodeGenerator::tilezero >;
	addExtern<DAS_CALL_METHOD(_method_1601)>(*this,lib,"tilezero",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &),&Xbyak::CodeGenerator::tilezero >::invoke")
		->args({"self","Tmm"});
	using _method_1602 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Tmm &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tdpbssd >;
	addExtern<DAS_CALL_METHOD(_method_1602)>(*this,lib,"tdpbssd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Tmm &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tdpbssd >::invoke")
		->args({"self","x1","x2","x3"});
	using _method_1603 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Tmm &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tdpbsud >;
	addExtern<DAS_CALL_METHOD(_method_1603)>(*this,lib,"tdpbsud",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Tmm &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tdpbsud >::invoke")
		->args({"self","x1","x2","x3"});
	using _method_1604 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Tmm &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tdpbusd >;
	addExtern<DAS_CALL_METHOD(_method_1604)>(*this,lib,"tdpbusd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Tmm &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tdpbusd >::invoke")
		->args({"self","x1","x2","x3"});
	using _method_1605 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Tmm &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tdpbuud >;
	addExtern<DAS_CALL_METHOD(_method_1605)>(*this,lib,"tdpbuud",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Tmm &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tdpbuud >::invoke")
		->args({"self","x1","x2","x3"});
	using _method_1606 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Tmm &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tdpbf16ps >;
	addExtern<DAS_CALL_METHOD(_method_1606)>(*this,lib,"tdpbf16ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Tmm &,const Xbyak::Tmm &,const Xbyak::Tmm &),&Xbyak::CodeGenerator::tdpbf16ps >::invoke")
		->args({"self","x1","x2","x3"});
	using _method_1607 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kaddb >;
	addExtern<DAS_CALL_METHOD(_method_1607)>(*this,lib,"kaddb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kaddb >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1608 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kaddd >;
	addExtern<DAS_CALL_METHOD(_method_1608)>(*this,lib,"kaddd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kaddd >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1609 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kaddq >;
	addExtern<DAS_CALL_METHOD(_method_1609)>(*this,lib,"kaddq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kaddq >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1610 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kaddw >;
	addExtern<DAS_CALL_METHOD(_method_1610)>(*this,lib,"kaddw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kaddw >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1611 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandb >;
	addExtern<DAS_CALL_METHOD(_method_1611)>(*this,lib,"kandb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandb >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1612 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandd >;
	addExtern<DAS_CALL_METHOD(_method_1612)>(*this,lib,"kandd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandd >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1613 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandnb >;
	addExtern<DAS_CALL_METHOD(_method_1613)>(*this,lib,"kandnb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandnb >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1614 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandnd >;
	addExtern<DAS_CALL_METHOD(_method_1614)>(*this,lib,"kandnd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandnd >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1615 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandnq >;
	addExtern<DAS_CALL_METHOD(_method_1615)>(*this,lib,"kandnq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandnq >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1616 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandnw >;
	addExtern<DAS_CALL_METHOD(_method_1616)>(*this,lib,"kandnw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandnw >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1617 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandq >;
	addExtern<DAS_CALL_METHOD(_method_1617)>(*this,lib,"kandq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandq >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1618 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandw >;
	addExtern<DAS_CALL_METHOD(_method_1618)>(*this,lib,"kandw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kandw >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1619 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb >;
	addExtern<DAS_CALL_METHOD(_method_1619)>(*this,lib,"kmovb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb >::invoke")
		->args({"self","addr","k"});
	using _method_1620 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovb >;
	addExtern<DAS_CALL_METHOD(_method_1620)>(*this,lib,"kmovb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovb >::invoke")
		->args({"self","k","op"});
	using _method_1621 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovb >;
	addExtern<DAS_CALL_METHOD(_method_1621)>(*this,lib,"kmovb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovb >::invoke")
		->args({"self","k","r"});
	using _method_1622 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb >;
	addExtern<DAS_CALL_METHOD(_method_1622)>(*this,lib,"kmovb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovb >::invoke")
		->args({"self","r","k"});
	using _method_1623 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd >;
	addExtern<DAS_CALL_METHOD(_method_1623)>(*this,lib,"kmovd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd >::invoke")
		->args({"self","addr","k"});
	using _method_1624 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovd >;
	addExtern<DAS_CALL_METHOD(_method_1624)>(*this,lib,"kmovd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovd >::invoke")
		->args({"self","k","op"});
	using _method_1625 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovd >;
	addExtern<DAS_CALL_METHOD(_method_1625)>(*this,lib,"kmovd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovd >::invoke")
		->args({"self","k","r"});
	using _method_1626 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd >;
	addExtern<DAS_CALL_METHOD(_method_1626)>(*this,lib,"kmovd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovd >::invoke")
		->args({"self","r","k"});
	using _method_1627 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq >;
	addExtern<DAS_CALL_METHOD(_method_1627)>(*this,lib,"kmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovq >::invoke")
		->args({"self","addr","k"});
	using _method_1628 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovq >;
	addExtern<DAS_CALL_METHOD(_method_1628)>(*this,lib,"kmovq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovq >::invoke")
		->args({"self","k","op"});
	using _method_1629 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw >;
	addExtern<DAS_CALL_METHOD(_method_1629)>(*this,lib,"kmovw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw >::invoke")
		->args({"self","addr","k"});
	using _method_1630 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovw >;
	addExtern<DAS_CALL_METHOD(_method_1630)>(*this,lib,"kmovw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &),&Xbyak::CodeGenerator::kmovw >::invoke")
		->args({"self","k","op"});
	using _method_1631 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovw >;
	addExtern<DAS_CALL_METHOD(_method_1631)>(*this,lib,"kmovw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Reg32 &),&Xbyak::CodeGenerator::kmovw >::invoke")
		->args({"self","k","r"});
	using _method_1632 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw >;
	addExtern<DAS_CALL_METHOD(_method_1632)>(*this,lib,"kmovw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kmovw >::invoke")
		->args({"self","r","k"});
	using _method_1633 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::knotb >;
	addExtern<DAS_CALL_METHOD(_method_1633)>(*this,lib,"knotb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::knotb >::invoke")
		->args({"self","r1","r2"});
	using _method_1634 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::knotd >;
	addExtern<DAS_CALL_METHOD(_method_1634)>(*this,lib,"knotd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::knotd >::invoke")
		->args({"self","r1","r2"});
	using _method_1635 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::knotq >;
	addExtern<DAS_CALL_METHOD(_method_1635)>(*this,lib,"knotq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::knotq >::invoke")
		->args({"self","r1","r2"});
	using _method_1636 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::knotw >;
	addExtern<DAS_CALL_METHOD(_method_1636)>(*this,lib,"knotw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::knotw >::invoke")
		->args({"self","r1","r2"});
	using _method_1637 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::korb >;
	addExtern<DAS_CALL_METHOD(_method_1637)>(*this,lib,"korb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::korb >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1638 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kord >;
	addExtern<DAS_CALL_METHOD(_method_1638)>(*this,lib,"kord",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kord >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1639 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::korq >;
	addExtern<DAS_CALL_METHOD(_method_1639)>(*this,lib,"korq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::korq >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1640 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kortestb >;
	addExtern<DAS_CALL_METHOD(_method_1640)>(*this,lib,"kortestb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kortestb >::invoke")
		->args({"self","r1","r2"});
	using _method_1641 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kortestd >;
	addExtern<DAS_CALL_METHOD(_method_1641)>(*this,lib,"kortestd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kortestd >::invoke")
		->args({"self","r1","r2"});
	using _method_1642 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kortestq >;
	addExtern<DAS_CALL_METHOD(_method_1642)>(*this,lib,"kortestq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kortestq >::invoke")
		->args({"self","r1","r2"});
	using _method_1643 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kortestw >;
	addExtern<DAS_CALL_METHOD(_method_1643)>(*this,lib,"kortestw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kortestw >::invoke")
		->args({"self","r1","r2"});
	using _method_1644 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::korw >;
	addExtern<DAS_CALL_METHOD(_method_1644)>(*this,lib,"korw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::korw >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1645 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftlb >;
	addExtern<DAS_CALL_METHOD(_method_1645)>(*this,lib,"kshiftlb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftlb >::invoke")
		->args({"self","r1","r2","imm"});
	using _method_1646 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftld >;
	addExtern<DAS_CALL_METHOD(_method_1646)>(*this,lib,"kshiftld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftld >::invoke")
		->args({"self","r1","r2","imm"});
	using _method_1647 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftlq >;
	addExtern<DAS_CALL_METHOD(_method_1647)>(*this,lib,"kshiftlq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftlq >::invoke")
		->args({"self","r1","r2","imm"});
	using _method_1648 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftlw >;
	addExtern<DAS_CALL_METHOD(_method_1648)>(*this,lib,"kshiftlw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftlw >::invoke")
		->args({"self","r1","r2","imm"});
	using _method_1649 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftrb >;
	addExtern<DAS_CALL_METHOD(_method_1649)>(*this,lib,"kshiftrb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftrb >::invoke")
		->args({"self","r1","r2","imm"});
	using _method_1650 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftrd >;
	addExtern<DAS_CALL_METHOD(_method_1650)>(*this,lib,"kshiftrd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftrd >::invoke")
		->args({"self","r1","r2","imm"});
	using _method_1651 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftrq >;
	addExtern<DAS_CALL_METHOD(_method_1651)>(*this,lib,"kshiftrq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftrq >::invoke")
		->args({"self","r1","r2","imm"});
	using _method_1652 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftrw >;
	addExtern<DAS_CALL_METHOD(_method_1652)>(*this,lib,"kshiftrw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,unsigned char),&Xbyak::CodeGenerator::kshiftrw >::invoke")
		->args({"self","r1","r2","imm"});
	using _method_1653 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::ktestb >;
	addExtern<DAS_CALL_METHOD(_method_1653)>(*this,lib,"ktestb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::ktestb >::invoke")
		->args({"self","r1","r2"});
	using _method_1654 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::ktestd >;
	addExtern<DAS_CALL_METHOD(_method_1654)>(*this,lib,"ktestd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::ktestd >::invoke")
		->args({"self","r1","r2"});
	using _method_1655 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::ktestq >;
	addExtern<DAS_CALL_METHOD(_method_1655)>(*this,lib,"ktestq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::ktestq >::invoke")
		->args({"self","r1","r2"});
	using _method_1656 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::ktestw >;
	addExtern<DAS_CALL_METHOD(_method_1656)>(*this,lib,"ktestw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::ktestw >::invoke")
		->args({"self","r1","r2"});
	using _method_1657 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kunpckbw >;
	addExtern<DAS_CALL_METHOD(_method_1657)>(*this,lib,"kunpckbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kunpckbw >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1658 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kunpckdq >;
	addExtern<DAS_CALL_METHOD(_method_1658)>(*this,lib,"kunpckdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kunpckdq >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1659 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kunpckwd >;
	addExtern<DAS_CALL_METHOD(_method_1659)>(*this,lib,"kunpckwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kunpckwd >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1660 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxnorb >;
	addExtern<DAS_CALL_METHOD(_method_1660)>(*this,lib,"kxnorb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxnorb >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1661 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxnord >;
	addExtern<DAS_CALL_METHOD(_method_1661)>(*this,lib,"kxnord",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxnord >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1662 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxnorq >;
	addExtern<DAS_CALL_METHOD(_method_1662)>(*this,lib,"kxnorq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxnorq >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1663 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxnorw >;
	addExtern<DAS_CALL_METHOD(_method_1663)>(*this,lib,"kxnorw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxnorw >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1664 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxorb >;
	addExtern<DAS_CALL_METHOD(_method_1664)>(*this,lib,"kxorb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxorb >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1665 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxord >;
	addExtern<DAS_CALL_METHOD(_method_1665)>(*this,lib,"kxord",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxord >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1666 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxorq >;
	addExtern<DAS_CALL_METHOD(_method_1666)>(*this,lib,"kxorq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxorq >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1667 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxorw >;
	addExtern<DAS_CALL_METHOD(_method_1667)>(*this,lib,"kxorw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Opmask &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::kxorw >::invoke")
		->args({"self","r1","r2","r3"});
	using _method_1668 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::v4fmaddps >;
	addExtern<DAS_CALL_METHOD(_method_1668)>(*this,lib,"v4fmaddps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::v4fmaddps >::invoke")
		->args({"self","z1","z2","addr"});
	using _method_1669 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::v4fmaddss >;
	addExtern<DAS_CALL_METHOD(_method_1669)>(*this,lib,"v4fmaddss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::v4fmaddss >::invoke")
		->args({"self","x1","x2","addr"});
	using _method_1670 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::v4fnmaddps >;
	addExtern<DAS_CALL_METHOD(_method_1670)>(*this,lib,"v4fnmaddps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::v4fnmaddps >::invoke")
		->args({"self","z1","z2","addr"});
	using _method_1671 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::v4fnmaddss >;
	addExtern<DAS_CALL_METHOD(_method_1671)>(*this,lib,"v4fnmaddss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::v4fnmaddss >::invoke")
		->args({"self","x1","x2","addr"});
	using _method_1672 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddph >;
	addExtern<DAS_CALL_METHOD(_method_1672)>(*this,lib,"vaddph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddph >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1673 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddsh >;
	addExtern<DAS_CALL_METHOD(_method_1673)>(*this,lib,"vaddsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vaddsh >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1674 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::valignd >;
	addExtern<DAS_CALL_METHOD(_method_1674)>(*this,lib,"valignd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::valignd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1675 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::valignq >;
	addExtern<DAS_CALL_METHOD(_method_1675)>(*this,lib,"valignq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::valignq >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1676 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vblendmpd >;
	addExtern<DAS_CALL_METHOD(_method_1676)>(*this,lib,"vblendmpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vblendmpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1677 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vblendmps >;
	addExtern<DAS_CALL_METHOD(_method_1677)>(*this,lib,"vblendmps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vblendmps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1678 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcastf32x2 >;
	addExtern<DAS_CALL_METHOD(_method_1678)>(*this,lib,"vbroadcastf32x2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcastf32x2 >::invoke")
		->args({"self","y","op"});
	using _method_1679 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcastf32x4 >;
	addExtern<DAS_CALL_METHOD(_method_1679)>(*this,lib,"vbroadcastf32x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcastf32x4 >::invoke")
		->args({"self","y","addr"});
	using _method_1680 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcastf32x8 >;
	addExtern<DAS_CALL_METHOD(_method_1680)>(*this,lib,"vbroadcastf32x8",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcastf32x8 >::invoke")
		->args({"self","y","addr"});
	using _method_1681 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcastf64x2 >;
	addExtern<DAS_CALL_METHOD(_method_1681)>(*this,lib,"vbroadcastf64x2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcastf64x2 >::invoke")
		->args({"self","y","addr"});
	using _method_1682 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcastf64x4 >;
	addExtern<DAS_CALL_METHOD(_method_1682)>(*this,lib,"vbroadcastf64x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vbroadcastf64x4 >::invoke")
		->args({"self","y","addr"});
	using _method_1683 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcasti32x2 >;
	addExtern<DAS_CALL_METHOD(_method_1683)>(*this,lib,"vbroadcasti32x2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcasti32x2 >::invoke")
		->args({"self","x","op"});
	using _method_1684 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcasti32x4 >;
	addExtern<DAS_CALL_METHOD(_method_1684)>(*this,lib,"vbroadcasti32x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcasti32x4 >::invoke")
		->args({"self","y","op"});
	using _method_1685 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcasti32x8 >;
	addExtern<DAS_CALL_METHOD(_method_1685)>(*this,lib,"vbroadcasti32x8",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcasti32x8 >::invoke")
		->args({"self","z","op"});
	using _method_1686 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcasti64x2 >;
	addExtern<DAS_CALL_METHOD(_method_1686)>(*this,lib,"vbroadcasti64x2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vbroadcasti64x2 >::invoke")
		->args({"self","y","op"});
}
}

