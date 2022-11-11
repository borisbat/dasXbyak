#pragma once

#define XBYAK_NO_EXCEPTION
#include <xbyak/xbyak.h>

namespace das {
    void das_L_str ( Xbyak::CodeGenerator & self, const char * label );
    void das_L_lab ( Xbyak::CodeGenerator & self, Xbyak::Label & label );
    Xbyak::Label * das_L ( Xbyak::CodeGenerator & self );
    Xbyak::Address das_op_at_reg ( const Xbyak::AddressFrame & frame, const Xbyak::Reg & reg );
    Xbyak::RegExp das_op_mul_uint ( const Xbyak::Reg & reg, uint32_t value );
    Xbyak::RegExp das_op_add_reg ( const Xbyak::Reg & reg, const Xbyak::Reg & value );
    Xbyak::RegExp das_op_add_int ( const Xbyak::Reg & reg, int32_t value );
    Xbyak::RegExp das_op_add_uint ( const Xbyak::Reg & reg, uint32_t value );
    Xbyak::RegExp das_op_sub_int ( const Xbyak::Reg & reg, int32_t value );
    Xbyak::RegExp das_op_sub_uint ( const Xbyak::Reg & reg, uint32_t value );
    float4 das_invoke_code ( const Xbyak::CodeGenerator & code, vec4f anything, void * cmres, Context * context );
    void * das_get_code_ptr ( const Xbyak::CodeGenerator & code );
    uint64_t das_get_curr_ptr ( const Xbyak::CodeGenerator & code );
    uint64_t das_get_const_string_offset ( const char * text, Context * context, LineInfoArg * at );
}
