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
        GLOB
        SOURCE_FILES
        *.cpp
        *.h
        General/*
        GUI/MapMenu/*
        GUI/IntermediateMenu/*
        GUI/*
        Utils/*
        Plateau/*
        Play/*
)


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