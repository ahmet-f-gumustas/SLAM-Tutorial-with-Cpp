cmake_minimum_required( VERSION 2.8 )
project( visualize-Geometry )

set(CMAKE_CXX_STANDARD 11)

find_package( Pangolin REQUIRED )
find_package( Eigen3 REQUIRED )

include_directories( ${EIGEN3_INCLUDE_DIR} ${Pangolin_INCLUDE_DIRS} )

add_executable( visualizeGeometry visualizeGeometry.cpp )
target_link_libraries( visualizeGeometry ${Pangolin_LIBRARIES} )
