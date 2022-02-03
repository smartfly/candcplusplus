# cmake_minimum_required(VERSION <specify CMake version here>)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
cmake_minimum_required(VERSION 3.20)
# 引入子目录
ADD_SUBDIRECTORY(basic)
ADD_SUBDIRECTORY(hello_world)
ADD_SUBDIRECTORY(class)
ADD_SUBDIRECTORY(epoll_study)
ADD_SUBDIRECTORY(advance)
ADD_SUBDIRECTORY(dagger_gesture_offer)
ADD_SUBDIRECTORY(prime)
ADD_SUBDIRECTORY(source_analysis)


file (GLOB files leetcode/*.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
