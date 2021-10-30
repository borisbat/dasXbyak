
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
void Module_Xbyak::initFunctions_4() {
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
#ifdef GLOBAL_NAMESPACE
using _psrlw_method_1780 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlw>;
addExtern<DAS_CALL_METHOD(_psrlw_method_1780)>(*this, lib, "psrlw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, const Xbyak::Operand &),&Xbyak::CodeGenerator::psrlw>::invoke")
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psrlw_method_1782 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrlw>;
addExtern<DAS_CALL_METHOD(_psrlw_method_1782)>(*this, lib, "psrlw",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Mmx &, int),&Xbyak::CodeGenerator::psrlw>::invoke")
	->args({"self","mmx","imm8"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubb_method_1784 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubb);
addExtern<DAS_CALL_METHOD(_psubb_method_1784)>(*this, lib, "psubb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubd_method_1786 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubd);
addExtern<DAS_CALL_METHOD(_psubd_method_1786)>(*this, lib, "psubd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubq_method_1788 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubq);
addExtern<DAS_CALL_METHOD(_psubq_method_1788)>(*this, lib, "psubq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubsb_method_1790 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubsb);
addExtern<DAS_CALL_METHOD(_psubsb_method_1790)>(*this, lib, "psubsb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubsb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubsw_method_1792 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubsw);
addExtern<DAS_CALL_METHOD(_psubsw_method_1792)>(*this, lib, "psubsw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubsw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubusb_method_1794 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubusb);
addExtern<DAS_CALL_METHOD(_psubusb_method_1794)>(*this, lib, "psubusb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubusb))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubusw_method_1796 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubusw);
addExtern<DAS_CALL_METHOD(_psubusw_method_1796)>(*this, lib, "psubusw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubusw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _psubw_method_1798 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::psubw);
addExtern<DAS_CALL_METHOD(_psubw_method_1798)>(*this, lib, "psubw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::psubw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ptest_method_1800 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ptest);
addExtern<DAS_CALL_METHOD(_ptest_method_1800)>(*this, lib, "ptest",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ptest))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhbw_method_1802 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhbw);
addExtern<DAS_CALL_METHOD(_punpckhbw_method_1802)>(*this, lib, "punpckhbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhbw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhdq_method_1804 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhdq);
addExtern<DAS_CALL_METHOD(_punpckhdq_method_1804)>(*this, lib, "punpckhdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhdq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhqdq_method_1806 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhqdq);
addExtern<DAS_CALL_METHOD(_punpckhqdq_method_1806)>(*this, lib, "punpckhqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhqdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckhwd_method_1808 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckhwd);
addExtern<DAS_CALL_METHOD(_punpckhwd_method_1808)>(*this, lib, "punpckhwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckhwd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpcklbw_method_1810 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpcklbw);
addExtern<DAS_CALL_METHOD(_punpcklbw_method_1810)>(*this, lib, "punpcklbw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpcklbw))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpckldq_method_1812 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpckldq);
addExtern<DAS_CALL_METHOD(_punpckldq_method_1812)>(*this, lib, "punpckldq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpckldq))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpcklqdq_method_1814 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpcklqdq);
addExtern<DAS_CALL_METHOD(_punpcklqdq_method_1814)>(*this, lib, "punpcklqdq",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpcklqdq))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _punpcklwd_method_1816 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::punpcklwd);
addExtern<DAS_CALL_METHOD(_punpcklwd_method_1816)>(*this, lib, "punpcklwd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::punpcklwd))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pushf_method_1818 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pushf);
addExtern<DAS_CALL_METHOD(_pushf_method_1818)>(*this, lib, "pushf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pushf))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _pxor_method_1820 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::pxor);
addExtern<DAS_CALL_METHOD(_pxor_method_1820)>(*this, lib, "pxor",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::pxor))
	->args({"self","mmx","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcl_method_1822 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcl>;
addExtern<DAS_CALL_METHOD(_rcl_method_1822)>(*this, lib, "rcl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcl>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcl_method_1824 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcl>;
addExtern<DAS_CALL_METHOD(_rcl_method_1824)>(*this, lib, "rcl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcl>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcpps_method_1826 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rcpps);
addExtern<DAS_CALL_METHOD(_rcpps_method_1826)>(*this, lib, "rcpps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rcpps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcpss_method_1828 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rcpss);
addExtern<DAS_CALL_METHOD(_rcpss_method_1828)>(*this, lib, "rcpss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rcpss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcr_method_1830 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcr>;
addExtern<DAS_CALL_METHOD(_rcr_method_1830)>(*this, lib, "rcr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rcr>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rcr_method_1832 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcr>;
addExtern<DAS_CALL_METHOD(_rcr_method_1832)>(*this, lib, "rcr",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rcr>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdmsr_method_1834 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdmsr);
addExtern<DAS_CALL_METHOD(_rdmsr_method_1834)>(*this, lib, "rdmsr",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdmsr))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdpmc_method_1836 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdpmc);
addExtern<DAS_CALL_METHOD(_rdpmc_method_1836)>(*this, lib, "rdpmc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdpmc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdrand_method_1838 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdrand);
addExtern<DAS_CALL_METHOD(_rdrand_method_1838)>(*this, lib, "rdrand",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdrand))
	->args({"self","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdseed_method_1840 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdseed);
addExtern<DAS_CALL_METHOD(_rdseed_method_1840)>(*this, lib, "rdseed",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdseed))
	->args({"self","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdtsc_method_1842 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdtsc);
addExtern<DAS_CALL_METHOD(_rdtsc_method_1842)>(*this, lib, "rdtsc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdtsc))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rdtscp_method_1844 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rdtscp);
addExtern<DAS_CALL_METHOD(_rdtscp_method_1844)>(*this, lib, "rdtscp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rdtscp))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rep_method_1846 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rep);
addExtern<DAS_CALL_METHOD(_rep_method_1846)>(*this, lib, "rep",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rep))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repe_method_1848 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repe);
addExtern<DAS_CALL_METHOD(_repe_method_1848)>(*this, lib, "repe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repe))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repne_method_1850 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repne);
addExtern<DAS_CALL_METHOD(_repne_method_1850)>(*this, lib, "repne",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repne))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repnz_method_1852 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repnz);
addExtern<DAS_CALL_METHOD(_repnz_method_1852)>(*this, lib, "repnz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repnz))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _repz_method_1854 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::repz);
addExtern<DAS_CALL_METHOD(_repz_method_1854)>(*this, lib, "repz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::repz))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ret_method_1856 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::ret);
addExtern<DAS_CALL_METHOD(_ret_method_1856)>(*this, lib, "ret",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::ret))
	->args({"self","imm"})
		->arg_init(1,make_smart<ExprConstInt>(0))
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rol_method_1858 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rol>;
addExtern<DAS_CALL_METHOD(_rol_method_1858)>(*this, lib, "rol",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::rol>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rol_method_1860 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rol>;
addExtern<DAS_CALL_METHOD(_rol_method_1860)>(*this, lib, "rol",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::rol>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ror_method_1862 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::ror>;
addExtern<DAS_CALL_METHOD(_ror_method_1862)>(*this, lib, "ror",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::ror>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _ror_method_1864 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::ror>;
addExtern<DAS_CALL_METHOD(_ror_method_1864)>(*this, lib, "ror",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::ror>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rorx_method_1866 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rorx);
addExtern<DAS_CALL_METHOD(_rorx_method_1866)>(*this, lib, "rorx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rorx))
	->args({"self","r","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundpd_method_1868 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundpd);
addExtern<DAS_CALL_METHOD(_roundpd_method_1868)>(*this, lib, "roundpd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundpd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundps_method_1870 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundps);
addExtern<DAS_CALL_METHOD(_roundps_method_1870)>(*this, lib, "roundps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundps))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundsd_method_1872 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundsd);
addExtern<DAS_CALL_METHOD(_roundsd_method_1872)>(*this, lib, "roundsd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundsd))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _roundss_method_1874 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::roundss);
addExtern<DAS_CALL_METHOD(_roundss_method_1874)>(*this, lib, "roundss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::roundss))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rsqrtps_method_1876 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rsqrtps);
addExtern<DAS_CALL_METHOD(_rsqrtps_method_1876)>(*this, lib, "rsqrtps",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rsqrtps))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _rsqrtss_method_1878 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::rsqrtss);
addExtern<DAS_CALL_METHOD(_rsqrtss_method_1878)>(*this, lib, "rsqrtss",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::rsqrtss))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sahf_method_1880 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sahf);
addExtern<DAS_CALL_METHOD(_sahf_method_1880)>(*this, lib, "sahf",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sahf))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sal_method_1882 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sal>;
addExtern<DAS_CALL_METHOD(_sal_method_1882)>(*this, lib, "sal",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sal>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sal_method_1884 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sal>;
addExtern<DAS_CALL_METHOD(_sal_method_1884)>(*this, lib, "sal",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sal>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sar_method_1886 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sar>;
addExtern<DAS_CALL_METHOD(_sar_method_1886)>(*this, lib, "sar",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::sar>::invoke")
	->args({"self","op","_cl"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sar_method_1888 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sar>;
addExtern<DAS_CALL_METHOD(_sar_method_1888)>(*this, lib, "sar",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, int),&Xbyak::CodeGenerator::sar>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sarx_method_1890 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sarx);
addExtern<DAS_CALL_METHOD(_sarx_method_1890)>(*this, lib, "sarx",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sarx))
	->args({"self","r1","op","r2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sbb_method_1892 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::sbb>;
addExtern<DAS_CALL_METHOD(_sbb_method_1892)>(*this, lib, "sbb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, uint32_t),&Xbyak::CodeGenerator::sbb>::invoke")
	->args({"self","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sbb_method_1894 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::sbb>;
addExtern<DAS_CALL_METHOD(_sbb_method_1894)>(*this, lib, "sbb",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Operand &),&Xbyak::CodeGenerator::sbb>::invoke")
	->args({"self","op1","op2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _scasb_method_1896 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::scasb);
addExtern<DAS_CALL_METHOD(_scasb_method_1896)>(*this, lib, "scasb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::scasb))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _scasd_method_1898 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::scasd);
addExtern<DAS_CALL_METHOD(_scasd_method_1898)>(*this, lib, "scasd",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::scasd))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _scasw_method_1900 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::scasw);
addExtern<DAS_CALL_METHOD(_scasw_method_1900)>(*this, lib, "scasw",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::scasw))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _seta_method_1902 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::seta);
addExtern<DAS_CALL_METHOD(_seta_method_1902)>(*this, lib, "seta",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::seta))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setae_method_1904 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setae);
addExtern<DAS_CALL_METHOD(_setae_method_1904)>(*this, lib, "setae",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setae))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setb_method_1906 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setb);
addExtern<DAS_CALL_METHOD(_setb_method_1906)>(*this, lib, "setb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setb))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setbe_method_1908 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setbe);
addExtern<DAS_CALL_METHOD(_setbe_method_1908)>(*this, lib, "setbe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setbe))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setc_method_1910 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setc);
addExtern<DAS_CALL_METHOD(_setc_method_1910)>(*this, lib, "setc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setc))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sete_method_1912 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sete);
addExtern<DAS_CALL_METHOD(_sete_method_1912)>(*this, lib, "sete",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sete))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setg_method_1914 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setg);
addExtern<DAS_CALL_METHOD(_setg_method_1914)>(*this, lib, "setg",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setg))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setge_method_1916 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setge);
addExtern<DAS_CALL_METHOD(_setge_method_1916)>(*this, lib, "setge",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setge))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setl_method_1918 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setl);
addExtern<DAS_CALL_METHOD(_setl_method_1918)>(*this, lib, "setl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setl))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setle_method_1920 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setle);
addExtern<DAS_CALL_METHOD(_setle_method_1920)>(*this, lib, "setle",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setle))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setna_method_1922 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setna);
addExtern<DAS_CALL_METHOD(_setna_method_1922)>(*this, lib, "setna",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setna))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnae_method_1924 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnae);
addExtern<DAS_CALL_METHOD(_setnae_method_1924)>(*this, lib, "setnae",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnae))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnb_method_1926 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnb);
addExtern<DAS_CALL_METHOD(_setnb_method_1926)>(*this, lib, "setnb",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnb))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnbe_method_1928 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnbe);
addExtern<DAS_CALL_METHOD(_setnbe_method_1928)>(*this, lib, "setnbe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnbe))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnc_method_1930 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnc);
addExtern<DAS_CALL_METHOD(_setnc_method_1930)>(*this, lib, "setnc",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnc))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setne_method_1932 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setne);
addExtern<DAS_CALL_METHOD(_setne_method_1932)>(*this, lib, "setne",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setne))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setng_method_1934 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setng);
addExtern<DAS_CALL_METHOD(_setng_method_1934)>(*this, lib, "setng",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setng))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnge_method_1936 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnge);
addExtern<DAS_CALL_METHOD(_setnge_method_1936)>(*this, lib, "setnge",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnge))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnl_method_1938 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnl);
addExtern<DAS_CALL_METHOD(_setnl_method_1938)>(*this, lib, "setnl",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnl))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnle_method_1940 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnle);
addExtern<DAS_CALL_METHOD(_setnle_method_1940)>(*this, lib, "setnle",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnle))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setno_method_1942 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setno);
addExtern<DAS_CALL_METHOD(_setno_method_1942)>(*this, lib, "setno",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setno))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnp_method_1944 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnp);
addExtern<DAS_CALL_METHOD(_setnp_method_1944)>(*this, lib, "setnp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnp))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setns_method_1946 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setns);
addExtern<DAS_CALL_METHOD(_setns_method_1946)>(*this, lib, "setns",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setns))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setnz_method_1948 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setnz);
addExtern<DAS_CALL_METHOD(_setnz_method_1948)>(*this, lib, "setnz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setnz))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _seto_method_1950 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::seto);
addExtern<DAS_CALL_METHOD(_seto_method_1950)>(*this, lib, "seto",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::seto))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setp_method_1952 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setp);
addExtern<DAS_CALL_METHOD(_setp_method_1952)>(*this, lib, "setp",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setp))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setpe_method_1954 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setpe);
addExtern<DAS_CALL_METHOD(_setpe_method_1954)>(*this, lib, "setpe",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setpe))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setpo_method_1956 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setpo);
addExtern<DAS_CALL_METHOD(_setpo_method_1956)>(*this, lib, "setpo",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setpo))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sets_method_1958 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sets);
addExtern<DAS_CALL_METHOD(_sets_method_1958)>(*this, lib, "sets",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sets))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _setz_method_1960 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::setz);
addExtern<DAS_CALL_METHOD(_setz_method_1960)>(*this, lib, "setz",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::setz))
	->args({"self","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sfence_method_1962 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sfence);
addExtern<DAS_CALL_METHOD(_sfence_method_1962)>(*this, lib, "sfence",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sfence))
	->args({"self",})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1msg1_method_1964 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1msg1);
addExtern<DAS_CALL_METHOD(_sha1msg1_method_1964)>(*this, lib, "sha1msg1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1msg1))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1msg2_method_1966 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1msg2);
addExtern<DAS_CALL_METHOD(_sha1msg2_method_1966)>(*this, lib, "sha1msg2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1msg2))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1nexte_method_1968 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1nexte);
addExtern<DAS_CALL_METHOD(_sha1nexte_method_1968)>(*this, lib, "sha1nexte",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1nexte))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha1rnds4_method_1970 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha1rnds4);
addExtern<DAS_CALL_METHOD(_sha1rnds4_method_1970)>(*this, lib, "sha1rnds4",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha1rnds4))
	->args({"self","xmm","op","imm"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha256msg1_method_1972 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha256msg1);
addExtern<DAS_CALL_METHOD(_sha256msg1_method_1972)>(*this, lib, "sha256msg1",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha256msg1))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha256msg2_method_1974 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha256msg2);
addExtern<DAS_CALL_METHOD(_sha256msg2_method_1974)>(*this, lib, "sha256msg2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha256msg2))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _sha256rnds2_method_1976 = DAS_CALL_MEMBER(Xbyak::CodeGenerator::sha256rnds2);
addExtern<DAS_CALL_METHOD(_sha256rnds2_method_1976)>(*this, lib, "sha256rnds2",SideEffects::worstDefault, DAS_CALL_MEMBER_CPP(Xbyak::CodeGenerator::sha256rnds2))
	->args({"self","xmm","op"})
;
#endif
#ifdef GLOBAL_NAMESPACE
using _shl_method_1978 = das::das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shl>;
addExtern<DAS_CALL_METHOD(_shl_method_1978)>(*this, lib, "shl",SideEffects::worstDefault, "das_call_member<void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &, const Xbyak::Reg8 &),&Xbyak::CodeGenerator::shl>::invoke")
	->args({"self","op","_cl"})
;
#endif

#endif
#endif
}
}
