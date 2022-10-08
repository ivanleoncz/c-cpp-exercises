cmake_minimum_required(VERSION 3.5)

project(InputNumbersDynamic LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(InputNumbersDynamic main.cpp)

install(TARGETS InputNumbersDynamic
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
