#include <iostream>
#include "Logica/Lista.h"
#include "GUI/ventanaprincipal.h"
#include <QApplication>
#include <iostream>
#include <QTime>


int main(int argc, char *argv[]){

    Lista* lista = new Lista;
    Lista* lista2 = new Lista;


    lista->insertarNodo("a", 10);
    lista->insertarNodo("b", 15);
    lista2->insertarNodo("x", 25);
    lista2->insertarNodo("y", 30);

    lista->actualizar2();
    lista2->actualizar2();

    lista->actualizar2();
    lista2->actualizar2();

    lista->actualizar2();
    lista2->actualizar2();




    QApplication a(argc, argv);
        VentanaPrincipal w;
        w.show();
        QTime time = QTime::currentTime();
        qsrand((uint)time.msec());

        return a.exec();

}

