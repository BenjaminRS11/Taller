#include "Concierto.h"

Concierto::Concierto(string tipo, string ubicacion, string tema, int duracion, int codigoEvento, string generoMusical, string artista) 
    : Evento(tipo, ubicacion, tema, duracion, codigoEvento){
    this-> generoMusical = generoMusical;
    this-> artista = artista;
}

string Concierto::getGeneroMusical() {
    return this-> generoMusical;
}
string Concierto::getArtista() {
    return this-> artista;
}
string Concierto::devolverInfoEventoFormatoTxt() {
    string linea;
    string duracionStr = to_string(this->getDuracion());
    string codigoEventoStr = to_string(this->getCodigoEvento());
    linea += this->getTipo()+","+this->getUbicacion()+","+this->getTema()+","+duracionStr+","+codigoEventoStr+","+this->getGeneroMusical()+","
    +this->getArtista();
    return linea;
}