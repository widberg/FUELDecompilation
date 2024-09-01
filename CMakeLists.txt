cmake_minimum_required(VERSION 3.14)

project(FUEL C CXX)

set(GHIDRA_ANALYZER_HEADLESS_PATH "$ENV{GHIDRA_INSTALL_DIR}/support/analyzeHeadless.bat")
set(GHIDRA_PROJECT_DIR "FUEL")
set(GHIDRA_PROJECT_NAME "FUEL")
set(GHIDRA_PROJECT_FILE_NAME "FUEL.exe")
set(FUEL_INSTALL_DIR "D:/SteamLibrary/steamapps/common/FUEL")
set(FUEL_ARGS "-W")
set(DXSDK_DIR "C:/Program Files (x86)/Microsoft DirectX SDK (August 2008)")

option(USE_SECUROM OFF)

add_executable(FUEL
	res/FUEL.rc
	src/xcu.c
)

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/src/includes/config.h.in" "${CMAKE_CURRENT_BINARY_DIR}/config.h")
target_include_directories(FUEL PRIVATE
	"${CMAKE_CURRENT_BINARY_DIR}/src/includes"
	"${CMAKE_CURRENT_BINARY_DIR}"
)

add_custom_command(TARGET FUEL POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_if_different "${CMAKE_CURRENT_SOURCE_DIR}/FUEL.exe.cfg" "$<TARGET_FILE_DIR:FUEL>/FUEL.exe.cfg"
	COMMAND ${CMAKE_COMMAND} -E copy_if_different "${CMAKE_CURRENT_SOURCE_DIR}/FUEL.exe.cdf" "$<TARGET_FILE_DIR:FUEL>/FUEL.exe.cdf"
	COMMAND makecat "${CMAKE_CURRENT_SOURCE_DIR}/FUEL.exe.cdf" -o "$<TARGET_FILE_DIR:FUEL>/FUEL.exe.cat"
	DEPENDS FUEL "${CMAKE_CURRENT_SOURCE_DIR}/FUEL.exe.cfg" "${CMAKE_CURRENT_SOURCE_DIR}/FUEL.exe.cdf"
	WORKING_DIRECTORY "$<TARGET_FILE_DIR:FUEL>"
)

set_target_properties(FUEL PROPERTIES
	INTERPROCEDURAL_OPTIMIZATION TRUE
)

target_link_directories(FUEL PRIVATE
	"${DXSDK_DIR}/Lib/x86"
)

target_link_options(FUEL BEFORE PRIVATE
	"/BASE:0x01000000"
	"/SUBSYSTEM:WINDOWS,4.0"
	"/NODEFAULTLIB"
	"/MANIFEST:NO"
)

target_link_libraries(FUEL PRIVATE
	AdvAPI32.Lib
	COMCTL32.lib
	d3d9.lib
	d3dx9.lib
	DINPUT8.lib
	DSOUND.lib
	DxErr9.lib
	Dxguid.lib
	GDI32.lib
	Kernel32.lib
	KERNEL32.lib
	libcmt.lib
	ODBC32.lib
	ole32.lib
	OLEAUT32.lib
	SHELL32.lib
	SHLWAPI.lib
	USER32.lib
	WINMM.lib
	WS2_32.lib
	XINPUT.lib

	AVIFIL32
	binkw32
	MSVFW32
	xlive
	libfuel
)

add_dependencies(FUEL AVIFIL32_generate binkw32_generate MSVFW32_generate xlive_generate libfuel_generate)

function(create_delink_library basename)
	add_custom_command(
		COMMAND cmd /c "${GHIDRA_ANALYZER_HEADLESS_PATH}" "${GHIDRA_PROJECT_DIR}" "${GHIDRA_PROJECT_NAME}" -process "${GHIDRA_PROJECT_FILE_NAME}" -readOnly -noanalysis -scriptPath "ghidra_scripts" -preScript "delink.py" "${basename}.json" "${CMAKE_CURRENT_BINARY_DIR}/${basename}.obj"
		COMMAND lib "/OUT:${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib" "${CMAKE_CURRENT_BINARY_DIR}/${basename}.obj"
		DEPENDS ghidra_scripts/delink.py "${basename}.json" "${GHIDRA_PROJECT_DIR}/${GHIDRA_PROJECT_NAME}.gpr"
		OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib"
		BYPRODUCTS "${CMAKE_CURRENT_BINARY_DIR}/${basename}.obj"
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
	add_custom_target(${basename}_generate DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib")
	add_library(${basename} STATIC IMPORTED GLOBAL)
	set_target_properties(${basename} PROPERTIES IMPORTED_LOCATION "${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib")
endfunction(create_delink_library)

create_delink_library("libfuel")

function(create_import_library basename)
	add_custom_command(
		COMMAND lib "/MACHINE:X86" "/DEF:libs/${basename}.def" "/OUT:${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib"
		DEPENDS "libs/${basename}.def"
		OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib"
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
	add_custom_target(${basename}_generate DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib")
	add_library(${basename} STATIC IMPORTED GLOBAL)
	set_target_properties(${basename} PROPERTIES IMPORTED_LOCATION "${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib")
endfunction(create_import_library)

create_import_library("AVIFIL32")
create_import_library("binkw32")
create_import_library("MSVFW32")
create_import_library("xlive")

add_custom_target(run
	COMMAND $<TARGET_FILE:FUEL> ${FUEL_ARGS}
	DEPENDS FUEL
	WORKING_DIRECTORY ${FUEL_INSTALL_DIR}
)
