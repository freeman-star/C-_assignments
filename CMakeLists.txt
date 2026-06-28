cmake_minimum_required(VERSION 3.10)
project(
    CarClass
    VERSION 1.0
    DESCRIPTION "Car Class"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
add_executable(CarClass)
set(sources
    src/Car.h
    src/main.cpp
)
target_sources(CarClass PRIVATE ${sources})