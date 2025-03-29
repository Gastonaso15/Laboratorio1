//
// Created by Gastón on 26/3/2025.
//

#include "PaginaWeb.h"
using namespace std;
PaginaWeb::PaginaWeb() {

}

string PaginaWeb::toString() {
    return this->titulo, this->link, this->text;
}
PaginaWeb::PaginaWeb(string titulo, string link, string text) {
    this->titulo=titulo;
    this->link=link;
    this->text=text;
}