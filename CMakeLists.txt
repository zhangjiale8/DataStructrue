# cmake_minimum_required(VERSION <specify CMake version here>)
project(dataStructure)

set(CMAKE_CXX_STANDARD 14)

# add_executable(dataStructure main.cpp)

# 遍历项目根目录下所有的 .cpp 文件
file (GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()


