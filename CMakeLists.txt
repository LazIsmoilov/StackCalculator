cmake_minimum_required(VERSION 3.30)
project(StackCalculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(StackCalculator main.cpp
        calc.cpp
        calc.hpp)
