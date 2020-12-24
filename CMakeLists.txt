cmake_minimum_required(VERSION 3.14)
project(FIFO)

set(CMAKE_CXX_STANDARD 98)
set (mainsrc
        main.cpp FIFO.h FIFO.cpp FIFO.h FIFO.cpp)

add_executable(FIFO ${mainsrc})

