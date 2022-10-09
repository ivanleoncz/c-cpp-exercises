cmake_minimum_required(VERSION 3.5)

project(ArraysCalculations LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ArraysCalculations main.cpp)

install(TARGETS ArraysCalculations
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
