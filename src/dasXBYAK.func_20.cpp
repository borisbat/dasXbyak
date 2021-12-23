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
void Module_dasXBYAK::initFunctions_20() {
	using _method_1887 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivsh >;
	addExtern<DAS_CALL_METHOD(_method_1887)>(*this,lib,"vdivsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdivsh >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1888 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdpbf16ps >;
	addExtern<DAS_CALL_METHOD(_method_1888)>(*this,lib,"vdpbf16ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vdpbf16ps >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1889 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vexp2pd >;
	addExtern<DAS_CALL_METHOD(_method_1889)>(*this,lib,"vexp2pd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vexp2pd >::invoke")
		->args({"self","z","op"});
	using _method_1890 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vexp2ps >;
	addExtern<DAS_CALL_METHOD(_method_1890)>(*this,lib,"vexp2ps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vexp2ps >::invoke")
		->args({"self","z","op"});
	using _method_1891 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vexpandpd >;
	addExtern<DAS_CALL_METHOD(_method_1891)>(*this,lib,"vexpandpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vexpandpd >::invoke")
		->args({"self","x","op"});
	using _method_1892 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vexpandps >;
	addExtern<DAS_CALL_METHOD(_method_1892)>(*this,lib,"vexpandps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vexpandps >::invoke")
		->args({"self","x","op"});
	using _method_1893 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextractf32x4 >;
	addExtern<DAS_CALL_METHOD(_method_1893)>(*this,lib,"vextractf32x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextractf32x4 >::invoke")
		->args({"self","op","r","imm"});
	using _method_1894 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Zmm &,unsigned char),&Xbyak::CodeGenerator::vextractf32x8 >;
	addExtern<DAS_CALL_METHOD(_method_1894)>(*this,lib,"vextractf32x8",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Zmm &,unsigned char),&Xbyak::CodeGenerator::vextractf32x8 >::invoke")
		->args({"self","op","r","imm"});
	using _method_1895 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextractf64x2 >;
	addExtern<DAS_CALL_METHOD(_method_1895)>(*this,lib,"vextractf64x2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextractf64x2 >::invoke")
		->args({"self","op","r","imm"});
	using _method_1896 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Zmm &,unsigned char),&Xbyak::CodeGenerator::vextractf64x4 >;
	addExtern<DAS_CALL_METHOD(_method_1896)>(*this,lib,"vextractf64x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Zmm &,unsigned char),&Xbyak::CodeGenerator::vextractf64x4 >::invoke")
		->args({"self","op","r","imm"});
	using _method_1897 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextracti32x4 >;
	addExtern<DAS_CALL_METHOD(_method_1897)>(*this,lib,"vextracti32x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextracti32x4 >::invoke")
		->args({"self","op","r","imm"});
	using _method_1898 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Zmm &,unsigned char),&Xbyak::CodeGenerator::vextracti32x8 >;
	addExtern<DAS_CALL_METHOD(_method_1898)>(*this,lib,"vextracti32x8",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Zmm &,unsigned char),&Xbyak::CodeGenerator::vextracti32x8 >::invoke")
		->args({"self","op","r","imm"});
	using _method_1899 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextracti64x2 >;
	addExtern<DAS_CALL_METHOD(_method_1899)>(*this,lib,"vextracti64x2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Ymm &,unsigned char),&Xbyak::CodeGenerator::vextracti64x2 >::invoke")
		->args({"self","op","r","imm"});
	using _method_1900 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Zmm &,unsigned char),&Xbyak::CodeGenerator::vextracti64x4 >;
	addExtern<DAS_CALL_METHOD(_method_1900)>(*this,lib,"vextracti64x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Operand &,const Xbyak::Zmm &,unsigned char),&Xbyak::CodeGenerator::vextracti64x4 >::invoke")
		->args({"self","op","r","imm"});
	using _method_1901 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfcmaddcph >;
	addExtern<DAS_CALL_METHOD(_method_1901)>(*this,lib,"vfcmaddcph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfcmaddcph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1902 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfcmulcph >;
	addExtern<DAS_CALL_METHOD(_method_1902)>(*this,lib,"vfcmulcph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfcmulcph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1903 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfixupimmpd >;
	addExtern<DAS_CALL_METHOD(_method_1903)>(*this,lib,"vfixupimmpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfixupimmpd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1904 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfixupimmps >;
	addExtern<DAS_CALL_METHOD(_method_1904)>(*this,lib,"vfixupimmps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfixupimmps >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1905 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfixupimmsd >;
	addExtern<DAS_CALL_METHOD(_method_1905)>(*this,lib,"vfixupimmsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfixupimmsd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1906 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfixupimmss >;
	addExtern<DAS_CALL_METHOD(_method_1906)>(*this,lib,"vfixupimmss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfixupimmss >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1907 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132ph >;
	addExtern<DAS_CALL_METHOD(_method_1907)>(*this,lib,"vfmadd132ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1908 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132sh >;
	addExtern<DAS_CALL_METHOD(_method_1908)>(*this,lib,"vfmadd132sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd132sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1909 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213ph >;
	addExtern<DAS_CALL_METHOD(_method_1909)>(*this,lib,"vfmadd213ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1910 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213sh >;
	addExtern<DAS_CALL_METHOD(_method_1910)>(*this,lib,"vfmadd213sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd213sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1911 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231ph >;
	addExtern<DAS_CALL_METHOD(_method_1911)>(*this,lib,"vfmadd231ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1912 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231sh >;
	addExtern<DAS_CALL_METHOD(_method_1912)>(*this,lib,"vfmadd231sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmadd231sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1913 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddcph >;
	addExtern<DAS_CALL_METHOD(_method_1913)>(*this,lib,"vfmaddcph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddcph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1914 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub132ph >;
	addExtern<DAS_CALL_METHOD(_method_1914)>(*this,lib,"vfmaddsub132ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub132ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1915 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub213ph >;
	addExtern<DAS_CALL_METHOD(_method_1915)>(*this,lib,"vfmaddsub213ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub213ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1916 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub231ph >;
	addExtern<DAS_CALL_METHOD(_method_1916)>(*this,lib,"vfmaddsub231ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmaddsub231ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1917 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132ph >;
	addExtern<DAS_CALL_METHOD(_method_1917)>(*this,lib,"vfmsub132ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1918 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132sh >;
	addExtern<DAS_CALL_METHOD(_method_1918)>(*this,lib,"vfmsub132sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub132sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1919 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213ph >;
	addExtern<DAS_CALL_METHOD(_method_1919)>(*this,lib,"vfmsub213ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1920 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213sh >;
	addExtern<DAS_CALL_METHOD(_method_1920)>(*this,lib,"vfmsub213sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub213sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1921 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231ph >;
	addExtern<DAS_CALL_METHOD(_method_1921)>(*this,lib,"vfmsub231ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1922 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231sh >;
	addExtern<DAS_CALL_METHOD(_method_1922)>(*this,lib,"vfmsub231sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsub231sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1923 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd132ph >;
	addExtern<DAS_CALL_METHOD(_method_1923)>(*this,lib,"vfmsubadd132ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd132ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1924 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd213ph >;
	addExtern<DAS_CALL_METHOD(_method_1924)>(*this,lib,"vfmsubadd213ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd213ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1925 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd231ph >;
	addExtern<DAS_CALL_METHOD(_method_1925)>(*this,lib,"vfmsubadd231ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmsubadd231ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1926 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmulcph >;
	addExtern<DAS_CALL_METHOD(_method_1926)>(*this,lib,"vfmulcph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfmulcph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1927 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132ph >;
	addExtern<DAS_CALL_METHOD(_method_1927)>(*this,lib,"vfnmadd132ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1928 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132sh >;
	addExtern<DAS_CALL_METHOD(_method_1928)>(*this,lib,"vfnmadd132sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd132sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1929 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213ph >;
	addExtern<DAS_CALL_METHOD(_method_1929)>(*this,lib,"vfnmadd213ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1930 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213sh >;
	addExtern<DAS_CALL_METHOD(_method_1930)>(*this,lib,"vfnmadd213sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd213sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1931 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231ph >;
	addExtern<DAS_CALL_METHOD(_method_1931)>(*this,lib,"vfnmadd231ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1932 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231sh >;
	addExtern<DAS_CALL_METHOD(_method_1932)>(*this,lib,"vfnmadd231sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmadd231sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1933 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132ph >;
	addExtern<DAS_CALL_METHOD(_method_1933)>(*this,lib,"vfnmsub132ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1934 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132sh >;
	addExtern<DAS_CALL_METHOD(_method_1934)>(*this,lib,"vfnmsub132sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub132sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1935 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213ph >;
	addExtern<DAS_CALL_METHOD(_method_1935)>(*this,lib,"vfnmsub213ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1936 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213sh >;
	addExtern<DAS_CALL_METHOD(_method_1936)>(*this,lib,"vfnmsub213sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub213sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1937 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231ph >;
	addExtern<DAS_CALL_METHOD(_method_1937)>(*this,lib,"vfnmsub231ph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231ph >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1938 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231sh >;
	addExtern<DAS_CALL_METHOD(_method_1938)>(*this,lib,"vfnmsub231sh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vfnmsub231sh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1939 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclasspd >;
	addExtern<DAS_CALL_METHOD(_method_1939)>(*this,lib,"vfpclasspd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclasspd >::invoke")
		->args({"self","k","op","imm"});
	using _method_1940 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclassph >;
	addExtern<DAS_CALL_METHOD(_method_1940)>(*this,lib,"vfpclassph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclassph >::invoke")
		->args({"self","k","op","imm"});
	using _method_1941 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclassps >;
	addExtern<DAS_CALL_METHOD(_method_1941)>(*this,lib,"vfpclassps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclassps >::invoke")
		->args({"self","k","op","imm"});
	using _method_1942 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclasssd >;
	addExtern<DAS_CALL_METHOD(_method_1942)>(*this,lib,"vfpclasssd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclasssd >::invoke")
		->args({"self","k","op","imm"});
	using _method_1943 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclasssh >;
	addExtern<DAS_CALL_METHOD(_method_1943)>(*this,lib,"vfpclasssh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclasssh >::invoke")
		->args({"self","k","op","imm"});
	using _method_1944 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclassss >;
	addExtern<DAS_CALL_METHOD(_method_1944)>(*this,lib,"vfpclassss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Opmask &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vfpclassss >::invoke")
		->args({"self","k","op","imm"});
	using _method_1945 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdpd >;
	addExtern<DAS_CALL_METHOD(_method_1945)>(*this,lib,"vgatherdpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdpd >::invoke")
		->args({"self","x","addr"});
	using _method_1946 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdps >;
	addExtern<DAS_CALL_METHOD(_method_1946)>(*this,lib,"vgatherdps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherdps >::invoke")
		->args({"self","x","addr"});
	using _method_1947 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf0dpd >;
	addExtern<DAS_CALL_METHOD(_method_1947)>(*this,lib,"vgatherpf0dpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf0dpd >::invoke")
		->args({"self","addr"});
	using _method_1948 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf0dps >;
	addExtern<DAS_CALL_METHOD(_method_1948)>(*this,lib,"vgatherpf0dps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf0dps >::invoke")
		->args({"self","addr"});
	using _method_1949 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf0qpd >;
	addExtern<DAS_CALL_METHOD(_method_1949)>(*this,lib,"vgatherpf0qpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf0qpd >::invoke")
		->args({"self","addr"});
	using _method_1950 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf0qps >;
	addExtern<DAS_CALL_METHOD(_method_1950)>(*this,lib,"vgatherpf0qps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf0qps >::invoke")
		->args({"self","addr"});
	using _method_1951 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf1dpd >;
	addExtern<DAS_CALL_METHOD(_method_1951)>(*this,lib,"vgatherpf1dpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf1dpd >::invoke")
		->args({"self","addr"});
	using _method_1952 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf1dps >;
	addExtern<DAS_CALL_METHOD(_method_1952)>(*this,lib,"vgatherpf1dps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf1dps >::invoke")
		->args({"self","addr"});
	using _method_1953 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf1qpd >;
	addExtern<DAS_CALL_METHOD(_method_1953)>(*this,lib,"vgatherpf1qpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf1qpd >::invoke")
		->args({"self","addr"});
	using _method_1954 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf1qps >;
	addExtern<DAS_CALL_METHOD(_method_1954)>(*this,lib,"vgatherpf1qps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherpf1qps >::invoke")
		->args({"self","addr"});
	using _method_1955 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqpd >;
	addExtern<DAS_CALL_METHOD(_method_1955)>(*this,lib,"vgatherqpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqpd >::invoke")
		->args({"self","x","addr"});
	using _method_1956 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqps >;
	addExtern<DAS_CALL_METHOD(_method_1956)>(*this,lib,"vgatherqps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Address &),&Xbyak::CodeGenerator::vgatherqps >::invoke")
		->args({"self","x","addr"});
	using _method_1957 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexppd >;
	addExtern<DAS_CALL_METHOD(_method_1957)>(*this,lib,"vgetexppd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexppd >::invoke")
		->args({"self","x","op"});
	using _method_1958 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexpph >;
	addExtern<DAS_CALL_METHOD(_method_1958)>(*this,lib,"vgetexpph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexpph >::invoke")
		->args({"self","x","op"});
	using _method_1959 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexpps >;
	addExtern<DAS_CALL_METHOD(_method_1959)>(*this,lib,"vgetexpps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexpps >::invoke")
		->args({"self","x","op"});
	using _method_1960 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexpsd >;
	addExtern<DAS_CALL_METHOD(_method_1960)>(*this,lib,"vgetexpsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexpsd >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1961 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexpsh >;
	addExtern<DAS_CALL_METHOD(_method_1961)>(*this,lib,"vgetexpsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexpsh >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1962 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexpss >;
	addExtern<DAS_CALL_METHOD(_method_1962)>(*this,lib,"vgetexpss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vgetexpss >::invoke")
		->args({"self","x1","x2","op"});
	using _method_1963 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantpd >;
	addExtern<DAS_CALL_METHOD(_method_1963)>(*this,lib,"vgetmantpd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantpd >::invoke")
		->args({"self","x","op","imm"});
	using _method_1964 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantph >;
	addExtern<DAS_CALL_METHOD(_method_1964)>(*this,lib,"vgetmantph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantph >::invoke")
		->args({"self","x","op","imm"});
	using _method_1965 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantps >;
	addExtern<DAS_CALL_METHOD(_method_1965)>(*this,lib,"vgetmantps",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantps >::invoke")
		->args({"self","x","op","imm"});
	using _method_1966 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantsd >;
	addExtern<DAS_CALL_METHOD(_method_1966)>(*this,lib,"vgetmantsd",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantsd >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1967 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantsh >;
	addExtern<DAS_CALL_METHOD(_method_1967)>(*this,lib,"vgetmantsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantsh >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1968 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantss >;
	addExtern<DAS_CALL_METHOD(_method_1968)>(*this,lib,"vgetmantss",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Xmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vgetmantss >::invoke")
		->args({"self","x1","x2","op","imm"});
	using _method_1969 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertf32x4 >;
	addExtern<DAS_CALL_METHOD(_method_1969)>(*this,lib,"vinsertf32x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertf32x4 >::invoke")
		->args({"self","r1","r2","op","imm"});
	using _method_1970 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertf32x8 >;
	addExtern<DAS_CALL_METHOD(_method_1970)>(*this,lib,"vinsertf32x8",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertf32x8 >::invoke")
		->args({"self","r1","r2","op","imm"});
	using _method_1971 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertf64x2 >;
	addExtern<DAS_CALL_METHOD(_method_1971)>(*this,lib,"vinsertf64x2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertf64x2 >::invoke")
		->args({"self","r1","r2","op","imm"});
	using _method_1972 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertf64x4 >;
	addExtern<DAS_CALL_METHOD(_method_1972)>(*this,lib,"vinsertf64x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinsertf64x4 >::invoke")
		->args({"self","r1","r2","op","imm"});
	using _method_1973 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinserti32x4 >;
	addExtern<DAS_CALL_METHOD(_method_1973)>(*this,lib,"vinserti32x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinserti32x4 >::invoke")
		->args({"self","r1","r2","op","imm"});
	using _method_1974 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinserti32x8 >;
	addExtern<DAS_CALL_METHOD(_method_1974)>(*this,lib,"vinserti32x8",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinserti32x8 >::invoke")
		->args({"self","r1","r2","op","imm"});
	using _method_1975 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinserti64x2 >;
	addExtern<DAS_CALL_METHOD(_method_1975)>(*this,lib,"vinserti64x2",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Ymm &,const Xbyak::Ymm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinserti64x2 >::invoke")
		->args({"self","r1","r2","op","imm"});
	using _method_1976 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinserti64x4 >;
	addExtern<DAS_CALL_METHOD(_method_1976)>(*this,lib,"vinserti64x4",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Zmm &,const Xbyak::Zmm &,const Xbyak::Operand &,unsigned char),&Xbyak::CodeGenerator::vinserti64x4 >::invoke")
		->args({"self","r1","r2","op","imm"});
	using _method_1977 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxph >;
	addExtern<DAS_CALL_METHOD(_method_1977)>(*this,lib,"vmaxph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxph >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1978 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxsh >;
	addExtern<DAS_CALL_METHOD(_method_1978)>(*this,lib,"vmaxsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmaxsh >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1979 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminph >;
	addExtern<DAS_CALL_METHOD(_method_1979)>(*this,lib,"vminph",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminph >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1980 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminsh >;
	addExtern<DAS_CALL_METHOD(_method_1980)>(*this,lib,"vminsh",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vminsh >::invoke")
		->args({"self","xmm","op1","op2"});
	using _method_1981 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa32 >;
	addExtern<DAS_CALL_METHOD(_method_1981)>(*this,lib,"vmovdqa32",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa32 >::invoke")
		->args({"self","addr","x"});
	using _method_1982 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa32 >;
	addExtern<DAS_CALL_METHOD(_method_1982)>(*this,lib,"vmovdqa32",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa32 >::invoke")
		->args({"self","x","op"});
	using _method_1983 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa64 >;
	addExtern<DAS_CALL_METHOD(_method_1983)>(*this,lib,"vmovdqa64",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqa64 >::invoke")
		->args({"self","addr","x"});
	using _method_1984 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa64 >;
	addExtern<DAS_CALL_METHOD(_method_1984)>(*this,lib,"vmovdqa64",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqa64 >::invoke")
		->args({"self","x","op"});
	using _method_1985 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu16 >;
	addExtern<DAS_CALL_METHOD(_method_1985)>(*this,lib,"vmovdqu16",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Address &,const Xbyak::Xmm &),&Xbyak::CodeGenerator::vmovdqu16 >::invoke")
		->args({"self","addr","x"});
	using _method_1986 = das::das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu16 >;
	addExtern<DAS_CALL_METHOD(_method_1986)>(*this,lib,"vmovdqu16",SideEffects::worstDefault,"das_call_member< void (Xbyak::CodeGenerator::*)(const Xbyak::Xmm &,const Xbyak::Operand &),&Xbyak::CodeGenerator::vmovdqu16 >::invoke")
		->args({"self","x","op"});
}
}

