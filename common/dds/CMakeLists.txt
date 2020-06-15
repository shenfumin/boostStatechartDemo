add_subdirectory(functest/micro)
set(module_name dds)
aux_source_directory(. SRC_FILES)
add_library(${module_name} ${SRC_FILES})
target_link_libraries(${module_name} PUBLIC 
    RTI::MICRODDS
    boost_system
    boost_filesystem
    pthread
    dl
)
