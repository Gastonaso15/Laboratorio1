//
// Created by Gastón on 26/3/2025.
//

#include<iostream>
#include "DTFecha.h"
#include "Informacion.h"
using namespace std;

Informacion::Informacion(){

}

Informacion::~Informacion(){

}

Informacion::Informacion(int identificador, DTFecha fecha){
    this->identificador=identificador;
    this->fecha=fecha;
}

//string Informacion::toString(){

//}

void Informacion::setIdentificador(int id) {
    this->identificador=id;
}
void Informacion::setFecha(DTFecha fec) {
    this->fecha=fec;
}
int Informacion::getIdentificador() {
    return this->identificador;
}
DTFecha Informacion::getFecha() {
    return this->fecha;
}