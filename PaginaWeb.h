//
// Created by Gastón on 26/3/2025.
//

#ifndef PAGINAWEB_H
#define PAGINAWEB_H
#include <string>
using namespace std;

class PaginaWeb {
private:
    string titulo;
    string link;
    string text;
public:
    PaginaWeb();
    ~PaginaWeb();
    string toString();
    PaginaWeb(string titulo, string link, string text);
};



#endif //PAGINAWEB_H
