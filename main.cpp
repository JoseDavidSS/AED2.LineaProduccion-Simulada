#include <iostream>
#include "Logica/Lista.h"
#include "GUI/ventanaprincipal.h"
#include <QApplication>
#include <iostream>
#include <QTime>


int main(int argc, char *argv[]){

    Lista* lista = new Lista;
    lista->mostrarLista();
    lista->insertarNodo("a", 50, true);
    lista->insertarNodo("b", 50, true);
    lista->insertarNodo("c", 10, true);
    lista->insertarNodo("d", 40, false);
    lista->insertarNodo("e", 60, false);
    lista->insertarNodo("f", 30, false);
    lista->mostrarLista();
    lista->actualizar();
    lista->mostrarLista();
    lista->actualizar();
    lista->mostrarLista();


    QApplication a(argc, argv);
        VentanaPrincipal w;
        w.show();
        QTime time = QTime::currentTime();
        qsrand((uint)time.msec());

        return a.exec();

}

