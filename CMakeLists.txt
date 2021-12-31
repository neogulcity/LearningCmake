# Miminum required version of CMake.
cmake_minimum_required(VERSION 3.11)

# Project info
project(
    LearningCmake
    VERSION 1.0.0
    DESCRIPTION "Learning Cmake"
    LANGUAGES CXX
)

# Set variable 'srcPath' to ./src
set(srcPath ${CMAKE_SOURCE_DIR}/src)

# Make executable files.
add_executable(
    ${PROJECT_NAME}
    ${srcPath}/main.cpp
    ${srcPath}/Utility.cpp
)

# Set start project for Visual Studio.
if (MSVC)
    set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})
endif ()