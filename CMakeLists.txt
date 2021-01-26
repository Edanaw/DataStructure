cmake_minimum_required(VERSION 3.5)
project(server C CXX ASM)
FILE(GLOB SRC_LIST_C ${PROJECT_SOURCE_DIR}/src/*.c)

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

# 设置编译选项 -Werror将多有的警告当作错误，一旦出现直接泛起编译
# -Wstrict-prototypes 如果函数的声明或者定义没有指定参数类型，编译器发出告警 
# -Wmissing-prototypes 如果没有预先声明就定义了全局函数，目的是检查有没有在头文件声明全局函数 针对 C语言
set(CMAKE_C_FLAGS "-g -Wall")
set(CMAKE_CXX_FLAGS "-g -Wall")


# link_directories(${CMAKE_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/inlcude)
include_directories(${PROJECT_SOURCE_DIR}/include)

# main 
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
add_executable(main ${SRC_LIST_C})

# target_link_libraries(main log log4cpp pthread)