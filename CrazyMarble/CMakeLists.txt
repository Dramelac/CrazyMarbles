cmake_minimum_required(VERSION 3.3)
project(CrazyMarble)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Plateau/Board.cpp Plateau/Board.hpp Plateau/Cell.cpp Plateau/Cell.hpp Game.cpp Game.hpp Utils/TextureLoader.cpp Utils/TextureLoader.hpp Play/Entities.cpp Play/Entities.hpp Utils/Position.cpp Utils/Position.hpp Timer.cpp Timer.hpp Utils/SoundUtils.cpp Utils/SoundUtils.hpp Play/Player.cpp Play/Player.hpp)
add_executable(CrazyMarble ${SOURCE_FILES})


SET(EXECUTABLE_OUTPUT bin/${CMAKE_BUILD_TYPE})

set(CMAKE_MODULE_PATH "/usr/local/share/SFML/cmake/Modules" ${CMAKE_MODULE_PATH})
if(SFML_CMAKE_DIR)
    string(REPLACE "FindSFML.cmake" "" SFML_CMAKE_DIR ${SFML_CMAKE_DIR})
    set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${SFML_CMAKE_DIR}")
endif()
FIND_PACKAGE(SFML 2 COMPONENTS system window graphics audio REQUIRED)
INCLUDE_DIRECTORIES(${SFML_INCLUDE_DIR})


TARGET_LINK_LIBRARIES(CrazyMarble ${SFML_LIBRARIES})