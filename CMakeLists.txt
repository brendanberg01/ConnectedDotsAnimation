cmake_minimum_required(VERSION 3.15)
project(ConnectedDotsAnimation)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

add_executable(ConnectedDotsAnimation main.cpp Dot.cpp Dot.hpp)
target_link_libraries(ConnectedDotsAnimation sfml-graphics)