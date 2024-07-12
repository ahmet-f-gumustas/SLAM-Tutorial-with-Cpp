cmake_minimum_required( VERSION 2.8 )

project( HelloSLAM )

set( CMAKE_BUILD_TYPE "Debug" )

add_executable(helloSLAM helloSLAM.cpp)

add_library( hello helloSLAM_with_library.cpp )
add_library( hello_shared SHARED helloSLAM_with_library.cpp )

add_executable( useHello use_HelloSLAM_Lib.cpp )

target_link_libraries( useHello hello_shared )
