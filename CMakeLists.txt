
IF (NOT DAS_XBYAK_INCLUDED)
    SET(DAS_XBYAK_INCLUDED TRUE)
    MESSAGE(STATUS "dasXbyak module included.")

	SET(DAS_XBYAK_DIR ${CMAKE_SOURCE_DIR}/modules/dasXbyak)

	SET(XBYAK_DIR ${CMAKE_SOURCE_DIR}/modules/dasXbyak/xbyak/xbyak)

    LIST(APPEND CMAKE_MODULE_PATH ${DAS_XBYAK_DIR})

	# libDasModuleXbyak
	SET(DAS_XBYAK_MODULE_SRC
		${DAS_XBYAK_DIR}/src/dasXbyak.h
		${DAS_XBYAK_DIR}/src/dasXbyak.cpp
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

ENDIF()
