//
// Created by Gastón on 26/3/2025.
//

#ifndef INFORMACION_H
#define INFORMACION_H
#include "DTinfoEstudiante.h"

using namespace std;
#include <string>
#include "Estudiante.h"
#include "DTFecha.h"

//class Estudiante;

class Informacion {
protected:
    int identificador;
    DTFecha fecha;
    //list<DTinfoEstudiante*> estudiantes;    Se supone que va esto segun la flecha del diagrama?
public:
    Informacion();
    virtual ~Informacion();
    Informacion(int identificador, DTFecha fecha);
    virtual string toString()=0;

    void setIdentificador(int identificador);
    void setFecha(DTFecha fecha);
    int getIdentificador();
    DTFecha getFecha();
};


#endif //INFORMACION_H
