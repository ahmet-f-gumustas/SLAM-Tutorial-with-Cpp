cmake_minimum_required( VERSION 2.8 )
project( Plot-Trajectory )

find_package( Pangolin REQUIRED )
include_directories(${Pangolin_INCLUDEDIRS})

add_executable( plot-trajectory plotTrajectory.cpp )
target_link_libraries( plot-trajectory ${Pangolin_LIBRARIES})