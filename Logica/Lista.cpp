//
// Created by jose on 15/04/19.
//

#include <iostream>
#include "Lista.h"
#include "Nodo.h"

void Lista::insertarNodo(string proceso, int tiempo, bool estado){

    if (this->head == nullptr){
        this->head = new Nodo(proceso, tiempo, estado);
        this->largo++;

    }else{

        Nodo* tmp = this->head;
        while (tmp->next != nullptr){
            tmp = tmp->next;
        }

        tmp->next = new Nodo(proceso, tiempo, estado);
        this->largo++;
    }
}

void Lista::eliminarNodo(string proceso){
    if (this->head == nullptr){
        printf("No hay procesos para eliminar");

    }else if(this->head->getProceso() == proceso){
        this->head = this->head->next;
        this->largo--;

    }else{
        Nodo* tmp = this->head;
        while (tmp->next != nullptr){
            if (tmp->next->getProceso() == proceso){
                tmp->next = tmp->next->next;
                this->largo--;
                break;
            }else{
                tmp = tmp->next;
            }
        }
    }
}

void Lista::mostrarLista(){
    if (this->head == nullptr){
        printf("Lista nula");
    }else{
        Nodo* tmp = this->head;
        while (tmp != nullptr){
            cout << tmp->getProceso() << endl;
            tmp = tmp->next;
        }
    }
}
int Lista::buscarNodo(string proceso, Lista* linea){
    int posicion = 1;
    Nodo* tmp = this->head;
    for(posicion; posicion==6;posicion++ ){
        if(tmp->getProceso()==proceso){
            return posicion;
        }
        else{
            posicion++;
            tmp = tmp->next;

        }
    }
}
void Lista::actualizar(){
    Nodo* tmp = this->head;
    int i;
    for(i=1; i==6; i++){
        if(tmp->getEstado() == true)
            tmp->setTiempo(tmp->getTiempo()-5);
        else{
            tmp = tmp->next;
        }
    }
}