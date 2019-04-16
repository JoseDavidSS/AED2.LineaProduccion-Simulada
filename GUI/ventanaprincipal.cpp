#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include "/home/jose/CLionProjects/Memoria-Virtual/Logica/Lista.h"

VentanaPrincipal::VentanaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaPrincipal)
{
    ui->setupUi(this);
}

VentanaPrincipal::~VentanaPrincipal()
{
    delete ui;
}

void VentanaPrincipal::agregarLineaProduccion() {
    int contador = this->contador;

    if (contador = 1) {
        Lista *Linea1 = new Lista;
        this->contador++;
    }

    if (contador = 2) {
        Lista *Linea2 = new Lista;
        this->contador++;
    }

    if (contador = 3) {
        Lista *Linea3 = new Lista;
        this->contador++;
    }

    if (contador = 4) {
        Lista *Linea4 = new Lista;
        this->contador++;
    }

    if (contador = 5) {
        Lista *Linea5 = new Lista;
        this->contador++;
    }

    if (contador = 6) {
        Lista *Linea6 = new Lista;
        this->contador++;
    }

    if (contador >= 7){
        printf("No se pueden agregar mas lineas de produccion");
    }
}

