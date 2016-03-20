#definit la version minimale a utiliser
cmake_minimum_required(VERSION 2.6)

#nom du projet
project(testIRRlich)

#definit ou l'executable sera placé
set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

set(IRRLICHT_PATH_INCLUDE /home/mathieu/Documents/repository/CrazyMarbles/irrlicht-1.8.3/include)

set(IRRLICHT_PATH_LIB /home/mathieu/Documents/repository/CrazyMarbles/irrlicht-1.8.3/lib/Linux)

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

set(SOURCE_FILES main.cpp)

#declaration de l'executable
add_executable(testIRRlich ${SOURCE_FILES})


#liaison du programme avec la bibliothèque
target_link_libraries(
    testIRRlich
    Irrlicht
    X11
    Xxf86vm
    GL
)