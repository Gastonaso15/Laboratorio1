cmake_minimum_required(VERSION 3.30)
project(Laboratorio1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Laboratorio1 main.cpp
        chatGPT.cpp
        chatGPT.h
        Estudiante.cpp
        Estudiante.h
        Informacion.cpp
        Informacion.h
        Libro.cpp
        Libro.h
        PaginaWeb.cpp
        PaginaWeb.h
        DTinfoEstudiante.cpp
        DTinfoEstudiante.h
        DTFecha.cpp
        DTFecha.h

)
