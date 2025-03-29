//
// Created by Gastón on 26/3/2025.
//

#ifndef CHATGPT_H
#define CHATGPT_H
#include <string>
#include<iostream>
#include "Informacion.h"
using namespace std;


class chatGPT:public Informacion {
private:
    string Pregunta;
    string Respuesta;
    public:
    chatGPT();
    ~chatGPT();
    string toString()override;
    chatGPT(string Pregunta, string Respuesta);

};



#endif //CHATGPT_H
