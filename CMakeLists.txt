cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_library(graphics graphics.cpp)

include_directories(include)
link_directories(lib)

target_link_libraries( graphics SDL2 SDL2.dll SDL2main SDL2_ttf SDL2_ttf.dll)


add_executable(untitled main.cpp applikacio.cpp checkbox.cpp widgets.cpp)
target_link_libraries( untitled graphics)
