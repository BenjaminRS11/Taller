#pragma once
#include <iostream>

using namespace std;

class Evento {
    protected:
        string tipo;
        string ubicacion;
        string tema;
        int duracion;

    public:
        Evento(string, string, string, int);
        virtual string getTipo();
        virtual string getUbicacion();
        virtual string getTema();
        virtual int getDuracion();
};