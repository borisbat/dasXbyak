#pragma once

// ------------
// enumerations
// ------------

DAS_BIND_ENUM_CAST(Xbyak::Operand::Code)
DAS_BASE_BIND_ENUM_GEN(Xbyak::Operand::Code,Code)
DAS_BIND_ENUM_CAST(Xbyak::CodeArray::ProtectMode)
DAS_BASE_BIND_ENUM_GEN(Xbyak::CodeArray::ProtectMode,ProtectMode)
DAS_BIND_ENUM_CAST(Xbyak::Operand::Kind)
DAS_BASE_BIND_ENUM_GEN(Xbyak::Operand::Kind,Kind)
DAS_BIND_ENUM_CAST(Xbyak::Address::Mode)
DAS_BASE_BIND_ENUM_GEN(Xbyak::Address::Mode,Mode)
DAS_BIND_ENUM_CAST(Xbyak::inner::LabelMode)
DAS_BASE_BIND_ENUM_GEN(Xbyak::inner::LabelMode,LabelMode)
DAS_BIND_ENUM_CAST(Xbyak::CodeGenerator::LabelType)
DAS_BASE_BIND_ENUM_GEN(Xbyak::CodeGenerator::LabelType,LabelType)
DAS_BIND_ENUM_CAST(Xbyak::PreferredEncoding)
DAS_BASE_BIND_ENUM_GEN(Xbyak::PreferredEncoding,PreferredEncoding)

// ------------
// structures
// ------------

MAKE_EXTERNAL_TYPE_FACTORY(Reg32,Xbyak::Reg32)
MAKE_EXTERNAL_TYPE_FACTORY(Ymm,Xbyak::Ymm)
MAKE_EXTERNAL_TYPE_FACTORY(Reg8,Xbyak::Reg8)
MAKE_EXTERNAL_TYPE_FACTORY(Segment,Xbyak::Segment)
MAKE_EXTERNAL_TYPE_FACTORY(EvexModifierRounding,Xbyak::EvexModifierRounding)
MAKE_EXTERNAL_TYPE_FACTORY(Operand,Xbyak::Operand)
MAKE_EXTERNAL_TYPE_FACTORY(Fpu,Xbyak::Fpu)
MAKE_EXTERNAL_TYPE_FACTORY(LabelManager,Xbyak::LabelManager)
MAKE_EXTERNAL_TYPE_FACTORY(CodeArray,Xbyak::CodeArray)
MAKE_EXTERNAL_TYPE_FACTORY(Reg,Xbyak::Reg)
MAKE_EXTERNAL_TYPE_FACTORY(Address,Xbyak::Address)
MAKE_EXTERNAL_TYPE_FACTORY(Label,Xbyak::Label)
MAKE_EXTERNAL_TYPE_FACTORY(AddressFrame,Xbyak::AddressFrame)
MAKE_EXTERNAL_TYPE_FACTORY(RegRip,Xbyak::RegRip)
MAKE_EXTERNAL_TYPE_FACTORY(Reg16,Xbyak::Reg16)
MAKE_EXTERNAL_TYPE_FACTORY(Reg64,Xbyak::Reg64)
MAKE_EXTERNAL_TYPE_FACTORY(Opmask,Xbyak::Opmask)
MAKE_EXTERNAL_TYPE_FACTORY(RegExp,Xbyak::RegExp)
MAKE_EXTERNAL_TYPE_FACTORY(EvexModifierZero,Xbyak::EvexModifierZero)
MAKE_EXTERNAL_TYPE_FACTORY(Allocator,Xbyak::Allocator)
MAKE_EXTERNAL_TYPE_FACTORY(Xmm,Xbyak::Xmm)
MAKE_EXTERNAL_TYPE_FACTORY(Reg32e,Xbyak::Reg32e)
MAKE_EXTERNAL_TYPE_FACTORY(Zmm,Xbyak::Zmm)
MAKE_EXTERNAL_TYPE_FACTORY(JmpLabel,Xbyak::JmpLabel)
MAKE_EXTERNAL_TYPE_FACTORY(Tmm,Xbyak::Tmm)
MAKE_EXTERNAL_TYPE_FACTORY(BoundsReg,Xbyak::BoundsReg)
MAKE_EXTERNAL_TYPE_FACTORY(CodeGenerator,Xbyak::CodeGenerator)
MAKE_EXTERNAL_TYPE_FACTORY(Mmx,Xbyak::Mmx)

