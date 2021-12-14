
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
void Module_Xbyak::initFunctions_8() {
#if USE_GENERATED
#if USE_GENERATED_SPLIT
#ifdef GLOBAL_NAMESPACE
using _pclmulhqhdq_method_1580 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pclmulhqhdq);
addExtern<DAS_CALL_METHOD(_pclmulhqhdq_method_1580)>(*this, lib, "pclmulhqhdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pclmulhqhdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pclmulhqlqdq_method_1582 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pclmulhqlqdq);
addExtern<DAS_CALL_METHOD(_pclmulhqlqdq_method_1582)>(*this, lib, "pclmulhqlqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pclmulhqlqdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pclmullqhdq_method_1584 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pclmullqhdq);
addExtern<DAS_CALL_METHOD(_pclmullqhdq_method_1584)>(*this, lib, "pclmullqhdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pclmullqhdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pclmullqlqdq_method_1586 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pclmullqlqdq);
addExtern<DAS_CALL_METHOD(_pclmullqlqdq_method_1586)>(*this, lib, "pclmullqlqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pclmullqlqdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pclmulqdq_method_1588 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pclmulqdq);
addExtern<DAS_CALL_METHOD(_pclmulqdq_method_1588)>(*this, lib, "pclmulqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pclmulqdq))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpeqb_method_1590 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpeqb);
addExtern<DAS_CALL_METHOD(_pcmpeqb_method_1590)>(*this, lib, "pcmpeqb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpeqb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpeqd_method_1592 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpeqd);
addExtern<DAS_CALL_METHOD(_pcmpeqd_method_1592)>(*this, lib, "pcmpeqd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpeqd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpeqq_method_1594 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpeqq);
addExtern<DAS_CALL_METHOD(_pcmpeqq_method_1594)>(*this, lib, "pcmpeqq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpeqq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpeqw_method_1596 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpeqw);
addExtern<DAS_CALL_METHOD(_pcmpeqw_method_1596)>(*this, lib, "pcmpeqw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpeqw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpestri_method_1598 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpestri);
addExtern<DAS_CALL_METHOD(_pcmpestri_method_1598)>(*this, lib, "pcmpestri",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpestri))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpestrm_method_1600 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpestrm);
addExtern<DAS_CALL_METHOD(_pcmpestrm_method_1600)>(*this, lib, "pcmpestrm",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpestrm))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpgtb_method_1602 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpgtb);
addExtern<DAS_CALL_METHOD(_pcmpgtb_method_1602)>(*this, lib, "pcmpgtb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpgtb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpgtd_method_1604 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpgtd);
addExtern<DAS_CALL_METHOD(_pcmpgtd_method_1604)>(*this, lib, "pcmpgtd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpgtd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpgtq_method_1606 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpgtq);
addExtern<DAS_CALL_METHOD(_pcmpgtq_method_1606)>(*this, lib, "pcmpgtq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpgtq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpgtw_method_1608 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpgtw);
addExtern<DAS_CALL_METHOD(_pcmpgtw_method_1608)>(*this, lib, "pcmpgtw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpgtw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpistri_method_1610 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpistri);
addExtern<DAS_CALL_METHOD(_pcmpistri_method_1610)>(*this, lib, "pcmpistri",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpistri))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pcmpistrm_method_1612 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pcmpistrm);
addExtern<DAS_CALL_METHOD(_pcmpistrm_method_1612)>(*this, lib, "pcmpistrm",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pcmpistrm))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pdep_method_1614 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pdep);
addExtern<DAS_CALL_METHOD(_pdep_method_1614)>(*this, lib, "pdep",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pdep))
	->args({"self","r1","r2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pext_method_1616 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pext);
addExtern<DAS_CALL_METHOD(_pext_method_1616)>(*this, lib, "pext",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pext))
	->args({"self","r1","r2","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pextrb_method_1618 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pextrb);
addExtern<DAS_CALL_METHOD(_pextrb_method_1618)>(*this, lib, "pextrb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pextrb))
	->args({"self","op","xmm","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pextrd_method_1620 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pextrd);
addExtern<DAS_CALL_METHOD(_pextrd_method_1620)>(*this, lib, "pextrd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pextrd))
	->args({"self","op","xmm","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pextrw_method_1622 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pextrw);
addExtern<DAS_CALL_METHOD(_pextrw_method_1622)>(*this, lib, "pextrw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pextrw))
	->args({"self","op","xmm","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phaddd_method_1624 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phaddd);
addExtern<DAS_CALL_METHOD(_phaddd_method_1624)>(*this, lib, "phaddd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phaddd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phaddsw_method_1626 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phaddsw);
addExtern<DAS_CALL_METHOD(_phaddsw_method_1626)>(*this, lib, "phaddsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phaddsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phaddw_method_1628 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phaddw);
addExtern<DAS_CALL_METHOD(_phaddw_method_1628)>(*this, lib, "phaddw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phaddw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phminposuw_method_1630 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phminposuw);
addExtern<DAS_CALL_METHOD(_phminposuw_method_1630)>(*this, lib, "phminposuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phminposuw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phsubd_method_1632 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phsubd);
addExtern<DAS_CALL_METHOD(_phsubd_method_1632)>(*this, lib, "phsubd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phsubd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phsubsw_method_1634 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phsubsw);
addExtern<DAS_CALL_METHOD(_phsubsw_method_1634)>(*this, lib, "phsubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phsubsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _phsubw_method_1636 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::phsubw);
addExtern<DAS_CALL_METHOD(_phsubw_method_1636)>(*this, lib, "phsubw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::phsubw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pinsrb_method_1638 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pinsrb);
addExtern<DAS_CALL_METHOD(_pinsrb_method_1638)>(*this, lib, "pinsrb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pinsrb))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pinsrd_method_1640 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pinsrd);
addExtern<DAS_CALL_METHOD(_pinsrd_method_1640)>(*this, lib, "pinsrd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pinsrd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pinsrw_method_1642 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pinsrw);
addExtern<DAS_CALL_METHOD(_pinsrw_method_1642)>(*this, lib, "pinsrw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pinsrw))
	->args({"self","mmx","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaddubsw_method_1644 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaddubsw);
addExtern<DAS_CALL_METHOD(_pmaddubsw_method_1644)>(*this, lib, "pmaddubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaddubsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaddwd_method_1646 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaddwd);
addExtern<DAS_CALL_METHOD(_pmaddwd_method_1646)>(*this, lib, "pmaddwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaddwd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxsb_method_1648 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxsb);
addExtern<DAS_CALL_METHOD(_pmaxsb_method_1648)>(*this, lib, "pmaxsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxsb))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxsd_method_1650 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxsd);
addExtern<DAS_CALL_METHOD(_pmaxsd_method_1650)>(*this, lib, "pmaxsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxsw_method_1652 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxsw);
addExtern<DAS_CALL_METHOD(_pmaxsw_method_1652)>(*this, lib, "pmaxsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxub_method_1654 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxub);
addExtern<DAS_CALL_METHOD(_pmaxub_method_1654)>(*this, lib, "pmaxub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxub))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxud_method_1656 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxud);
addExtern<DAS_CALL_METHOD(_pmaxud_method_1656)>(*this, lib, "pmaxud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxud))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmaxuw_method_1658 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmaxuw);
addExtern<DAS_CALL_METHOD(_pmaxuw_method_1658)>(*this, lib, "pmaxuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmaxuw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminsb_method_1660 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminsb);
addExtern<DAS_CALL_METHOD(_pminsb_method_1660)>(*this, lib, "pminsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminsb))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminsd_method_1662 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminsd);
addExtern<DAS_CALL_METHOD(_pminsd_method_1662)>(*this, lib, "pminsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminsd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminsw_method_1664 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminsw);
addExtern<DAS_CALL_METHOD(_pminsw_method_1664)>(*this, lib, "pminsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminub_method_1666 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminub);
addExtern<DAS_CALL_METHOD(_pminub_method_1666)>(*this, lib, "pminub",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminub))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminud_method_1668 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminud);
addExtern<DAS_CALL_METHOD(_pminud_method_1668)>(*this, lib, "pminud",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminud))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pminuw_method_1670 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pminuw);
addExtern<DAS_CALL_METHOD(_pminuw_method_1670)>(*this, lib, "pminuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pminuw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovmskb_method_1672 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovmskb);
addExtern<DAS_CALL_METHOD(_pmovmskb_method_1672)>(*this, lib, "pmovmskb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovmskb))
	->args({"self","reg","mmx"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxbd_method_1674 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxbd);
addExtern<DAS_CALL_METHOD(_pmovsxbd_method_1674)>(*this, lib, "pmovsxbd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxbd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxbq_method_1676 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxbq);
addExtern<DAS_CALL_METHOD(_pmovsxbq_method_1676)>(*this, lib, "pmovsxbq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxbq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxbw_method_1678 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxbw);
addExtern<DAS_CALL_METHOD(_pmovsxbw_method_1678)>(*this, lib, "pmovsxbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxbw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxdq_method_1680 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxdq);
addExtern<DAS_CALL_METHOD(_pmovsxdq_method_1680)>(*this, lib, "pmovsxdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxwd_method_1682 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxwd);
addExtern<DAS_CALL_METHOD(_pmovsxwd_method_1682)>(*this, lib, "pmovsxwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxwd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovsxwq_method_1684 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovsxwq);
addExtern<DAS_CALL_METHOD(_pmovsxwq_method_1684)>(*this, lib, "pmovsxwq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovsxwq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxbd_method_1686 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxbd);
addExtern<DAS_CALL_METHOD(_pmovzxbd_method_1686)>(*this, lib, "pmovzxbd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxbd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxbq_method_1688 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxbq);
addExtern<DAS_CALL_METHOD(_pmovzxbq_method_1688)>(*this, lib, "pmovzxbq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxbq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxbw_method_1690 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxbw);
addExtern<DAS_CALL_METHOD(_pmovzxbw_method_1690)>(*this, lib, "pmovzxbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxbw))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxdq_method_1692 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxdq);
addExtern<DAS_CALL_METHOD(_pmovzxdq_method_1692)>(*this, lib, "pmovzxdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxwd_method_1694 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxwd);
addExtern<DAS_CALL_METHOD(_pmovzxwd_method_1694)>(*this, lib, "pmovzxwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxwd))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmovzxwq_method_1696 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmovzxwq);
addExtern<DAS_CALL_METHOD(_pmovzxwq_method_1696)>(*this, lib, "pmovzxwq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmovzxwq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmuldq_method_1698 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmuldq);
addExtern<DAS_CALL_METHOD(_pmuldq_method_1698)>(*this, lib, "pmuldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmuldq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmulhrsw_method_1700 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmulhrsw);
addExtern<DAS_CALL_METHOD(_pmulhrsw_method_1700)>(*this, lib, "pmulhrsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmulhrsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmulhuw_method_1702 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmulhuw);
addExtern<DAS_CALL_METHOD(_pmulhuw_method_1702)>(*this, lib, "pmulhuw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmulhuw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmulhw_method_1704 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmulhw);
addExtern<DAS_CALL_METHOD(_pmulhw_method_1704)>(*this, lib, "pmulhw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmulhw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmulld_method_1706 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmulld);
addExtern<DAS_CALL_METHOD(_pmulld_method_1706)>(*this, lib, "pmulld",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmulld))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmullw_method_1708 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmullw);
addExtern<DAS_CALL_METHOD(_pmullw_method_1708)>(*this, lib, "pmullw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmullw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pmuludq_method_1710 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pmuludq);
addExtern<DAS_CALL_METHOD(_pmuludq_method_1710)>(*this, lib, "pmuludq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pmuludq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _popcnt_method_1712 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::popcnt);
addExtern<DAS_CALL_METHOD(_popcnt_method_1712)>(*this, lib, "popcnt",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::popcnt))
	->args({"self","reg","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _popf_method_1714 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::popf);
addExtern<DAS_CALL_METHOD(_popf_method_1714)>(*this, lib, "popf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::popf))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _por_method_1716 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::por);
addExtern<DAS_CALL_METHOD(_por_method_1716)>(*this, lib, "por",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::por))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetchnta_method_1718 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetchnta);
addExtern<DAS_CALL_METHOD(_prefetchnta_method_1718)>(*this, lib, "prefetchnta",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetchnta))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetcht0_method_1720 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetcht0);
addExtern<DAS_CALL_METHOD(_prefetcht0_method_1720)>(*this, lib, "prefetcht0",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetcht0))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetcht1_method_1722 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetcht1);
addExtern<DAS_CALL_METHOD(_prefetcht1_method_1722)>(*this, lib, "prefetcht1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetcht1))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetcht2_method_1724 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetcht2);
addExtern<DAS_CALL_METHOD(_prefetcht2_method_1724)>(*this, lib, "prefetcht2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetcht2))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetchw_method_1726 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetchw);
addExtern<DAS_CALL_METHOD(_prefetchw_method_1726)>(*this, lib, "prefetchw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetchw))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _prefetchwt1_method_1728 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::prefetchwt1);
addExtern<DAS_CALL_METHOD(_prefetchwt1_method_1728)>(*this, lib, "prefetchwt1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::prefetchwt1))
	->args({"self","addr"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psadbw_method_1730 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psadbw);
addExtern<DAS_CALL_METHOD(_psadbw_method_1730)>(*this, lib, "psadbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psadbw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pshufb_method_1732 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pshufb);
addExtern<DAS_CALL_METHOD(_pshufb_method_1732)>(*this, lib, "pshufb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pshufb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pshufd_method_1734 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pshufd);
addExtern<DAS_CALL_METHOD(_pshufd_method_1734)>(*this, lib, "pshufd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pshufd))
	->args({"self","mmx","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pshufhw_method_1736 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pshufhw);
addExtern<DAS_CALL_METHOD(_pshufhw_method_1736)>(*this, lib, "pshufhw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pshufhw))
	->args({"self","mmx","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pshuflw_method_1738 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pshuflw);
addExtern<DAS_CALL_METHOD(_pshuflw_method_1738)>(*this, lib, "pshuflw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pshuflw))
	->args({"self","mmx","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pshufw_method_1740 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pshufw);
addExtern<DAS_CALL_METHOD(_pshufw_method_1740)>(*this, lib, "pshufw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pshufw))
	->args({"self","mmx","op","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psignb_method_1742 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psignb);
addExtern<DAS_CALL_METHOD(_psignb_method_1742)>(*this, lib, "psignb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psignb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psignd_method_1744 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psignd);
addExtern<DAS_CALL_METHOD(_psignd_method_1744)>(*this, lib, "psignd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psignd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psignw_method_1746 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psignw);
addExtern<DAS_CALL_METHOD(_psignw_method_1746)>(*this, lib, "psignw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psignw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pslld_method_1748 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::pslld>;
addExtern<DAS_CALL_METHOD(_pslld_method_1748)>(*this, lib, "pslld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::pslld>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pslld_method_1750 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::pslld>;
addExtern<DAS_CALL_METHOD(_pslld_method_1750)>(*this, lib, "pslld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::pslld>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pslldq_method_1752 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pslldq);
addExtern<DAS_CALL_METHOD(_pslldq_method_1752)>(*this, lib, "pslldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pslldq))
	->args({"self","xmm","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psllq_method_1754 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psllq>;
addExtern<DAS_CALL_METHOD(_psllq_method_1754)>(*this, lib, "psllq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psllq>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psllq_method_1756 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psllq>;
addExtern<DAS_CALL_METHOD(_psllq_method_1756)>(*this, lib, "psllq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psllq>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psllw_method_1758 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psllw>;
addExtern<DAS_CALL_METHOD(_psllw_method_1758)>(*this, lib, "psllw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psllw>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psllw_method_1760 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psllw>;
addExtern<DAS_CALL_METHOD(_psllw_method_1760)>(*this, lib, "psllw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psllw>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrad_method_1762 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrad>;
addExtern<DAS_CALL_METHOD(_psrad_method_1762)>(*this, lib, "psrad",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrad>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrad_method_1764 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrad>;
addExtern<DAS_CALL_METHOD(_psrad_method_1764)>(*this, lib, "psrad",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrad>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psraw_method_1766 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psraw>;
addExtern<DAS_CALL_METHOD(_psraw_method_1766)>(*this, lib, "psraw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psraw>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psraw_method_1768 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psraw>;
addExtern<DAS_CALL_METHOD(_psraw_method_1768)>(*this, lib, "psraw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psraw>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrld_method_1770 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrld>;
addExtern<DAS_CALL_METHOD(_psrld_method_1770)>(*this, lib, "psrld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrld>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrld_method_1772 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrld>;
addExtern<DAS_CALL_METHOD(_psrld_method_1772)>(*this, lib, "psrld",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrld>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrldq_method_1774 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psrldq);
addExtern<DAS_CALL_METHOD(_psrldq_method_1774)>(*this, lib, "psrldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psrldq))
	->args({"self","xmm","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrlq_method_1776 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlq>;
addExtern<DAS_CALL_METHOD(_psrlq_method_1776)>(*this, lib, "psrlq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlq>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrlq_method_1778 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrlq>;
addExtern<DAS_CALL_METHOD(_psrlq_method_1778)>(*this, lib, "psrlq",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrlq>::invoke")
	->args({"self","mmx","imm8"})
;
#endif

#endif
#endif
}
}
