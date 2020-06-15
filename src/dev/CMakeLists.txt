set(module_name dev)
aux_source_directory(. SRC_FILES)
add_library(${module_name} ${SRC_FILES})
target_include_directories(${module_name} PUBLIC . ${CMAKE_HOME_DIRECTORY}/include)
