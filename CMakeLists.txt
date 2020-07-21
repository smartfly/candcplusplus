# cmake_minimum_required(VERSION <specify CMake version here>)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

# 引入子目录
ADD_SUBDIRECTORY(basic)
ADD_SUBDIRECTORY(hello_world)
ADD_SUBDIRECTORY(class)
ADD_SUBDIRECTORY(epoll_study)
ADD_SUBDIRECTORY(advance)
ADD_SUBDIRECTORY(dagger_gesture_offer)
ADD_SUBDIRECTORY(prime)
ADD_SUBDIRECTORY(source_analysis)

# add_executable(HelloWorld main.cpp basic/func_demo.cpp)