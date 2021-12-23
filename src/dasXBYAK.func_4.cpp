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
void Module_dasXBYAK::initFunctions_4() {
	using _method_287 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovc >;
	addExtern<DAS_CALL_METHOD(_method_287)>(*this,lib,"cmovc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovc >::invoke")
		->args({"self","reg","op"});
	using _method_288 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmove >;
	addExtern<DAS_CALL_METHOD(_method_288)>(*this,lib,"cmove",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmove >::invoke")
		->args({"self","reg","op"});
	using _method_289 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovg >;
	addExtern<DAS_CALL_METHOD(_method_289)>(*this,lib,"cmovg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovg >::invoke")
		->args({"self","reg","op"});
	using _method_290 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovge >;
	addExtern<DAS_CALL_METHOD(_method_290)>(*this,lib,"cmovge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovge >::invoke")
		->args({"self","reg","op"});
	using _method_291 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovl >;
	addExtern<DAS_CALL_METHOD(_method_291)>(*this,lib,"cmovl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovl >::invoke")
		->args({"self","reg","op"});
	using _method_292 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovle >;
	addExtern<DAS_CALL_METHOD(_method_292)>(*this,lib,"cmovle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovle >::invoke")
		->args({"self","reg","op"});
	using _method_293 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovna >;
	addExtern<DAS_CALL_METHOD(_method_293)>(*this,lib,"cmovna",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovna >::invoke")
		->args({"self","reg","op"});
	using _method_294 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnae >;
	addExtern<DAS_CALL_METHOD(_method_294)>(*this,lib,"cmovnae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnae >::invoke")
		->args({"self","reg","op"});
	using _method_295 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnb >;
	addExtern<DAS_CALL_METHOD(_method_295)>(*this,lib,"cmovnb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnb >::invoke")
		->args({"self","reg","op"});
	using _method_296 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnbe >;
	addExtern<DAS_CALL_METHOD(_method_296)>(*this,lib,"cmovnbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnbe >::invoke")
		->args({"self","reg","op"});
	using _method_297 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnc >;
	addExtern<DAS_CALL_METHOD(_method_297)>(*this,lib,"cmovnc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnc >::invoke")
		->args({"self","reg","op"});
	using _method_298 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovne >;
	addExtern<DAS_CALL_METHOD(_method_298)>(*this,lib,"cmovne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovne >::invoke")
		->args({"self","reg","op"});
	using _method_299 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovng >;
	addExtern<DAS_CALL_METHOD(_method_299)>(*this,lib,"cmovng",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovng >::invoke")
		->args({"self","reg","op"});
	using _method_300 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnge >;
	addExtern<DAS_CALL_METHOD(_method_300)>(*this,lib,"cmovnge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnge >::invoke")
		->args({"self","reg","op"});
	using _method_301 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnl >;
	addExtern<DAS_CALL_METHOD(_method_301)>(*this,lib,"cmovnl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnl >::invoke")
		->args({"self","reg","op"});
	using _method_302 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnle >;
	addExtern<DAS_CALL_METHOD(_method_302)>(*this,lib,"cmovnle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnle >::invoke")
		->args({"self","reg","op"});
	using _method_303 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovno >;
	addExtern<DAS_CALL_METHOD(_method_303)>(*this,lib,"cmovno",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovno >::invoke")
		->args({"self","reg","op"});
	using _method_304 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnp >;
	addExtern<DAS_CALL_METHOD(_method_304)>(*this,lib,"cmovnp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnp >::invoke")
		->args({"self","reg","op"});
	using _method_305 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovns >;
	addExtern<DAS_CALL_METHOD(_method_305)>(*this,lib,"cmovns",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovns >::invoke")
		->args({"self","reg","op"});
	using _method_306 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnz >;
	addExtern<DAS_CALL_METHOD(_method_306)>(*this,lib,"cmovnz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovnz >::invoke")
		->args({"self","reg","op"});
	using _method_307 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovo >;
	addExtern<DAS_CALL_METHOD(_method_307)>(*this,lib,"cmovo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovo >::invoke")
		->args({"self","reg","op"});
	using _method_308 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovp >;
	addExtern<DAS_CALL_METHOD(_method_308)>(*this,lib,"cmovp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovp >::invoke")
		->args({"self","reg","op"});
	using _method_309 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovpe >;
	addExtern<DAS_CALL_METHOD(_method_309)>(*this,lib,"cmovpe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovpe >::invoke")
		->args({"self","reg","op"});
	using _method_310 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovpo >;
	addExtern<DAS_CALL_METHOD(_method_310)>(*this,lib,"cmovpo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovpo >::invoke")
		->args({"self","reg","op"});
	using _method_311 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovs >;
	addExtern<DAS_CALL_METHOD(_method_311)>(*this,lib,"cmovs",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovs >::invoke")
		->args({"self","reg","op"});
	using _method_312 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovz >;
	addExtern<DAS_CALL_METHOD(_method_312)>(*this,lib,"cmovz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovz >::invoke")
		->args({"self","reg","op"});
	using _method_313 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::cmp >;
	addExtern<DAS_CALL_METHOD(_method_313)>(*this,lib,"cmp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::cmp >::invoke")
		->args({"self","op","imm"});
	using _method_314 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmp >;
	addExtern<DAS_CALL_METHOD(_method_314)>(*this,lib,"cmp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmp >::invoke")
		->args({"self","op1","op2"});
	using _method_315 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpeqpd >;
	addExtern<DAS_CALL_METHOD(_method_315)>(*this,lib,"cmpeqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpeqpd >::invoke")
		->args({"self","x","op"});
	using _method_316 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpeqps >;
	addExtern<DAS_CALL_METHOD(_method_316)>(*this,lib,"cmpeqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpeqps >::invoke")
		->args({"self","x","op"});
	using _method_317 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpeqsd >;
	addExtern<DAS_CALL_METHOD(_method_317)>(*this,lib,"cmpeqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpeqsd >::invoke")
		->args({"self","x","op"});
	using _method_318 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpeqss >;
	addExtern<DAS_CALL_METHOD(_method_318)>(*this,lib,"cmpeqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpeqss >::invoke")
		->args({"self","x","op"});
	using _method_319 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmplepd >;
	addExtern<DAS_CALL_METHOD(_method_319)>(*this,lib,"cmplepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmplepd >::invoke")
		->args({"self","x","op"});
	using _method_320 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpleps >;
	addExtern<DAS_CALL_METHOD(_method_320)>(*this,lib,"cmpleps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpleps >::invoke")
		->args({"self","x","op"});
	using _method_321 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmplesd >;
	addExtern<DAS_CALL_METHOD(_method_321)>(*this,lib,"cmplesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmplesd >::invoke")
		->args({"self","x","op"});
	using _method_322 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpless >;
	addExtern<DAS_CALL_METHOD(_method_322)>(*this,lib,"cmpless",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpless >::invoke")
		->args({"self","x","op"});
	using _method_323 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpltpd >;
	addExtern<DAS_CALL_METHOD(_method_323)>(*this,lib,"cmpltpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpltpd >::invoke")
		->args({"self","x","op"});
	using _method_324 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpltps >;
	addExtern<DAS_CALL_METHOD(_method_324)>(*this,lib,"cmpltps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpltps >::invoke")
		->args({"self","x","op"});
	using _method_325 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpltsd >;
	addExtern<DAS_CALL_METHOD(_method_325)>(*this,lib,"cmpltsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpltsd >::invoke")
		->args({"self","x","op"});
	using _method_326 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpltss >;
	addExtern<DAS_CALL_METHOD(_method_326)>(*this,lib,"cmpltss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpltss >::invoke")
		->args({"self","x","op"});
	using _method_327 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpneqpd >;
	addExtern<DAS_CALL_METHOD(_method_327)>(*this,lib,"cmpneqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpneqpd >::invoke")
		->args({"self","x","op"});
	using _method_328 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpneqps >;
	addExtern<DAS_CALL_METHOD(_method_328)>(*this,lib,"cmpneqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpneqps >::invoke")
		->args({"self","x","op"});
	using _method_329 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpneqsd >;
	addExtern<DAS_CALL_METHOD(_method_329)>(*this,lib,"cmpneqsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpneqsd >::invoke")
		->args({"self","x","op"});
	using _method_330 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpneqss >;
	addExtern<DAS_CALL_METHOD(_method_330)>(*this,lib,"cmpneqss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpneqss >::invoke")
		->args({"self","x","op"});
	using _method_331 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnlepd >;
	addExtern<DAS_CALL_METHOD(_method_331)>(*this,lib,"cmpnlepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnlepd >::invoke")
		->args({"self","x","op"});
	using _method_332 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnleps >;
	addExtern<DAS_CALL_METHOD(_method_332)>(*this,lib,"cmpnleps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnleps >::invoke")
		->args({"self","x","op"});
	using _method_333 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnlesd >;
	addExtern<DAS_CALL_METHOD(_method_333)>(*this,lib,"cmpnlesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnlesd >::invoke")
		->args({"self","x","op"});
	using _method_334 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnless >;
	addExtern<DAS_CALL_METHOD(_method_334)>(*this,lib,"cmpnless",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnless >::invoke")
		->args({"self","x","op"});
	using _method_335 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnltpd >;
	addExtern<DAS_CALL_METHOD(_method_335)>(*this,lib,"cmpnltpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnltpd >::invoke")
		->args({"self","x","op"});
	using _method_336 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnltps >;
	addExtern<DAS_CALL_METHOD(_method_336)>(*this,lib,"cmpnltps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnltps >::invoke")
		->args({"self","x","op"});
	using _method_337 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnltsd >;
	addExtern<DAS_CALL_METHOD(_method_337)>(*this,lib,"cmpnltsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnltsd >::invoke")
		->args({"self","x","op"});
	using _method_338 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnltss >;
	addExtern<DAS_CALL_METHOD(_method_338)>(*this,lib,"cmpnltss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpnltss >::invoke")
		->args({"self","x","op"});
	using _method_339 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpordpd >;
	addExtern<DAS_CALL_METHOD(_method_339)>(*this,lib,"cmpordpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpordpd >::invoke")
		->args({"self","x","op"});
	using _method_340 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpordps >;
	addExtern<DAS_CALL_METHOD(_method_340)>(*this,lib,"cmpordps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpordps >::invoke")
		->args({"self","x","op"});
	using _method_341 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpordsd >;
	addExtern<DAS_CALL_METHOD(_method_341)>(*this,lib,"cmpordsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpordsd >::invoke")
		->args({"self","x","op"});
	using _method_342 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpordss >;
	addExtern<DAS_CALL_METHOD(_method_342)>(*this,lib,"cmpordss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpordss >::invoke")
		->args({"self","x","op"});
	using _method_343 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::cmppd >;
	addExtern<DAS_CALL_METHOD(_method_343)>(*this,lib,"cmppd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::cmppd >::invoke")
		->args({"self","xmm","op","imm8"});
	using _method_344 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::cmpps >;
	addExtern<DAS_CALL_METHOD(_method_344)>(*this,lib,"cmpps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::cmpps >::invoke")
		->args({"self","xmm","op","imm8"});
	using _method_345 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsb >;
	addExtern<DAS_CALL_METHOD(_method_345)>(*this,lib,"cmpsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsb >::invoke")
		->args({"self"});
	using _method_346 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsd >;
	addExtern<DAS_CALL_METHOD(_method_346)>(*this,lib,"cmpsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsd >::invoke")
		->args({"self"});
	using _method_347 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::cmpsd >;
	addExtern<DAS_CALL_METHOD(_method_347)>(*this,lib,"cmpsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::cmpsd >::invoke")
		->args({"self","xmm","op","imm8"});
	using _method_348 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::cmpss >;
	addExtern<DAS_CALL_METHOD(_method_348)>(*this,lib,"cmpss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::cmpss >::invoke")
		->args({"self","xmm","op","imm8"});
	using _method_349 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsw >;
	addExtern<DAS_CALL_METHOD(_method_349)>(*this,lib,"cmpsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmpsw >::invoke")
		->args({"self"});
	using _method_350 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpunordpd >;
	addExtern<DAS_CALL_METHOD(_method_350)>(*this,lib,"cmpunordpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpunordpd >::invoke")
		->args({"self","x","op"});
	using _method_351 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpunordps >;
	addExtern<DAS_CALL_METHOD(_method_351)>(*this,lib,"cmpunordps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpunordps >::invoke")
		->args({"self","x","op"});
	using _method_352 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpunordsd >;
	addExtern<DAS_CALL_METHOD(_method_352)>(*this,lib,"cmpunordsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpunordsd >::invoke")
		->args({"self","x","op"});
	using _method_353 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpunordss >;
	addExtern<DAS_CALL_METHOD(_method_353)>(*this,lib,"cmpunordss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmpunordss >::invoke")
		->args({"self","x","op"});
	using _method_354 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::cmpxchg >;
	addExtern<DAS_CALL_METHOD(_method_354)>(*this,lib,"cmpxchg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::cmpxchg >::invoke")
		->args({"self","op","reg"});
	using _method_355 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::cmpxchg8b >;
	addExtern<DAS_CALL_METHOD(_method_355)>(*this,lib,"cmpxchg8b",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::cmpxchg8b >::invoke")
		->args({"self","addr"});
	using _method_356 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::comisd >;
	addExtern<DAS_CALL_METHOD(_method_356)>(*this,lib,"comisd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::comisd >::invoke")
		->args({"self","xmm","op"});
	using _method_357 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::comiss >;
	addExtern<DAS_CALL_METHOD(_method_357)>(*this,lib,"comiss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::comiss >::invoke")
		->args({"self","xmm","op"});
	using _method_358 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cpuid >;
	addExtern<DAS_CALL_METHOD(_method_358)>(*this,lib,"cpuid",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cpuid >::invoke")
		->args({"self"});
	using _method_359 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::crc32 >;
	addExtern<DAS_CALL_METHOD(_method_359)>(*this,lib,"crc32",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::crc32 >::invoke")
		->args({"self","reg","op"});
	using _method_360 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtdq2pd >;
	addExtern<DAS_CALL_METHOD(_method_360)>(*this,lib,"cvtdq2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtdq2pd >::invoke")
		->args({"self","xmm","op"});
	using _method_361 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtdq2ps >;
	addExtern<DAS_CALL_METHOD(_method_361)>(*this,lib,"cvtdq2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtdq2ps >::invoke")
		->args({"self","xmm","op"});
	using _method_362 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtpd2dq >;
	addExtern<DAS_CALL_METHOD(_method_362)>(*this,lib,"cvtpd2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtpd2dq >::invoke")
		->args({"self","xmm","op"});
	using _method_363 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtpd2pi >;
	addExtern<DAS_CALL_METHOD(_method_363)>(*this,lib,"cvtpd2pi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtpd2pi >::invoke")
		->args({"self","reg","op"});
	using _method_364 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtpd2ps >;
	addExtern<DAS_CALL_METHOD(_method_364)>(*this,lib,"cvtpd2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtpd2ps >::invoke")
		->args({"self","xmm","op"});
	using _method_365 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtpi2pd >;
	addExtern<DAS_CALL_METHOD(_method_365)>(*this,lib,"cvtpi2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtpi2pd >::invoke")
		->args({"self","reg","op"});
	using _method_366 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtpi2ps >;
	addExtern<DAS_CALL_METHOD(_method_366)>(*this,lib,"cvtpi2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtpi2ps >::invoke")
		->args({"self","reg","op"});
	using _method_367 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtps2dq >;
	addExtern<DAS_CALL_METHOD(_method_367)>(*this,lib,"cvtps2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtps2dq >::invoke")
		->args({"self","xmm","op"});
	using _method_368 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtps2pd >;
	addExtern<DAS_CALL_METHOD(_method_368)>(*this,lib,"cvtps2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtps2pd >::invoke")
		->args({"self","xmm","op"});
	using _method_369 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtps2pi >;
	addExtern<DAS_CALL_METHOD(_method_369)>(*this,lib,"cvtps2pi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtps2pi >::invoke")
		->args({"self","reg","op"});
	using _method_370 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtsd2si >;
	addExtern<DAS_CALL_METHOD(_method_370)>(*this,lib,"cvtsd2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtsd2si >::invoke")
		->args({"self","reg","op"});
	using _method_371 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtsd2ss >;
	addExtern<DAS_CALL_METHOD(_method_371)>(*this,lib,"cvtsd2ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtsd2ss >::invoke")
		->args({"self","xmm","op"});
	using _method_372 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtsi2sd >;
	addExtern<DAS_CALL_METHOD(_method_372)>(*this,lib,"cvtsi2sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtsi2sd >::invoke")
		->args({"self","reg","op"});
	using _method_373 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtsi2ss >;
	addExtern<DAS_CALL_METHOD(_method_373)>(*this,lib,"cvtsi2ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtsi2ss >::invoke")
		->args({"self","reg","op"});
	using _method_374 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtss2sd >;
	addExtern<DAS_CALL_METHOD(_method_374)>(*this,lib,"cvtss2sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtss2sd >::invoke")
		->args({"self","xmm","op"});
	using _method_375 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtss2si >;
	addExtern<DAS_CALL_METHOD(_method_375)>(*this,lib,"cvtss2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvtss2si >::invoke")
		->args({"self","reg","op"});
	using _method_376 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttpd2dq >;
	addExtern<DAS_CALL_METHOD(_method_376)>(*this,lib,"cvttpd2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttpd2dq >::invoke")
		->args({"self","xmm","op"});
	using _method_377 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttpd2pi >;
	addExtern<DAS_CALL_METHOD(_method_377)>(*this,lib,"cvttpd2pi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttpd2pi >::invoke")
		->args({"self","reg","op"});
	using _method_378 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttps2dq >;
	addExtern<DAS_CALL_METHOD(_method_378)>(*this,lib,"cvttps2dq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttps2dq >::invoke")
		->args({"self","xmm","op"});
	using _method_379 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttps2pi >;
	addExtern<DAS_CALL_METHOD(_method_379)>(*this,lib,"cvttps2pi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttps2pi >::invoke")
		->args({"self","reg","op"});
	using _method_380 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttsd2si >;
	addExtern<DAS_CALL_METHOD(_method_380)>(*this,lib,"cvttsd2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttsd2si >::invoke")
		->args({"self","reg","op"});
	using _method_381 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttss2si >;
	addExtern<DAS_CALL_METHOD(_method_381)>(*this,lib,"cvttss2si",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cvttss2si >::invoke")
		->args({"self","reg","op"});
	using _method_382 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cwd >;
	addExtern<DAS_CALL_METHOD(_method_382)>(*this,lib,"cwd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cwd >::invoke")
		->args({"self"});
	using _method_383 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cwde >;
	addExtern<DAS_CALL_METHOD(_method_383)>(*this,lib,"cwde",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cwde >::invoke")
		->args({"self"});
	using _method_384 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::dec >;
	addExtern<DAS_CALL_METHOD(_method_384)>(*this,lib,"dec",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::dec >::invoke")
		->args({"self","op"});
	using _method_385 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::div >;
	addExtern<DAS_CALL_METHOD(_method_385)>(*this,lib,"div",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::div >::invoke")
		->args({"self","op"});
	using _method_386 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::divpd >;
	addExtern<DAS_CALL_METHOD(_method_386)>(*this,lib,"divpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::divpd >::invoke")
		->args({"self","xmm","op"});
}
}

