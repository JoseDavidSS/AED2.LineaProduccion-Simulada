#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>
#include <string>
#include "/home/chus/CLionProjects/Memoria-Virtual/Logica/Lista.h"


using namespace std;


namespace Ui {
class VentanaPrincipal;
}

class VentanaPrincipal : public QMainWindow
{
    Q_OBJECT

public:

    int contador = 1;

    Lista* linea1;
    Lista* linea2;
    Lista* linea3;
    Lista* linea4;
    Lista* linea5;
    Lista* linea6;

    explicit VentanaPrincipal(QWidget *parent = nullptr);
    ~VentanaPrincipal();
    void agregarLineaProduccion();
    void agregarElementoLineaProduccion(string linea);

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::VentanaPrincipal *ui;
};

#endif // VENTANAPRINCIPAL_H
