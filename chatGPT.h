//
// Created by Gastón on 26/3/2025.
//

#ifndef CHATGPT_H
#define CHATGPT_H
#include <string>
using namespace std;


class chatGPT {
private:
    string Pregunta;
    string Respuesta;
    public:
    chatGPT();
    ~chatGPT();
    string toString();
    chatGPT(string Pregunta, string Respuesta);

};



#endif //CHATGPT_H
