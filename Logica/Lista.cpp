//
// Created by jose on 15/04/19.
//

#include <iostream>
#include "Lista.h"
#include "Nodo.h"

void Lista::insertarNodo(string proceso, int tiempo){

    if (this->head == nullptr){
        this->head = new Nodo(proceso, tiempo);
        this->largo++;

    }else{

        Nodo* tmp = this->head;
        while (tmp->next != nullptr){
            tmp = tmp->next;
        }

        tmp->next = new Nodo(proceso, tiempo);
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