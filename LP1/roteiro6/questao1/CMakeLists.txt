cmake_minimum_required(VERSION 3.5)
project(questao1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Relogio.cpp Relogio.h)
add_executable(questao1 ${SOURCE_FILES})