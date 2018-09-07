cmake_minimum_required(VERSION 3.10)
project(TareaCorta)

set(CMAKE_CXX_STANDARD 11)

add_executable(TareaCorta main.cpp PagedArray.cpp PagedArray.h Sort.cpp Sort.h Page.cpp Page.h SelectionSort.cpp SelectionSort.h InsertionSort.cpp InsertionSort.h)