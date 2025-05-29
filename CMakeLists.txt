cmake_minimum_required(VERSION 3.30)
project(Seminar7)

set(CMAKE_CXX_STANDARD 20)

add_executable(Seminar7 main.cpp
        MijlocDeTransport.h
        Autobuz.cpp
        Autobuz.h
        Tramvai.cpp
        Tramvai.h
        Service.cpp
        Service.h
        TransportRepository.h
        Tramvai.cpp
        UI.cpp
        UI.h
        Tests.cpp
        Tests.h
)
