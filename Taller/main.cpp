#include <iostream>
#include <vector>
#include "Evento.h"
#include "Asistente.h"

using namespace std;

vector<Evento> vectorEventos;
vector<Asistente> vectorAsistentes;

void crearEvento() {
    cout<<"Ingrese tipo: "<<endl;
    string inputTipo;
    cin>>inputTipo;
    cout<<inputTipo<<endl;
}

void menu() {
    int opcion = 0;
    cout<<"--- Bienvenido/a al Menú ---"<<endl;
    cout<<"1. Crear evento"<<endl;
    cout<<"2. Registrar asistente"<<endl;
    cout<<"3. Consultar lista de asistentes"<<endl;
    cout<<"4. Generar informes"<<endl;
    cin>>opcion;
    while(opcion != 0) {
        switch(opcion) {
            case 1:
            crearEvento();
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
                
        }
        cout<<"--- Bienvenido/a al Menú ---"<<endl;
        cout<<"1. Crear evento"<<endl;
        cout<<"2. Registrar asistente"<<endl;
        cout<<"3. Consultar lista de asistentes"<<endl;
        cout<<"4. Generar informes"<<endl;
    }
}

int main() {
    menu();
    return 0;
}   