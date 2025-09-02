cmake_minimum_required(VERSION 3.25)

set(CMAKE_BUILD_TYPE RelWithDebInfo) # Override build type for correct optimization flags
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # Generate compile_commands.json for clangd
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION OFF) # Disable LTO
cmake_policy(SET CMP0091 NEW) # Enable MSVC runtime library selection
set(CMAKE_MSVC_RUNTIME_LIBRARY "") # Manually set runtime library to avoid warning
add_compile_options("/MT$<$<CONFIG:Debug>:d>" $<$<COMPILE_LANGUAGE:CXX>:/GR> /GS- /fp:fast) # Use static runtime libraries
add_link_options("/MANIFEST:NO") # Disable manifest generation
add_compile_definitions("_CRT_SECURE_NO_DEPRECATE" "_CRT_SECURE_NO_WARNINGS" "_WINSOCK_DEPRECATED_NO_WARNINGS") # Disable CRT/Winsock warnings

project(FUEL C CXX)

# Verify that the correct compiler is being used
if (NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC" AND NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    message(FATAL_ERROR "Only MSVC is supported for C++. Found ${CMAKE_CXX_COMPILER_ID}. Please read the README for more information.")
endif()

if (NOT "${CMAKE_C_COMPILER_ID}" STREQUAL "MSVC" AND NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    message(FATAL_ERROR "Only MSVC is supported for C. Found ${CMAKE_C_COMPILER_ID}. Please read the README for more information.")
endif()

# Verify that the correct compiler version is being used
if ("${CMAKE_C_COMPILER_ID}" STREQUAL "MSVC" AND NOT "${CMAKE_CXX_COMPILER_VERSION}" STREQUAL "14.0.50727")
    message(FATAL_ERROR "MSVC 14.0.50727 from MSVC 8.0 is required for C++. Found ${CMAKE_CXX_COMPILER_VERSION}. Please read the README for more information.")
endif()

if ("${CMAKE_C_COMPILER_ID}" STREQUAL "MSVC" AND NOT "${CMAKE_C_COMPILER_VERSION}" STREQUAL "14.0.50727")
    message(FATAL_ERROR "MSVC 14.0.50727 from MSVC 8.0 is required for C. Found ${CMAKE_C_COMPILER_VERSION}. Please read the README for more information.")
endif()

# Verify that the extensions are present
include(CheckCSourceCompiles)
set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")
if ("${CMAKE_C_COMPILER_ID}" STREQUAL "MSVC")
	check_c_source_compiles(
		"
		#if _WSC_VER != 100
			#error Not patched compiler
		#endif
		void __usercall __eax x(int y) {}
		"
		HAS_USERCALL
	)
	if (NOT HAS_USERCALL)
		message(FATAL_ERROR "wrong version of patched compiler or __usercall not supported. Make sure you are using the correct version of the patched compiler.")
	endif()
else()
	check_c_source_compiles(
		"
		#ifndef __widberg__
			#error widberg extensions not present
		#endif
		void __usercall x(int y@<eax>) {}
		"
		HAS_WIDBERG
	)
	if (NOT HAS_WIDBERG)
		message(FATAL_ERROR "widberg extensions not present. Make sure you are using llvm-project-widberg-extensions.")
	endif()
endif()

find_package (Python3 COMPONENTS Interpreter REQUIRED)

set(FUEL_DECOMPILATION_NAME "FUELDecompilation" CACHE STRING "Name to use for the FUEL decompilation executable.")
set(FUEL_DECOMPILATION_BASENAME "${FUEL_DECOMPILATION_NAME}${CMAKE_EXECUTABLE_SUFFIX}")
set(FUEL_ARGS "-W" CACHE STRING "Arguments to pass FUEL in the run and debug targets.")

set(USE_ALLOCATOR "msvcrt" CACHE STRING "Memory allocator to use. Options are 'msvcrt', 'dmalloc', and 'mimalloc'.")
option(USE_SECUROM "Use original SecuROM copy protection." OFF)
option(USE_RUNNING_CHECK "Use original game already running check." OFF)
option(USE_NON_MATCHING "Use non-matching game code." OFF)
option(USE_FMTK "Use FMTK extension points." OFF)

set(FUEL_INSTALL_DIR "$ENV{FUEL_INSTALL_DIR}" CACHE STRING "Path to FUEL install directory.")
set(X64DBG_INSTALL_DIR "$ENV{X64DBG_INSTALL_DIR}" CACHE STRING "Path to x64dbg install directory.")
set(DXSDK_DIR "$ENV{DXSDK_DIR}" CACHE STRING "Path to Microsoft DirectX SDK (August 2008) install directory.")

if ("${CMAKE_C_COMPILER_ID}" STREQUAL "Clang")
	add_compile_options("-Xclang" "-Wno-microsoft") # I know what I'm doing
endif()

add_executable(FUEL WIN32
	Resources/FUEL.rc
	OffRoad/xcu.c
)
set_source_files_properties("Resources/FUEL.rc"
    PROPERTIES
    OBJECT_DEPENDS
		"${CMAKE_CURRENT_SOURCE_DIR}/Resources/__GDF_THUMBNAIL.bin;${CMAKE_CURRENT_SOURCE_DIR}/Resources/__GDF_XML.txt;${CMAKE_CURRENT_SOURCE_DIR}/Resources/ICON101_1.ico;${CMAKE_CURRENT_SOURCE_DIR}/Resources/ICON142_1.ico;${CMAKE_CURRENT_SOURCE_DIR}/Resources/MANIFEST1_1.txt;${CMAKE_CURRENT_SOURCE_DIR}/Resources/SPAFILE.bin"
)

target_link_options(FUEL BEFORE PRIVATE
	"/RELEASE"
    "/INCLUDE:__fltused"
	"/INCREMENTAL:NO"
	"/SUBSYSTEM:WINDOWS,4.0"
)

if ("${CMAKE_C_COMPILER_ID}" STREQUAL "MSVC")
	target_link_options(FUEL BEFORE PRIVATE
		"/BASE:0x01000000"
		"/NODEFAULTLIB"
	)
endif()

if ("${CMAKE_C_COMPILER_ID}" STREQUAL "Clang")
	target_link_options(FUEL BEFORE PRIVATE
		"/SAFESEH:NO"
	)
endif()

target_link_libraries(FUEL PRIVATE
	defuel
	libfuel
)

if(FUEL_INSTALL_DIR)
    add_custom_command(TARGET FUEL POST_BUILD
        # The FUEL executable needs to be copied to the install directory to run properly since GetModuleFileName is used to
        # get the path of some game files instead of using the current working directory
        COMMAND "${CMAKE_COMMAND}" -E copy "$<TARGET_FILE:FUEL>" "${FUEL_INSTALL_DIR}/${FUEL_DECOMPILATION_BASENAME}"
    )
endif()

add_library(defuel STATIC
	OffRoad/BaseInGameDatas_G.cpp
	OffRoad/BufferPack_G.cpp
	OffRoad/CheatCodeHUD.cpp
	OffRoad/Client/ClientGameMain.cpp
	OffRoad/Client/Includes/ClientGame.h
	OffRoad/Client/Includes/Client_G.h
	OffRoad/Client/ScriptManagerClient_G.cpp
	OffRoad/ClipMapsSystem_G.cpp
	OffRoad/DebugCarHUD.cpp
	OffRoad/DialogMenu_G.cpp
	OffRoad/Dialogs_MainMenu.cpp
	OffRoad/Dialog_G.cpp
	OffRoad/Dialog_MsgBox.cpp
	OffRoad/Dialog_NetworkAlert.cpp
	OffRoad/Dialog_SigninAlert.cpp
	OffRoad/Dialog_StartLang.cpp
	OffRoad/EditorHUD.cpp
	OffRoad/EnemyGenerator_G.cpp
	OffRoad/FlashScreenFxManipulator_G.cpp
	OffRoad/GameMgr_G.cpp
	OffRoad/GameNetworkStatics.cpp
	OffRoad/GameWorldClt.cpp
	OffRoad/GameWorldSrv.cpp
	OffRoad/GPSMgr_G.cpp
	OffRoad/Graphics2D_G.cpp
	OffRoad/GUI/LogicComponents/Gauge_G.cpp
	OffRoad/GUI/LogicComponents/ListBox_G.cpp
	OffRoad/GUI/LogicComponents/NumericUpDown_G.cpp
	OffRoad/GUI/LogicComponents/RotatingList_G.cpp
	OffRoad/GUI/LogicComponents/ScrollBar_G.cpp
	OffRoad/GUI/LogicComponents/StaticText_G.cpp
	OffRoad/GUI/LogicComponents/Window_G.cpp
	OffRoad/HubVolumeAgent_G.cpp
	OffRoad/IAManipulator.cpp
	OffRoad/IAPathManager_G.cpp
	OffRoad/Includes/ActionHelper_G.h
	OffRoad/Includes/BackGlobalInGameData_G.h
	OffRoad/Includes/BaseAgent_G.h
	OffRoad/Includes/CameraAgent_G.h
	OffRoad/Includes/CameraGame_G.h
	OffRoad/Includes/CareerModeManager_G.h
	OffRoad/Includes/ChangeLevelVolumeAgent_G.h
	OffRoad/Includes/CharsData_G.h
	OffRoad/Includes/CheckpointVolAgent_G.h
	OffRoad/Includes/CollectAgent_G.h
	OffRoad/Includes/CommandStatesMachine_G.h
	OffRoad/Includes/CreaturesBoneManip.h
	OffRoad/Includes/CreaturesCommands_Enums.h
	OffRoad/Includes/CreaturesMove_G.h
	OffRoad/Includes/CreaturesStatesMachine_G.h
	OffRoad/Includes/Creatures_G.h
	OffRoad/Includes/DaylightManipulator_G.h
	OffRoad/Includes/DetectVolumeAgent_G.h
	OffRoad/Includes/DialogGroup_G.h
	OffRoad/Includes/DiscoveryPointVisibleObject.h
	OffRoad/Includes/DrapeauxAgent_G.h
	OffRoad/Includes/EndMissionVolumeAgent_G.h
	OffRoad/Includes/Enemies_G.h
	OffRoad/Includes/EnemyGenerator_G.h
	OffRoad/Includes/Enum_CreaturesStates_G.h
	OffRoad/Includes/EvenementVolAgent_G.h
	OffRoad/Includes/F14.h
	OffRoad/Includes/F14Move.h
	OffRoad/Includes/FadeManager_G.h
	OffRoad/Includes/FakeShadows_G.h
	OffRoad/Includes/FlashScreenFxManipulator_G.h
	OffRoad/Includes/FrontGlobalInGameData_G.h
	OffRoad/Includes/FXParticlesDraw_G.h
	OffRoad/Includes/FXVolumeAgent_G.h
	OffRoad/Includes/GameAgent_G.h
	OffRoad/Includes/GameLogicAgent_G.h
	OffRoad/Includes/Game_ParticleMgr_G.h
	OffRoad/Includes/Game_SoundMgr_G.h
	OffRoad/Includes/GPSMgr_G.h
	OffRoad/Includes/Heros_G.h
	OffRoad/Includes/HubVolumeAgent_G.h
	OffRoad/Includes/IADynATVPathFinder.h
	OffRoad/Includes/IADynPathGrid_G.h
	OffRoad/Includes/IAManipulator.h
	OffRoad/Includes/IAPathManager_G.h
	OffRoad/Includes/ImpactVolumeAgent_G.h
	OffRoad/Includes/InGameCreatures_G.h
	OffRoad/Includes/InGameFx_G.h
	OffRoad/Includes/InGamePlayer_G.h
	OffRoad/Includes/ItemMgr_G.h
	OffRoad/Includes/IT_ANIMATED.h
	OffRoad/Includes/IT_Bird.h
	OffRoad/Includes/IT_BirdMove.h
	OffRoad/Includes/IT_Break.h
	OffRoad/Includes/IT_BreakMove.h
	OffRoad/Includes/IT_COLLECTMove_G.h
	OffRoad/Includes/IT_Condition.h
	OffRoad/Includes/IT_Debris.h
	OffRoad/Includes/IT_DebrisMove.h
	OffRoad/Includes/IT_DECORDYNMESH.h
	OffRoad/Includes/IT_DECORMESH_G.h
	OffRoad/Includes/IT_DYNCOLLECTMove_G.h
	OffRoad/Includes/IT_DYNCOLLECT_G.h
	OffRoad/Includes/IT_DYNOBJMove_G.h
	OffRoad/Includes/IT_DYNOBJ_G.h
	OffRoad/Includes/IT_DynPilot.h
	OffRoad/Includes/IT_DynPilotMove.h
	OffRoad/Includes/IT_Dyn_VehicleMove_G.h
	OffRoad/Includes/IT_Dyn_Vehicle_G.h
	OffRoad/Includes/IT_FuelAgent.h
	OffRoad/Includes/IT_FuelMove.h
	OffRoad/Includes/IT_Helico.h
	OffRoad/Includes/IT_HelicoMove.h
	OffRoad/Includes/IT_LiveryAgent.h
	OffRoad/Includes/IT_LiveryMove.h
	OffRoad/Includes/IT_MAGNET.h
	OffRoad/Includes/IT_PanoramaPointAgent.h
	OffRoad/Includes/IT_PanoramaPointMove.h
	OffRoad/Includes/IT_Pilot.h
	OffRoad/Includes/IT_PilotMove.h
	OffRoad/Includes/IT_POWERJOBManipulator_G.h
	OffRoad/Includes/IT_POWERJOB_G.h
	OffRoad/Includes/IT_SmallDebris.h
	OffRoad/Includes/IT_SmallDebrisMove.h
	OffRoad/Includes/IT_SOUND_G.h
	OffRoad/Includes/IT_SpinCollectAgent.h
	OffRoad/Includes/IT_SpinCollectMove.h
	OffRoad/Includes/IT_Stone_G.h
	OffRoad/Includes/IT_TornadoDebrisAgent.h
	OffRoad/Includes/IT_TornadoDebrisManipulator.h
	OffRoad/Includes/IT_TornadoPath.h
	OffRoad/Includes/IT_TornadoPathMove.h
	OffRoad/Includes/KillVolume.h
	OffRoad/Includes/LevelAdvancement_G.h
	OffRoad/Includes/LevelAgent_G.h
	OffRoad/Includes/LevelData_G.h
	OffRoad/Includes/LevelManipulator_G.h
	OffRoad/Includes/LightVolumeAgent_G.h
	OffRoad/Includes/LiquidFlow_G.h
	OffRoad/Includes/LoadingDraw_G.h
	OffRoad/Includes/LogicAgent_G.h
	OffRoad/Includes/MapVolumeAgent_G.h
	OffRoad/Includes/MemoryCardMgr_G.h
	OffRoad/Includes/MenuLogicAgent_G.h
	OffRoad/Includes/MenuManager_G.h
	OffRoad/Includes/MissionStartMiddleAgent.h
	OffRoad/Includes/MissionStatus.h
	OffRoad/Includes/MotherTornadoAgent_G.h
	OffRoad/Includes/MotherTornadoManipulator_G.h
	OffRoad/Includes/MusicManager_G.h
	OffRoad/Includes/MVehicle_G.h
	OffRoad/Includes/MVehicle_Manager_G.h
	OffRoad/Includes/NodeVolumeAgent_G.h
	OffRoad/Includes/NoGeneratedObjectVolumeAgent.h
	OffRoad/Includes/ObjectAgent_G.h
	OffRoad/Includes/PaddleChecker_G.h
	OffRoad/Includes/PermanentDraw.h
	OffRoad/Includes/PhysicAgt_G.h
	OffRoad/Includes/PhysicObj_G.h
	OffRoad/Includes/PlayerMove_G.h
	OffRoad/Includes/Player_G.h
	OffRoad/Includes/ProGroundMgr_G.h
	OffRoad/Includes/RollingBush.h
	OffRoad/Includes/RollingBushMove.h
	OffRoad/Includes/RtcScriptAgent_G.h
	OffRoad/Includes/RtcScripted_G.h
	OffRoad/Includes/SaveVolumeAgent_G.h
	OffRoad/Includes/SmallTornadoAgent_G.h
	OffRoad/Includes/SmallTornadoManipulator_G.h
	OffRoad/Includes/SpecialEffectsManager_G.h
	OffRoad/Includes/StatesMachine_G.h
	OffRoad/Includes/TextGameDraw_G.h
	OffRoad/Includes/ThrownMove_G.h
	OffRoad/Includes/TornadoAgent_G.h
	OffRoad/Includes/TornadoEventVolumeAgent_G.h
	OffRoad/Includes/TornadoManipulator_G.h
	OffRoad/Includes/TrafficManipulator_G.h
	OffRoad/Includes/VibrationManager_G.h
	OffRoad/Includes/VolumeDelayedStartMove_G.h
	OffRoad/Includes/VolumeDelayedStart_G.h
	OffRoad/Includes/VolumeRTCMove_G.h
	OffRoad/Includes/VolumeRTC_G.h
	OffRoad/Includes/WeatherManager_G.h
	OffRoad/Includes/ZoneVolumeAgent_G.h
	OffRoad/InGamePausePageEditor_G.cpp
	OffRoad/InGamePausePageMap_G.cpp
	OffRoad/LiquidFlow_G.cpp
	OffRoad/Loading_Icon.cpp
	OffRoad/Loading_Logo.cpp
	OffRoad/MapHUD.cpp
	OffRoad/MapHUD_ClipMapSystem.cpp
	OffRoad/MapHUD_FogOfWar.cpp
	OffRoad/MemoryCardMgr_G.cpp
	OffRoad/MenuItemButtonTT_G.cpp
	OffRoad/MenuItemButton_G.cpp
	OffRoad/MenuItemFillRect_G.cpp
	OffRoad/MenuItemImage_G.cpp
	OffRoad/MenuItemLabelTT_G.cpp
	OffRoad/MenuItemLabel_G.cpp
	OffRoad/MenuItemListBoxTT_G.cpp
	OffRoad/MenuItemListBox_G.cpp
	OffRoad/MenuItemRegionImage_G.cpp
	OffRoad/MenuItemVirtualLabel_G.cpp
	OffRoad/MenuItem_G.cpp
	OffRoad/MenuManager_G.cpp
	OffRoad/MissionFilter.cpp
	OffRoad/MissionGenerator.cpp
	OffRoad/Missions/Includes/MissionEnum_G.h
	OffRoad/Missions/Includes/MissionManager_G.h
	OffRoad/Missions/Includes/OfflineMissionVolumeAgent_G.h
	OffRoad/MissionStatusStart.cpp
	OffRoad/MVehicle_G_Effects.cpp
	OffRoad/Navigator3DArrows.cpp
	OffRoad/Navigator3dHUD.cpp
	OffRoad/NetworkGameSessionManager_G.cpp
	OffRoad/NetWorkPeerToPeer_G.cpp
	OffRoad/PilotLiveryMesh.cpp
	OffRoad/QuadTree_G.cpp
	OffRoad/SandTornadoManipulator_G.cpp
	OffRoad/ScriptManager_G.cpp
	OffRoad/ServerMapStat.cpp
	OffRoad/Servers/ServerGame/ServerGame_G.h
	OffRoad/Servers/Server_G.h
	OffRoad/SignallingHUD.cpp
	OffRoad/SmallTornadoManipulator_G.cpp
	OffRoad/SpecialEffectsCloudTop.cpp
	OffRoad/SpecialEffectsManager_G.cpp
	OffRoad/SpecialEffectsRainTank_G.cpp
	OffRoad/SpecialEffectsSandMesh_G.cpp
	OffRoad/SpecialEffectsSandTank_G.cpp
	OffRoad/SpecialEffectsSnowTank_G.cpp
	OffRoad/SpecialEffectsSuperCell_G.cpp
	OffRoad/SpecialEffectsTank_G.cpp
	OffRoad/SpecialEffectsTornadoMesh_G.cpp
	OffRoad/SpecialEffectsTornado_G.cpp
	OffRoad/SpecialEffectsUniqueEmitters_G.cpp
	OffRoad/SpecialEffectsWheelEmitter_G.cpp
	OffRoad/SpecialEffectsWindTank_G.cpp
	OffRoad/StaticTextInfos.cpp
	OffRoad/StuntHUD.cpp
	OffRoad/TornadoManipulator_G.cpp
	OffRoad/TrafficManipulator_G.cpp
	OffRoad/UserCommand_G.cpp
	OffRoad/VehicleLiveryMesh.cpp
	OffRoad/VehiclesDataMgr_G.cpp
	OffRoad/VibrationManager_G.cpp
	OffRoad/ViewportHUD.cpp
	OffRoad/VisibleObjectMgr.cpp
	OffRoad/WeatherManagerEffects.cpp
	OffRoad/Includes/vftables.hpp
    OffRoad/strings.cpp
    OffRoad/strings_utf8.cpp
	OffRoad/trivial.cpp
	OffRoad/floats.cpp
	OffRoad/vftables.cpp
)

if ("${CMAKE_C_COMPILER_ID}" STREQUAL "Clang")
	# Keep clang from optimizing out all the float and string symbols
	set_source_files_properties(
		OffRoad/strings.cpp
		OffRoad/strings_utf8.cpp
		OffRoad/floats.cpp
		PROPERTIES
			COMPILE_FLAGS "-Xclang -fno-jump-tables"
	)
endif()

target_include_directories(defuel PRIVATE
	OffRoad/Includes
)

target_link_libraries(defuel PRIVATE
	Engine
	LIBPC_Common
	LIBPC_TNL
)

target_link_libraries(defuel PUBLIC
	EngineConfig
)

add_custom_command(
	COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_SOURCE_DIR}/tools/comments2coffdrop.py" "${CMAKE_CURRENT_BINARY_DIR}/libfuel.drop" "$<TARGET_FILE:defuel>" "$<TARGET_FILE:Engine>" "$<TARGET_FILE:LIBPC_Common>" "$<TARGET_FILE:LIBPC_TNL>"
	DEPENDS defuel Engine LIBPC_Common LIBPC_TNL "${CMAKE_CURRENT_SOURCE_DIR}/tools/comments2coffdrop.py"
	OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/libfuel.drop"
	WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
)

add_executable(coffdrop tools/coffdrop.c)

add_custom_command(
    COMMAND "$<TARGET_FILE:coffdrop>" "${CMAKE_CURRENT_BINARY_DIR}/libfuel.drop" "${CMAKE_CURRENT_SOURCE_DIR}/libs/libfuel.obj" "${CMAKE_CURRENT_BINARY_DIR}/libfuel.obj" "${CMAKE_CURRENT_BINARY_DIR}/libfuel.objdiff.obj"
    COMMAND lib "/OUT:${CMAKE_CURRENT_BINARY_DIR}/libfuel.lib" "${CMAKE_CURRENT_BINARY_DIR}/libfuel.obj"
    DEPENDS coffdrop "${CMAKE_CURRENT_BINARY_DIR}/libfuel.drop" "${CMAKE_CURRENT_SOURCE_DIR}/libs/libfuel.obj"
    BYPRODUCTS "${CMAKE_CURRENT_BINARY_DIR}/libfuel.obj"
    OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/libfuel.lib" "${CMAKE_CURRENT_BINARY_DIR}/libfuel.objdiff.obj"
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
)
add_custom_target(libfuel_generate DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/libfuel.lib")
add_library(libfuel STATIC IMPORTED GLOBAL)
add_dependencies(libfuel libfuel_generate)
set_target_properties(libfuel PROPERTIES IMPORTED_LOCATION "${CMAKE_CURRENT_BINARY_DIR}/libfuel.lib")

function(create_import_library basename)
	add_custom_command(
		COMMAND lib "/MACHINE:X86" "/DEF:libs/${basename}.def" "/OUT:${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib"
		DEPENDS "libs/${basename}.def"
		OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib"
		WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
	)
	add_custom_target(${basename}_generate DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib")
	add_library(${basename} STATIC IMPORTED GLOBAL)
    target_include_directories(${basename} INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/libs/include")
    add_dependencies(${basename} ${basename}_generate)
	set_target_properties(${basename} PROPERTIES IMPORTED_LOCATION "${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib")
endfunction(create_import_library)

create_import_library("AVIFIL32")
create_import_library("binkw32")
create_import_library("MSVFW32")
create_import_library("xlive")

if(FUEL_INSTALL_DIR)
    add_custom_target(run
        COMMAND "${FUEL_INSTALL_DIR}/${FUEL_DECOMPILATION_BASENAME}" ${FUEL_ARGS}
        DEPENDS FUEL
        WORKING_DIRECTORY "${FUEL_INSTALL_DIR}"
    )

    if(NOT X64DBG_INSTALL_DIR STREQUAL "")
        add_custom_target(debug
            COMMAND "${X64DBG_INSTALL_DIR}/release/x32/x32dbg.exe" "${FUEL_INSTALL_DIR}/${FUEL_DECOMPILATION_BASENAME}" "${FUEL_ARGS}" "${FUEL_INSTALL_DIR}"
            DEPENDS FUEL
            WORKING_DIRECTORY "${FUEL_INSTALL_DIR}"
        )
    endif()

    add_executable(dibs tools/dibs.c)

    add_custom_target(run-dibs
        COMMAND "$<TARGET_FILE:dibs>" 0x400000 0x800000 "${FUEL_DECOMPILATION_BASENAME} ${FUEL_ARGS}"
        DEPENDS dibs FUEL
        WORKING_DIRECTORY "${FUEL_INSTALL_DIR}"
    )
endif()

add_library(EngineConfig INTERFACE)
target_include_directories(EngineConfig INTERFACE
	"${CMAKE_CURRENT_BINARY_DIR}/EngineConfig"
)

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/EngineConfig/EngineConfig.h.in" "${CMAKE_CURRENT_BINARY_DIR}/EngineConfig/EngineConfig.h")

target_compile_options(EngineConfig INTERFACE
	"/FI${CMAKE_CURRENT_BINARY_DIR}/EngineConfig/EngineConfig.h"
)

add_library(Engine STATIC
	Engine/ABC_Behavior.cpp
	Engine/AGW_Altitude.cpp
	Engine/A_StockData.cpp
	Engine/A_StockRoads.cpp
	Engine/Binary_Z.cpp
	Engine/Bitmap_Z.cpp
	Engine/BoneNode_Z.cpp
	Engine/BuilderRoads.cpp
	Engine/BuilderRoadsMP.cpp
	Engine/CameraEngineZoneCapture_Z.cpp
	Engine/ComDBodbc_Z.cpp
	Engine/ComObj_Z.cpp
	Engine/ComPipe_Z.cpp
	Engine/ComServer_Z.cpp
	Engine/ConsoleCommand_Z.cpp
	Engine/Console_Z.cpp
	Engine/DecorBushes.cpp
	Engine/DecorGrass.cpp
	Engine/DecorMesh.cpp
	Engine/DecorObjectParameters.cpp
	Engine/DecorPaysage.cpp
	Engine/DecorRocks.cpp
	Engine/DecorSandDunes.cpp
	Engine/DecorTrees.cpp
	Engine/DrawPrimitive.cpp
	Engine/ExtrasParser.cpp
	Engine/FractalMachin.cpp
	Engine/GenWorldMaterial_Z.cpp
	Engine/GraphLevel_Z.cpp
	Engine/GraphLoad_Z.cpp
	Engine/Graph_Z.cpp
	Engine/Handle_Z.cpp
	Engine/HField_Z.cpp
	Engine/Includes/ABC_Message_Engine.h
	Engine/Includes/Agent_Z.h
	Engine/Includes/AGW_TerraBase.h
	Engine/Includes/AGW_TerraCache.h
	Engine/Includes/AGW_TerraFlat.h
	Engine/Includes/AnimatedAgent_Z.h
	Engine/Includes/AnimatedMsgAgent_Z.h
	Engine/Includes/Animation_Z.h
	Engine/Includes/AnimFrame_Z.h
	Engine/Includes/Anim_Symbol_Engine.h
	Engine/Includes/ARamXAllocator_Z.h
	Engine/Includes/A_BigLake.h
	Engine/Includes/A_Gulch.h
	Engine/Includes/A_Roads.h
	Engine/Includes/A_WorkBump.h
	Engine/Includes/BigFileHeaders_Z.h
	Engine/Includes/Binary_Z.h
	Engine/Includes/Bitmap_Z.h
	Engine/Includes/BnkDynArray_Z.h
	Engine/Includes/BnkLinkArray_Z.h
	Engine/Includes/BnkNoLinkArray_Z.h
	Engine/Includes/BnkSafeArray_Z.h
	Engine/Includes/CameraAgent_Z.h
	Engine/Includes/CameraEngineZone_Z.h
	Engine/Includes/CameraOccluder_Z.h
	Engine/Includes/CameraStream_Z.h
	Engine/Includes/CameraZone_Z.h
	Engine/Includes/Camera_Z.h
	Engine/Includes/cA_ValidityMap.h
	Engine/Includes/CollisionVol_Z.h
	Engine/Includes/ComClient_Z.h
	Engine/Includes/ComServer_Z.h
	Engine/Includes/ComWorld_Z.h
	Engine/Includes/ConsoleInterp_Z.h
	Engine/Includes/DecorBushes.h
	Engine/Includes/DecorContainer.h
	Engine/Includes/DecorMesh.h
	Engine/Includes/DecorObjectParameters.h
	Engine/Includes/DecorTrees.h
	Engine/Includes/DynamicAnim2_Z.h
	Engine/Includes/DynArray_Z.h
	Engine/Includes/DynPtrArray_Z.h
	Engine/Includes/DynString_Z.h
	Engine/Includes/Emiter_Z.h
	Engine/Includes/FIFO_Z.h
	Engine/Includes/Floating2dCache.h
	Engine/Includes/Fonts_Z.h
	Engine/Includes/GameObj_Z.h
	Engine/Includes/Game_Z.h
	Engine/Includes/GenWorldSurface_Z.h
	Engine/Includes/GenWorld_Z.h
	Engine/Includes/Graph_Z.h
	Engine/Includes/GwRoad_Z.h
	Engine/Includes/HashTable_Z.h
	Engine/Includes/HFog_Z.h
	Engine/Includes/HugeDynArray_Z.h
	Engine/Includes/InGameDatas_Z.h
	Engine/Includes/InGameObjectsManipulator_Z.h
	Engine/Includes/LightData_Z.h
	Engine/Includes/Light_Z.h
	Engine/Includes/List_Z.h
	Engine/Includes/LiveOverlapped_Z.h
	Engine/Includes/LodAgent_Z.h
	Engine/Includes/LodDynAgent_Z.h
	Engine/Includes/LodMove_Z.h
	Engine/Includes/Lod_Z.h
	Engine/Includes/MaterialAnim_Z.h
	Engine/Includes/MaterialObj_Z.h
	Engine/Includes/Material_Z.h
	Engine/Includes/MemList_Z.h
	Engine/Includes/MovingAgent_Z.h
	Engine/Includes/Name_Z.h
	Engine/Includes/Node_Z.h
	Engine/Includes/ObjectCache_Z.h
	Engine/Includes/ObjectMove_Z.h
	Engine/Includes/ObjectsGame_Z.h
	Engine/Includes/ObjectThrow_Z.h
	Engine/Includes/Object_Z.h
	Engine/Includes/Occluder_Z.h
	Engine/Includes/Omni_Z.h
	Engine/Includes/ParticlesAgent_Z.h
	Engine/Includes/Particles_Z.h
	Engine/Includes/Perlin3D_Z.h
	Engine/Includes/PhysicAgt_Z.h
	Engine/Includes/PhysicObj_Z.h
	Engine/Includes/PhysicWorld_Z.h
	Engine/Includes/PlayAnim_Z.h
	Engine/Includes/PlayBlendAnim_Z.h
	Engine/Includes/PlayerInfo_Z.h
	Engine/Includes/Points_Z.h
	Engine/Includes/ResIDBackGlobalInGameDef.h
	Engine/Includes/ResIDDef.h
	Engine/Includes/ResIDGlobalInGameDef.h
	Engine/Includes/Road_Z.h
	Engine/Includes/RtcAgent_Z.h
	Engine/Includes/RtcPlayer_Z.h
	Engine/Includes/Rtc_Z.h
	Engine/Includes/Sead2D.h
	Engine/Includes/Sead2D_Z.h
	Engine/Includes/SequenceAnim_Z.h
	Engine/Includes/SequenceMixAnim_Z.h
	Engine/Includes/SkinAgent_Z.h
	Engine/Includes/Sound_Symbol_Engine.h
	Engine/Includes/Sound_Z.h
	Engine/Includes/SplineGraph_Z.h
	Engine/Includes/SplineZone_Z.h
	Engine/Includes/Spline_Z.h
	Engine/Includes/StreamFile_Z.h
	Engine/Includes/StyleStatus.h
	Engine/Includes/SubLevelVolumeAgent_Z.h
	Engine/Includes/SubWorld_Z.h
	Engine/Includes/SuperSpray_Z.h
	Engine/Includes/Surface_Z.h
	Engine/Includes/Throwable_Z.h
	Engine/Includes/Tree_Z.h
	Engine/Includes/Txt_Z.h
	Engine/Includes/UserDefine_Z.h
	Engine/Includes/VehiculeMove_Z.h
	Engine/Includes/VisibleObjectContainer.h
	Engine/Includes/VisibleObjectMgr.h
	Engine/Includes/VolumeAgent_Z.h
	Engine/Includes/WaterHeightMap_Z.h
	Engine/Includes/WinLiveNetManager_Z.h
	Engine/Includes/WinMovieManipulator_Z.h
	Engine/Includes/WorldRef_Z.h
	Engine/Includes/World_Z.h
	Engine/InterfacesTscParser.cpp
	Engine/LiveBackendLeaderboard_Z.cpp
	Engine/LiveNetPlayManager_Z.cpp
	Engine/LiveOverlapped_Z.cpp
	Engine/Lod_Z.cpp
	Engine/Main_Z.cpp
	Engine/MemoryBank_Z.cpp
	Engine/MenuParser.cpp
	Engine/ModelOrder1C.cpp
	Engine/Name_Z.cpp
	Engine/NetPlayManager_Z.cpp
	Engine/NetWorkPeerToPeer_XBL.cpp
	Engine/PackerArith_Z.cpp
	Engine/Pack_Z.cpp
	Engine/Private/AnimationManagerMes_Z.cpp
	Engine/Private/BitmapLoad_Z.cpp
	Engine/Private/File_Z.cpp
	Engine/Private/LodLoad_Z.cpp
	Engine/Private/MeshLoad_Z.cpp
	Engine/Private/MetaStreamFile_Z.cpp
	Engine/Private/Movie_Z.cpp
	Engine/Private/RendererPrimitiveBuffers_Z.cpp
	Engine/Private/Renderer_Z.cpp
	Engine/Private/SkelLoad_Z.cpp
	Engine/Private/SoundLoad_Z.cpp
	Engine/Private/SurfaceLoad_Z.cpp
	Engine/Private/SystemObject_Z.cpp
	Engine/Skel_Z.cpp
	Engine/SubAlloc.cpp
	Engine/UnPack_Z.cpp
	Engine/UserDefineCmd_Z.cpp
	Engine/VoiceManager_Z.cpp
	Engine/VolatileMem_Z.cpp
)

target_include_directories(Engine PUBLIC
	Engine/Includes
)

target_link_libraries(Engine PRIVATE
	LIBPC_Common
)

target_link_libraries(Engine PUBLIC
	EngineConfig
)

add_library(LIBPC_Common STATIC
	LIBPC_Common/D3D_RendererHelpers_Z.cpp
	LIBPC_Common/Includes/HW/Memory_Z.h
	LIBPC_Common/Includes/FlarePc_Z.h
	LIBPC_Common/Includes/HFieldPc_Z.h
	LIBPC_Common/Includes/InGameObjectsPc_Z.h
	LIBPC_Common/Includes/MeshPc_Z.h
	LIBPC_Common/Includes/ParticlesPc_Z.h
	LIBPC_Common/Includes/RotShapePc_Z.h
	LIBPC_Common/Includes/SkelPc_Z.h
	LIBPC_Common/Includes/SkinPc_Z.h
	LIBPC_Common/Includes/SurfacePc_Z.h
	LIBPC_Common/Includes/WarpPc_Z.h
	LIBPC_Common/SaveGamePc_Z.cpp
	LIBPC_Common/WinConsole_Z.cpp
	LIBPC_Common/WinInputConnect_Z.cpp
	LIBPC_Common/WinIntState_Z.cpp
	LIBPC_Common/WinLiveNetPlayManager_Z.cpp
	LIBPC_Common/WinMain_Z.cpp
	LIBPC_Common/WinMutex_Z.cpp
	LIBPC_Common/WinThread_Z.cpp
	LIBPC_Common/WinTrophyManager_Z.cpp
	LIBPC_Common/WinXRamManager_Z.cpp
)

target_include_directories(LIBPC_Common INTERFACE
	LIBPC_Common/Includes
)

if (USE_ALLOCATOR STREQUAL "mimalloc")
	set(MI_BUILD_SHARED OFF CACHE BOOL "" FORCE)
	set(MI_BUILD_STATIC OFF CACHE BOOL "" FORCE)
	set(MI_BUILD_TESTS OFF CACHE BOOL "" FORCE)
	add_subdirectory(libs/mimalloc EXCLUDE_FROM_ALL SYSTEM)

	target_link_libraries(FUEL PUBLIC mimalloc-obj)
elseif (USE_ALLOCATOR STREQUAL "dmalloc")
	find_library(LIBCMT_PATH libcmt.lib)
	if (LIBCMT_PATH STREQUAL "LIBCMT_PATH-NOTFOUND")
		message(FATAL_ERROR "libcmt.lib not found in the toolchain's library paths.")
	endif()

	add_custom_command(
		COMMAND lib "/OUT:${CMAKE_CURRENT_BINARY_DIR}/libcmt_noalloc.lib" "/REMOVE:build\\intel\\mt_obj\\malloc.obj" "/REMOVE:build\\intel\\mt_obj\\calloc.obj" "/REMOVE:build\\intel\\mt_obj\\realloc.obj" "/REMOVE:build\\intel\\mt_obj\\free.obj" "/REMOVE:build\\intel\\mt_obj\\crtheap.obj" "${LIBCMT_PATH}"
		OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/libcmt_noalloc.lib"
		WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
	)
	add_custom_target(libcmt_noalloc_generate DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/libcmt_noalloc.lib")
	add_library(libcmt_noalloc STATIC IMPORTED GLOBAL)
	add_dependencies(libcmt_noalloc libcmt_noalloc_generate)
	set_target_properties(libcmt_noalloc PROPERTIES IMPORTED_LOCATION "${CMAKE_CURRENT_BINARY_DIR}/libcmt_noalloc.lib")

	add_library(crtheap STATIC
		libs/crtheap.c
	)
	target_link_libraries(libcmt_noalloc INTERFACE crtheap)

    add_library(dmalloc STATIC
        libs/dmalloc/append.c
        libs/dmalloc/arg_check.c
        libs/dmalloc/chunk.c
        libs/dmalloc/compat.c
        libs/dmalloc/dmalloc_rand.c
        libs/dmalloc/dmalloc_tab.c
        libs/dmalloc/env.c
        libs/dmalloc/error.c
        libs/dmalloc/heap.c
        libs/dmalloc/user_malloc.c
    )
    target_compile_definitions(dmalloc PUBLIC HAVE_STDARG_H=1 HAVE_STDIO_H=1 HAVE_STDLIB_H=1 HAVE_STRING_H=1 HAVE_STRINGS_H=0 HAVE_UNISTD_H=0 HAVE_SYS_MMAN_H=0 HAVE_SYS_TYPES_H=0 HAVE_W32API_WINBASE_H=0 HAVE_W32API_WINDEF_H=0 HAVE_SYS_CYGWIN_H=0 HAVE_SIGNAL_H=0 LOCK_THREADS=1)
    target_link_libraries(FUEL PUBLIC dmalloc libcmt_noalloc)
elseif(USE_ALLOCATOR STREQUAL "msvcrt")
	if("${CMAKE_C_COMPILER_ID}" STREQUAL "MSVC")
        target_link_libraries(FUEL PUBLIC libcmt.lib)
	endif()
else()
    message(FATAL_ERROR "Invalid memory allocator specified. Options are 'msvcrt', 'dmalloc', and 'mimalloc'.")
endif()

target_link_libraries(LIBPC_Common INTERFACE
	COMCTL32.lib
	WS2_32.lib
	ODBC32.lib
	SHLWAPI.lib
	WINMM.lib
	AVIFIL32
	binkw32
	MSVFW32
	xlive
	DXSDK
)

if ("${CMAKE_C_COMPILER_ID}" STREQUAL "Clang")
	add_library(iob STATIC
		libs/iob.cpp
	)
	target_link_libraries(LIBPC_Common INTERFACE
		legacy_stdio_definitions.lib
		iob
	)
endif()

if ("${CMAKE_C_COMPILER_ID}" STREQUAL "MSVC")
	target_link_libraries(LIBPC_Common INTERFACE
		AdvAPI32.Lib
		GDI32.lib
		Kernel32.lib
		KERNEL32.lib
		ole32.lib
		OLEAUT32.lib
		SHELL32.lib
		USER32.lib
	)
endif()

target_link_libraries(LIBPC_Common PUBLIC
	EngineConfig
)

add_library(LIBPC_TNL STATIC
	LIBPC_TNL/D3DTnL_RendererAvi_Z.cpp
)

target_include_directories(LIBPC_TNL INTERFACE
	LIBPC_TNL/Includes
)

target_link_libraries(LIBPC_TNL INTERFACE
	LIBPC_Common
)

target_link_libraries(LIBPC_TNL PUBLIC
	EngineConfig
)

add_library(DXSDK INTERFACE)

target_include_directories(DXSDK INTERFACE
	"${DXSDK_DIR}/Include"
)

target_link_libraries(DXSDK INTERFACE
	"${DXSDK_DIR}/Lib/x86/d3d9.lib"
	"${DXSDK_DIR}/Lib/x86/d3dx9.lib"
	"${DXSDK_DIR}/Lib/x86/DINPUT8.lib"
	"${DXSDK_DIR}/Lib/x86/DSOUND.lib"
	"${DXSDK_DIR}/Lib/x86/DxErr9.lib"
	"${DXSDK_DIR}/Lib/x86/Dxguid.lib"
	"${DXSDK_DIR}/Lib/x86/XINPUT.lib"
)
