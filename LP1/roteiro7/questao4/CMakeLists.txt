cmake_minimum_required(VERSION 3.5)
project(questao4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Trabalhador.cpp Trabalhador.h TrabalhadorPorHora.cpp TrabalhadorPorHora.h TrabalhadorAssalariado.cpp TrabalhadorAssalariado.h)
add_executable(questao4 ${SOURCE_FILES})