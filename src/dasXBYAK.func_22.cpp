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
void Module_dasXBYAK::initFunctions_22() {
	using _method_2087 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovusdb >;
	addExtern<DAS_CALL_METHOD(_method_2087)>(*this,lib,"vpmovusdb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovusdb >::invoke")
		->args({"self","op","x"});
	using _method_2088 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovusdw >;
	addExtern<DAS_CALL_METHOD(_method_2088)>(*this,lib,"vpmovusdw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovusdw >::invoke")
		->args({"self","op","x"});
	using _method_2089 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovusqb >;
	addExtern<DAS_CALL_METHOD(_method_2089)>(*this,lib,"vpmovusqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovusqb >::invoke")
		->args({"self","op","x"});
	using _method_2090 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovusqd >;
	addExtern<DAS_CALL_METHOD(_method_2090)>(*this,lib,"vpmovusqd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovusqd >::invoke")
		->args({"self","op","x"});
	using _method_2091 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovusqw >;
	addExtern<DAS_CALL_METHOD(_method_2091)>(*this,lib,"vpmovusqw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovusqw >::invoke")
		->args({"self","op","x"});
	using _method_2092 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovuswb >;
	addExtern<DAS_CALL_METHOD(_method_2092)>(*this,lib,"vpmovuswb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovuswb >::invoke")
		->args({"self","op","x"});
	using _method_2093 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovw2m >;
	addExtern<DAS_CALL_METHOD(_method_2093)>(*this,lib,"vpmovw2m",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovw2m >::invoke")
		->args({"self","k","x"});
	using _method_2094 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovwb >;
	addExtern<DAS_CALL_METHOD(_method_2094)>(*this,lib,"vpmovwb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpmovwb >::invoke")
		->args({"self","op","x"});
	using _method_2095 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmullq >;
	addExtern<DAS_CALL_METHOD(_method_2095)>(*this,lib,"vpmullq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmullq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2096 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmultishiftqb >;
	addExtern<DAS_CALL_METHOD(_method_2096)>(*this,lib,"vpmultishiftqb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpmultishiftqb >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2097 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpopcntb >;
	addExtern<DAS_CALL_METHOD(_method_2097)>(*this,lib,"vpopcntb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpopcntb >::invoke")
		->args({"self","x","op"});
	using _method_2098 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpopcntd >;
	addExtern<DAS_CALL_METHOD(_method_2098)>(*this,lib,"vpopcntd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpopcntd >::invoke")
		->args({"self","x","op"});
	using _method_2099 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpopcntq >;
	addExtern<DAS_CALL_METHOD(_method_2099)>(*this,lib,"vpopcntq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpopcntq >::invoke")
		->args({"self","x","op"});
	using _method_2100 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpopcntw >;
	addExtern<DAS_CALL_METHOD(_method_2100)>(*this,lib,"vpopcntw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpopcntw >::invoke")
		->args({"self","x","op"});
	using _method_2101 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpord >;
	addExtern<DAS_CALL_METHOD(_method_2101)>(*this,lib,"vpord",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpord >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2102 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vporq >;
	addExtern<DAS_CALL_METHOD(_method_2102)>(*this,lib,"vporq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vporq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2103 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vprold >;
	addExtern<DAS_CALL_METHOD(_method_2103)>(*this,lib,"vprold",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vprold >::invoke")
		->args({"self","x","op","imm"});
	using _method_2104 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vprolq >;
	addExtern<DAS_CALL_METHOD(_method_2104)>(*this,lib,"vprolq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vprolq >::invoke")
		->args({"self","x","op","imm"});
	using _method_2105 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vprolvd >;
	addExtern<DAS_CALL_METHOD(_method_2105)>(*this,lib,"vprolvd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vprolvd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2106 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vprolvq >;
	addExtern<DAS_CALL_METHOD(_method_2106)>(*this,lib,"vprolvq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vprolvq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2107 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vprord >;
	addExtern<DAS_CALL_METHOD(_method_2107)>(*this,lib,"vprord",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vprord >::invoke")
		->args({"self","x","op","imm"});
	using _method_2108 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vprorq >;
	addExtern<DAS_CALL_METHOD(_method_2108)>(*this,lib,"vprorq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vprorq >::invoke")
		->args({"self","x","op","imm"});
	using _method_2109 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vprorvd >;
	addExtern<DAS_CALL_METHOD(_method_2109)>(*this,lib,"vprorvd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vprorvd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2110 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vprorvq >;
	addExtern<DAS_CALL_METHOD(_method_2110)>(*this,lib,"vprorvq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vprorvq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2111 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpscatterdd >;
	addExtern<DAS_CALL_METHOD(_method_2111)>(*this,lib,"vpscatterdd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpscatterdd >::invoke")
		->args({"self","addr","x"});
	using _method_2112 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpscatterdq >;
	addExtern<DAS_CALL_METHOD(_method_2112)>(*this,lib,"vpscatterdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpscatterdq >::invoke")
		->args({"self","addr","x"});
	using _method_2113 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpscatterqd >;
	addExtern<DAS_CALL_METHOD(_method_2113)>(*this,lib,"vpscatterqd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpscatterqd >::invoke")
		->args({"self","addr","x"});
	using _method_2114 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpscatterqq >;
	addExtern<DAS_CALL_METHOD(_method_2114)>(*this,lib,"vpscatterqq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vpscatterqq >::invoke")
		->args({"self","addr","x"});
	using _method_2115 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshldd >;
	addExtern<DAS_CALL_METHOD(_method_2115)>(*this,lib,"vpshldd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshldd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2116 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshldq >;
	addExtern<DAS_CALL_METHOD(_method_2116)>(*this,lib,"vpshldq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshldq >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2117 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshldvd >;
	addExtern<DAS_CALL_METHOD(_method_2117)>(*this,lib,"vpshldvd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshldvd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2118 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshldvq >;
	addExtern<DAS_CALL_METHOD(_method_2118)>(*this,lib,"vpshldvq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshldvq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2119 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshldvw >;
	addExtern<DAS_CALL_METHOD(_method_2119)>(*this,lib,"vpshldvw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshldvw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2120 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshldw >;
	addExtern<DAS_CALL_METHOD(_method_2120)>(*this,lib,"vpshldw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshldw >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2121 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshrdd >;
	addExtern<DAS_CALL_METHOD(_method_2121)>(*this,lib,"vpshrdd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshrdd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2122 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshrdq >;
	addExtern<DAS_CALL_METHOD(_method_2122)>(*this,lib,"vpshrdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshrdq >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2123 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshrdvd >;
	addExtern<DAS_CALL_METHOD(_method_2123)>(*this,lib,"vpshrdvd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshrdvd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2124 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshrdvq >;
	addExtern<DAS_CALL_METHOD(_method_2124)>(*this,lib,"vpshrdvq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshrdvq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2125 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshrdvw >;
	addExtern<DAS_CALL_METHOD(_method_2125)>(*this,lib,"vpshrdvw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshrdvw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2126 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshrdw >;
	addExtern<DAS_CALL_METHOD(_method_2126)>(*this,lib,"vpshrdw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpshrdw >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2127 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshufbitqmb >;
	addExtern<DAS_CALL_METHOD(_method_2127)>(*this,lib,"vpshufbitqmb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpshufbitqmb >::invoke")
		->args({"self","k","x","op"});
	using _method_2128 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllvw >;
	addExtern<DAS_CALL_METHOD(_method_2128)>(*this,lib,"vpsllvw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsllvw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2129 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsraq >;
	addExtern<DAS_CALL_METHOD(_method_2129)>(*this,lib,"vpsraq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpsraq >::invoke")
		->args({"self","x","op","imm"});
	using _method_2130 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraq >;
	addExtern<DAS_CALL_METHOD(_method_2130)>(*this,lib,"vpsraq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsraq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2131 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsravq >;
	addExtern<DAS_CALL_METHOD(_method_2131)>(*this,lib,"vpsravq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsravq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2132 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsravw >;
	addExtern<DAS_CALL_METHOD(_method_2132)>(*this,lib,"vpsravw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsravw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2133 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlvw >;
	addExtern<DAS_CALL_METHOD(_method_2133)>(*this,lib,"vpsrlvw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpsrlvw >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2134 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpternlogd >;
	addExtern<DAS_CALL_METHOD(_method_2134)>(*this,lib,"vpternlogd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpternlogd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2135 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpternlogq >;
	addExtern<DAS_CALL_METHOD(_method_2135)>(*this,lib,"vpternlogq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vpternlogq >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2136 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestmb >;
	addExtern<DAS_CALL_METHOD(_method_2136)>(*this,lib,"vptestmb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestmb >::invoke")
		->args({"self","k","x","op"});
	using _method_2137 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestmd >;
	addExtern<DAS_CALL_METHOD(_method_2137)>(*this,lib,"vptestmd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestmd >::invoke")
		->args({"self","k","x","op"});
	using _method_2138 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestmq >;
	addExtern<DAS_CALL_METHOD(_method_2138)>(*this,lib,"vptestmq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestmq >::invoke")
		->args({"self","k","x","op"});
	using _method_2139 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestmw >;
	addExtern<DAS_CALL_METHOD(_method_2139)>(*this,lib,"vptestmw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestmw >::invoke")
		->args({"self","k","x","op"});
	using _method_2140 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestnmb >;
	addExtern<DAS_CALL_METHOD(_method_2140)>(*this,lib,"vptestnmb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestnmb >::invoke")
		->args({"self","k","x","op"});
	using _method_2141 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestnmd >;
	addExtern<DAS_CALL_METHOD(_method_2141)>(*this,lib,"vptestnmd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestnmd >::invoke")
		->args({"self","k","x","op"});
	using _method_2142 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestnmq >;
	addExtern<DAS_CALL_METHOD(_method_2142)>(*this,lib,"vptestnmq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestnmq >::invoke")
		->args({"self","k","x","op"});
	using _method_2143 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestnmw >;
	addExtern<DAS_CALL_METHOD(_method_2143)>(*this,lib,"vptestnmw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vptestnmw >::invoke")
		->args({"self","k","x","op"});
	using _method_2144 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpxord >;
	addExtern<DAS_CALL_METHOD(_method_2144)>(*this,lib,"vpxord",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpxord >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2145 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpxorq >;
	addExtern<DAS_CALL_METHOD(_method_2145)>(*this,lib,"vpxorq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vpxorq >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2146 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrangepd >;
	addExtern<DAS_CALL_METHOD(_method_2146)>(*this,lib,"vrangepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrangepd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2147 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrangeps >;
	addExtern<DAS_CALL_METHOD(_method_2147)>(*this,lib,"vrangeps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrangeps >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2148 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrangesd >;
	addExtern<DAS_CALL_METHOD(_method_2148)>(*this,lib,"vrangesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrangesd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2149 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrangess >;
	addExtern<DAS_CALL_METHOD(_method_2149)>(*this,lib,"vrangess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrangess >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2150 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp14pd >;
	addExtern<DAS_CALL_METHOD(_method_2150)>(*this,lib,"vrcp14pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp14pd >::invoke")
		->args({"self","x","op"});
	using _method_2151 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp14ps >;
	addExtern<DAS_CALL_METHOD(_method_2151)>(*this,lib,"vrcp14ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp14ps >::invoke")
		->args({"self","x","op"});
	using _method_2152 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp14sd >;
	addExtern<DAS_CALL_METHOD(_method_2152)>(*this,lib,"vrcp14sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp14sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2153 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp14ss >;
	addExtern<DAS_CALL_METHOD(_method_2153)>(*this,lib,"vrcp14ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp14ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2154 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp28pd >;
	addExtern<DAS_CALL_METHOD(_method_2154)>(*this,lib,"vrcp28pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp28pd >::invoke")
		->args({"self","z","op"});
	using _method_2155 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp28ps >;
	addExtern<DAS_CALL_METHOD(_method_2155)>(*this,lib,"vrcp28ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp28ps >::invoke")
		->args({"self","z","op"});
	using _method_2156 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp28sd >;
	addExtern<DAS_CALL_METHOD(_method_2156)>(*this,lib,"vrcp28sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp28sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2157 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp28ss >;
	addExtern<DAS_CALL_METHOD(_method_2157)>(*this,lib,"vrcp28ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcp28ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2158 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcpph >;
	addExtern<DAS_CALL_METHOD(_method_2158)>(*this,lib,"vrcpph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcpph >::invoke")
		->args({"self","x","op"});
	using _method_2159 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcpsh >;
	addExtern<DAS_CALL_METHOD(_method_2159)>(*this,lib,"vrcpsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrcpsh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2160 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreducepd >;
	addExtern<DAS_CALL_METHOD(_method_2160)>(*this,lib,"vreducepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreducepd >::invoke")
		->args({"self","x","op","imm"});
	using _method_2161 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreduceph >;
	addExtern<DAS_CALL_METHOD(_method_2161)>(*this,lib,"vreduceph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreduceph >::invoke")
		->args({"self","x","op","imm"});
	using _method_2162 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreduceps >;
	addExtern<DAS_CALL_METHOD(_method_2162)>(*this,lib,"vreduceps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreduceps >::invoke")
		->args({"self","x","op","imm"});
	using _method_2163 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreducesd >;
	addExtern<DAS_CALL_METHOD(_method_2163)>(*this,lib,"vreducesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreducesd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2164 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreducesh >;
	addExtern<DAS_CALL_METHOD(_method_2164)>(*this,lib,"vreducesh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreducesh >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2165 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreducess >;
	addExtern<DAS_CALL_METHOD(_method_2165)>(*this,lib,"vreducess",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vreducess >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2166 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscalepd >;
	addExtern<DAS_CALL_METHOD(_method_2166)>(*this,lib,"vrndscalepd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscalepd >::invoke")
		->args({"self","x","op","imm"});
	using _method_2167 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscaleph >;
	addExtern<DAS_CALL_METHOD(_method_2167)>(*this,lib,"vrndscaleph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscaleph >::invoke")
		->args({"self","x","op","imm"});
	using _method_2168 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscaleps >;
	addExtern<DAS_CALL_METHOD(_method_2168)>(*this,lib,"vrndscaleps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscaleps >::invoke")
		->args({"self","x","op","imm"});
	using _method_2169 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscalesd >;
	addExtern<DAS_CALL_METHOD(_method_2169)>(*this,lib,"vrndscalesd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscalesd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2170 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscalesh >;
	addExtern<DAS_CALL_METHOD(_method_2170)>(*this,lib,"vrndscalesh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscalesh >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2171 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscaless >;
	addExtern<DAS_CALL_METHOD(_method_2171)>(*this,lib,"vrndscaless",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vrndscaless >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_2172 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt14pd >;
	addExtern<DAS_CALL_METHOD(_method_2172)>(*this,lib,"vrsqrt14pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt14pd >::invoke")
		->args({"self","x","op"});
	using _method_2173 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt14ps >;
	addExtern<DAS_CALL_METHOD(_method_2173)>(*this,lib,"vrsqrt14ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt14ps >::invoke")
		->args({"self","x","op"});
	using _method_2174 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt14sd >;
	addExtern<DAS_CALL_METHOD(_method_2174)>(*this,lib,"vrsqrt14sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt14sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2175 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt14ss >;
	addExtern<DAS_CALL_METHOD(_method_2175)>(*this,lib,"vrsqrt14ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt14ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2176 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt28pd >;
	addExtern<DAS_CALL_METHOD(_method_2176)>(*this,lib,"vrsqrt28pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt28pd >::invoke")
		->args({"self","z","op"});
	using _method_2177 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt28ps >;
	addExtern<DAS_CALL_METHOD(_method_2177)>(*this,lib,"vrsqrt28ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt28ps >::invoke")
		->args({"self","z","op"});
	using _method_2178 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt28sd >;
	addExtern<DAS_CALL_METHOD(_method_2178)>(*this,lib,"vrsqrt28sd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt28sd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2179 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt28ss >;
	addExtern<DAS_CALL_METHOD(_method_2179)>(*this,lib,"vrsqrt28ss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrt28ss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2180 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrtph >;
	addExtern<DAS_CALL_METHOD(_method_2180)>(*this,lib,"vrsqrtph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrtph >::invoke")
		->args({"self","x","op"});
	using _method_2181 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrtsh >;
	addExtern<DAS_CALL_METHOD(_method_2181)>(*this,lib,"vrsqrtsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vrsqrtsh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2182 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefpd >;
	addExtern<DAS_CALL_METHOD(_method_2182)>(*this,lib,"vscalefpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefpd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2183 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefph >;
	addExtern<DAS_CALL_METHOD(_method_2183)>(*this,lib,"vscalefph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2184 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefps >;
	addExtern<DAS_CALL_METHOD(_method_2184)>(*this,lib,"vscalefps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2185 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefsd >;
	addExtern<DAS_CALL_METHOD(_method_2185)>(*this,lib,"vscalefsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_2186 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefsh >;
	addExtern<DAS_CALL_METHOD(_method_2186)>(*this,lib,"vscalefsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vscalefsh >::invoke")
		->args({"self","x1","x2","op"});
}
}

