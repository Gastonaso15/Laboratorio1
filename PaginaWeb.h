//
// Created by Gastón on 26/3/2025.
//

#ifndef PAGINAWEB_H
#define PAGINAWEB_H
#include <string>

#include "Informacion.h"
using namespace std;

class PaginaWeb: public Informacion {
private:
    string titulo;
    string link;
    string text;
public:
    PaginaWeb();
    ~PaginaWeb();
    string toString()override;
    PaginaWeb(string titulo, string link, string text);
};



#endif //PAGINAWEB_H
