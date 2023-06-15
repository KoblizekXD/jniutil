cmake_minimum_required(VERSION 3.23)
project(jniutil)

set(CMAKE_CXX_STANDARD 17)

add_library(jniutil SHARED jniutil.cpp)

target_include_directories(jniutil
        PRIVATE
        $ENV{JVM_HOME}/include
        $ENV{JVM_HOME}/include/win32
        $ENV{JVM_HOME}/include/win32/bridge)
