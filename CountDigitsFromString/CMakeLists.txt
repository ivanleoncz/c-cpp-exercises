cmake_minimum_required(VERSION 3.5)

project(CountDigitsFromString LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CountDigitsFromString main.cpp)

install(TARGETS CountDigitsFromString
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
