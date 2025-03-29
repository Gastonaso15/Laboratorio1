//
// Created by Gastón on 26/3/2025.
//

#include "Estudiante.h"
#include <string>
Estudiante::Estudiante(){

}
Estudiante::Estudiante(string nombre, int ci, string email) {
    this->nombre = nombre;
    this->ci = ci;
    this->email = email;
}
Estudiante::~Estudiante() {
 cout << "Estudiante eliminado" << endl;
}
void Estudiante::guardarInformacion(Informacion* info) {
    informacionGuardada.push_back(info);
}
/*list<Informacion*> Estudiante::getInformacionGuardada(DTFecha fecha) const {
    list<string> resultado;
    for (Informacion* info : informacionGuardada) {
        resultado.push_back(info->toString());
    }
    return resultado;
}*/