#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include "../Logica/Lista.h"
#include <iostream>
#include <QMessageBox>


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
        this->linea1 = new Lista;
        this->contador++;
        ui->label_3->setText("1");
        ui->comboBox->addItem("Linea 1");

    }

    if (contador == 2) {
        this->linea2 = new Lista;
        this->contador++;
        ui->label_3->setText("2");
        ui->comboBox->addItem("Linea 2");


    }

    if (contador == 3) {
        this->linea3 = new Lista;
        this->contador++;
        ui->label_3->setText("3");
        ui->comboBox->addItem("Linea 3");


    }

    if (contador == 4) {
        this->linea4 = new Lista;
        this->contador++;
        ui->label_3->setText("4");
        ui->comboBox->addItem("Linea 4");


    }

    if (contador == 5) {
        this->linea5 = new Lista;
        this->contador++;
        ui->label_3->setText("5");
        ui->comboBox->addItem("Linea 5");


    }

    if (contador == 6) {
        this->linea6 = new Lista;
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

void VentanaPrincipal::agregarElementoLineaProduccion(string linea){

    std::cout << linea << std::endl;
    string proceso = ui->lineEdit->displayText().toStdString();
    int tiempo = ui->lineEdit_2->displayText().toInt();

    if (linea == "Linea 1"){
        this->linea1->insertarNodo(proceso,tiempo,true);
        this->linea1->mostrarLista();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();

    }
    if (linea == "Linea 2"){
        this->linea2->insertarNodo(proceso,tiempo,true);
        this->linea2->mostrarLista();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();

    }
    if (linea == "Linea 3"){
        this->linea3->insertarNodo(proceso,tiempo,true);
        this->linea3->mostrarLista();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();

    }
    if (linea == "Linea 4"){
        this->linea4->insertarNodo(proceso,tiempo,true);
        this->linea4->mostrarLista();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();

    }
    if (linea == "Linea 5"){
        this->linea5->insertarNodo(proceso,tiempo,true);
        this->linea5->mostrarLista();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();

    }
    if (linea == "Linea 6"){
        this->linea6->insertarNodo(proceso,tiempo,true);
        this->linea6->mostrarLista();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();

    }

}

void VentanaPrincipal::on_pushButton_6_clicked()
{
    agregarElementoLineaProduccion(ui->comboBox->currentText().toStdString());
}

void VentanaPrincipal::on_pushButton_5_clicked()
{
    if (this->contador == 2){
        this->linea1->actualizar2();
        ui->label_9->setText("-");
        ui->label_19->setText("-");
        ui->label_10->setText("-");
        ui->label_21->setText("-");
        ui->label_11->setText("-");
        ui->label_18->setText("-");
        ui->label_12->setText("-");
        ui->label_17->setText("-");
        ui->label_13->setText("-");
        ui->label_16->setText("-");
        ui->label_14->setText("-");
        ui->label_20->setText("-");
    }

    if (this->contador == 3){
        this->linea1->actualizar2();
        this->linea2->actualizar2();
        ui->label_9->setText("-");
        ui->label_19->setText("-");
        ui->label_10->setText("-");
        ui->label_21->setText("-");
        ui->label_11->setText("-");
        ui->label_18->setText("-");
        ui->label_12->setText("-");
        ui->label_17->setText("-");
        ui->label_13->setText("-");
        ui->label_16->setText("-");
        ui->label_14->setText("-");
        ui->label_20->setText("-");
    }

    if (this->contador == 4){
        this->linea1->actualizar2();
        this->linea2->actualizar2();
        this->linea3->actualizar2();
        ui->label_9->setText("-");
        ui->label_19->setText("-");
        ui->label_10->setText("-");
        ui->label_21->setText("-");
        ui->label_11->setText("-");
        ui->label_18->setText("-");
        ui->label_12->setText("-");
        ui->label_17->setText("-");
        ui->label_13->setText("-");
        ui->label_16->setText("-");
        ui->label_14->setText("-");
        ui->label_20->setText("-");
    }

    if (this->contador == 5){
        this->linea1->actualizar2();
        this->linea2->actualizar2();
        this->linea3->actualizar2();
        this->linea4->actualizar2();
        ui->label_9->setText("-");
        ui->label_19->setText("-");
        ui->label_10->setText("-");
        ui->label_21->setText("-");
        ui->label_11->setText("-");
        ui->label_18->setText("-");
        ui->label_12->setText("-");
        ui->label_17->setText("-");
        ui->label_13->setText("-");
        ui->label_16->setText("-");
        ui->label_14->setText("-");
        ui->label_20->setText("-");
    }

    if (this->contador == 6){
        this->linea1->actualizar2();
        this->linea2->actualizar2();
        this->linea3->actualizar2();
        this->linea4->actualizar2();
        this->linea5->actualizar2();
        ui->label_9->setText("-");
        ui->label_19->setText("-");
        ui->label_10->setText("-");
        ui->label_21->setText("-");
        ui->label_11->setText("-");
        ui->label_18->setText("-");
        ui->label_12->setText("-");
        ui->label_17->setText("-");
        ui->label_13->setText("-");
        ui->label_16->setText("-");
        ui->label_14->setText("-");
        ui->label_20->setText("-");
    }

    if (this->contador == 7){
        this->linea1->actualizar2();
        this->linea2->actualizar2();
        this->linea3->actualizar2();
        this->linea4->actualizar2();
        this->linea5->actualizar2();
        this->linea6->actualizar2();
        ui->label_9->setText("-");
        ui->label_19->setText("-");
        ui->label_10->setText("-");
        ui->label_21->setText("-");
        ui->label_11->setText("-");
        ui->label_18->setText("-");
        ui->label_12->setText("-");
        ui->label_17->setText("-");
        ui->label_13->setText("-");
        ui->label_16->setText("-");
        ui->label_14->setText("-");
        ui->label_20->setText("-");
    }

}

void VentanaPrincipal::on_pushButton_2_clicked(){
    string linea = ui->comboBox->currentText().toStdString();
    if (linea == "Linea 1"){

        Nodo* tmp = this->linea1->head;
        while (tmp != NULL) {
            if (this->linea1->largo == 0){
                printf("nada");
                break;
            }
            if (this->linea1->largo == 1){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;
            }
            if (this->linea1->largo == 2){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;
            }
            if (this->linea1->largo == 3){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;
            }
            if (this->linea1->largo == 4){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;
            }
            if (this->linea1->largo == 5){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;
            }
            if (this->linea1->largo == 6){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;

                ui->label_14->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo6 = to_string(tmp->getTiempo());
                ui->label_20->setText(QString::fromStdString(tiempo6));
                tmp = tmp->next;
            }
        }
    }

    if (linea == "Linea 2"){

        Nodo* tmp = this->linea2->head;
        while (tmp != NULL) {
            if (this->linea2->largo == 0){
                printf("nada");
                break;
            }
            if (this->linea2->largo == 1){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;
            }
            if (this->linea2->largo == 2){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;
            }
            if (this->linea2->largo == 3){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;
            }
            if (this->linea2->largo == 4){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;
            }
            if (this->linea2->largo == 5){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;
            }
            if (this->linea2->largo == 6){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;

                ui->label_14->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo6 = to_string(tmp->getTiempo());
                ui->label_20->setText(QString::fromStdString(tiempo6));
                tmp = tmp->next;
            }
        }
    }
    if (linea == "Linea 3"){

        Nodo* tmp = this->linea3->head;
        while (tmp != NULL) {
            if (this->linea3->largo == 0){
                printf("nada");
                break;
            }
            if (this->linea3->largo == 1){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;
            }
            if (this->linea3->largo == 2){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;
            }
            if (this->linea3->largo == 3){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;
            }
            if (this->linea3->largo == 4){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;
            }
            if (this->linea3->largo == 5){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;
            }
            if (this->linea3->largo == 6){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;

                ui->label_14->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo6 = to_string(tmp->getTiempo());
                ui->label_20->setText(QString::fromStdString(tiempo6));
                tmp = tmp->next;
            }
        }
    }
    if (linea == "Linea 4"){

        Nodo* tmp = this->linea4->head;
        while (tmp != NULL) {
            if (this->linea4->largo == 0){
                printf("nada");
                break;
            }
            if (this->linea4->largo == 1){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;
            }
            if (this->linea4->largo == 2){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;
            }
            if (this->linea4->largo == 3){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;
            }
            if (this->linea4->largo == 4){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;
            }
            if (this->linea4->largo == 5){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;
            }
            if (this->linea4->largo == 6){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;

                ui->label_14->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo6 = to_string(tmp->getTiempo());
                ui->label_20->setText(QString::fromStdString(tiempo6));
                tmp = tmp->next;
            }
        }
    }
    if (linea == "Linea 5"){

        Nodo* tmp = this->linea5->head;
        while (tmp != NULL) {
            if (this->linea5->largo == 0){
                printf("nada");
                break;
            }
            if (this->linea5->largo == 1){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;
            }
            if (this->linea5->largo == 2){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;
            }
            if (this->linea5->largo == 3){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;
            }
            if (this->linea5->largo == 4){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;
            }
            if (this->linea5->largo == 5){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;
            }
            if (this->linea5->largo == 6){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;

                ui->label_14->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo6 = to_string(tmp->getTiempo());
                ui->label_20->setText(QString::fromStdString(tiempo6));
                tmp = tmp->next;
            }
        }
    }
    if (linea == "Linea 6"){

        Nodo* tmp = this->linea6->head;
        while (tmp != NULL) {
            if (this->linea6->largo == 0){
                printf("nada");
                break;
            }
            if (this->linea6->largo == 1){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;
            }
            if (this->linea6->largo == 2){
                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;
            }
            if (this->linea6->largo == 3){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;
            }
            if (this->linea6->largo == 4){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;
            }
            if (this->linea6->largo == 5){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;
            }
            if (this->linea6->largo == 6){

                ui->label_9->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo = to_string(tmp->getTiempo());
                ui->label_19->setText(QString::fromStdString(tiempo));
                tmp = tmp->next;

                ui->label_10->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo2 = to_string(tmp->getTiempo());
                ui->label_21->setText(QString::fromStdString(tiempo2));
                tmp = tmp->next;

                ui->label_11->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo3 = to_string(tmp->getTiempo());
                ui->label_18->setText(QString::fromStdString(tiempo3));
                tmp = tmp->next;

                ui->label_12->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo4 = to_string(tmp->getTiempo());
                ui->label_17->setText(QString::fromStdString(tiempo4));
                tmp = tmp->next;

                ui->label_13->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo5 = to_string(tmp->getTiempo());
                ui->label_16->setText(QString::fromStdString(tiempo5));
                tmp = tmp->next;

                ui->label_14->setText(QString::fromStdString(tmp->getProceso()));
                string tiempo6 = to_string(tmp->getTiempo());
                ui->label_20->setText(QString::fromStdString(tiempo6));
                tmp = tmp->next;
            }
        }
    }
}


