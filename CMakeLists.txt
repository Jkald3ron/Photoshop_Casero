cmake_minimum_required(VERSION 2.8)
project(Photoshop_Casero)

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

set(CMAKE_CXX_STANDARD 14)

add_executable(Photoshop_Casero server.cpp ImageProcessing.cpp ImageProcessing.h )

target_link_libraries( Photoshop_Casero ${OpenCV_LIBS} )
