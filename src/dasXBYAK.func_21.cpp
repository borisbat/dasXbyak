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
void Module_dasXBYAK::initFunctions_21() {
	using _method_1987 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu32 >;
	addExtern<DAS_CALL_METHOD(_method_1987)>(*this,lib,"vmovdqu32",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu32 >::invoke")
		->args({"self","addr","x"});
	using _method_1988 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu32 >;
	addExtern<DAS_CALL_METHOD(_method_1988)>(*this,lib,"vmovdqu32",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu32 >::invoke")
		->args({"self","x","op"});
	using _method_1989 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu64 >;
	addExtern<DAS_CALL_METHOD(_method_1989)>(*this,lib,"vmovdqu64",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu64 >::invoke")
		->args({"self","addr","x"});
	using _method_1990 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu64 >;
	addExtern<DAS_CALL_METHOD(_method_1990)>(*this,lib,"vmovdqu64",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu64 >::invoke")
		->args({"self","x","op"});
	using _method_1991 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu8 >;
	addExtern<DAS_CALL_METHOD(_method_1991)>(*this,lib,"vmovdqu8",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu8 >::invoke")
		->args({"self","addr","x"});
	using _method_1992 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu8 >;
	addExtern<DAS_CALL_METHOD(_method_1992)>(*this,lib,"vmovdqu8",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu8 >::invoke")
		->args({"self","x","op"});
	using _method_1993 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh >;
	addExtern<DAS_CALL_METHOD(_method_1993)>(*this,lib,"vmovsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh >::invoke")
		->args({"self","addr","x"});
	using _method_1994 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsh >;
	addExtern<DAS_CALL_METHOD(_method_1994)>(*this,lib,"vmovsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vmovsh >::invoke")
		->args({"self","x","addr"});
	using _method_1995 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh >;
	addExtern<DAS_CALL_METHOD(_method_1995)>(*this,lib,"vmovsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovsh >::invoke")
		->args({"self","x1","x2","x3"});
	using _method_1996 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw >;
	addExtern<DAS_CALL_METHOD(_method_1996)>(*this,lib,"vmovw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw >::invoke")
		->args({"self","addr","x"});
	using _method_1997 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw >;
	addExtern<DAS_CALL_METHOD(_method_1997)>(*this,lib,"vmovw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovw >::invoke")
		->args({"self","r","x"});
	using _method_1998 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovw >;
	addExtern<DAS_CALL_METHOD(_method_1998)>(*this,lib,"vmovw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovw >::invoke")
		->args({"self","x","op"});
	using _method_1999 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulph >;
	addExtern<DAS_CALL_METHOD(_method_1999)>(*this,lib,"vmulph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulph >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_2000 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulsh >;
	addExtern<DAS_CALL_METHOD(_method_2000)>(*this,lib,"vmulsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmulsh >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_2001 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vp2intersectd >;
	addExtern<DAS_CALL_METHOD(_method_2001)>(*this,lib,"vp2intersectd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vp2intersectd >::invoke")
		->args({"self","k","x","op"});
	using _method_2002 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vp2intersectq >;
	addExtern<DAS_CALL_METHOD(_method_2002)>(*this,lib,"vp2intersectq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vp2intersectq >::invoke")
		->args({"self","k","x","op"});
	using _method_2003 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vp4dpwssd >;
	addExtern<DAS_CALL_METHOD(_method_2003)>(*this,lib,"vp4dpwssd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vp4dpwssd >::invoke")
		->args({"self","z1","z2","addr"});
	using _method_2004 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vp4dpwssds >;
	addExtern<DAS_CALL_METHOD(_method_2004)>(*this,lib,"vp4dpwssds",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vp4dpwssds >::invoke")
		->args({"self","z1","z2","addr"});
	using _method_2005 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpabsq >;
	addExtern<DAS_CALL_METHOD(_method_2005)>(*this,lib,"vpabsq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpabsq >::invoke")
		->args({"self","x","op"});
	using _method_2006 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpandd >;
	addExtern<DAS_CALL_METHOD(_method_2006)>(*this,lib,"vpandd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpandd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2007 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpandnd >;
	addExtern<DAS_CALL_METHOD(_method_2007)>(*this,lib,"vpandnd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpandnd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2008 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpandnq >;
	addExtern<DAS_CALL_METHOD(_method_2008)>(*this,lib,"vpandnq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpandnq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2009 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpandq >;
	addExtern<DAS_CALL_METHOD(_method_2009)>(*this,lib,"vpandq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpandq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2010 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpblendmb >;
	addExtern<DAS_CALL_METHOD(_method_2010)>(*this,lib,"vpblendmb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpblendmb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2011 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpblendmd >;
	addExtern<DAS_CALL_METHOD(_method_2011)>(*this,lib,"vpblendmd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpblendmd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2012 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpblendmq >;
	addExtern<DAS_CALL_METHOD(_method_2012)>(*this,lib,"vpblendmq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpblendmq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2013 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpblendmw >;
	addExtern<DAS_CALL_METHOD(_method_2013)>(*this,lib,"vpblendmw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpblendmw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2014 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::vpbroadcastb >;
	addExtern<DAS_CALL_METHOD(_method_2014)>(*this,lib,"vpbroadcastb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg8 &),&Xbyak::CodeGenerator::vpbroadcastb >::invoke")
		->args({"self","x","r"});
	using _method_2015 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg32 &),&Xbyak::CodeGenerator::vpbroadcastd >;
	addExtern<DAS_CALL_METHOD(_method_2015)>(*this,lib,"vpbroadcastd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg32 &),&Xbyak::CodeGenerator::vpbroadcastd >::invoke")
		->args({"self","x","r"});
	using _method_2016 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpbroadcastmb2q >;
	addExtern<DAS_CALL_METHOD(_method_2016)>(*this,lib,"vpbroadcastmb2q",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpbroadcastmb2q >::invoke")
		->args({"self","x","k"});
	using _method_2017 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpbroadcastmw2d >;
	addExtern<DAS_CALL_METHOD(_method_2017)>(*this,lib,"vpbroadcastmw2d",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpbroadcastmw2d >::invoke")
		->args({"self","x","k"});
	using _method_2018 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg16 &),&Xbyak::CodeGenerator::vpbroadcastw >;
	addExtern<DAS_CALL_METHOD(_method_2018)>(*this,lib,"vpbroadcastw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Reg16 &),&Xbyak::CodeGenerator::vpbroadcastw >::invoke")
		->args({"self","x","r"});
	using _method_2019 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpb >;
	addExtern<DAS_CALL_METHOD(_method_2019)>(*this,lib,"vpcmpb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpb >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_2020 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpd >;
	addExtern<DAS_CALL_METHOD(_method_2020)>(*this,lib,"vpcmpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpd >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_2021 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb >;
	addExtern<DAS_CALL_METHOD(_method_2021)>(*this,lib,"vpcmpeqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqb >::invoke")
		->args({"self","k","x","op"});
	using _method_2022 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd >;
	addExtern<DAS_CALL_METHOD(_method_2022)>(*this,lib,"vpcmpeqd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqd >::invoke")
		->args({"self","k","x","op"});
	using _method_2023 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq >;
	addExtern<DAS_CALL_METHOD(_method_2023)>(*this,lib,"vpcmpeqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqq >::invoke")
		->args({"self","k","x","op"});
	using _method_2024 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw >;
	addExtern<DAS_CALL_METHOD(_method_2024)>(*this,lib,"vpcmpeqw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpeqw >::invoke")
		->args({"self","k","x","op"});
	using _method_2025 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb >;
	addExtern<DAS_CALL_METHOD(_method_2025)>(*this,lib,"vpcmpgtb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtb >::invoke")
		->args({"self","k","x","op"});
	using _method_2026 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd >;
	addExtern<DAS_CALL_METHOD(_method_2026)>(*this,lib,"vpcmpgtd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtd >::invoke")
		->args({"self","k","x","op"});
	using _method_2027 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq >;
	addExtern<DAS_CALL_METHOD(_method_2027)>(*this,lib,"vpcmpgtq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtq >::invoke")
		->args({"self","k","x","op"});
	using _method_2028 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw >;
	addExtern<DAS_CALL_METHOD(_method_2028)>(*this,lib,"vpcmpgtw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpcmpgtw >::invoke")
		->args({"self","k","x","op"});
	using _method_2029 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpq >;
	addExtern<DAS_CALL_METHOD(_method_2029)>(*this,lib,"vpcmpq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpq >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_2030 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpub >;
	addExtern<DAS_CALL_METHOD(_method_2030)>(*this,lib,"vpcmpub",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpub >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_2031 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpud >;
	addExtern<DAS_CALL_METHOD(_method_2031)>(*this,lib,"vpcmpud",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpud >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_2032 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpuq >;
	addExtern<DAS_CALL_METHOD(_method_2032)>(*this,lib,"vpcmpuq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpuq >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_2033 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpuw >;
	addExtern<DAS_CALL_METHOD(_method_2033)>(*this,lib,"vpcmpuw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpuw >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_2034 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpw >;
	addExtern<DAS_CALL_METHOD(_method_2034)>(*this,lib,"vpcmpw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpcmpw >::invoke")
		->args({"self","k","x","op","imm"});
	using _method_2035 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpcompressd >;
	addExtern<DAS_CALL_METHOD(_method_2035)>(*this,lib,"vpcompressd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpcompressd >::invoke")
		->args({"self","op","x"});
	using _method_2036 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpcompressq >;
	addExtern<DAS_CALL_METHOD(_method_2036)>(*this,lib,"vpcompressq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpcompressq >::invoke")
		->args({"self","op","x"});
	using _method_2037 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpconflictd >;
	addExtern<DAS_CALL_METHOD(_method_2037)>(*this,lib,"vpconflictd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpconflictd >::invoke")
		->args({"self","x","op"});
	using _method_2038 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpconflictq >;
	addExtern<DAS_CALL_METHOD(_method_2038)>(*this,lib,"vpconflictq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpconflictq >::invoke")
		->args({"self","x","op"});
	using _method_2039 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermb >;
	addExtern<DAS_CALL_METHOD(_method_2039)>(*this,lib,"vpermb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2040 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2b >;
	addExtern<DAS_CALL_METHOD(_method_2040)>(*this,lib,"vpermi2b",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2b >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2041 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2d >;
	addExtern<DAS_CALL_METHOD(_method_2041)>(*this,lib,"vpermi2d",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2d >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2042 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2pd >;
	addExtern<DAS_CALL_METHOD(_method_2042)>(*this,lib,"vpermi2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2043 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2ps >;
	addExtern<DAS_CALL_METHOD(_method_2043)>(*this,lib,"vpermi2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2044 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2q >;
	addExtern<DAS_CALL_METHOD(_method_2044)>(*this,lib,"vpermi2q",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2q >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2045 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2w >;
	addExtern<DAS_CALL_METHOD(_method_2045)>(*this,lib,"vpermi2w",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermi2w >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2046 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2b >;
	addExtern<DAS_CALL_METHOD(_method_2046)>(*this,lib,"vpermt2b",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2b >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2047 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2d >;
	addExtern<DAS_CALL_METHOD(_method_2047)>(*this,lib,"vpermt2d",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2d >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2048 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2pd >;
	addExtern<DAS_CALL_METHOD(_method_2048)>(*this,lib,"vpermt2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2pd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2049 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2ps >;
	addExtern<DAS_CALL_METHOD(_method_2049)>(*this,lib,"vpermt2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2050 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2q >;
	addExtern<DAS_CALL_METHOD(_method_2050)>(*this,lib,"vpermt2q",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2q >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2051 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2w >;
	addExtern<DAS_CALL_METHOD(_method_2051)>(*this,lib,"vpermt2w",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermt2w >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2052 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermw >;
	addExtern<DAS_CALL_METHOD(_method_2052)>(*this,lib,"vpermw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpermw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2053 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpexpandb >;
	addExtern<DAS_CALL_METHOD(_method_2053)>(*this,lib,"vpexpandb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpexpandb >::invoke")
		->args({"self","x","op"});
	using _method_2054 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpexpandd >;
	addExtern<DAS_CALL_METHOD(_method_2054)>(*this,lib,"vpexpandd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpexpandd >::invoke")
		->args({"self","x","op"});
	using _method_2055 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpexpandq >;
	addExtern<DAS_CALL_METHOD(_method_2055)>(*this,lib,"vpexpandq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpexpandq >::invoke")
		->args({"self","x","op"});
	using _method_2056 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpexpandw >;
	addExtern<DAS_CALL_METHOD(_method_2056)>(*this,lib,"vpexpandw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpexpandw >::invoke")
		->args({"self","x","op"});
	using _method_2057 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdd >;
	addExtern<DAS_CALL_METHOD(_method_2057)>(*this,lib,"vpgatherdd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdd >::invoke")
		->args({"self","x","addr"});
	using _method_2058 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdq >;
	addExtern<DAS_CALL_METHOD(_method_2058)>(*this,lib,"vpgatherdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherdq >::invoke")
		->args({"self","x","addr"});
	using _method_2059 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqd >;
	addExtern<DAS_CALL_METHOD(_method_2059)>(*this,lib,"vpgatherqd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqd >::invoke")
		->args({"self","x","addr"});
	using _method_2060 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqq >;
	addExtern<DAS_CALL_METHOD(_method_2060)>(*this,lib,"vpgatherqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vpgatherqq >::invoke")
		->args({"self","x","addr"});
	using _method_2061 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vplzcntd >;
	addExtern<DAS_CALL_METHOD(_method_2061)>(*this,lib,"vplzcntd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vplzcntd >::invoke")
		->args({"self","x","op"});
	using _method_2062 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vplzcntq >;
	addExtern<DAS_CALL_METHOD(_method_2062)>(*this,lib,"vplzcntq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vplzcntq >::invoke")
		->args({"self","x","op"});
	using _method_2063 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmadd52huq >;
	addExtern<DAS_CALL_METHOD(_method_2063)>(*this,lib,"vpmadd52huq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmadd52huq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2064 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmadd52luq >;
	addExtern<DAS_CALL_METHOD(_method_2064)>(*this,lib,"vpmadd52luq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmadd52luq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2065 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxsq >;
	addExtern<DAS_CALL_METHOD(_method_2065)>(*this,lib,"vpmaxsq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxsq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2066 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxuq >;
	addExtern<DAS_CALL_METHOD(_method_2066)>(*this,lib,"vpmaxuq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmaxuq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2067 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminsq >;
	addExtern<DAS_CALL_METHOD(_method_2067)>(*this,lib,"vpminsq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminsq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2068 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminuq >;
	addExtern<DAS_CALL_METHOD(_method_2068)>(*this,lib,"vpminuq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpminuq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2069 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovb2m >;
	addExtern<DAS_CALL_METHOD(_method_2069)>(*this,lib,"vpmovb2m",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovb2m >::invoke")
		->args({"self","k","x"});
	using _method_2070 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovd2m >;
	addExtern<DAS_CALL_METHOD(_method_2070)>(*this,lib,"vpmovd2m",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovd2m >::invoke")
		->args({"self","k","x"});
	using _method_2071 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovdb >;
	addExtern<DAS_CALL_METHOD(_method_2071)>(*this,lib,"vpmovdb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovdb >::invoke")
		->args({"self","op","x"});
	using _method_2072 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovdw >;
	addExtern<DAS_CALL_METHOD(_method_2072)>(*this,lib,"vpmovdw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovdw >::invoke")
		->args({"self","op","x"});
	using _method_2073 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpmovm2b >;
	addExtern<DAS_CALL_METHOD(_method_2073)>(*this,lib,"vpmovm2b",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpmovm2b >::invoke")
		->args({"self","x","k"});
	using _method_2074 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpmovm2d >;
	addExtern<DAS_CALL_METHOD(_method_2074)>(*this,lib,"vpmovm2d",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpmovm2d >::invoke")
		->args({"self","x","k"});
	using _method_2075 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpmovm2q >;
	addExtern<DAS_CALL_METHOD(_method_2075)>(*this,lib,"vpmovm2q",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpmovm2q >::invoke")
		->args({"self","x","k"});
	using _method_2076 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpmovm2w >;
	addExtern<DAS_CALL_METHOD(_method_2076)>(*this,lib,"vpmovm2w",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Opmask &),&Xbyak::CodeGenerator::vpmovm2w >::invoke")
		->args({"self","x","k"});
	using _method_2077 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovq2m >;
	addExtern<DAS_CALL_METHOD(_method_2077)>(*this,lib,"vpmovq2m",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovq2m >::invoke")
		->args({"self","k","x"});
	using _method_2078 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovqb >;
	addExtern<DAS_CALL_METHOD(_method_2078)>(*this,lib,"vpmovqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovqb >::invoke")
		->args({"self","op","x"});
	using _method_2079 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovqd >;
	addExtern<DAS_CALL_METHOD(_method_2079)>(*this,lib,"vpmovqd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovqd >::invoke")
		->args({"self","op","x"});
	using _method_2080 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovqw >;
	addExtern<DAS_CALL_METHOD(_method_2080)>(*this,lib,"vpmovqw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovqw >::invoke")
		->args({"self","op","x"});
	using _method_2081 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovsdb >;
	addExtern<DAS_CALL_METHOD(_method_2081)>(*this,lib,"vpmovsdb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovsdb >::invoke")
		->args({"self","op","x"});
	using _method_2082 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovsdw >;
	addExtern<DAS_CALL_METHOD(_method_2082)>(*this,lib,"vpmovsdw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovsdw >::invoke")
		->args({"self","op","x"});
	using _method_2083 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovsqb >;
	addExtern<DAS_CALL_METHOD(_method_2083)>(*this,lib,"vpmovsqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovsqb >::invoke")
		->args({"self","op","x"});
	using _method_2084 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovsqd >;
	addExtern<DAS_CALL_METHOD(_method_2084)>(*this,lib,"vpmovsqd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovsqd >::invoke")
		->args({"self","op","x"});
	using _method_2085 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovsqw >;
	addExtern<DAS_CALL_METHOD(_method_2085)>(*this,lib,"vpmovsqw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovsqw >::invoke")
		->args({"self","op","x"});
	using _method_2086 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovswb >;
	addExtern<DAS_CALL_METHOD(_method_2086)>(*this,lib,"vpmovswb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovswb >::invoke")
		->args({"self","op","x"});
}
}

