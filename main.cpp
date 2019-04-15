#include <iostream>
#include "Logica/Lista.h"
#include "GUI/ventanaprincipal.h"
#include <QApplication>
#include <iostream>
#include <QTime>


int main(int argc, char *argv[]){

    Lista* linea1 = new Lista;
    linea1->insertarNodo("A", 5);
    linea1->insertarNodo("B", 8);
    linea1->mostrarLista();

    QApplication a(argc, argv);
        VentanaPrincipal w;
        w.show();
        QTime time = QTime::currentTime();
        qsrand((uint)time.msec());

        return a.exec();
}
