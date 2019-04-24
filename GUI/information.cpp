#include "information.h"
#include "ui_information.h"
#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include "../Logica/Lista.h"
#include <iostream>


Information::Information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);

}

Information::~Information()
{
    delete ui;    
}

void Information::definirLabels(){
}
