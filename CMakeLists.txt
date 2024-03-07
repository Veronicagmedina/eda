cmake_minimum_required(VERSION 3.27)
project(ProjetoEDA1)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProjetoEDA1 main.cpp
        struct.h
        constantes.h
        seccao.cpp
        pecas.cpp
        ficheiros.h
        ficheiros.cpp
        pecas.h
        seccao.h
        listaDeChegada.h
        listaDeChegada.cpp
        funcionamento.cpp
        funcionamento.h
)
