################################################################################
#
#        Copyright (C) 2018, NewRT
#          All Rights reserved
#
#################################################################################
set(module_name idl)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/CMakeModules)
include(genidl)
set(update FALSE)
isIdlChanged(update)
IF(update)
    GenerateSource()
ENDIF()
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/idlgen SRC_FILES)
add_library(${module_name} ${SRC_FILES})
target_include_directories(${module_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/idlgen)
target_link_libraries(${module_name} PUBLIC RTI::MICRODDS)

