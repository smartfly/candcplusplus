# cmake_minimum_required(VERSION <specify CMake version here>)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

# 引入子目录
ADD_SUBDIRECTORY(basic)
ADD_SUBDIRECTORY(hello_world)
ADD_SUBDIRECTORY(class)
ADD_SUBDIRECTORY(epoll_study)
ADD_SUBDIRECTORY(advance)

# add_executable(HelloWorld main.cpp basic/func_demo.cpp)