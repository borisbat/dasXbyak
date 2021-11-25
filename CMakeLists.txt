IF(WIN32)
	SET(DAS_XBYAK_SUPPORTED TRUE)
ELSE()
	SET(DAS_XBYAK_SUPPORTED FALSE)
ENDIF()

IF (DAS_XBYAK_SUPPORTED AND (NOT DAS_XBYAK_INCLUDED) AND ((NOT ${DAS_XBYAK_DISABLED}) OR (NOT DEFINED DAS_XBYAK_DISABLED)))
    SET(DAS_XBYAK_INCLUDED TRUE)
    MESSAGE(STATUS "dasXbyak module included.")

	SET(DAS_XBYAK_DIR ${CMAKE_SOURCE_DIR}/modules/dasXbyak)

	SET(XBYAK_DIR ${CMAKE_SOURCE_DIR}/modules/dasXbyak/xbyak/xbyak)

    LIST(APPEND CMAKE_MODULE_PATH ${DAS_XBYAK_DIR})

	# libDasModuleXbyak
	SET(DAS_XBYAK_MODULE_SRC
		${DAS_XBYAK_DIR}/src/dasXbyak.h
		${DAS_XBYAK_DIR}/src/dasXbyak.cpp
		${DAS_XBYAK_DIR}/src/aot_xbyak.h
		${DAS_XBYAK_DIR}/src/module_xbyak_split_0.cpp
		${DAS_XBYAK_DIR}/src/module_xbyak_split_1.cpp
		${DAS_XBYAK_DIR}/src/module_xbyak_split_2.cpp
		${DAS_XBYAK_DIR}/src/module_xbyak_split_3.cpp
		${DAS_XBYAK_DIR}/src/module_xbyak_split_4.cpp
		${DAS_XBYAK_DIR}/src/module_xbyak_split_5.cpp
		${DAS_XBYAK_DIR}/src/module_xbyak_split_6.cpp
		${DAS_XBYAK_DIR}/src/module_xbyak_split_7.cpp
		${DAS_XBYAK_DIR}/src/module_xbyak_split_8.cpp
		${DAS_XBYAK_DIR}/src/module_xbyak_split_9.cpp
		${DAS_XBYAK_DIR}/src/module_xbyak_split_10.cpp
		${DAS_XBYAK_DIR}/src/module_xbyak_split_11.cpp
	)

	ADD_MODULE_LIB(libDasModuleXbyak)
	ADD_MODULE_CPP(Xbyak)
	# ADD_MODULE_NATIVE(stbimage_boost)
	ADD_LIBRARY(libDasModuleXbyak ${DAS_XBYAK_MODULE_SRC})
	TARGET_LINK_LIBRARIES(libDasModuleXbyak ${XBYAK_LIBRARIES})
	ADD_DEPENDENCIES(libDasModuleXbyak libDaScript)
	TARGET_INCLUDE_DIRECTORIES(libDasModuleXbyak PUBLIC ${XBYAK_INCLUDE_DIR} ${XBYAK_DIR})
	SETUP_CPP11(libDasModuleXbyak)

	ADD_MODULE_DAS(dasxbyak dasxbyak xbyak_boost)
	ADD_MODULE_DAS(dasxbyak dasxbyak xbyak_boost)

	ADD_MODULE_DAS(jit jit jit_x86_64_alloc_regs)
	ADD_MODULE_DAS(jit jit jit_x86_64_regs)
	ADD_MODULE_DAS(jit jit jit_x86_64_generate_base)
	ADD_MODULE_DAS(jit jit jit_x86_64_generate)
	ADD_MODULE_DAS(jit jit jit_x86_64_common)
	ADD_MODULE_DAS(jit jit jit_x86_64_test)
	ADD_MODULE_DAS(jit jit jit_x86_64)

    #DAS_OUTPUT_AST(XBYAK_GENERATE_AST "${XBYAK_DIR}/xbyak.h" ${DAS_XBYAK_DIR} ${XBYAK_DIR})
	#DAS_OUTPUT_JSON(XBYAK_GENERATE_JSON "${DAS_XBYAK_DIR}/src/xbyak_headers.h" ${DAS_XBYAK_DIR} ${XBYAK_DIR})

	DAS_CPP_BIND_AST(
		XBYAK_GENERATE
		generate_xbyak.das
		${DAS_XBYAK_DIR}/src/xbyak_headers.h
		${DAS_XBYAK_DIR}/src/module_xbyak
		${DAS_XBYAK_DIR}/src
		${XBYAK_DIR}
		""
	)

	SET(DAS_ZYCONFIG_DIR ${CMAKE_SOURCE_DIR}/modules/dasXbyak/zydis/msvc)

	SET(DAS_ZYDIS_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/modules/dasXbyak/zydis/include)
	SET(DAS_ZYDIS_SRC_DIR ${CMAKE_SOURCE_DIR}/modules/dasXbyak/zydis/src)

	SET(DAS_ZYCORE_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/modules/dasXbyak/zydis/dependencies/zycore/include)
	SET(DAS_ZYCORE_SRC_DIR     ${CMAKE_SOURCE_DIR}/modules/dasXbyak/zydis/dependencies/zycore/src)


	# libDasModuleZydis
	SET(DAS_ZYDIS_MODULE_SRC
		${DAS_XBYAK_DIR}/src/dasZydis.h
		${DAS_XBYAK_DIR}/src/dasZydis.cpp
	)

	# zcore
	SET(DAS_ZYCORE_SRC
		${DAS_ZYCORE_SRC_DIR}/Allocator.c
		${DAS_ZYCORE_SRC_DIR}/ArgParse.c
		${DAS_ZYCORE_SRC_DIR}/Bitset.c
		${DAS_ZYCORE_SRC_DIR}/Format.c
		${DAS_ZYCORE_SRC_DIR}/List.c
		${DAS_ZYCORE_SRC_DIR}/String.c
		${DAS_ZYCORE_SRC_DIR}/Vector.c
		${DAS_ZYCORE_SRC_DIR}/Zycore.c
		${DAS_ZYCORE_SRC_DIR}/API/Memory.c
		${DAS_ZYCORE_SRC_DIR}/API/Process.c
		${DAS_ZYCORE_SRC_DIR}/API/Synchronization.c
		${DAS_ZYCORE_SRC_DIR}/API/Terminal.c
		${DAS_ZYCORE_SRC_DIR}/API/Thread.c
	)

	SET(DAS_ZYDIST_SRC
		${DAS_ZYDIS_SRC_DIR}/Decoder.c
		${DAS_ZYDIS_SRC_DIR}/DecoderData.c
		${DAS_ZYDIS_SRC_DIR}/Formatter.c
		${DAS_ZYDIS_SRC_DIR}/FormatterATT.c
		${DAS_ZYDIS_SRC_DIR}/FormatterBase.c
		${DAS_ZYDIS_SRC_DIR}/FormatterBuffer.c
		${DAS_ZYDIS_SRC_DIR}/FormatterIntel.c
		${DAS_ZYDIS_SRC_DIR}/Generated
		${DAS_ZYDIS_SRC_DIR}/MetaInfo.c
		${DAS_ZYDIS_SRC_DIR}/Mnemonic.c
		${DAS_ZYDIS_SRC_DIR}/Register.c
		${DAS_ZYDIS_SRC_DIR}/SharedData.c
		${DAS_ZYDIS_SRC_DIR}/String.c
		${DAS_ZYDIS_SRC_DIR}/Utils.c
		${DAS_ZYDIS_SRC_DIR}/Zydis.c
	)

	ADD_MODULE_LIB(libDasModuleZydis)
	ADD_MODULE_CPP(Zydis)
	ADD_LIBRARY(libDasModuleZydis ${DAS_ZYDIS_MODULE_SRC} ${DAS_ZYCORE_SRC} ${DAS_ZYDIST_SRC})
	TARGET_LINK_LIBRARIES(libDasModuleZydis ${ZYDIS_LIBRARIES})
	ADD_DEPENDENCIES(libDasModuleZydis libDaScript)
	TARGET_INCLUDE_DIRECTORIES(libDasModuleZydis PUBLIC ${ZYDIS_INCLUDE_DIR} ${DAS_XBYAK_DIR}
		${DAS_ZYCONFIG_DIR}
		${DAS_ZYCORE_INCLUDE_DIR} ${DAS_ZYDIS_INCLUDE_DIR} ${DAS_ZYDIS_SRC_DIR}
	)
	TARGET_COMPILE_DEFINITIONS(libDasModuleZydis PUBLIC -DZYCORE_STATIC_DEFINE)
	TARGET_COMPILE_DEFINITIONS(libDasModuleZydis PUBLIC -DZYDIS_STATIC_DEFINE)
	SETUP_CPP11(libDasModuleZydis)

ENDIF()
