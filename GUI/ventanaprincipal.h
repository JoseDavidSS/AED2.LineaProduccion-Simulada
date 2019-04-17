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

    explicit VentanaPrincipal(QWidget *parent = nullptr);
    ~VentanaPrincipal();
    void agregarLineaProduccion();
    void agregarElementoLineaProduccion(Lista* linea);

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::VentanaPrincipal *ui;
};

#endif // VENTANAPRINCIPAL_H
