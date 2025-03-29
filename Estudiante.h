//
// Created by Gastón on 26/3/2025.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include "Informacion.h"
using namespace std;
#include<list>


class Estudiante {
private:
    string nombre;
    int ci;
    string email;
    list<Informacion*> informacionGuardada;
public:
    Estudiante();
   Estudiante(string nombre, int ci, string email);
   virtual ~Estudiante();
   void guardarInformacion(Informacion* info);
   virtual string toString()=0;
   //list<Informacion*> getInformacionGuardada(DTFecha fecha) const;

};



#endif //ESTUDIANTE_H
