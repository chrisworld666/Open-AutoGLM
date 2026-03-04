cmake_minimum_required(VERSION 3.28)
project(Hive1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Hive1 main.cpp
        Grasshopper.h
        Grasshopper.cpp
        main.h
        ant.cpp
        ant.h
        beetle.cpp
        beetle.h
        board.cpp
        board.h
        location.cpp
        location.h
        pch.cpp
        pch.h
        piece.cpp
        piece.h
        queen.cpp
        queen.h
        spider.cpp
        spider.h)
