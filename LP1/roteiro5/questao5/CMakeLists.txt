cmake_minimum_required(VERSION 3.5)
project(questao5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Despesa.cpp Despesa.h ControleDeGastos.cpp ControleDeGastos.h)
add_executable(questao5 ${SOURCE_FILES})