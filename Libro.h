//
// Created by Gastón on 26/3/2025.
//

#ifndef LIBRO_H
#define LIBRO_H
#include <string>


class Libro {
private:
    string Titulo;
    set string Autores;
    string Resumen;
public:
    Libro();
    ~Libro();
    Libro(string Titulo, string Autores, string Resumen);
    toString();
};



#endif //LIBRO_H
