cmake_minimum_required(VERSION 3.1)
project(SofaGraphComponent)

find_package(SofaBase REQUIRED)

set(HEADER_FILES
    config.h
    initGraphComponent.h
    )

set(SOURCE_FILES
    initGraphComponent.cpp
    )

list(APPEND HEADER_FILES
    AddFrameButtonSetting.h
    AddRecordedCameraButtonSetting.h
    AttachBodyButtonSetting.h
    FixPickedParticleButtonSetting.h
    Gravity.h
    InteractingBehaviorModel.h
    MouseButtonSetting.h
    PauseAnimation.h
    PauseAnimationOnEvent.h
    SofaDefaultPathSetting.h
    StatsSetting.h
    ViewerSetting.h
    SceneCheck.h
    SceneCheckDuplicatedName.h
    SceneCheckMissingRequiredPlugin.h
    SceneCheckAPIChange.h
    SceneCheckUsingAlias.h
    SceneCheckerVisitor.h
    SceneCheckerListener.h
    APIVersion.h
    )
list(APPEND SOURCE_FILES
    AddFrameButtonSetting.cpp
    AddRecordedCameraButtonSetting.cpp
    AttachBodyButtonSetting.cpp
    FixPickedParticleButtonSetting.cpp
    Gravity.cpp
    MouseButtonSetting.cpp
    PauseAnimation.cpp
    PauseAnimationOnEvent.cpp
    SofaDefaultPathSetting.cpp
    StatsSetting.cpp
    ViewerSetting.cpp
    SceneCheckDuplicatedName.cpp
    SceneCheckMissingRequiredPlugin.cpp
    SceneCheckAPIChange.cpp
    SceneCheckUsingAlias.cpp
    SceneCheckerVisitor.cpp
    SceneCheckerListener.cpp
    APIVersion.cpp
    )

add_library(${PROJECT_NAME} SHARED ${HEADER_FILES} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PUBLIC SofaHelper SofaSimulationCore SofaSimulationTree SofaBaseUtils)
set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-DSOFA_BUILD_GRAPH_COMPONENT")
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "${HEADER_FILES}")

sofa_install_targets(SofaGeneral ${PROJECT_NAME} "SofaGeneral/${PROJECT_NAME}")
