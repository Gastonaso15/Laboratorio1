//
// Created by Gastón on 26/3/2025.
//

#include "PaginaWeb.h"
#include <string>
using namespace std;
PaginaWeb::PaginaWeb() {

}

string PaginaWeb::toString() {

}
PaginaWeb::PaginaWeb(string titulo, string link, string text) {
    this->titulo=titulo;
    this->link=link;
    this->text=text;
}