#include "Evento.h"

Evento::Evento(string tipo, string ubicacion, string tema, int duracion) {
    this-> tipo = tipo;
    this-> ubicacion = ubicacion;
    this-> tema = tema;
    this-> duracion = duracion;
}

Evento::~Evento(){}
string Evento::getTipo() {
    return this-> tipo;
}
string Evento::getUbicacion() {
    return this-> ubicacion;
}
string Evento::getTema() {
    return this-> tema;
}
int Evento::getDuracion() {
    return this-> duracion;
}