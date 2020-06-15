cmake_minimum_required(VERSION 3.0)
project(newrt-tkp-app)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/CMakeModules)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)

# we can toggle this flag to turn on debug mode for CMake
if(CMAKE_DEBUG_FLAG)
    message("In CMake Debug Mode...")
    set_property(GLOBAL PROPERTY GLOBAL_DEPENDS_DEBUG_MODE 1)
    set(CMAKE_DEBUG_TARGET_PROPERTIES
        INCLUDE_DIRECTORIES
        COMPILE_DEFINITIONS
        COMPILE_OPTIONS)
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
    set(CMAKE_VERBOSE_MAKEFILE ON)
endif()

if(NOT CMAKE_BUILD_TYPE)
    message("No build type selected, current build type is Debug")
    set(CMAKE_BUILD_TYPE "Debug")
else()
    if(NOT CMAKE_BUILD_TYPE STREQUAL "Debug")
        set(CMAKE_BUILD_TYPE "Release")
        message("Current build type is Release")
    endif()
endif()

if (CMAKE_BUILD_TYPE STREQUAL Debug)
    set(debug_suffix d)
endif()

if (CMAKE_DEBUG_FLAG)
message("debug_suffix is ${debug_suffix}")
endif()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Configure CCache if available
find_program(CCACHE_FOUND ccache)
if(CCACHE_FOUND)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
endif()

# download MicroDDS manager NewRT repository
#find_path(FIND_MICRO_MANAGER DDS/CMakeLists.txt ${CMAKE_SOURCE_DIR})
#if(${FIND_MICRO_MANAGER} MATCHES "NOTFOUND")
#    message("try to download MicroDDSManager from NewRT repository")
#    execute_process(COMMAND git clone git@git.new-rt.com:CPTS/Common/DDS.git
#                    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})
#    execute_process(COMMAND git checkout -b dev remotes/origin/dev
#                    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/DDS)
#endif()
# Try to use gold linker
execute_process(COMMAND ${CMAKE_C_COMPILER} -fuse-ld=gold -Wl,--version ERROR_QUIET OUTPUT_VARIABLE ld_version)
if ("${ld_version}" MATCHES "GNU gold")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fuse-ld=gold -Wl,--disable-new-dtags")
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -fuse-ld=gold -Wl,--disable-new-dtags")
endif()

# RTI DDS Library finder
if(NOT DEFINED ENV{RTIMEHOME})
    message(FATAL_ERROR "RTIMEHOME environment variable is not set, it should be set correctly to build newrt-tkp-app")
endif()
if("${CMAKE_SYSTEM_PROCESSOR}" MATCHES "arm")
    set(RTIMEARCH "armLinux")
else()
    set(RTIMEARCH "x64Linux")
endif()
#set(LIB_MICRO_SUFFIX "d.so")
set(LIB_MICRO_SUFFIX "zd.a")
# RTI MICRO DDS Finder
add_library(RTI::MICRODDS SHARED IMPORTED)
set_target_properties(RTI::MICRODDS PROPERTIES IMPORTED_LOCATION $ENV{RTIMEHOME}/lib/${RTIMEARCH}/librti_me_cpp${LIB_MICRO_SUFFIX})
set_target_properties(RTI::MICRODDS PROPERTIES IMPORTED_NO_SONAME true)
set_target_properties(RTI::MICRODDS PROPERTIES INTERFACE_LINK_LIBRARIES "$ENV{RTIMEHOME}/lib/${RTIMEARCH}/librti_me_rhsm${LIB_MICRO_SUFFIX};$ENV{RTIMEHOME}/lib/${RTIMEARCH}/librti_me_whsm${LIB_MICRO_SUFFIX};$ENV{RTIMEHOME}/lib/${RTIMEARCH}/librti_me_discdpde${LIB_MICRO_SUFFIX};$ENV{RTIMEHOME}/lib/${RTIMEARCH}/librti_me_discdpse${LIB_MICRO_SUFFIX};$ENV{RTIMEHOME}/lib/${RTIMEARCH}/librti_me${LIB_MICRO_SUFFIX}")
set_target_properties(RTI::MICRODDS PROPERTIES INTERFACE_COMPILE_DEFINITIONS "RTI_UNIX;RTI_LINUX;RTI_64BIT;RTI_POSIX_THREADS")
set_target_properties(RTI::MICRODDS PROPERTIES INTERFACE_INCLUDE_DIRECTORIES "$ENV{RTIMEHOME}/include/rti_me")

# Boost Finder
find_package(Boost REQUIRED COMPONENTS log program_options filesystem)

add_definitions(-DMICRO_DDS)

add_subdirectory(common)
add_subdirectory(src)
