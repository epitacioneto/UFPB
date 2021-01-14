cmake_minimum_required(VERSION 3.5)
project(teste)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package( OpenCV REQUIRED )
set(SOURCE_FILES main.cpp Pontuacao.cpp Pontuacao.h Jogo.cpp Jogo.h Cor.cpp Cor.h Preto.cpp Preto.h Branco.cpp Branco.h Amarelo.cpp Amarelo.h Vermelho.cpp Vermelho.h Azul.cpp Azul.h Verde.cpp Verde.h)
add_executable(OpenCVTest ${SOURCE_FILES})
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries( OpenCVTest ${OpenCV_LIBS} )