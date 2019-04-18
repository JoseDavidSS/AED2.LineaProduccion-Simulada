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

void Lista::insertarNodo(string proceso, int tiempo) {
    if (this->head == nullptr) {
        this->head = new Nodo(proceso, tiempo, true);
        this->largo++;
    }else{
        Nodo* tmp = this->head;
        int i = this->contarActivos();

        if(i == 3){
            this->dormirPrimerVerdadero();
        }

        while (tmp->next != nullptr){
            if(tmp->getEstado()){
                i++;
            }
            tmp = tmp->next;
        }

        tmp->next = new Nodo(proceso, tiempo, true);
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
        printf("Lista nula\n");
    }else{
        cout <<"__________________"<<endl;
        Nodo* tmp = this->head;
        while (tmp != nullptr){
            cout << tmp->getProceso();
            cout << tmp->getTiempo();
            cout << tmp->getEstado() << endl;
            tmp = tmp->next;
        }
    }
}
/*int Lista::buscarNodo(string proceso, Lista* linea){
    int posicion = 1;
    Nodo* tmp = this->head;
    for(posicion =1; posicion==6; posicion++ ){
        if(tmp->getProceso()==proceso){
            return posicion;
        }
        else{
            posicion++;
            tmp = tmp->next;

        }
    }
}
*/
void Lista::actualizar(){
    printf("hola\n");
    int i;
    int a =0;
    Nodo* tmp = this->head;
    while(tmp!= NULL){
        if(tmp->getEstado() == true)
            tmp->setTiempo(tmp->getTiempo()-5);
            tmp = tmp->next;
            a++;
            i++;
        if(tmp->getTiempo()<=0){
            this->eliminarNodo(tmp->getProceso());
            tmp = tmp ->next;
            i++;
        }
        else{
            tmp = tmp->next;
            i++;
        }
    }
    if(a>=3 && i>=3){
     verificarEstado();
    }
    else{
        NULL;
    }
    i=0;
    a=0;

}
void Lista::verificarEstado(){
    Nodo* tmp = this->head;
    while(tmp!= NULL){
        if(tmp->getEstado() == true){
            tmp->setEstadoF();
            tmp->next->next->setEstadoT();
            break;
        }
        else{
            tmp = tmp->next;

         }
      }
}

void Lista::actualizar2() {
    cout<<"______"<<endl;
    this->actualizarVerdaderos();
    this->borrarCompletados();
    this->seleccionarVerdaderos();
    this->mostrarLista();

}

void Lista::actualizarVerdaderos() {
    Nodo* tmp = this->head;
    while(tmp!= nullptr){
        if(tmp->getEstado() == 1){
            tmp->setTiempo(tmp->getTiempo() - 5);
        }
        tmp = tmp->next;
    }
}

void Lista::borrarCompletados() {
    if(this->head->tiempo <= 0){
        this->head = this->head->next;
    }
    Nodo* tmp = this->head;
    while(tmp->next != nullptr){
        if(tmp->next->tiempo <= 0){
            if(tmp->next->next == nullptr){
                tmp->next = nullptr;
                this->largo--;
            } else{
                tmp->next = tmp->next->next;
                this->largo--;
            }
        }
        tmp = tmp->next;
    }
}

void Lista::seleccionarVerdaderos() {
    Nodo* tmp = this->head;
    int i = 0;
    while (tmp != nullptr){
        if(tmp->estado){
            i += 1;
        }
        tmp = tmp->next;
    }
    tmp = this->head;
    while (tmp != nullptr && i != 3){
        if(!tmp->estado){
            tmp->setEstadoT();
            i += 1;
        }
        tmp = tmp->next;
    }
}

void Lista::dormirPrimerVerdadero() {
    Nodo* tmp = this->head;
    bool i = true;
    while (tmp->next != nullptr && i){
        if(tmp->getEstado()){
            tmp->estado = false;
            i = false;
        }
        tmp = tmp->next;
    }
}

int Lista::contarActivos() {
    Nodo* tmp = this->head;
    int i = 0;
    while (tmp != nullptr){
        if(tmp->getEstado()){
            i++;
        }
        tmp = tmp->next;
    }
    return i;
}