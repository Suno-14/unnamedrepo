cmake_minimum_required(VERSION 3.10)
 
# project name and language
project(ArithmeticCalculator CXX)
 
# use C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
 
# create the executable from arithmetic.cpp
add_executable(maths mathematics.cpp)
 
