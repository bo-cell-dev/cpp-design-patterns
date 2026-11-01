cmake_minimum_required(VERSION 3.15)
project(CppDesignPatterns LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(Behavioral)
add_subdirectory(Creational)
add_subdirectory(Structural)
