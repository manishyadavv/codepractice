cmake_minimum_required(VERSION 3.15)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)
#
#set(BUILD_1 main)
#set(SOURCE_FILES_1 main.cpp)
#add_executable(${BUILD_1} ${SOURCE_FILES_1})
#set(BUILD_2 mani)
#set(SOURCE_FILES_2 mani.cpp)
#add_executable(${BUILD_2} ${SOURCE_FILES_2})
#

add_executable(main main.cpp)
add_executable(mani mani.cpp)
add_executable(recursion1 recursion/recursion1.cpp)
add_executable(recursion-factorial recursion/recursion-factorial.cpp)
add_executable(recursion-power recursion/recursion-power.cpp)
add_executable(recursionwitharrays recursion/recursionwitharrays.cpp)
add_executable(TowerOfhanoi recursion/TowerOfhanoi.cpp)
add_executable(vectors recursion/vectors.cpp)
add_executable(vector-rotation recursion/vector-rotation.cpp)
add_executable(remove-the-repeaters recursion/remove-the-repeaters.cpp)
add_executable(replacing-duplicates-with-sum recursion/replacing-duplicates-with-sum.cpp)