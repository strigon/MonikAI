cmake_minimum_required(VERSION 3.17)
project(MonikAI)

find_package(SDL2 REQUIRED)


add_executable(MonikAI
        source/main.cpp
        source/mainWindow.cpp
        source/mainWindow.h)

INCLUDE(FindPkgConfig)



PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
PKG_SEARCH_MODULE(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)

INCLUDE_DIRECTORIES(MonikAI ${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES(MonikAI ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARIES})
