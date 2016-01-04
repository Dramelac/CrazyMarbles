cmake_minimum_required(VERSION 3.3)
project(isometric)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(isometric ${SOURCE_FILES} loadbindings.cpp sfml_extensions.cpp 2disometric.cpp imagemanager.cpp)