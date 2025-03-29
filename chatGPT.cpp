//
// Created by Gastón on 26/3/2025.
//

#include "chatGPT.h"
#include <string>
using namespace std;
chatGPT::chatGPT() {

}
string chatGPT::toString() {
    return "chatGPT";
}

chatGPT::chatGPT(string Pregunta, string Respuesta) {
    this->Pregunta=Pregunta;
    this->Respuesta=Respuesta;
}