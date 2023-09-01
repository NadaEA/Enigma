cmake_minimum_required(VERSION 3.23)
project(Enigma)

set(CMAKE_CXX_STANDARD 20)

add_executable(Enigma main.cpp InputProcessor.cpp InputProcessor.h Rotors.h Rotors.cpp)
