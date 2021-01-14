cmake_minimum_required(VERSION 3.5)
project(questao2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Imovel.cpp Imovel.h Endereco.cpp Endereco.h Terreno.cpp Terreno.h Casa.cpp Casa.h Apartamento.cpp Apartamento.h)
add_executable(questao2 ${SOURCE_FILES})