//
// Created by Gastón on 26/3/2025.
//

#ifndef DTINFOESTUDIANTE_H
#define DTINFOESTUDIANTE_H

using namespace std;
#include <string>


class DTinfoEstudiante {
private:
    int ci;
    string  nombreEst;
    int identificadorInfo;
public:
    DTinfoEstudiante();
    DTinfoEstudiante(int ci, string  nombreEst, int identificadorInfo);
    ~DTinfoEstudiante();
    int getCi()const;
    string getNombreEst()const;
    int getIdentificadorInfo()const;
    friend std::ostream& operator<<(std::ostream& os, const DTinfoEstudiante& est);
};



#endif //DTINFOESTUDIANTE_H
