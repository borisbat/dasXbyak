#include "daScript/misc/platform.h"

#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "dasZydis.h"

using namespace das;

#include <Zydis/Zydis.h>
#include <Zydis/Status.h>

#include <stdio.h>
#include <inttypes.h>

namespace das {

void das_decode ( void * _data, uint64_t length ) {
    uint8_t * data = (uint8_t *) _data;
    ZydisDecoder decoder;
    ZydisDecoderInit(&decoder, ZYDIS_MACHINE_MODE_LONG_64, ZYDIS_STACK_WIDTH_64);
    ZydisFormatter formatter;
    ZydisFormatterInit(&formatter, ZYDIS_FORMATTER_STYLE_INTEL);
    ZyanU64 runtime_address = intptr_t(data);
    ZyanUSize offset = 0;
    ZydisDecodedInstruction instruction;
    while (ZYAN_SUCCESS(ZydisDecoderDecodeBuffer(&decoder, data + offset, length - offset, &instruction))) {
        printf("%016" PRIX64 "  ", runtime_address);
        char buffer[256];
        ZydisFormatterFormatInstruction(&formatter, &instruction, buffer, sizeof(buffer), runtime_address);
        puts(buffer);
        offset += instruction.length;
        runtime_address += instruction.length;
    }
    fflush(stdout);
}

Module_Zydis::Module_Zydis() : Module("zydis") {
    ModuleLibrary lib;
    lib.addModule(this);
    lib.addBuiltInModule();

    addExtern<DAS_BIND_FUN(das_decode)>(*this, lib, "disassemble", SideEffects::worstDefault, "das_decode")
	    ->args({"data","label"});
}

ModuleAotType Module_Zydis::aotRequire ( TextWriter & tw ) const  {
    tw << "#include \"../modules/dasXbyak/src/dasZydis.h\"\n";
    return ModuleAotType::cpp;
}

}

REGISTER_MODULE_IN_NAMESPACE(Module_Zydis,das);

