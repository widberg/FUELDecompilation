cmake_minimum_required(VERSION 3.14)

set(CMAKE_BUILD_TYPE RelWithDebInfo) # Override build type for correct optimization flags
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # Generate compile_commands.json for clangd
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON) # Enable LTO
cmake_policy(SET CMP0091 NEW) # Enable MSVC runtime library selection
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>") # Use static runtime libraries
add_compile_options("/MT$<$<CONFIG:Debug>:d>") # Use static runtime libraries
add_link_options("/MANIFEST:NO") # Disable manifest generation

project(FUEL C CXX)

find_package (Python3 COMPONENTS Interpreter REQUIRED)

set(GHIDRA_INSTALL_DIR "$ENV{GHIDRA_INSTALL_DIR}" CACHE STRING "Path to Ghidra install directory.")

if(CMAKE_HOST_WIN32)
	set(GHIDRA_ANALYZE_HEADLESS cmd /c "${GHIDRA_INSTALL_DIR}/support/analyzeHeadless.bat")
else()
	set(GHIDRA_ANALYZE_HEADLESS "${GHIDRA_INSTALL_DIR}/support/analyzeHeadless")
endif()

set(GHIDRA_SERVER_ADDRESS "cs.widberg.me" CACHE STRING "Address of the Ghidra server.")
set(GHIDRA_SERVER_PORT "13100" CACHE STRING "Port of the Ghidra server.")
set(GHIDRA_SERVER_REPOSITORY_NAME "zouna" CACHE STRING "Repository on the Ghidra server.")
set(GHIDRA_SERVER_FOLDER_PATH "FUEL" CACHE STRING "Root folder path on the Ghidra server.")
set(GHIDRA_SERVER_PROJECT_FILE "FUEL.exe" CACHE STRING "Project file on the Ghidra server.")
set(GHIDRA_SERVER_USER "" CACHE STRING "Username for the Ghidra server, leave empty for anonymous.")
set(GHIDRA_SERVER_KEYSTORE "" CACHE STRING "Path to keystore file for the Ghidra server, leave empty for anonymous.")

set(GHIDRA_LOCAL_PROJECT_DIR "zouna" CACHE STRING "Directory containing local Ghidra project.")
set(GHIDRA_LOCAL_PROJECT_NAME "zouna" CACHE STRING "Local ghidra project name.")
set(GHIDRA_LOCAL_FOLDER_PATH "FUEL" CACHE STRING "Root folder path in the local project.")
set(GHIDRA_LOCAL_PROJECT_FILE "FUEL.exe" CACHE STRING "Project file in the local project.")

option(USE_GHIDRA_SERVER "If on, use the Ghidra server (very slow). If off, use the local project." OFF)

if(USE_GHIDRA_SERVER)
	set(GHIDRA_PROJECT "ghidra://${GHIDRA_SERVER_ADDRESS}$<$<BOOL:${GHIDRA_SERVER_PORT}>:\:${GHIDRA_SERVER_PORT}>/${GHIDRA_SERVER_REPOSITORY_NAME}/${GHIDRA_SERVER_FOLDER_PATH}" "$<$<BOOL:${GHIDRA_SERVER_USER}>:-connect \"${GHIDRA_SERVER_USER}\">" "$<$<BOOL:${GHIDRA_SERVER_KEYSTORE}>:-keystore \"${GHIDRA_SERVER_KEYSTORE}\">")
	set(GHIDRA_PROJECT_FILE "${GHIDRA_SERVER_PROJECT_FILE}")
	set(GHIDRA_GPR_FILE "")
	set(GHIDRA_FAKE_OUTPUT "__GHIDRA_FAKE_OUTPUT__")
else()
	set(GHIDRA_PROJECT "${GHIDRA_LOCAL_PROJECT_DIR}" "${GHIDRA_LOCAL_PROJECT_NAME}/${GHIDRA_LOCAL_FOLDER_PATH}")
	set(GHIDRA_PROJECT_FILE "${GHIDRA_LOCAL_PROJECT_FILE}")
	set(GHIDRA_GPR_FILE "${GHIDRA_LOCAL_PROJECT_DIR}/${GHIDRA_LOCAL_PROJECT_NAME}.gpr")
	set(GHIDRA_FAKE_OUTPUT "")
endif()

set(FUEL_DECOMPILATION_NAME "FUELDecompilation" CACHE STRING "Name to use for the FUEL decompilation executable.")
set(FUEL_DECOMPILATION_BASENAME "${FUEL_DECOMPILATION_BASENAME}${CMAKE_EXECUTABLE_SUFFIX}")
set(FUEL_ARGS "-W" CACHE STRING "Arguments to pass FUEL in the run and debug targets.")

option(USE_SECUROM "Use original SecuROM copy protection." OFF)
option(USE_RUNNING_CHECK "Use original game already running check." OFF)

set(FUEL_INSTALL_DIR "$ENV{FUEL_INSTALL_DIR}" CACHE STRING "Path to FUEL install directory.")
set(X64DBG_INSTALL_DIR "$ENV{X64DBG_INSTALL_DIR}" CACHE STRING "Path to x64dbg install directory.")
set(DXSDK_DIR "$ENV{DXSDK_DIR}" CACHE STRING "Path to Microsoft DirectX SDK (August 2008) install directory.")

add_compile_options($<$<COMPILE_LANGUAGE:CXX>:/GR> /GS- /fp:fast)

add_executable(FUEL WIN32
	Resources/FUEL.rc
	OffRoad/xcu.c
)

target_link_options(FUEL BEFORE PRIVATE
	"/BASE:0x01000000"
	"/SUBSYSTEM:WINDOWS,4.0"
	"/NODEFAULTLIB"
)

target_link_libraries(FUEL PRIVATE
	defuel
	libfuel
)

add_dependencies(FUEL libfuel_generate)

add_custom_command(TARGET FUEL POST_BUILD
	# The FUEL executable needs to be copied to the install directory to run properly since GetModuleFileName is used to
	# get the path of some game files instead of using the current working directory
	COMMAND "${CMAKE_COMMAND}" -E copy "$<TARGET_FILE:FUEL>" "${FUEL_INSTALL_DIR}/${FUEL_DECOMPILATION_BASENAME}"
)

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
)

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
	COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_SOURCE_DIR}/tools/comments_to_json.py" --output "${CMAKE_CURRENT_BINARY_DIR}/defuel.json" "$<TARGET_FILE:defuel>" "$<TARGET_FILE:Engine>" "$<TARGET_FILE:LIBPC_Common>" "$<TARGET_FILE:LIBPC_TNL>"
	DEPENDS defuel Engine LIBPC_Common LIBPC_TNL "${CMAKE_CURRENT_SOURCE_DIR}/tools/comments_to_json.py"
	OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/defuel.json"
	WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
)

add_custom_command(
	COMMAND ${GHIDRA_ANALYZE_HEADLESS} ${GHIDRA_PROJECT} -process "${GHIDRA_PROJECT_FILE}" -readOnly -noanalysis -scriptPath "ghidra_scripts" -preScript "delink.py" "${CMAKE_CURRENT_BINARY_DIR}/libfuel.obj" "${CMAKE_CURRENT_SOURCE_DIR}/libfuel.json" "${CMAKE_CURRENT_BINARY_DIR}/defuel.json"
	COMMAND lib "/OUT:${CMAKE_CURRENT_BINARY_DIR}/libfuel.lib" "${CMAKE_CURRENT_BINARY_DIR}/libfuel.obj"
	DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/ghidra_scripts/delink.py" "${CMAKE_CURRENT_SOURCE_DIR}/libfuel.json" "${CMAKE_CURRENT_BINARY_DIR}/defuel.json" "${GHIDRA_GPR_FILE}"
	OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/libfuel.lib" ${GHIDRA_FAKE_OUTPUT}
	BYPRODUCTS "${CMAKE_CURRENT_BINARY_DIR}/libfuel.obj"
	WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
)
add_custom_target(libfuel_generate DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/libfuel.lib")
add_library(libfuel STATIC IMPORTED GLOBAL)
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
	set_target_properties(${basename} PROPERTIES IMPORTED_LOCATION "${CMAKE_CURRENT_BINARY_DIR}/${basename}.lib")
endfunction(create_import_library)

create_import_library("AVIFIL32")
create_import_library("binkw32")
create_import_library("MSVFW32")
create_import_library("xlive")

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

target_include_directories(Engine INTERFACE
	Engine/Includes
)

target_link_libraries(Engine PUBLIC
	EngineConfig
)

add_library(LIBPC_Common STATIC
	LIBPC_Common/D3D_RendererHelpers_Z.cpp
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

target_link_libraries(LIBPC_Common INTERFACE
	AdvAPI32.Lib
	COMCTL32.lib
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
	AVIFIL32
	binkw32
	MSVFW32
	xlive
	DXSDK
)

target_link_libraries(LIBPC_Common PUBLIC
	EngineConfig
)

add_dependencies(LIBPC_Common AVIFIL32_generate binkw32_generate MSVFW32_generate xlive_generate)

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
