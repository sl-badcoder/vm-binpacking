cmake_minimum_required(VERSION 3.10)
project(vm_binpacking VERSION 0.0)

add_executable(vm_binpacking src/main.cpp)

target_include_directories(vm_binpacking PUBLIC include)