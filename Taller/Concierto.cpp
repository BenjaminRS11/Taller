#include "Concierto.h"

Concierto::Concierto(string tipo, string ubicacion, string tema, int duracion, string generoMusical, string artista) 
    : Evento(tipo, ubicacion, tema, duracion), generoMusical(generoMusical), artista(artista) {
    this-> generoMusical = generoMusical;
    this-> artista = artista;
}

string Concierto::getGeneroMusical() {
    return this-> generoMusical;
}
string Concierto::getArtista() {
    return this-> artista;
}