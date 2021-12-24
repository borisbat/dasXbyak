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
void Module_dasXBYAK::initFunctions_3() {
	using _method_187 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::jmp >;
	addExtern<DAS_CALL_METHOD(_method_187)>(*this,lib,"jmp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::jmp >::invoke")
		->args({"self","op"});
	using _method_188 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp >;
	addExtern<DAS_CALL_METHOD(_method_188)>(*this,lib,"jmp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp >::invoke")
		->args({"self","label","type"})
		->arg_init(2,make_smart<ExprConstEnumeration>(2,makeType<Xbyak::CodeGenerator::LabelType>(lib)));
	using _method_189 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp >;
	addExtern<DAS_CALL_METHOD(_method_189)>(*this,lib,"jmp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp >::invoke")
		->args({"self","label","type"})
		->arg_init(2,make_smart<ExprConstEnumeration>(2,makeType<Xbyak::CodeGenerator::LabelType>(lib)));
	using _method_190 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp >;
	addExtern<DAS_CALL_METHOD(_method_190)>(*this,lib,"jmp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp >::invoke")
		->args({"self","label","type"})
		->arg_init(2,make_smart<ExprConstEnumeration>(2,makeType<Xbyak::CodeGenerator::LabelType>(lib)));
	using _method_191 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp >;
	addExtern<DAS_CALL_METHOD(_method_191)>(*this,lib,"jmp",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *,Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp >::invoke")
		->args({"self","addr","type"})
		->arg_init(2,make_smart<ExprConstEnumeration>(2,makeType<Xbyak::CodeGenerator::LabelType>(lib)));
	using _method_192 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::call >;
	addExtern<DAS_CALL_METHOD(_method_192)>(*this,lib,"call",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::call >::invoke")
		->args({"self","op"});
	using _method_193 = das::das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::call >;
	addExtern<DAS_CALL_METHOD(_method_193)>(*this,lib,"call",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(std::basic_string<char>),&Xbyak::CodeGenerator::call >::invoke")
		->args({"self","label"});
	using _method_194 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::call >;
	addExtern<DAS_CALL_METHOD(_method_194)>(*this,lib,"call",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::call >::invoke")
		->args({"self","label"});
	using _method_195 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::call >;
	addExtern<DAS_CALL_METHOD(_method_195)>(*this,lib,"call",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::call >::invoke")
		->args({"self","label"});
	using _method_196 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::call >;
	addExtern<DAS_CALL_METHOD(_method_196)>(*this,lib,"call",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::call >::invoke")
		->args({"self","addr"});
	using _method_197 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::test >;
	addExtern<DAS_CALL_METHOD(_method_197)>(*this,lib,"test",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::test >::invoke")
		->args({"self","op","reg"});
	using _method_198 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::test >;
	addExtern<DAS_CALL_METHOD(_method_198)>(*this,lib,"test",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::test >::invoke")
		->args({"self","op","imm"});
	using _method_199 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::imul >;
	addExtern<DAS_CALL_METHOD(_method_199)>(*this,lib,"imul",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::imul >::invoke")
		->args({"self","reg","op"});
	using _method_200 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::imul >;
	addExtern<DAS_CALL_METHOD(_method_200)>(*this,lib,"imul",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::imul >::invoke")
		->args({"self","reg","op","imm"});
	using _method_201 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::push >;
	addExtern<DAS_CALL_METHOD(_method_201)>(*this,lib,"push",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::push >::invoke")
		->args({"self","op"});
	using _method_202 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::pop >;
	addExtern<DAS_CALL_METHOD(_method_202)>(*this,lib,"pop",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::pop >::invoke")
		->args({"self","op"});
	using _method_203 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::AddressFrame &,unsigned int),&Xbyak::CodeGenerator::push >;
	addExtern<DAS_CALL_METHOD(_method_203)>(*this,lib,"push",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::AddressFrame &,unsigned int),&Xbyak::CodeGenerator::push >::invoke")
		->args({"self","af","imm"});
	using _method_204 = das::das_call_member< void (Xbyak::CodeGenerator::*)(unsigned int),&Xbyak::CodeGenerator::push >;
	addExtern<DAS_CALL_METHOD(_method_204)>(*this,lib,"push",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(unsigned int),&Xbyak::CodeGenerator::push >::invoke")
		->args({"self","imm"});
	using _method_205 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mov >;
	addExtern<DAS_CALL_METHOD(_method_205)>(*this,lib,"mov",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mov >::invoke")
		->args({"self","reg1","reg2"});
	using _method_206 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned long long),&Xbyak::CodeGenerator::mov >;
	addExtern<DAS_CALL_METHOD(_method_206)>(*this,lib,"mov",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned long long),&Xbyak::CodeGenerator::mov >::invoke")
		->args({"self","op","imm"});
	using _method_207 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Label &),&Xbyak::CodeGenerator::mov >;
	addExtern<DAS_CALL_METHOD(_method_207)>(*this,lib,"mov",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg64 &,const Xbyak::Label &),&Xbyak::CodeGenerator::mov >::invoke")
		->args({"self","reg","label"});
	using _method_208 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::xchg >;
	addExtern<DAS_CALL_METHOD(_method_208)>(*this,lib,"xchg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::xchg >::invoke")
		->args({"self","op1","op2"});
	using _method_209 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::push >;
	addExtern<DAS_CALL_METHOD(_method_209)>(*this,lib,"push",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::push >::invoke")
		->args({"self","seg"});
	using _method_210 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::pop >;
	addExtern<DAS_CALL_METHOD(_method_210)>(*this,lib,"pop",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::pop >::invoke")
		->args({"self","seg"});
	using _method_211 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::putSeg >;
	addExtern<DAS_CALL_METHOD(_method_211)>(*this,lib,"putSeg",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &),&Xbyak::CodeGenerator::putSeg >::invoke")
		->args({"self","seg"});
	using _method_212 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Segment &),&Xbyak::CodeGenerator::mov >;
	addExtern<DAS_CALL_METHOD(_method_212)>(*this,lib,"mov",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Segment &),&Xbyak::CodeGenerator::mov >::invoke")
		->args({"self","op","seg"});
	using _method_213 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mov >;
	addExtern<DAS_CALL_METHOD(_method_213)>(*this,lib,"mov",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Segment &,const Xbyak::Operand &),&Xbyak::CodeGenerator::mov >::invoke")
		->args({"self","seg","op"});
	using _method_214 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::reset >;
	addExtern<DAS_CALL_METHOD(_method_214)>(*this,lib,"reset",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::reset >::invoke")
		->args({"self"});
	using _method_215 = das::das_call_member< bool (Xbyak::CodeGenerator::*)() const,&Xbyak::CodeGenerator::hasUndefinedLabel >;
	addExtern<DAS_CALL_METHOD(_method_215)>(*this,lib,"hasUndefinedLabel",SideEffects::worstDefault,"das_call_member< bool (Xbyak::CodeGenerator::*)() const,&Xbyak::CodeGenerator::hasUndefinedLabel >::invoke")
		->args({"self"});
	using _method_216 = das::das_call_member< void (Xbyak::CodeGenerator::*)(Xbyak::CodeArray::ProtectMode),&Xbyak::CodeGenerator::ready >;
	addExtern<DAS_CALL_METHOD(_method_216)>(*this,lib,"ready",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(Xbyak::CodeArray::ProtectMode),&Xbyak::CodeGenerator::ready >::invoke")
		->args({"self","mode"})
		->arg_init(1,make_smart<ExprConstEnumeration>(1,makeType<Xbyak::CodeArray::ProtectMode>(lib)));
	using _method_217 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::readyRE >;
	addExtern<DAS_CALL_METHOD(_method_217)>(*this,lib,"readyRE",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::readyRE >::invoke")
		->args({"self"});
	using _method_218 = das::das_call_member< void (Xbyak::CodeGenerator::*)(unsigned long long,bool),&Xbyak::CodeGenerator::nop >;
	addExtern<DAS_CALL_METHOD(_method_218)>(*this,lib,"nop",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(unsigned long long,bool),&Xbyak::CodeGenerator::nop >::invoke")
		->args({"self","size","useMultiByteNop"})
		->arg_init(1,make_smart<ExprConstUInt64>(0x1))
		->arg_init(2,make_smart<ExprConstBool>(true));
	using _method_219 = das::das_call_member< const char * (Xbyak::CodeGenerator::*)() const,&Xbyak::CodeGenerator::getVersionString >;
	addExtern<DAS_CALL_METHOD(_method_219)>(*this,lib,"getVersionString",SideEffects::worstDefault,"das_call_member< const char * (Xbyak::CodeGenerator::*)() const,&Xbyak::CodeGenerator::getVersionString >::invoke")
		->args({"self"});
	using _method_220 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::adc >;
	addExtern<DAS_CALL_METHOD(_method_220)>(*this,lib,"adc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::adc >::invoke")
		->args({"self","op","imm"});
	using _method_221 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::adc >;
	addExtern<DAS_CALL_METHOD(_method_221)>(*this,lib,"adc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::adc >::invoke")
		->args({"self","op1","op2"});
	using _method_222 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::adcx >;
	addExtern<DAS_CALL_METHOD(_method_222)>(*this,lib,"adcx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::adcx >::invoke")
		->args({"self","reg","op"});
	using _method_223 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::add >;
	addExtern<DAS_CALL_METHOD(_method_223)>(*this,lib,"add",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::add >::invoke")
		->args({"self","op","imm"});
	using _method_224 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::add >;
	addExtern<DAS_CALL_METHOD(_method_224)>(*this,lib,"add",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::add >::invoke")
		->args({"self","op1","op2"});
	using _method_225 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addpd >;
	addExtern<DAS_CALL_METHOD(_method_225)>(*this,lib,"addpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addpd >::invoke")
		->args({"self","xmm","op"});
	using _method_226 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addps >;
	addExtern<DAS_CALL_METHOD(_method_226)>(*this,lib,"addps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addps >::invoke")
		->args({"self","xmm","op"});
	using _method_227 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addsd >;
	addExtern<DAS_CALL_METHOD(_method_227)>(*this,lib,"addsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addsd >::invoke")
		->args({"self","xmm","op"});
	using _method_228 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addss >;
	addExtern<DAS_CALL_METHOD(_method_228)>(*this,lib,"addss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addss >::invoke")
		->args({"self","xmm","op"});
	using _method_229 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addsubpd >;
	addExtern<DAS_CALL_METHOD(_method_229)>(*this,lib,"addsubpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addsubpd >::invoke")
		->args({"self","xmm","op"});
	using _method_230 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addsubps >;
	addExtern<DAS_CALL_METHOD(_method_230)>(*this,lib,"addsubps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::addsubps >::invoke")
		->args({"self","xmm","op"});
	using _method_231 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::adox >;
	addExtern<DAS_CALL_METHOD(_method_231)>(*this,lib,"adox",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::adox >::invoke")
		->args({"self","reg","op"});
	using _method_232 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::aesdec >;
	addExtern<DAS_CALL_METHOD(_method_232)>(*this,lib,"aesdec",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::aesdec >::invoke")
		->args({"self","xmm","op"});
	using _method_233 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::aesdeclast >;
	addExtern<DAS_CALL_METHOD(_method_233)>(*this,lib,"aesdeclast",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::aesdeclast >::invoke")
		->args({"self","xmm","op"});
	using _method_234 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::aesenc >;
	addExtern<DAS_CALL_METHOD(_method_234)>(*this,lib,"aesenc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::aesenc >::invoke")
		->args({"self","xmm","op"});
	using _method_235 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::aesenclast >;
	addExtern<DAS_CALL_METHOD(_method_235)>(*this,lib,"aesenclast",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::aesenclast >::invoke")
		->args({"self","xmm","op"});
	using _method_236 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::aesimc >;
	addExtern<DAS_CALL_METHOD(_method_236)>(*this,lib,"aesimc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::aesimc >::invoke")
		->args({"self","xmm","op"});
	using _method_237 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::aeskeygenassist >;
	addExtern<DAS_CALL_METHOD(_method_237)>(*this,lib,"aeskeygenassist",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::aeskeygenassist >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_238 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::and_ >;
	addExtern<DAS_CALL_METHOD(_method_238)>(*this,lib,"and_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned int),&Xbyak::CodeGenerator::and_ >::invoke")
		->args({"self","op","imm"});
	using _method_239 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::and_ >;
	addExtern<DAS_CALL_METHOD(_method_239)>(*this,lib,"and_",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::and_ >::invoke")
		->args({"self","op1","op2"});
	using _method_240 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::andn >;
	addExtern<DAS_CALL_METHOD(_method_240)>(*this,lib,"andn",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::andn >::invoke")
		->args({"self","r1","r2","op"});
	using _method_241 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::andnpd >;
	addExtern<DAS_CALL_METHOD(_method_241)>(*this,lib,"andnpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::andnpd >::invoke")
		->args({"self","xmm","op"});
	using _method_242 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::andnps >;
	addExtern<DAS_CALL_METHOD(_method_242)>(*this,lib,"andnps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::andnps >::invoke")
		->args({"self","xmm","op"});
	using _method_243 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::andpd >;
	addExtern<DAS_CALL_METHOD(_method_243)>(*this,lib,"andpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::andpd >::invoke")
		->args({"self","xmm","op"});
	using _method_244 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::andps >;
	addExtern<DAS_CALL_METHOD(_method_244)>(*this,lib,"andps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::andps >::invoke")
		->args({"self","xmm","op"});
	using _method_245 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::bextr >;
	addExtern<DAS_CALL_METHOD(_method_245)>(*this,lib,"bextr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::bextr >::invoke")
		->args({"self","r1","op","r2"});
	using _method_246 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::blendpd >;
	addExtern<DAS_CALL_METHOD(_method_246)>(*this,lib,"blendpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::blendpd >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_247 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::blendps >;
	addExtern<DAS_CALL_METHOD(_method_247)>(*this,lib,"blendps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,int),&Xbyak::CodeGenerator::blendps >::invoke")
		->args({"self","xmm","op","imm"});
	using _method_248 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::blendvpd >;
	addExtern<DAS_CALL_METHOD(_method_248)>(*this,lib,"blendvpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::blendvpd >::invoke")
		->args({"self","xmm","op"});
	using _method_249 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::blendvps >;
	addExtern<DAS_CALL_METHOD(_method_249)>(*this,lib,"blendvps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::blendvps >::invoke")
		->args({"self","xmm","op"});
	using _method_250 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::blsi >;
	addExtern<DAS_CALL_METHOD(_method_250)>(*this,lib,"blsi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::blsi >::invoke")
		->args({"self","r","op"});
	using _method_251 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::blsmsk >;
	addExtern<DAS_CALL_METHOD(_method_251)>(*this,lib,"blsmsk",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::blsmsk >::invoke")
		->args({"self","r","op"});
	using _method_252 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::blsr >;
	addExtern<DAS_CALL_METHOD(_method_252)>(*this,lib,"blsr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &),&Xbyak::CodeGenerator::blsr >::invoke")
		->args({"self","r","op"});
	using _method_253 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::bnd >;
	addExtern<DAS_CALL_METHOD(_method_253)>(*this,lib,"bnd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::bnd >::invoke")
		->args({"self"});
	using _method_254 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bndcl >;
	addExtern<DAS_CALL_METHOD(_method_254)>(*this,lib,"bndcl",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bndcl >::invoke")
		->args({"self","bnd","op"});
	using _method_255 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bndcn >;
	addExtern<DAS_CALL_METHOD(_method_255)>(*this,lib,"bndcn",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bndcn >::invoke")
		->args({"self","bnd","op"});
	using _method_256 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bndcu >;
	addExtern<DAS_CALL_METHOD(_method_256)>(*this,lib,"bndcu",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bndcu >::invoke")
		->args({"self","bnd","op"});
	using _method_257 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Address &),&Xbyak::CodeGenerator::bndldx >;
	addExtern<DAS_CALL_METHOD(_method_257)>(*this,lib,"bndldx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Address &),&Xbyak::CodeGenerator::bndldx >::invoke")
		->args({"self","bnd","addr"});
	using _method_258 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Address &),&Xbyak::CodeGenerator::bndmk >;
	addExtern<DAS_CALL_METHOD(_method_258)>(*this,lib,"bndmk",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Address &),&Xbyak::CodeGenerator::bndmk >::invoke")
		->args({"self","bnd","addr"});
	using _method_259 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::BoundsReg &),&Xbyak::CodeGenerator::bndmov >;
	addExtern<DAS_CALL_METHOD(_method_259)>(*this,lib,"bndmov",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::BoundsReg &),&Xbyak::CodeGenerator::bndmov >::invoke")
		->args({"self","addr","bnd"});
	using _method_260 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bndmov >;
	addExtern<DAS_CALL_METHOD(_method_260)>(*this,lib,"bndmov",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::BoundsReg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bndmov >::invoke")
		->args({"self","bnd","op"});
	using _method_261 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::BoundsReg &),&Xbyak::CodeGenerator::bndstx >;
	addExtern<DAS_CALL_METHOD(_method_261)>(*this,lib,"bndstx",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::BoundsReg &),&Xbyak::CodeGenerator::bndstx >::invoke")
		->args({"self","addr","bnd"});
	using _method_262 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bsf >;
	addExtern<DAS_CALL_METHOD(_method_262)>(*this,lib,"bsf",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bsf >::invoke")
		->args({"self","reg","op"});
	using _method_263 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bsr >;
	addExtern<DAS_CALL_METHOD(_method_263)>(*this,lib,"bsr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::bsr >::invoke")
		->args({"self","reg","op"});
	using _method_264 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &),&Xbyak::CodeGenerator::bswap >;
	addExtern<DAS_CALL_METHOD(_method_264)>(*this,lib,"bswap",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &),&Xbyak::CodeGenerator::bswap >::invoke")
		->args({"self","reg"});
	using _method_265 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::bt >;
	addExtern<DAS_CALL_METHOD(_method_265)>(*this,lib,"bt",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::bt >::invoke")
		->args({"self","op","reg"});
	using _method_266 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::bt >;
	addExtern<DAS_CALL_METHOD(_method_266)>(*this,lib,"bt",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::bt >::invoke")
		->args({"self","op","imm"});
	using _method_267 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::btc >;
	addExtern<DAS_CALL_METHOD(_method_267)>(*this,lib,"btc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::btc >::invoke")
		->args({"self","op","reg"});
	using _method_268 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::btc >;
	addExtern<DAS_CALL_METHOD(_method_268)>(*this,lib,"btc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::btc >::invoke")
		->args({"self","op","imm"});
	using _method_269 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::btr >;
	addExtern<DAS_CALL_METHOD(_method_269)>(*this,lib,"btr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::btr >::invoke")
		->args({"self","op","reg"});
	using _method_270 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::btr >;
	addExtern<DAS_CALL_METHOD(_method_270)>(*this,lib,"btr",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::btr >::invoke")
		->args({"self","op","imm"});
	using _method_271 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::bts >;
	addExtern<DAS_CALL_METHOD(_method_271)>(*this,lib,"bts",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Reg &),&Xbyak::CodeGenerator::bts >::invoke")
		->args({"self","op","reg"});
	using _method_272 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::bts >;
	addExtern<DAS_CALL_METHOD(_method_272)>(*this,lib,"bts",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::bts >::invoke")
		->args({"self","op","imm"});
	using _method_273 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::bzhi >;
	addExtern<DAS_CALL_METHOD(_method_273)>(*this,lib,"bzhi",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32e &,const Xbyak::Operand &,const Xbyak::Reg32e &),&Xbyak::CodeGenerator::bzhi >::invoke")
		->args({"self","r1","op","r2"});
	using _method_274 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cbw >;
	addExtern<DAS_CALL_METHOD(_method_274)>(*this,lib,"cbw",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cbw >::invoke")
		->args({"self"});
	using _method_275 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cdq >;
	addExtern<DAS_CALL_METHOD(_method_275)>(*this,lib,"cdq",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cdq >::invoke")
		->args({"self"});
	using _method_276 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::clc >;
	addExtern<DAS_CALL_METHOD(_method_276)>(*this,lib,"clc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::clc >::invoke")
		->args({"self"});
	using _method_277 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cld >;
	addExtern<DAS_CALL_METHOD(_method_277)>(*this,lib,"cld",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cld >::invoke")
		->args({"self"});
	using _method_278 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::clflush >;
	addExtern<DAS_CALL_METHOD(_method_278)>(*this,lib,"clflush",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::clflush >::invoke")
		->args({"self","addr"});
	using _method_279 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::clflushopt >;
	addExtern<DAS_CALL_METHOD(_method_279)>(*this,lib,"clflushopt",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::clflushopt >::invoke")
		->args({"self","addr"});
	using _method_280 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cli >;
	addExtern<DAS_CALL_METHOD(_method_280)>(*this,lib,"cli",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cli >::invoke")
		->args({"self"});
	using _method_281 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::clzero >;
	addExtern<DAS_CALL_METHOD(_method_281)>(*this,lib,"clzero",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::clzero >::invoke")
		->args({"self"});
	using _method_282 = das::das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmc >;
	addExtern<DAS_CALL_METHOD(_method_282)>(*this,lib,"cmc",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::cmc >::invoke")
		->args({"self"});
	using _method_283 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmova >;
	addExtern<DAS_CALL_METHOD(_method_283)>(*this,lib,"cmova",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmova >::invoke")
		->args({"self","reg","op"});
	using _method_284 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovae >;
	addExtern<DAS_CALL_METHOD(_method_284)>(*this,lib,"cmovae",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovae >::invoke")
		->args({"self","reg","op"});
	using _method_285 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovb >;
	addExtern<DAS_CALL_METHOD(_method_285)>(*this,lib,"cmovb",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovb >::invoke")
		->args({"self","reg","op"});
	using _method_286 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovbe >;
	addExtern<DAS_CALL_METHOD(_method_286)>(*this,lib,"cmovbe",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &,const Xbyak::Operand &),&Xbyak::CodeGenerator::cmovbe >::invoke")
		->args({"self","reg","op"});
}
}

