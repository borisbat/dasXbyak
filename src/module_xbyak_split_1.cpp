
#include "daScript/misc/platform.h"
#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "dasXbyak.h"
using namespace das;
#if USE_GENERATED
#define GLOBAL_NAMESPACE    1
#include "module_xbyak.h"
#endif
namespace das {
void Module_Xbyak::initFunctions_1() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _getAddress_method_180 = DAS_CALL_MEMBER(Xbyak::Label::getAddress);
addExtern<DAS_CALL_METHOD(_getAddress_method_180)>(*this, lib, "getAddress",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::Label::getAddress))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setProtectMode_method_182 = DAS_CALL_MEMBER(Xbyak::CodeArray::setProtectMode);
addExtern<DAS_CALL_METHOD(_setProtectMode_method_182)>(*this, lib, "setProtectMode",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setProtectMode))
	->args({"self","mode","throwException"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setProtectModeRE_method_184 = DAS_CALL_MEMBER(Xbyak::CodeArray::setProtectModeRE);
addExtern<DAS_CALL_METHOD(_setProtectModeRE_method_184)>(*this, lib, "setProtectModeRE",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setProtectModeRE))
	->args({"self","throwException"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setProtectModeRW_method_186 = DAS_CALL_MEMBER(Xbyak::CodeArray::setProtectModeRW);
addExtern<DAS_CALL_METHOD(_setProtectModeRW_method_186)>(*this, lib, "setProtectModeRW",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setProtectModeRW))
	->args({"self","throwException"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _resetSize_method_188 = DAS_CALL_MEMBER(Xbyak::CodeArray::resetSize);
addExtern<DAS_CALL_METHOD(_resetSize_method_188)>(*this, lib, "resetSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::resetSize))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _db_method_190 = das::das_call_member<void (Xbyak::CodeArray::*)(int),&Xbyak::CodeArray::db>;
addExtern<DAS_CALL_METHOD(_db_method_190)>(*this, lib, "db",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeArray::*)(int),&Xbyak::CodeArray::db>::invoke")
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _db_method_192 = das::das_call_member<void (Xbyak::CodeArray::*)(const uint8_t *, size_t),&Xbyak::CodeArray::db>;
addExtern<DAS_CALL_METHOD(_db_method_192)>(*this, lib, "db",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeArray::*)(const uint8_t *, size_t),&Xbyak::CodeArray::db>::invoke")
	->args({"self","code","codeSize"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _db_method_194 = das::das_call_member<void (Xbyak::CodeArray::*)(uint64_t, size_t),&Xbyak::CodeArray::db>;
addExtern<DAS_CALL_METHOD(_db_method_194)>(*this, lib, "db",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeArray::*)(uint64_t, size_t),&Xbyak::CodeArray::db>::invoke")
	->args({"self","code","codeSize"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dw_method_196 = DAS_CALL_MEMBER(Xbyak::CodeArray::dw);
addExtern<DAS_CALL_METHOD(_dw_method_196)>(*this, lib, "dw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dw))
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dd_method_198 = DAS_CALL_MEMBER(Xbyak::CodeArray::dd);
addExtern<DAS_CALL_METHOD(_dd_method_198)>(*this, lib, "dd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dd))
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dq_method_200 = DAS_CALL_MEMBER(Xbyak::CodeArray::dq);
addExtern<DAS_CALL_METHOD(_dq_method_200)>(*this, lib, "dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dq))
	->args({"self","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getSize_method_202 = DAS_CALL_MEMBER(Xbyak::CodeArray::getSize);
addExtern<DAS_CALL_METHOD(_getSize_method_202)>(*this, lib, "getSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::getSize))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setSize_method_204 = DAS_CALL_MEMBER(Xbyak::CodeArray::setSize);
addExtern<DAS_CALL_METHOD(_setSize_method_204)>(*this, lib, "setSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::setSize))
	->args({"self","size"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _dump_method_206 = DAS_CALL_MEMBER(Xbyak::CodeArray::dump);
addExtern<DAS_CALL_METHOD(_dump_method_206)>(*this, lib, "dump",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::dump))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rewrite_method_208 = DAS_CALL_MEMBER(Xbyak::CodeArray::rewrite);
addExtern<DAS_CALL_METHOD(_rewrite_method_208)>(*this, lib, "rewrite",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::rewrite))
	->args({"self","offset","disp","size"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _save_method_210 = DAS_CALL_MEMBER(Xbyak::CodeArray::save);
addExtern<DAS_CALL_METHOD(_save_method_210)>(*this, lib, "save",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::save))
	->args({"self","offset","val","size","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isAutoGrow_method_212 = DAS_CALL_MEMBER(Xbyak::CodeArray::isAutoGrow);
addExtern<DAS_CALL_METHOD(_isAutoGrow_method_212)>(*this, lib, "isAutoGrow",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::isAutoGrow))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isCalledCalcJmpAddress_method_214 = DAS_CALL_MEMBER(Xbyak::CodeArray::isCalledCalcJmpAddress);
addExtern<DAS_CALL_METHOD(_isCalledCalcJmpAddress_method_214)>(*this, lib, "isCalledCalcJmpAddress",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeArray::isCalledCalcJmpAddress))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rex_method_216 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rex);
addExtern<DAS_CALL_METHOD(_rex_method_216)>(*this, lib, "rex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rex))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getPP_method_218 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::getPP);
addExtern<DAS_CALL_METHOD(_getPP_method_218)>(*this, lib, "getPP",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::getPP))
	->args({"self","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _vex_method_220 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::vex);
addExtern<DAS_CALL_METHOD(_vex_method_220)>(*this, lib, "vex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::vex))
	->args({"self","reg","base","v","type","code","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifySAE_method_222 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifySAE);
addExtern<DAS_CALL_METHOD(_verifySAE_method_222)>(*this, lib, "verifySAE",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifySAE))
	->args({"self","r","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifyER_method_224 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifyER);
addExtern<DAS_CALL_METHOD(_verifyER_method_224)>(*this, lib, "verifyER",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifyER))
	->args({"self","r","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifyDuplicate_method_226 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifyDuplicate);
addExtern<DAS_CALL_METHOD(_verifyDuplicate_method_226)>(*this, lib, "verifyDuplicate",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifyDuplicate))
	->args({"self","a","b","c","err"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _evex_method_228 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::evex);
addExtern<DAS_CALL_METHOD(_evex_method_228)>(*this, lib, "evex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::evex))
	->args({"self","reg","base","v","type","code","x","b","aaa","VL","Hi16Vidx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setModRM_method_230 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setModRM);
addExtern<DAS_CALL_METHOD(_setModRM_method_230)>(*this, lib, "setModRM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setModRM))
	->args({"self","mod","r1","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setSIB_method_232 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setSIB);
addExtern<DAS_CALL_METHOD(_setSIB_method_232)>(*this, lib, "setSIB",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setSIB))
	->args({"self","e","reg","disp8N"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isInDisp16_method_234 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::isInDisp16);
addExtern<DAS_CALL_METHOD(_isInDisp16_method_234)>(*this, lib, "isInDisp16",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::isInDisp16))
	->args({"self","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opModR_method_236 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opModR);
addExtern<DAS_CALL_METHOD(_opModR_method_236)>(*this, lib, "opModR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opModR))
	->args({"self","reg1","reg2","code0","code1","code2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opModM_method_238 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opModM);
addExtern<DAS_CALL_METHOD(_opModM_method_238)>(*this, lib, "opModM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opModM))
	->args({"self","addr","reg","code0","code1","code2","immSize"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opLoadSeg_method_240 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opLoadSeg);
addExtern<DAS_CALL_METHOD(_opLoadSeg_method_240)>(*this, lib, "opLoadSeg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opLoadSeg))
	->args({"self","addr","reg","code0","code1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMIB_method_242 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMIB);
addExtern<DAS_CALL_METHOD(_opMIB_method_242)>(*this, lib, "opMIB",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMIB))
	->args({"self","addr","reg","code0","code1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _makeJmp_method_244 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::makeJmp);
addExtern<DAS_CALL_METHOD(_makeJmp_method_244)>(*this, lib, "makeJmp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::makeJmp))
	->args({"self","disp","type","shortCode","longCode","longPref"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _isNEAR_method_246 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::isNEAR);
addExtern<DAS_CALL_METHOD(_isNEAR_method_246)>(*this, lib, "isNEAR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::isNEAR))
	->args({"self","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opJmpAbs_method_248 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opJmpAbs);
addExtern<DAS_CALL_METHOD(_opJmpAbs_method_248)>(*this, lib, "opJmpAbs",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opJmpAbs))
	->args({"self","addr","type","shortCode","longCode","longPref"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAddr_method_250 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAddr);
addExtern<DAS_CALL_METHOD(_opAddr_method_250)>(*this, lib, "opAddr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAddr))
	->args({"self","addr","reg","immSize","disp8N","permitVisb"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGen_method_252 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGen);
addExtern<DAS_CALL_METHOD(_opGen_method_252)>(*this, lib, "opGen",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGen))
	->args({"self","reg","op","code","pref","isValid","imm8","preCode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMMX_IMM_method_254 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMMX_IMM);
addExtern<DAS_CALL_METHOD(_opMMX_IMM_method_254)>(*this, lib, "opMMX_IMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMMX_IMM))
	->args({"self","mmx","imm8","code","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMMX_method_256 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMMX);
addExtern<DAS_CALL_METHOD(_opMMX_method_256)>(*this, lib, "opMMX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMMX))
	->args({"self","mmx","op","code","pref","imm8","preCode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMovXMM_method_258 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMovXMM);
addExtern<DAS_CALL_METHOD(_opMovXMM_method_258)>(*this, lib, "opMovXMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMovXMM))
	->args({"self","op1","op2","code","pref"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opExt_method_260 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opExt);
addExtern<DAS_CALL_METHOD(_opExt_method_260)>(*this, lib, "opExt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opExt))
	->args({"self","op","mmx","code","imm","hasMMX2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opR_ModM_method_262 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opR_ModM);
addExtern<DAS_CALL_METHOD(_opR_ModM_method_262)>(*this, lib, "opR_ModM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opR_ModM))
	->args({"self","op","bit","ext","code0","code1","code2","disableRex","immSize"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opShift_method_264 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int, int),&Xbyak::CodeGenerator::opShift>;
addExtern<DAS_CALL_METHOD(_opShift_method_264)>(*this, lib, "opShift",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int, int),&Xbyak::CodeGenerator::opShift>::invoke")
	->args({"self","op","imm","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opShift_method_266 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &, int),&Xbyak::CodeGenerator::opShift>;
addExtern<DAS_CALL_METHOD(_opShift_method_266)>(*this, lib, "opShift",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &, int),&Xbyak::CodeGenerator::opShift>::invoke")
	->args({"self","op","_cl","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opModRM_method_268 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opModRM);
addExtern<DAS_CALL_METHOD(_opModRM_method_268)>(*this, lib, "opModRM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opModRM))
	->args({"self","op1","op2","condR","condM","code0","code1","code2","immSize"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opShxd_method_270 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opShxd);
addExtern<DAS_CALL_METHOD(_opShxd_method_270)>(*this, lib, "opShxd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opShxd))
	->args({"self","op","reg","imm","code","_cl"})
		->arg_init(5,make_smart<ExprConstPtr>())
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opRM_RM_method_272 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opRM_RM);
addExtern<DAS_CALL_METHOD(_opRM_RM_method_272)>(*this, lib, "opRM_RM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opRM_RM))
	->args({"self","op1","op2","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opRM_I_method_274 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opRM_I);
addExtern<DAS_CALL_METHOD(_opRM_I_method_274)>(*this, lib, "opRM_I",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opRM_I))
	->args({"self","op","imm","code","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opIncDec_method_276 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opIncDec);
addExtern<DAS_CALL_METHOD(_opIncDec_method_276)>(*this, lib, "opIncDec",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opIncDec))
	->args({"self","op","code","ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opPushPop_method_278 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opPushPop);
addExtern<DAS_CALL_METHOD(_opPushPop_method_278)>(*this, lib, "opPushPop",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opPushPop))
	->args({"self","op","code","ext","alt"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _verifyMemHasSize_method_280 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::verifyMemHasSize);
addExtern<DAS_CALL_METHOD(_verifyMemHasSize_method_280)>(*this, lib, "verifyMemHasSize",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::verifyMemHasSize))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mov_imm_method_282 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mov_imm);
addExtern<DAS_CALL_METHOD(_mov_imm_method_282)>(*this, lib, "mov_imm",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mov_imm))
	->args({"self","reg","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opMovxx_method_284 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opMovxx);
addExtern<DAS_CALL_METHOD(_opMovxx_method_284)>(*this, lib, "opMovxx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opMovxx))
	->args({"self","reg","op","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opFpuMem_method_286 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opFpuMem);
addExtern<DAS_CALL_METHOD(_opFpuMem_method_286)>(*this, lib, "opFpuMem",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opFpuMem))
	->args({"self","addr","m16","m32","m64","ext","m64ext"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opFpuFpu_method_288 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opFpuFpu);
addExtern<DAS_CALL_METHOD(_opFpuFpu_method_288)>(*this, lib, "opFpuFpu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opFpuFpu))
	->args({"self","reg1","reg2","code1","code2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opFpu_method_290 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opFpu);
addExtern<DAS_CALL_METHOD(_opFpu_method_290)>(*this, lib, "opFpu",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opFpu))
	->args({"self","reg","code1","code2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opVex_method_292 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opVex);
addExtern<DAS_CALL_METHOD(_opVex_method_292)>(*this, lib, "opVex",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opVex))
	->args({"self","r","p1","op2","type","code","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGpr_method_294 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGpr);
addExtern<DAS_CALL_METHOD(_opGpr_method_294)>(*this, lib, "opGpr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGpr))
	->args({"self","r","op1","op2","type","code","isR_R_RM","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAVX_X_X_XM_method_296 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAVX_X_X_XM);
addExtern<DAS_CALL_METHOD(_opAVX_X_X_XM_method_296)>(*this, lib, "opAVX_X_X_XM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAVX_X_X_XM))
	->args({"self","x1","op1","op2","type","code0","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAVX_K_X_XM_method_298 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAVX_K_X_XM);
addExtern<DAS_CALL_METHOD(_opAVX_K_X_XM_method_298)>(*this, lib, "opAVX_K_X_XM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAVX_K_X_XM))
	->args({"self","k","x2","op3","type","code0","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkCvt1_method_300 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkCvt1);
addExtern<DAS_CALL_METHOD(_checkCvt1_method_300)>(*this, lib, "checkCvt1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkCvt1))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkCvt2_method_302 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkCvt2);
addExtern<DAS_CALL_METHOD(_checkCvt2_method_302)>(*this, lib, "checkCvt2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkCvt2))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt_method_304 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt);
addExtern<DAS_CALL_METHOD(_opCvt_method_304)>(*this, lib, "opCvt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt))
	->args({"self","x","op","type","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt2_method_306 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt2);
addExtern<DAS_CALL_METHOD(_opCvt2_method_306)>(*this, lib, "opCvt2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt2))
	->args({"self","x","op","type","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt3_method_308 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt3);
addExtern<DAS_CALL_METHOD(_opCvt3_method_308)>(*this, lib, "opCvt3",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt3))
	->args({"self","x1","x2","op","type","type64","type32","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkCvt4_method_310 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkCvt4);
addExtern<DAS_CALL_METHOD(_checkCvt4_method_310)>(*this, lib, "checkCvt4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkCvt4))
	->args({"self","x","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opCvt5_method_312 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opCvt5);
addExtern<DAS_CALL_METHOD(_opCvt5_method_312)>(*this, lib, "opCvt5",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opCvt5))
	->args({"self","x","op","type","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _cvtIdx0_method_314 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::cvtIdx0);
addExtern<DAS_CALL_METHOD(_cvtIdx0_method_314), SimNode_ExtFuncCallRef>(*this, lib, "cvtIdx0",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::cvtIdx0))
	->args({"self","x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAVX_X_XM_IMM_method_316 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAVX_X_XM_IMM);
addExtern<DAS_CALL_METHOD(_opAVX_X_XM_IMM_method_316)>(*this, lib, "opAVX_X_XM_IMM",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAVX_X_XM_IMM))
	->args({"self","x","op","type","code","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opSp1_method_318 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opSp1);
addExtern<DAS_CALL_METHOD(_opSp1_method_318)>(*this, lib, "opSp1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opSp1))
	->args({"self","reg","op","pref","code0","code1"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGather_method_320 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGather);
addExtern<DAS_CALL_METHOD(_opGather_method_320)>(*this, lib, "opGather",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGather))
	->args({"self","x1","addr","x2","type","code","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _checkGather2_method_322 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::checkGather2);
addExtern<DAS_CALL_METHOD(_checkGather2_method_322)>(*this, lib, "checkGather2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::checkGather2))
	->args({"self","x1","x2","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGather2_method_324 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGather2);
addExtern<DAS_CALL_METHOD(_opGather2_method_324)>(*this, lib, "opGather2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGather2))
	->args({"self","x","addr","type","code","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opVmov_method_326 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opVmov);
addExtern<DAS_CALL_METHOD(_opVmov_method_326)>(*this, lib, "opVmov",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opVmov))
	->args({"self","op","x","type","code","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opGatherFetch_method_328 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opGatherFetch);
addExtern<DAS_CALL_METHOD(_opGatherFetch_method_328)>(*this, lib, "opGatherFetch",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opGatherFetch))
	->args({"self","addr","x","type","code","kind"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opVnni_method_330 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opVnni);
addExtern<DAS_CALL_METHOD(_opVnni_method_330)>(*this, lib, "opVnni",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opVnni))
	->args({"self","x1","x2","op","type","code0","encoding"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opInOut_method_332 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::opInOut>;
addExtern<DAS_CALL_METHOD(_opInOut_method_332)>(*this, lib, "opInOut",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &, uint8_t),&Xbyak::CodeGenerator::opInOut>::invoke")
	->args({"self","a","d","code"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opInOut_method_334 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t, uint8_t),&Xbyak::CodeGenerator::opInOut>;
addExtern<DAS_CALL_METHOD(_opInOut_method_334)>(*this, lib, "opInOut",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, uint8_t, uint8_t),&Xbyak::CodeGenerator::opInOut>::invoke")
	->args({"self","a","code","v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _opAMX_method_336 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::opAMX);
addExtern<DAS_CALL_METHOD(_opAMX_method_336)>(*this, lib, "opAMX",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::opAMX))
	->args({"self","t1","addr","type","code0"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _getVersion_method_338 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::getVersion);
addExtern<DAS_CALL_METHOD(_getVersion_method_338)>(*this, lib, "getVersion",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::getVersion))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _inLocalLabel_method_340 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::inLocalLabel);
addExtern<DAS_CALL_METHOD(_inLocalLabel_method_340)>(*this, lib, "inLocalLabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::inLocalLabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _outLocalLabel_method_342 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::outLocalLabel);
addExtern<DAS_CALL_METHOD(_outLocalLabel_method_342)>(*this, lib, "outLocalLabel",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::outLocalLabel))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _assignL_method_344 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::assignL);
addExtern<DAS_CALL_METHOD(_assignL_method_344)>(*this, lib, "assignL",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::assignL))
	->args({"self","dst","src"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _putL_method_346 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::putL>;
addExtern<DAS_CALL_METHOD(_putL_method_346)>(*this, lib, "putL",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::putL>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _putL_method_348 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::putL>;
addExtern<DAS_CALL_METHOD(_putL_method_348)>(*this, lib, "putL",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::putL>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setDefaultJmpNEAR_method_350 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setDefaultJmpNEAR);
addExtern<DAS_CALL_METHOD(_setDefaultJmpNEAR_method_350)>(*this, lib, "setDefaultJmpNEAR",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setDefaultJmpNEAR))
	->args({"self","isNear"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_352 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_352)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_354 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_354)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_356 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_356)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_358 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_358)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","label","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _jmp_method_360 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>;
addExtern<DAS_CALL_METHOD(_jmp_method_360)>(*this, lib, "jmp",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *, Xbyak::CodeGenerator::LabelType),&Xbyak::CodeGenerator::jmp>::invoke")
	->args({"self","addr","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_362 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_362)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_364 = das::das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_364)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(std::string),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_366 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_366)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const char *),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_368 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_368)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Label &),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","label"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _call_method_370 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::call>;
addExtern<DAS_CALL_METHOD(_call_method_370)>(*this, lib, "call",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const void *),&Xbyak::CodeGenerator::call>::invoke")
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _test_method_372 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::test>;
addExtern<DAS_CALL_METHOD(_test_method_372)>(*this, lib, "test",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg &),&Xbyak::CodeGenerator::test>::invoke")
	->args({"self","op","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _test_method_374 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::test>;
addExtern<DAS_CALL_METHOD(_test_method_374)>(*this, lib, "test",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::test>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _imul_method_376 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>;
addExtern<DAS_CALL_METHOD(_imul_method_376)>(*this, lib, "imul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &),&Xbyak::CodeGenerator::imul>::invoke")
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _imul_method_378 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &, int),&Xbyak::CodeGenerator::imul>;
addExtern<DAS_CALL_METHOD(_imul_method_378)>(*this, lib, "imul",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Operand &, int),&Xbyak::CodeGenerator::imul>::invoke")
	->args({"self","reg","op","imm"})
;
#endif

#endif
#endif
}
}
