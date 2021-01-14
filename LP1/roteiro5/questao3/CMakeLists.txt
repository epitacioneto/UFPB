cmake_minimum_required(VERSION 3.5)
project(questao3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Empregado.cpp Empregado.h EmpregadoTest.cpp EmpregadoTest.h)
add_executable(questao3 ${SOURCE_FILES})