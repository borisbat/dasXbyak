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
void Module_dasXBYAK::initFunctions_7() {
	using _method_587 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl >;
	addExtern<DAS_CALL_METHOD(_method_587)>(*this,lib,"jl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl >::invoke")
		->args({"self","label","type"});
	using _method_588 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jl >;
	addExtern<DAS_CALL_METHOD(_method_588)>(*this,lib,"jl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jl >::invoke")
		->args({"self","addr"});
	using _method_589 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl >;
	addExtern<DAS_CALL_METHOD(_method_589)>(*this,lib,"jl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jl >::invoke")
		->args({"self","label","type"});
	using _method_590 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle >;
	addExtern<DAS_CALL_METHOD(_method_590)>(*this,lib,"jle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle >::invoke")
		->args({"self","label","type"});
	using _method_591 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle >;
	addExtern<DAS_CALL_METHOD(_method_591)>(*this,lib,"jle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle >::invoke")
		->args({"self","label","type"});
	using _method_592 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jle >;
	addExtern<DAS_CALL_METHOD(_method_592)>(*this,lib,"jle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jle >::invoke")
		->args({"self","addr"});
	using _method_593 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle >;
	addExtern<DAS_CALL_METHOD(_method_593)>(*this,lib,"jle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jle >::invoke")
		->args({"self","label","type"});
	using _method_594 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna >;
	addExtern<DAS_CALL_METHOD(_method_594)>(*this,lib,"jna",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna >::invoke")
		->args({"self","label","type"});
	using _method_595 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna >;
	addExtern<DAS_CALL_METHOD(_method_595)>(*this,lib,"jna",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna >::invoke")
		->args({"self","label","type"});
	using _method_596 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jna >;
	addExtern<DAS_CALL_METHOD(_method_596)>(*this,lib,"jna",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jna >::invoke")
		->args({"self","addr"});
	using _method_597 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna >;
	addExtern<DAS_CALL_METHOD(_method_597)>(*this,lib,"jna",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jna >::invoke")
		->args({"self","label","type"});
	using _method_598 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae >;
	addExtern<DAS_CALL_METHOD(_method_598)>(*this,lib,"jnae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae >::invoke")
		->args({"self","label","type"});
	using _method_599 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae >;
	addExtern<DAS_CALL_METHOD(_method_599)>(*this,lib,"jnae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae >::invoke")
		->args({"self","label","type"});
	using _method_600 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnae >;
	addExtern<DAS_CALL_METHOD(_method_600)>(*this,lib,"jnae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnae >::invoke")
		->args({"self","addr"});
	using _method_601 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae >;
	addExtern<DAS_CALL_METHOD(_method_601)>(*this,lib,"jnae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnae >::invoke")
		->args({"self","label","type"});
	using _method_602 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb >;
	addExtern<DAS_CALL_METHOD(_method_602)>(*this,lib,"jnb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb >::invoke")
		->args({"self","label","type"});
	using _method_603 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb >;
	addExtern<DAS_CALL_METHOD(_method_603)>(*this,lib,"jnb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb >::invoke")
		->args({"self","label","type"});
	using _method_604 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnb >;
	addExtern<DAS_CALL_METHOD(_method_604)>(*this,lib,"jnb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnb >::invoke")
		->args({"self","addr"});
	using _method_605 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb >;
	addExtern<DAS_CALL_METHOD(_method_605)>(*this,lib,"jnb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnb >::invoke")
		->args({"self","label","type"});
	using _method_606 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe >;
	addExtern<DAS_CALL_METHOD(_method_606)>(*this,lib,"jnbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe >::invoke")
		->args({"self","label","type"});
	using _method_607 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe >;
	addExtern<DAS_CALL_METHOD(_method_607)>(*this,lib,"jnbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe >::invoke")
		->args({"self","label","type"});
	using _method_608 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnbe >;
	addExtern<DAS_CALL_METHOD(_method_608)>(*this,lib,"jnbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnbe >::invoke")
		->args({"self","addr"});
	using _method_609 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe >;
	addExtern<DAS_CALL_METHOD(_method_609)>(*this,lib,"jnbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnbe >::invoke")
		->args({"self","label","type"});
	using _method_610 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc >;
	addExtern<DAS_CALL_METHOD(_method_610)>(*this,lib,"jnc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc >::invoke")
		->args({"self","label","type"});
	using _method_611 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc >;
	addExtern<DAS_CALL_METHOD(_method_611)>(*this,lib,"jnc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc >::invoke")
		->args({"self","label","type"});
	using _method_612 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnc >;
	addExtern<DAS_CALL_METHOD(_method_612)>(*this,lib,"jnc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnc >::invoke")
		->args({"self","addr"});
	using _method_613 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc >;
	addExtern<DAS_CALL_METHOD(_method_613)>(*this,lib,"jnc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnc >::invoke")
		->args({"self","label","type"});
	using _method_614 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne >;
	addExtern<DAS_CALL_METHOD(_method_614)>(*this,lib,"jne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne >::invoke")
		->args({"self","label","type"});
	using _method_615 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne >;
	addExtern<DAS_CALL_METHOD(_method_615)>(*this,lib,"jne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne >::invoke")
		->args({"self","label","type"});
	using _method_616 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jne >;
	addExtern<DAS_CALL_METHOD(_method_616)>(*this,lib,"jne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jne >::invoke")
		->args({"self","addr"});
	using _method_617 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne >;
	addExtern<DAS_CALL_METHOD(_method_617)>(*this,lib,"jne",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jne >::invoke")
		->args({"self","label","type"});
	using _method_618 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng >;
	addExtern<DAS_CALL_METHOD(_method_618)>(*this,lib,"jng",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng >::invoke")
		->args({"self","label","type"});
	using _method_619 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng >;
	addExtern<DAS_CALL_METHOD(_method_619)>(*this,lib,"jng",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng >::invoke")
		->args({"self","label","type"});
	using _method_620 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jng >;
	addExtern<DAS_CALL_METHOD(_method_620)>(*this,lib,"jng",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jng >::invoke")
		->args({"self","addr"});
	using _method_621 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng >;
	addExtern<DAS_CALL_METHOD(_method_621)>(*this,lib,"jng",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jng >::invoke")
		->args({"self","label","type"});
	using _method_622 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge >;
	addExtern<DAS_CALL_METHOD(_method_622)>(*this,lib,"jnge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge >::invoke")
		->args({"self","label","type"});
	using _method_623 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge >;
	addExtern<DAS_CALL_METHOD(_method_623)>(*this,lib,"jnge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge >::invoke")
		->args({"self","label","type"});
	using _method_624 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnge >;
	addExtern<DAS_CALL_METHOD(_method_624)>(*this,lib,"jnge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnge >::invoke")
		->args({"self","addr"});
	using _method_625 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge >;
	addExtern<DAS_CALL_METHOD(_method_625)>(*this,lib,"jnge",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnge >::invoke")
		->args({"self","label","type"});
	using _method_626 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl >;
	addExtern<DAS_CALL_METHOD(_method_626)>(*this,lib,"jnl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl >::invoke")
		->args({"self","label","type"});
	using _method_627 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl >;
	addExtern<DAS_CALL_METHOD(_method_627)>(*this,lib,"jnl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl >::invoke")
		->args({"self","label","type"});
	using _method_628 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnl >;
	addExtern<DAS_CALL_METHOD(_method_628)>(*this,lib,"jnl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnl >::invoke")
		->args({"self","addr"});
	using _method_629 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl >;
	addExtern<DAS_CALL_METHOD(_method_629)>(*this,lib,"jnl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnl >::invoke")
		->args({"self","label","type"});
	using _method_630 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle >;
	addExtern<DAS_CALL_METHOD(_method_630)>(*this,lib,"jnle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle >::invoke")
		->args({"self","label","type"});
	using _method_631 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle >;
	addExtern<DAS_CALL_METHOD(_method_631)>(*this,lib,"jnle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle >::invoke")
		->args({"self","label","type"});
	using _method_632 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnle >;
	addExtern<DAS_CALL_METHOD(_method_632)>(*this,lib,"jnle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnle >::invoke")
		->args({"self","addr"});
	using _method_633 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle >;
	addExtern<DAS_CALL_METHOD(_method_633)>(*this,lib,"jnle",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnle >::invoke")
		->args({"self","label","type"});
	using _method_634 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno >;
	addExtern<DAS_CALL_METHOD(_method_634)>(*this,lib,"jno",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno >::invoke")
		->args({"self","label","type"});
	using _method_635 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno >;
	addExtern<DAS_CALL_METHOD(_method_635)>(*this,lib,"jno",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno >::invoke")
		->args({"self","label","type"});
	using _method_636 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jno >;
	addExtern<DAS_CALL_METHOD(_method_636)>(*this,lib,"jno",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jno >::invoke")
		->args({"self","addr"});
	using _method_637 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno >;
	addExtern<DAS_CALL_METHOD(_method_637)>(*this,lib,"jno",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jno >::invoke")
		->args({"self","label","type"});
	using _method_638 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp >;
	addExtern<DAS_CALL_METHOD(_method_638)>(*this,lib,"jnp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp >::invoke")
		->args({"self","label","type"});
	using _method_639 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp >;
	addExtern<DAS_CALL_METHOD(_method_639)>(*this,lib,"jnp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp >::invoke")
		->args({"self","label","type"});
	using _method_640 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnp >;
	addExtern<DAS_CALL_METHOD(_method_640)>(*this,lib,"jnp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnp >::invoke")
		->args({"self","addr"});
	using _method_641 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp >;
	addExtern<DAS_CALL_METHOD(_method_641)>(*this,lib,"jnp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnp >::invoke")
		->args({"self","label","type"});
	using _method_642 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns >;
	addExtern<DAS_CALL_METHOD(_method_642)>(*this,lib,"jns",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns >::invoke")
		->args({"self","label","type"});
	using _method_643 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns >;
	addExtern<DAS_CALL_METHOD(_method_643)>(*this,lib,"jns",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns >::invoke")
		->args({"self","label","type"});
	using _method_644 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jns >;
	addExtern<DAS_CALL_METHOD(_method_644)>(*this,lib,"jns",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jns >::invoke")
		->args({"self","addr"});
	using _method_645 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns >;
	addExtern<DAS_CALL_METHOD(_method_645)>(*this,lib,"jns",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jns >::invoke")
		->args({"self","label","type"});
	using _method_646 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz >;
	addExtern<DAS_CALL_METHOD(_method_646)>(*this,lib,"jnz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz >::invoke")
		->args({"self","label","type"});
	using _method_647 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz >;
	addExtern<DAS_CALL_METHOD(_method_647)>(*this,lib,"jnz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz >::invoke")
		->args({"self","label","type"});
	using _method_648 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnz >;
	addExtern<DAS_CALL_METHOD(_method_648)>(*this,lib,"jnz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jnz >::invoke")
		->args({"self","addr"});
	using _method_649 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz >;
	addExtern<DAS_CALL_METHOD(_method_649)>(*this,lib,"jnz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jnz >::invoke")
		->args({"self","label","type"});
	using _method_650 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo >;
	addExtern<DAS_CALL_METHOD(_method_650)>(*this,lib,"jo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo >::invoke")
		->args({"self","label","type"});
	using _method_651 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo >;
	addExtern<DAS_CALL_METHOD(_method_651)>(*this,lib,"jo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo >::invoke")
		->args({"self","label","type"});
	using _method_652 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jo >;
	addExtern<DAS_CALL_METHOD(_method_652)>(*this,lib,"jo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jo >::invoke")
		->args({"self","addr"});
	using _method_653 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo >;
	addExtern<DAS_CALL_METHOD(_method_653)>(*this,lib,"jo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jo >::invoke")
		->args({"self","label","type"});
	using _method_654 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp >;
	addExtern<DAS_CALL_METHOD(_method_654)>(*this,lib,"jp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp >::invoke")
		->args({"self","label","type"});
	using _method_655 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp >;
	addExtern<DAS_CALL_METHOD(_method_655)>(*this,lib,"jp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp >::invoke")
		->args({"self","label","type"});
	using _method_656 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jp >;
	addExtern<DAS_CALL_METHOD(_method_656)>(*this,lib,"jp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jp >::invoke")
		->args({"self","addr"});
	using _method_657 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp >;
	addExtern<DAS_CALL_METHOD(_method_657)>(*this,lib,"jp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jp >::invoke")
		->args({"self","label","type"});
	using _method_658 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe >;
	addExtern<DAS_CALL_METHOD(_method_658)>(*this,lib,"jpe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe >::invoke")
		->args({"self","label","type"});
	using _method_659 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe >;
	addExtern<DAS_CALL_METHOD(_method_659)>(*this,lib,"jpe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe >::invoke")
		->args({"self","label","type"});
	using _method_660 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpe >;
	addExtern<DAS_CALL_METHOD(_method_660)>(*this,lib,"jpe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpe >::invoke")
		->args({"self","addr"});
	using _method_661 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe >;
	addExtern<DAS_CALL_METHOD(_method_661)>(*this,lib,"jpe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpe >::invoke")
		->args({"self","label","type"});
	using _method_662 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo >;
	addExtern<DAS_CALL_METHOD(_method_662)>(*this,lib,"jpo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo >::invoke")
		->args({"self","label","type"});
	using _method_663 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo >;
	addExtern<DAS_CALL_METHOD(_method_663)>(*this,lib,"jpo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo >::invoke")
		->args({"self","label","type"});
	using _method_664 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpo >;
	addExtern<DAS_CALL_METHOD(_method_664)>(*this,lib,"jpo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jpo >::invoke")
		->args({"self","addr"});
	using _method_665 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo >;
	addExtern<DAS_CALL_METHOD(_method_665)>(*this,lib,"jpo",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jpo >::invoke")
		->args({"self","label","type"});
	using _method_666 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js >;
	addExtern<DAS_CALL_METHOD(_method_666)>(*this,lib,"js",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js >::invoke")
		->args({"self","label","type"});
	using _method_667 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js >;
	addExtern<DAS_CALL_METHOD(_method_667)>(*this,lib,"js",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js >::invoke")
		->args({"self","label","type"});
	using _method_668 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::js >;
	addExtern<DAS_CALL_METHOD(_method_668)>(*this,lib,"js",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::js >::invoke")
		->args({"self","addr"});
	using _method_669 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js >;
	addExtern<DAS_CALL_METHOD(_method_669)>(*this,lib,"js",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::js >::invoke")
		->args({"self","label","type"});
	using _method_670 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz >;
	addExtern<DAS_CALL_METHOD(_method_670)>(*this,lib,"jz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz >::invoke")
		->args({"self","label","type"});
	using _method_671 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz >;
	addExtern<DAS_CALL_METHOD(_method_671)>(*this,lib,"jz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz >::invoke")
		->args({"self","label","type"});
	using _method_672 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jz >;
	addExtern<DAS_CALL_METHOD(_method_672)>(*this,lib,"jz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::jz >::invoke")
		->args({"self","addr"});
	using _method_673 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz >;
	addExtern<DAS_CALL_METHOD(_method_673)>(*this,lib,"jz",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jz >::invoke")
		->args({"self","label","type"});
	using _method_674 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lahf >;
	addExtern<DAS_CALL_METHOD(_method_674)>(*this,lib,"lahf",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lahf >::invoke")
		->args({"self"});
	using _method_675 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::lddqu >;
	addExtern<DAS_CALL_METHOD(_method_675)>(*this,lib,"lddqu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::lddqu >::invoke")
		->args({"self","xmm","addr"});
	using _method_676 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::ldmxcsr >;
	addExtern<DAS_CALL_METHOD(_method_676)>(*this,lib,"ldmxcsr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::ldmxcsr >::invoke")
		->args({"self","addr"});
	using _method_677 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Address &),&Xbyak::CodeGenerator::lea >;
	addExtern<DAS_CALL_METHOD(_method_677)>(*this,lib,"lea",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Address &),&Xbyak::CodeGenerator::lea >::invoke")
		->args({"self","reg","addr"});
	using _method_678 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::leave >;
	addExtern<DAS_CALL_METHOD(_method_678)>(*this,lib,"leave",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::leave >::invoke")
		->args({"self"});
	using _method_679 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lfence >;
	addExtern<DAS_CALL_METHOD(_method_679)>(*this,lib,"lfence",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lfence >::invoke")
		->args({"self"});
	using _method_680 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Address &),&Xbyak::CodeGenerator::lfs >;
	addExtern<DAS_CALL_METHOD(_method_680)>(*this,lib,"lfs",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Address &),&Xbyak::CodeGenerator::lfs >::invoke")
		->args({"self","reg","addr"});
	using _method_681 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Address &),&Xbyak::CodeGenerator::lgs >;
	addExtern<DAS_CALL_METHOD(_method_681)>(*this,lib,"lgs",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Address &),&Xbyak::CodeGenerator::lgs >::invoke")
		->args({"self","reg","addr"});
	using _method_682 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lock >;
	addExtern<DAS_CALL_METHOD(_method_682)>(*this,lib,"lock",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lock >::invoke")
		->args({"self"});
	using _method_683 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lodsb >;
	addExtern<DAS_CALL_METHOD(_method_683)>(*this,lib,"lodsb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lodsb >::invoke")
		->args({"self"});
	using _method_684 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lodsd >;
	addExtern<DAS_CALL_METHOD(_method_684)>(*this,lib,"lodsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lodsd >::invoke")
		->args({"self"});
	using _method_685 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lodsw >;
	addExtern<DAS_CALL_METHOD(_method_685)>(*this,lib,"lodsw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::lodsw >::invoke")
		->args({"self"});
	using _method_686 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loop >;
	addExtern<DAS_CALL_METHOD(_method_686)>(*this,lib,"loop",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::loop >::invoke")
		->args({"self","label"});
}
}

