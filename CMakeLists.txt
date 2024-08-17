cmake_minimum_required(VERSION 3.12)
project(MyProgram)

set(CMAKE_CXX_STANDARD 11)

# Add your source files here
set(SOURCES main.cpp bitwiseOperators.cpp)

add_executable(MyProgram ${SOURCES})