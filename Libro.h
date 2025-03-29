//
// Created by Gastón on 26/3/2025.
//

#ifndef LIBRO_H
#define LIBRO_H
#include <string>
#include <iostream>
using namespace std;

class Libro {
private:
    string Titulo;
    string Autores;
    string Resumen;
public:
    Libro();
   // ~Libro();
    Libro(string Titulo, string Autores, string Resumen);
    string toString();
};



#endif //LIBRO_H
