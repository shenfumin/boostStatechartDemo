set(module_name trait)
add_library(${module_name} trait_helper_micro.cpp)
#target_include_directories(${module_name} PUBLIC .)
target_link_libraries(${module_name} PUBLIC idl)



