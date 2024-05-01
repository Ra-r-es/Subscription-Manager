cmake_minimum_required(VERSION 3.22.3)
project(Abonament)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Abonament
        Abonament.cpp
        Abonament.h
        main.cpp
        Abonament_Premium.h
        Abonament_Premium.cpp
        Clienti/Persoana.h
        Clienti/Persoana.cpp
        Clienti/Abonat.h
        Clienti/Abonat.cpp
        Clienti/Clienti.h
        Clienti/Clienti.h
        Clienti/Clienti.cpp
        Clienti/Clienti.cpp
        "Meniu interactiv/Meniu_Clienti.h"
        "Meniu interactiv/Meniu_Clienti.cpp")
