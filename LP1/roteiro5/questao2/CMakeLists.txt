cmake_minimum_required(VERSION 3.5)
project(questao2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Invoice.cpp Invoice.h InvoiceTest.cpp InvoiceTest.h)
add_executable(questao2 ${SOURCE_FILES})