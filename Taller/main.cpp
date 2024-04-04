#include <iostream>
#include <vector>
#include <random>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include "Evento.h"
#include "Asistente.h"
#include "Concierto.h"
#include "Catedra.h"
#include "Estudiante.h"
#include "AsistenteConcierto.h"

using namespace std;

vector<string> split(const string& str, char delim) {
    vector<string> tokens;
    stringstream ss(str);
    string token;

    while (getline(ss, token, delim)) {
        tokens.push_back(token);
    }

    return tokens;
}

void cargarDatosTxt(vector<Evento*>& vectorEventos, vector<Asistente*>& vectorAsistentes) {
    string linea;
    string texto;
    string nuevaLineaEventos;
    string nuevaLineaAsistentes;

    ofstream archivo2("datos.txt");
    for (Evento* evento : vectorEventos)
    {
        nuevaLineaEventos = evento->devolverInfoEventoFormatoTxt();
        archivo2<<nuevaLineaEventos<<"\n";
    }
    for (Asistente* asistente : vectorAsistentes)
    {
        nuevaLineaAsistentes = asistente->devolverInfoAsistenteFormatoTxt();
        archivo2<<nuevaLineaAsistentes<<"\n";
    }
}

void leerDatosTxt() {
    string texto;
    string linea;
    ifstream archivo("datos.txt");
    while(getline(archivo,linea)) { 
         texto += linea+"\n";
         char delimitador = ',';
         vector<string> partes = split(linea, delimitador); 
         string tipo = partes[0];
         if(partes.size() == 7) {  //logica para leer eventos
            
         }
         else if(partes.size() == 6) { //logica para leer asistentes

         }
    }

    // for (const string& parte : partes) {
    //     cout << parte << endl;
    // }

    archivo.close();
}

void cargarEventos(vector<Evento*>& vectorEventos) {

    // if vectorEventos isEmpty {
            //agregar todos los objetos, de lo contrario comparar los objetos que hay en el vector con los objetos que quiero añadir
            // en este método y compruebo si son iguales mediante comparación de sus atributos únicos; Si son iguales entonces no agrego el
            // objeto nuevo
    //}
    vectorEventos.push_back(new Concierto("Concierto","Estadio Sanchez Rumuroso","Entretenimiento",90,3245,"Rock","Queen"));
    vectorEventos.push_back(new Concierto("Concierto","Teatro Caupolicán","Entretenimiento",90,3244,"Rock","Guns N' Roses"));
    vectorEventos.push_back(new Concierto("Concierto","Estadio Santa Laura","Entretenimiento",80,2145,"Rock","Nirvana"));
    vectorEventos.push_back(new Concierto("Concierto","Estadio Monumental","Entretenimiento",90,5335,"Rock","Iron Maiden"));
    vectorEventos.push_back(new Concierto("Concierto","Estadio San Carlos de Apoquindo","Entretenimiento",100,1145,"Rock","Metallica"));
    vectorEventos.push_back(new Concierto("Concierto","Estadio Bicentenario de la Florida","Entretenimiento",70,3111,"Pop","Bruno Mars"));
    vectorEventos.push_back(new Concierto("Concierto","Movistar Arena","Entretenimiento",60,7772,"Urbano Latino","Arcángel"));
    vectorEventos.push_back(new Concierto("Concierto","Estadio Ester Roa Rebolledo","Entretenimiento",60,4445,"Urbano Latino","Ozuna"));
    vectorEventos.push_back(new Catedra("Cátedra","UCN G6-54","Educación",80,1113,"Jorge Soto"));
    vectorEventos.push_back(new Catedra("Cátedra","UCN G6-47","Educación",80,1113,"Pedro Fuentes"));
    vectorEventos.push_back(new Catedra("Cátedra","UCN G1-06","Educación",80,1113,"Sergio González"));
    vectorEventos.push_back(new Catedra("Cátedra","UCN X1-030","Educación",80,1113,"Juan Véliz"));
    vectorEventos.push_back(new Catedra("Cátedra","UCN X1-029","Educación",80,1113,"Vicente Sepúlveda"));
    vectorEventos.push_back(new Catedra("Cátedra","UCN G4-21","Educación",80,1113,"Benjamín Rojas"));
    vectorEventos.push_back(new Catedra("Cátedra","UCN G4-23","Educación",80,1113,"Sebastián Echeverría"));
    vectorEventos.push_back(new Catedra("Cátedra","UCN G4-17","Educación",80,1113,"Gonzalo Pérez"));
}

void cargarAsistentes(vector<Asistente*>& vectorAsistentes) {
    vectorAsistentes.push_back(new Estudiante("estudiante","Pepe","21.333.434-3",20,"Estudiante",4,"ICCI"));
    vectorAsistentes.push_back(new Estudiante("estudiante","Sebastián","21.133.134-3",20,"Estudiante",4,"ICCI"));
    vectorAsistentes.push_back(new Estudiante("estudiante","Juan","21.323.232-2",19,"Estudiante",4,"ITI"));
    vectorAsistentes.push_back(new Estudiante("estudiante","Javier","21.366.634-9",20,"Estudiante",4,"ITI"));
    vectorAsistentes.push_back(new Estudiante("estudiante","Cristofer","21.776.779-0",19,"Estudiante",4,"ICI"));
    vectorAsistentes.push_back(new Estudiante("estudiante","Pablo","21.655.433-1",20,"Estudiante",4,"ICI"));
    vectorAsistentes.push_back(new AsistenteConcierto("asistente de concierto","Sergio","20.333.333-3",21,"n/a","VIP"));
    vectorAsistentes.push_back(new AsistenteConcierto("asistente de concierto","Benjamín","21.233.222-3",21,"Emprendedor","Normal"));
    vectorAsistentes.push_back(new AsistenteConcierto("asistente de concierto","Vicente","20.663.797-4",21,"Emprendedor","Normal"));
    vectorAsistentes.push_back(new AsistenteConcierto("asistente de concierto","David","20.323.323-7",21,"Jugador de Fútbol","VIP"));
    vectorAsistentes.push_back(new AsistenteConcierto("asistente de concierto","Jeremy","21.878.293-1",21,"Emprendedor","VIP"));
    vectorAsistentes.push_back(new AsistenteConcierto("asistente de concierto","Pedro","21.878.293-1",21,"Emprendedor","VIP"));
    vectorAsistentes.push_back(new AsistenteConcierto("asistente de concierto","Jer","21.878.293-1",21,"Panadero","Normal"));
}


Evento* buscarEvento(int inputCodigoEvento, vector<Evento*>& vectorEventos) {
    for (Evento* e : vectorEventos){
        if(e->getCodigoEvento() == inputCodigoEvento) {
            return e;
        }
    }  
    return nullptr; 
}

void registrarAsistente(vector<Asistente*>& vectorAsistentes, vector<Evento*>& vectorEventos) {
     int inputTipo, inputEdad, inputCodigoEvento;
     string inputNombre, inputRut, inputOcupacion;
     cout<<"\nIngrese tipo de asistente: \n1) Estudiante\n2) Asistente de Concierto\nSelecciona una opción:"<<endl;
     cin>>inputTipo;
     cout<<"\n--- EVENTOS DISPONIBLES ---"<<endl;

     for (Evento* evento : vectorEventos)
     {
        cout<<"Tipo evento: "<<evento->getTipo()<<" ; Tema: "<<evento->getTema()<<" ; Código: "<<evento->getCodigoEvento()<<" ; Ubicación: "<<evento->getUbicacion()<<endl;
     }

     cout<<"\nIngrese código de evento para asociar el asistente: "<<endl;
     cin>>inputCodigoEvento;
     Evento* e = buscarEvento(inputCodigoEvento, vectorEventos);

     if(e != nullptr) {
        if(inputTipo == 1) {
                cout<<"Ingrese nombre: "<<endl;
                cin.ignore();
                getline(cin, inputNombre);
                cout<<"Ingrese rut: "<<endl;
                getline(cin,inputRut);
                cout<<"Ingrese edad: "<<endl;
                cin>>inputEdad;
                int inputSemestre;
                string inputCarrera;
                cout<<"Ingrese semestre (numérico): "<<endl;
                cin>>inputSemestre;
                cout<<"Ingrese carrera: "<<endl;
                cin.ignore(); 
                getline(cin, inputCarrera);
                cout<<"\n"<<endl;
                Asistente* asistente = new Estudiante("estudiante",inputNombre,inputRut,inputEdad,"Estudiante",inputSemestre,inputCarrera);
                vectorAsistentes.push_back(asistente);
                e->asociarAsistente(asistente);
            } else if (inputTipo == 2) {
                cout<<"Ingrese nombre: "<<endl;
                cin.ignore();
                getline(cin, inputNombre);
                cout<<"Ingrese rut: "<<endl;
                getline(cin,inputRut);
                cout<<"Ingrese edad: "<<endl;
                cin>>inputEdad;
                cout<<"Ingrese ocupación: "<<endl;
                cin.ignore();
                getline(cin, inputOcupacion);
                string inputTipoEntrada;
                cout<<"Ingrese tipo de entrada (VIP o normal): "<<endl;
                cin>>inputTipoEntrada;
                cout<<"\n"<<endl;
                Asistente* asistente = new AsistenteConcierto("asistente de concierto",inputNombre,inputRut,inputEdad,inputOcupacion,inputTipoEntrada);
                vectorAsistentes.push_back(asistente);
                e->asociarAsistente(asistente);
            }
     } else {
        cout<<"Código de evento no válido\n"<<endl;
     }
 }

void desplegarListaAsistentes(vector<Asistente*>& vectorAsistentes) {
    cout<<"LISTA GENERAL DE ASISTENTES:\n"<<endl;
    for(Asistente* asistente : vectorAsistentes) {
        asistente->imprimirTipo();
    }
}

int generarCodigoEventoAleatorio() {
    int valorRandom = 0;
    valorRandom = 1000 + rand() % 8999;
    return valorRandom;
}

void tipoEvento(vector<Evento*>& vectorEventos) {
    int inputTipo;
    cout<<"\nIngrese tipo de evento: \n1) Concierto\n2) Cátedra\nSelecciona una opción:"<<endl;
    cin>>inputTipo;
    if(inputTipo == 1) {
        string inputUbicacion, inputTema;
        int inputDuracion;
        int codigoEventoAleatorio = generarCodigoEventoAleatorio();

        cout<<"Ingrese ubicación: "<<endl;
        cin.ignore();
        getline(cin, inputUbicacion);
        cout<<"Ingrese tema: "<<endl;
        getline(cin, inputTema);
        cout<<"Ingrese duración (minutos): "<<endl;
        cin>>inputDuracion;
        string inputGeneroMusical, inputArtista;
        cout<<"Ingrese género musical: "<<endl;
        cin.ignore();
        getline(cin, inputGeneroMusical);
        cout<<"Ingrese artista: "<<endl;
        getline(cin, inputArtista);
        Evento* evento = new Concierto("Concierto",inputUbicacion,inputTema,inputDuracion,codigoEventoAleatorio,inputGeneroMusical,inputArtista);
        vectorEventos.push_back(evento);
    }
    else if(inputTipo == 2) {
        string inputUbicacion, inputTema;
        int inputDuracion;
        int codigoEventoAleatorio = generarCodigoEventoAleatorio();

        cout<<"Ingrese ubicación: "<<endl;
        cin.ignore();
        getline(cin, inputUbicacion);
        cout<<"Ingrese tema: "<<endl;
        getline(cin, inputTema);
        cout<<"Ingrese duración (minutos): "<<endl;
        cin>>inputDuracion;
        string inputDocente, inputCapacidadSala;
        cout<<"Ingrese docente: "<<endl;
        cin.ignore();
        getline(cin, inputDocente);
        cout<<"Ingrese capacidad de sala: "<<endl;
        getline(cin, inputCapacidadSala);
        Evento* evento = new Catedra("Cátedra",inputUbicacion,inputTema,inputDuracion,codigoEventoAleatorio,inputDocente);
        vectorEventos.push_back(evento);
    }
}

void menu(vector<Evento*>& vectorEventos, vector<Asistente*>& vectorAsistentes) {      
    int opcion = 0;
    cout<<"--- Bienvenido/a al Menú ---"<<endl;
    do {
        cout<<"1. Crear evento"<<endl;
        cout<<"2. Registrar asistente"<<endl;
        cout<<"3. Consultar lista de asistentes"<<endl;
        cout<<"4. Generar informes"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Seleccione una opción: "<<endl;
        cin>>opcion;
        switch(opcion) {
            case 1:
                tipoEvento(vectorEventos);          
                break;
            case 2:
                registrarAsistente(vectorAsistentes, vectorEventos);
                break;
            case 3:
                desplegarListaAsistentes(vectorAsistentes);
                break;
            case 4:

                break;
            case 5:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout<<"Opción incorrecta, por favor ingrese una opción válida"<<"\n"<<endl;
                cin.clear();
                cin.ignore();
        }
    } while(opcion != 5);    
}


int main() {
    vector<Evento*> vectorEventos;
    vector<Asistente*> vectorAsistentes;  
    cargarEventos(vectorEventos);
    cargarAsistentes(vectorAsistentes);
    menu(vectorEventos, vectorAsistentes);
    cargarDatosTxt(vectorEventos,vectorAsistentes);
    for (int i = 0; i < vectorEventos.size(); i++)
    {
     cout<<vectorEventos[i]->getCodigoEvento()<<endl;
     cout<<vectorEventos[i]->getTema()<<endl;  
     cout<<vectorEventos[i]->getTipo()<<endl;     
    }
    for (int i = 0; i < vectorAsistentes.size(); i++)
    {
     cout<<vectorAsistentes[i]->getNombre()<<endl;
     cout<<vectorAsistentes[i]->getTipo()<<endl;  
    }
    return 0;
}   