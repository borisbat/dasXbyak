// ------------
// functions
// ------------

#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::inner::IsInInt32)>(*this, lib, "IsInInt32",SideEffects::worstDefault, "Xbyak::inner::IsInInt32")
	->args({"x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::AlignedMalloc)>(*this, lib, "AlignedMalloc",SideEffects::worstDefault, "Xbyak::AlignedMalloc")
	->args({"size","alignment"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::local::GetErrorRef), SimNode_ExtFuncCallRef>(*this, lib, "GetErrorRef",SideEffects::worstDefault, "Xbyak::local::GetErrorRef")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::inner::IsInDisp8)>(*this, lib, "IsInDisp8",SideEffects::worstDefault, "Xbyak::inner::IsInDisp8")
	->args({"x"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::ClearError)>(*this, lib, "ClearError",SideEffects::worstDefault, "Xbyak::ClearError")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::ConvertErrorToString)>(*this, lib, "ConvertErrorToString",SideEffects::worstDefault, "Xbyak::ConvertErrorToString")
	->args({"err"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::local::SetError)>(*this, lib, "SetError",SideEffects::worstDefault, "Xbyak::local::SetError")
	->args({"err"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::AlignedFree)>(*this, lib, "AlignedFree",SideEffects::worstDefault, "Xbyak::AlignedFree")
	->args({"p"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(__report_gsfailure)>(*this, lib, "__report_gsfailure",SideEffects::worstDefault, "__report_gsfailure")
	->args({"_StackCookie"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::GetError)>(*this, lib, "GetError",SideEffects::worstDefault, "Xbyak::GetError")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(Xbyak::inner::VerifyInInt32)>(*this, lib, "VerifyInInt32",SideEffects::worstDefault, "Xbyak::inner::VerifyInInt32")
	->args({"x"})
;
#endif
