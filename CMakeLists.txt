cmake_minimum_required(VERSION 3.21)

project(IntToBin_v1)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SRC CONFIGURE_DEPENDS "include/*.h" "src/*.cpp" )

add_executable(IntToBin_v1 main.cpp ${SRC})




