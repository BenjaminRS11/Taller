#pragma once
#include <iostream>

using namespace std;

class Asistente {
    private:
        string tipo;
        string nombre;
        string rut;
        string edad;
        string ocupacion;
    public:
        Asistente(string, string, string, string, string);
        string getTipo();
        string getNombre();
        string getRut();
        string getEdad();
        string getOcupacion();
};