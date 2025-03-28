//
// Created by Gastón on 26/3/2025.
//

#include "DTFecha.h"
using namespace std;

DTFecha::~DTFecha() {
    cout <<"Fecha eliminada"<<endl;
}
DTFecha::DTFecha(int anio, int mes, int dia) {
    this->anio = anio;
    this->mes = mes;
    this->dia = dia;
}