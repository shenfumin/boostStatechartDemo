#####################################################################
#        Copyright (C) 2018, NewRT
#           all rights reserved
#####################################################################
add_executable(ft_publisher
    ft_publisher.cpp
    Hello.cxx
    HelloPlugin.cxx
    HelloSupport.cxx
    Foo.cxx
    FooPlugin.cxx
    FooSupport.cxx
)
target_link_libraries(ft_publisher
    dds
)

add_executable(ft_subscriber
    ft_subscriber.cpp
    Hello.cxx
    HelloPlugin.cxx
    HelloSupport.cxx
    Foo.cxx
    FooPlugin.cxx
    FooSupport.cxx
)
target_link_libraries(ft_subscriber
    dds
)

#add_executable(ft_test_publisher
#    ft_test_publisher.cpp
#    Hello.cxx
#    HelloPlugin.cxx
#    HelloSupport.cxx
#    Application.cxx
#)
#target_link_libraries(ft_test_publisher
#   dds
#)
#
#add_executable(ft_test_subscriber
#    ft_test_subscriber.cpp
#    Hello.cxx
#    HelloPlugin.cxx
#    HelloSupport.cxx
#    Application.cxx
#)
#target_link_libraries(ft_test_subscriber
#    dds
#)
#
install(FILES "ftest-qos_profiles.xml" DESTINATION "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
install(FILES "ftest-conf.xml" DESTINATION "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
