
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
void Module_Xbyak::initFunctions_7() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _maxsd_method_1380 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maxsd);
addExtern<DAS_CALL_METHOD(_maxsd_method_1380)>(*this, lib, "maxsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maxsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _maxss_method_1382 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::maxss);
addExtern<DAS_CALL_METHOD(_maxss_method_1382)>(*this, lib, "maxss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::maxss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mfence_method_1384 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mfence);
addExtern<DAS_CALL_METHOD(_mfence_method_1384)>(*this, lib, "mfence",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mfence))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _minpd_method_1386 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::minpd);
addExtern<DAS_CALL_METHOD(_minpd_method_1386)>(*this, lib, "minpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::minpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _minps_method_1388 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::minps);
addExtern<DAS_CALL_METHOD(_minps_method_1388)>(*this, lib, "minps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::minps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _minsd_method_1390 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::minsd);
addExtern<DAS_CALL_METHOD(_minsd_method_1390)>(*this, lib, "minsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::minsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _minss_method_1392 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::minss);
addExtern<DAS_CALL_METHOD(_minss_method_1392)>(*this, lib, "minss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::minss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _monitor_method_1394 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::monitor);
addExtern<DAS_CALL_METHOD(_monitor_method_1394)>(*this, lib, "monitor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::monitor))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _monitorx_method_1396 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::monitorx);
addExtern<DAS_CALL_METHOD(_monitorx_method_1396)>(*this, lib, "monitorx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::monitorx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movapd_method_1398 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movapd>;
addExtern<DAS_CALL_METHOD(_movapd_method_1398)>(*this, lib, "movapd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movapd>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movapd_method_1400 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movapd>;
addExtern<DAS_CALL_METHOD(_movapd_method_1400)>(*this, lib, "movapd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movapd>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movaps_method_1402 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movaps>;
addExtern<DAS_CALL_METHOD(_movaps_method_1402)>(*this, lib, "movaps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movaps>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movaps_method_1404 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movaps>;
addExtern<DAS_CALL_METHOD(_movaps_method_1404)>(*this, lib, "movaps",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movaps>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movbe_method_1406 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Reg &),&Xbyak::CodeGenerator::movbe>;
addExtern<DAS_CALL_METHOD(_movbe_method_1406)>(*this, lib, "movbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Reg &),&Xbyak::CodeGenerator::movbe>::invoke")
	->args({"self","addr","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movbe_method_1408 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Address &),&Xbyak::CodeGenerator::movbe>;
addExtern<DAS_CALL_METHOD(_movbe_method_1408)>(*this, lib, "movbe",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Address &),&Xbyak::CodeGenerator::movbe>::invoke")
	->args({"self","reg","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movd_method_1410 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd>;
addExtern<DAS_CALL_METHOD(_movd_method_1410)>(*this, lib, "movd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd>::invoke")
	->args({"self","addr","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movd_method_1412 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Address &),&Xbyak::CodeGenerator::movd>;
addExtern<DAS_CALL_METHOD(_movd_method_1412)>(*this, lib, "movd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Address &),&Xbyak::CodeGenerator::movd>::invoke")
	->args({"self","mmx","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movd_method_1414 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::movd>;
addExtern<DAS_CALL_METHOD(_movd_method_1414)>(*this, lib, "movd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Reg32 &),&Xbyak::CodeGenerator::movd>::invoke")
	->args({"self","mmx","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movd_method_1416 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd>;
addExtern<DAS_CALL_METHOD(_movd_method_1416)>(*this, lib, "movd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg32 &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movd>::invoke")
	->args({"self","reg","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movddup_method_1418 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movddup);
addExtern<DAS_CALL_METHOD(_movddup_method_1418)>(*this, lib, "movddup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movddup))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movdq2q_method_1420 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movdq2q);
addExtern<DAS_CALL_METHOD(_movdq2q_method_1420)>(*this, lib, "movdq2q",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movdq2q))
	->args({"self","mmx","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movdqa_method_1422 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqa>;
addExtern<DAS_CALL_METHOD(_movdqa_method_1422)>(*this, lib, "movdqa",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqa>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movdqa_method_1424 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqa>;
addExtern<DAS_CALL_METHOD(_movdqa_method_1424)>(*this, lib, "movdqa",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqa>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movdqu_method_1426 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqu>;
addExtern<DAS_CALL_METHOD(_movdqu_method_1426)>(*this, lib, "movdqu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movdqu>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movdqu_method_1428 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqu>;
addExtern<DAS_CALL_METHOD(_movdqu_method_1428)>(*this, lib, "movdqu",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movdqu>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movhlps_method_1430 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movhlps);
addExtern<DAS_CALL_METHOD(_movhlps_method_1430)>(*this, lib, "movhlps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movhlps))
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movhpd_method_1432 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movhpd);
addExtern<DAS_CALL_METHOD(_movhpd_method_1432)>(*this, lib, "movhpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movhpd))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movhps_method_1434 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movhps);
addExtern<DAS_CALL_METHOD(_movhps_method_1434)>(*this, lib, "movhps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movhps))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movlhps_method_1436 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movlhps);
addExtern<DAS_CALL_METHOD(_movlhps_method_1436)>(*this, lib, "movlhps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movlhps))
	->args({"self","reg1","reg2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movlpd_method_1438 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movlpd);
addExtern<DAS_CALL_METHOD(_movlpd_method_1438)>(*this, lib, "movlpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movlpd))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movlps_method_1440 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movlps);
addExtern<DAS_CALL_METHOD(_movlps_method_1440)>(*this, lib, "movlps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movlps))
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movmskpd_method_1442 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movmskpd);
addExtern<DAS_CALL_METHOD(_movmskpd_method_1442)>(*this, lib, "movmskpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movmskpd))
	->args({"self","reg","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movmskps_method_1444 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movmskps);
addExtern<DAS_CALL_METHOD(_movmskps_method_1444)>(*this, lib, "movmskps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movmskps))
	->args({"self","reg","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movntdq_method_1446 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movntdq);
addExtern<DAS_CALL_METHOD(_movntdq_method_1446)>(*this, lib, "movntdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movntdq))
	->args({"self","addr","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movntdqa_method_1448 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movntdqa);
addExtern<DAS_CALL_METHOD(_movntdqa_method_1448)>(*this, lib, "movntdqa",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movntdqa))
	->args({"self","xmm","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movnti_method_1450 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movnti);
addExtern<DAS_CALL_METHOD(_movnti_method_1450)>(*this, lib, "movnti",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movnti))
	->args({"self","addr","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movntpd_method_1452 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movntpd);
addExtern<DAS_CALL_METHOD(_movntpd_method_1452)>(*this, lib, "movntpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movntpd))
	->args({"self","addr","reg"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movntps_method_1454 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movntps);
addExtern<DAS_CALL_METHOD(_movntps_method_1454)>(*this, lib, "movntps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movntps))
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movntq_method_1456 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movntq);
addExtern<DAS_CALL_METHOD(_movntq_method_1456)>(*this, lib, "movntq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movntq))
	->args({"self","addr","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movq_method_1458 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq>;
addExtern<DAS_CALL_METHOD(_movq_method_1458)>(*this, lib, "movq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Mmx &),&Xbyak::CodeGenerator::movq>::invoke")
	->args({"self","addr","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movq_method_1460 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movq>;
addExtern<DAS_CALL_METHOD(_movq_method_1460)>(*this, lib, "movq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movq>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movq2dq_method_1462 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movq2dq);
addExtern<DAS_CALL_METHOD(_movq2dq_method_1462)>(*this, lib, "movq2dq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movq2dq))
	->args({"self","xmm","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsb_method_1464 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsb);
addExtern<DAS_CALL_METHOD(_movsb_method_1464)>(*this, lib, "movsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsd_method_1466 = das::das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsd>;
addExtern<DAS_CALL_METHOD(_movsd_method_1466)>(*this, lib, "movsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(),&Xbyak::CodeGenerator::movsd>::invoke")
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsd_method_1468 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movsd>;
addExtern<DAS_CALL_METHOD(_movsd_method_1468)>(*this, lib, "movsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movsd>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsd_method_1470 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movsd>;
addExtern<DAS_CALL_METHOD(_movsd_method_1470)>(*this, lib, "movsd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movsd>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movshdup_method_1472 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movshdup);
addExtern<DAS_CALL_METHOD(_movshdup_method_1472)>(*this, lib, "movshdup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movshdup))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsldup_method_1474 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsldup);
addExtern<DAS_CALL_METHOD(_movsldup_method_1474)>(*this, lib, "movsldup",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsldup))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movss_method_1476 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movss>;
addExtern<DAS_CALL_METHOD(_movss_method_1476)>(*this, lib, "movss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movss>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movss_method_1478 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movss>;
addExtern<DAS_CALL_METHOD(_movss_method_1478)>(*this, lib, "movss",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movss>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsw_method_1480 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsw);
addExtern<DAS_CALL_METHOD(_movsw_method_1480)>(*this, lib, "movsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movsx_method_1482 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movsx);
addExtern<DAS_CALL_METHOD(_movsx_method_1482)>(*this, lib, "movsx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movsx))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movupd_method_1484 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movupd>;
addExtern<DAS_CALL_METHOD(_movupd_method_1484)>(*this, lib, "movupd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movupd>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movupd_method_1486 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movupd>;
addExtern<DAS_CALL_METHOD(_movupd_method_1486)>(*this, lib, "movupd",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movupd>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movups_method_1488 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movups>;
addExtern<DAS_CALL_METHOD(_movups_method_1488)>(*this, lib, "movups",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Address &, const Xbyak::Xmm &),&Xbyak::CodeGenerator::movups>::invoke")
	->args({"self","addr","xmm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movups_method_1490 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movups>;
addExtern<DAS_CALL_METHOD(_movups_method_1490)>(*this, lib, "movups",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &, const Xbyak::Operand &),&Xbyak::CodeGenerator::movups>::invoke")
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _movzx_method_1492 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::movzx);
addExtern<DAS_CALL_METHOD(_movzx_method_1492)>(*this, lib, "movzx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::movzx))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mpsadbw_method_1494 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mpsadbw);
addExtern<DAS_CALL_METHOD(_mpsadbw_method_1494)>(*this, lib, "mpsadbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mpsadbw))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mul_method_1496 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mul);
addExtern<DAS_CALL_METHOD(_mul_method_1496)>(*this, lib, "mul",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mul))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mulpd_method_1498 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mulpd);
addExtern<DAS_CALL_METHOD(_mulpd_method_1498)>(*this, lib, "mulpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mulpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mulps_method_1500 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mulps);
addExtern<DAS_CALL_METHOD(_mulps_method_1500)>(*this, lib, "mulps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mulps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mulsd_method_1502 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mulsd);
addExtern<DAS_CALL_METHOD(_mulsd_method_1502)>(*this, lib, "mulsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mulsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mulss_method_1504 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mulss);
addExtern<DAS_CALL_METHOD(_mulss_method_1504)>(*this, lib, "mulss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mulss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mulx_method_1506 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mulx);
addExtern<DAS_CALL_METHOD(_mulx_method_1506)>(*this, lib, "mulx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mulx))
	->args({"self","r1","r2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mwait_method_1508 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mwait);
addExtern<DAS_CALL_METHOD(_mwait_method_1508)>(*this, lib, "mwait",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mwait))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _mwaitx_method_1510 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::mwaitx);
addExtern<DAS_CALL_METHOD(_mwaitx_method_1510)>(*this, lib, "mwaitx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::mwaitx))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _neg_method_1512 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::neg);
addExtern<DAS_CALL_METHOD(_neg_method_1512)>(*this, lib, "neg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::neg))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _not__method_1514 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::not_);
addExtern<DAS_CALL_METHOD(_not__method_1514)>(*this, lib, "not_",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::not_))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _or__method_1516 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::or_>;
addExtern<DAS_CALL_METHOD(_or__method_1516)>(*this, lib, "or_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::or_>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _or__method_1518 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::or_>;
addExtern<DAS_CALL_METHOD(_or__method_1518)>(*this, lib, "or_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::or_>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _orpd_method_1520 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::orpd);
addExtern<DAS_CALL_METHOD(_orpd_method_1520)>(*this, lib, "orpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::orpd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _orps_method_1522 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::orps);
addExtern<DAS_CALL_METHOD(_orps_method_1522)>(*this, lib, "orps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::orps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _out__method_1524 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &),&Xbyak::CodeGenerator::out_>;
addExtern<DAS_CALL_METHOD(_out__method_1524)>(*this, lib, "out_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Reg &, const Xbyak::Reg &),&Xbyak::CodeGenerator::out_>::invoke")
	->args({"self","d","a"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _out__method_1526 = das::das_call_member<void (Xbyak::CodeGenerator::*)(uint8_t, const Xbyak::Reg &),&Xbyak::CodeGenerator::out_>;
addExtern<DAS_CALL_METHOD(_out__method_1526)>(*this, lib, "out_",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(uint8_t, const Xbyak::Reg &),&Xbyak::CodeGenerator::out_>::invoke")
	->args({"self","v","a"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _outsb_method_1528 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::outsb);
addExtern<DAS_CALL_METHOD(_outsb_method_1528)>(*this, lib, "outsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::outsb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _outsd_method_1530 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::outsd);
addExtern<DAS_CALL_METHOD(_outsd_method_1530)>(*this, lib, "outsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::outsd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _outsw_method_1532 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::outsw);
addExtern<DAS_CALL_METHOD(_outsw_method_1532)>(*this, lib, "outsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::outsw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pabsb_method_1534 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pabsb);
addExtern<DAS_CALL_METHOD(_pabsb_method_1534)>(*this, lib, "pabsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pabsb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pabsd_method_1536 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pabsd);
addExtern<DAS_CALL_METHOD(_pabsd_method_1536)>(*this, lib, "pabsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pabsd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pabsw_method_1538 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pabsw);
addExtern<DAS_CALL_METHOD(_pabsw_method_1538)>(*this, lib, "pabsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pabsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _packssdw_method_1540 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::packssdw);
addExtern<DAS_CALL_METHOD(_packssdw_method_1540)>(*this, lib, "packssdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::packssdw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _packsswb_method_1542 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::packsswb);
addExtern<DAS_CALL_METHOD(_packsswb_method_1542)>(*this, lib, "packsswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::packsswb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _packusdw_method_1544 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::packusdw);
addExtern<DAS_CALL_METHOD(_packusdw_method_1544)>(*this, lib, "packusdw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::packusdw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _packuswb_method_1546 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::packuswb);
addExtern<DAS_CALL_METHOD(_packuswb_method_1546)>(*this, lib, "packuswb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::packuswb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddb_method_1548 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddb);
addExtern<DAS_CALL_METHOD(_paddb_method_1548)>(*this, lib, "paddb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddd_method_1550 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddd);
addExtern<DAS_CALL_METHOD(_paddd_method_1550)>(*this, lib, "paddd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddq_method_1552 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddq);
addExtern<DAS_CALL_METHOD(_paddq_method_1552)>(*this, lib, "paddq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddsb_method_1554 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddsb);
addExtern<DAS_CALL_METHOD(_paddsb_method_1554)>(*this, lib, "paddsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddsb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddsw_method_1556 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddsw);
addExtern<DAS_CALL_METHOD(_paddsw_method_1556)>(*this, lib, "paddsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddusb_method_1558 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddusb);
addExtern<DAS_CALL_METHOD(_paddusb_method_1558)>(*this, lib, "paddusb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddusb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddusw_method_1560 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddusw);
addExtern<DAS_CALL_METHOD(_paddusw_method_1560)>(*this, lib, "paddusw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddusw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _paddw_method_1562 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::paddw);
addExtern<DAS_CALL_METHOD(_paddw_method_1562)>(*this, lib, "paddw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::paddw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _palignr_method_1564 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::palignr);
addExtern<DAS_CALL_METHOD(_palignr_method_1564)>(*this, lib, "palignr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::palignr))
	->args({"self","mmx","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pand_method_1566 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pand);
addExtern<DAS_CALL_METHOD(_pand_method_1566)>(*this, lib, "pand",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pand))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pandn_method_1568 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pandn);
addExtern<DAS_CALL_METHOD(_pandn_method_1568)>(*this, lib, "pandn",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pandn))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pause_method_1570 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pause);
addExtern<DAS_CALL_METHOD(_pause_method_1570)>(*this, lib, "pause",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pause))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pavgb_method_1572 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pavgb);
addExtern<DAS_CALL_METHOD(_pavgb_method_1572)>(*this, lib, "pavgb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pavgb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pavgw_method_1574 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pavgw);
addExtern<DAS_CALL_METHOD(_pavgw_method_1574)>(*this, lib, "pavgw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pavgw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pblendvb_method_1576 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pblendvb);
addExtern<DAS_CALL_METHOD(_pblendvb_method_1576)>(*this, lib, "pblendvb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pblendvb))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pblendw_method_1578 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pblendw);
addExtern<DAS_CALL_METHOD(_pblendw_method_1578)>(*this, lib, "pblendw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pblendw))
	->args({"self","xmm","op","imm"})
;
#endif

#endif
#endif
}
}
