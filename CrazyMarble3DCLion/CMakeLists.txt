#definit la version minimale a utiliser
cmake_minimum_required(VERSION 2.6)

#nom du projet
project(CrazyMarble3DCLion)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#definit ou l'executable sera placé
#set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

set(IRRLICHT_PATH_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/../irrlicht-1.8.3/include)

set(IRRLICHT_PATH_LIB ${CMAKE_CURRENT_SOURCE_DIR}/../irrlicht-1.8.3/lib/Linux)

#==================================
#======INCLUSION D'IRRLICHT========
#==================================
#inclure le repertoire contenant les entetes de irrlicht
include_directories(${IRRLICHT_PATH_INCLUDE})
#inlude les bibliothèque compiles
link_directories(${IRRLICHT_PATH_LIB})


#ficihier du projet
file(
        GLOB_RECURSE
        sources_files
        src/*
        inc/*
)

set(SOURCE_FILES main.cpp Plateau/Board.cpp Plateau/Board.h Plateau/Cell.cpp Plateau/Cell.h Game.cpp Game.h
        Utils/TextureLoader.cpp Utils/TextureLoader.h Play/Entities.cpp Play/Entities.h Utils/SoundUtils.cpp
        Utils/SoundUtils.h Play/Player.cpp Play/Player.h Utils/KeyboardEvent.cpp Utils/KeyboardEvent.h
        IrrlichtMain.cpp IrrlichtMain.h Menu.cpp Menu.h)

#declaration de l'executable
add_executable(CrazyMarble3DCLion ${SOURCE_FILES})


#liaison du programme avec la bibliothèque
target_link_libraries(
        CrazyMarble3DCLion
        Irrlicht
        X11
        Xxf86vm
        GL
)