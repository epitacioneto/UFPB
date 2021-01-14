cmake_minimum_required(VERSION 3.5)
project(questao1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp FiguraGeometrica.cpp FiguraGeometrica.h Quadrado.cpp Quadrado.h Circulo.cpp Circulo.h Triangulo.cpp Triangulo.h)
add_executable(questao1 ${SOURCE_FILES})