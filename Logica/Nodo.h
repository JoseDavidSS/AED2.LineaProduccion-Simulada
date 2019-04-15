//
// Created by jose on 15/04/19.
//

#ifndef MEMORIA_VIRTUAL_NODO_H
#define MEMORIA_VIRTUAL_NODO_H

#include <string>

using namespace std;



class Nodo {

public:

    string proceso;
    int tiempo;

    Nodo(string procesos, int tiempos){
        proceso = procesos;
        tiempo = tiempos;
    }

    Nodo* next = nullptr;

    // Methods

    void setProceso(string letter);
    string getProceso();

    void setTiempo(int point);
    int getTiempo();



};


#endif //MEMORIA_VIRTUAL_NODO_H
