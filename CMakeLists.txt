cmake_minimum_required(VERSION 3.31)
project(SwarmfromScratch)

set(CMAKE_CXX_STANDARD 20)

add_executable(SwarmfromScratch main.cpp
        field.h
        field.cpp
        agent.cpp
        agent.h)
