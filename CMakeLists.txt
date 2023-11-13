cmake_minimum_required(VERSION 3.26)
project(ukol1)

set(CMAKE_CXX_STANDARD 17)

add_executable(ukol1 main.cpp
        Adresa.cpp
        Adresa.h
        IPAdresa.cpp
        MACAdresa.cpp
        MACAdresa.h
        IPAdresa.h
)
