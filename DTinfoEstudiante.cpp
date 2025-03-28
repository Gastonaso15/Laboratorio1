//
// Created by Gastón on 26/3/2025.
//

#include<iostream>
#include "DTinfoEstudiante.h"
using namespace std;

DTinfoEstudiante::DTinfoEstudiante(){

}

DTinfoEstudiante::~DTinfoEstudiante(){

}

DTinfoEstudiante::DTinfoEstudiante(int ci, string  nombreEst, int identificadorInfo){
    this->ci=ci;
    this->nombreEst=nombreEst;
    this->identificadorInfo=identificadorInfo;
}

int DTinfoEstudiante::getCi() const{
    return this->ci;
}

string DTinfoEstudiante::getNombreEst() const{
    return this->nombreEst;
}

int DTinfoEstudiante::getIdentificadorInfo() const {
    return this->identificadorInfo;
}

std::ostream& operator<<(std::ostream& os, const DTinfoEstudiante & est) {
    os << est.getCi() << ", "<< est.getNombreEst() << ", "<< est.getIdentificadorInfo();
    return os;
}

