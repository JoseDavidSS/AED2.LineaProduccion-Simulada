#include <iostream>
#include "Logica/Lista.h"
#include "GUI/ventanaprincipal.h"
#include <QApplication>
#include <iostream>
#include <QTime>


int main(int argc, char *argv[]){

    Lista* lista = new Lista;
    lista->mostrarLista();
    lista->insertarNodo("a", 50);
    lista->insertarNodo("b", 80);
    lista->insertarNodo("c", 10);
    lista->insertarNodo("d", 40);
    lista->mostrarLista();
    lista->insertarNodo("e", 60);
    lista->insertarNodo("e", 70);
    lista->mostrarLista();
    lista->insertarNodo("f", 30);
    lista->mostrarLista();



    QApplication a(argc, argv);
        VentanaPrincipal w;
        w.show();
        QTime time = QTime::currentTime();
        qsrand((uint)time.msec());

        return a.exec();

}

