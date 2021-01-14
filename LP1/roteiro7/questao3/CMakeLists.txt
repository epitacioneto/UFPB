cmake_minimum_required(VERSION 3.5)
project(questao3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Medico.cpp Medico.h Cirurgiao.cpp Cirurgiao.h Oftamologista.cpp Oftamologista.h Otorrino.cpp Otorrino.h Ginecologista.cpp Ginecologista.h)
add_executable(questao3 ${SOURCE_FILES})