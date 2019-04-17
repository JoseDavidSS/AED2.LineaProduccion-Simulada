#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include "/home/chus/CLionProjects/Memoria-Virtual/Logica/Lista.h"

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

    if (contador == 1) {
        Lista *Linea1 = new Lista;
        this->contador++;
        ui->label_3->setText("1");
        ui->comboBox->addItem("Linea 1");


    }

    if (contador == 2) {
        Lista *Linea2 = new Lista;
        this->contador++;
        ui->label_3->setText("2");
        ui->comboBox->addItem("Linea 2");


    }

    if (contador == 3) {
        Lista *Linea3 = new Lista;
        this->contador++;
        ui->label_3->setText("3");
        ui->comboBox->addItem("Linea 3");


    }

    if (contador == 4) {
        Lista *Linea4 = new Lista;
        this->contador++;
        ui->label_3->setText("4");
        ui->comboBox->addItem("Linea 4");


    }

    if (contador == 5) {
        Lista *Linea5 = new Lista;
        this->contador++;
        ui->label_3->setText("5");
        ui->comboBox->addItem("Linea 5");


    }

    if (contador == 6) {
        Lista *Linea6 = new Lista;
        this->contador++;
        ui->label_3->setText("6, no se pueden agregar mas.");
        ui->comboBox->addItem("Linea 6");


    }

    if (contador >= 7){
        printf("No se pueden agregar mas lineas de produccion");
    }
}


void VentanaPrincipal::on_pushButton_4_clicked()
{
    agregarLineaProduccion();
}

void VentanaPrincipal::agregarElementoLineaProduccion(Lista* linea){

}
