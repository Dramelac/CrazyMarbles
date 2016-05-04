cmake_minimum_required(VERSION 3.3)
project(TestIrrlicht)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

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

set(SOURCE_FILES main.cpp)
add_executable(TestIrrlicht ${SOURCE_FILES})


#liaison du programme avec la bibliothèque
target_link_libraries(
        TestIrrlicht
        Irrlicht
        X11
        Xxf86vm
        GL
)
