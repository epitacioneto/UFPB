cmake_minimum_required(VERSION 3.5)
project(questao4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Pessoa.cpp Pessoa.h CadastroDePessoas.cpp CadastroDePessoas.h)
add_executable(questao4 ${SOURCE_FILES})