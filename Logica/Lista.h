//
// Created by jose on 15/04/19.
//

#ifndef MEMORIA_VIRTUAL_LISTA_H
#define MEMORIA_VIRTUAL_LISTA_H

#include <string>
#include "Nodo.h"

using namespace std;

class Lista {

public:

    Nodo* head = nullptr;
    int largo = 0;

    int getLargo();
    void setLargo(int largo);
    void insertarNodo (string proceso, int tiempo, bool estado);
    void eliminarNodo (string proceso);
    void mostrarLista ();
    void actualizar();
    int buscarNodo(string proceso, Lista* linea);
};


#endif //MEMORIA_VIRTUAL_LISTA_H

