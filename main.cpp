#include <iostream>
#include "Logica/Lista.h"
#include "GUI/ventanaprincipal.h"
#include <QApplication>
#include <iostream>
#include <QTime>


int main(int argc, char *argv[]){

    Lista* lista = new Lista;
    lista->mostrarLista();
    lista->insertarNodo("a", 5);
    lista->insertarNodo("b", 10);

    cout<<lista->largo<<endl;

    lista->actualizar2();
    lista->actualizar2();
    lista->actualizar2();



    lista->mostrarLista();




    QApplication a(argc, argv);
        VentanaPrincipal w;
        w.show();
        QTime time = QTime::currentTime();
        qsrand((uint)time.msec());

        return a.exec();

}

