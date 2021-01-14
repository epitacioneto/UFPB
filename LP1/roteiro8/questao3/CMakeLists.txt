cmake_minimum_required(VERSION 3.5)
project(questao3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp SistemaGerenciaFolha.cpp SistemaGerenciaFolha.h Funcionario.cpp Funcionario.h Assalariado.cpp Assalariado.h Horista.cpp Horista.h Comissionado.cpp Comissionado.h FuncionarioNaoExisteException.cpp FuncionarioNaoExisteException.h OrcamentoEstouradoException.cpp OrcamentoEstouradoException.h)
add_executable(questao3 ${SOURCE_FILES})