//
// Created by Gastón on 26/3/2025.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include "Informacion.h"
using namespace std;
#include<string>
#include<list>


class Estudiante {
private:
    string nombre;
    int ci;
    string email;
    list<Informacion*> informacionGuardada;
public:
   Estudiante(string nombre, string ci, string email);
   virtual ~Estudiante();
   void guardarInformacion(Informacion* info);
   virtual string toString()=0;
   list<Informacion*> getInformacionGuardada(DTFecha fecha) const;

};



#endif //ESTUDIANTE_H
