#ifndef BASICO_H
#define BASICO_H
#include <QString>
#include "producto.h"


class Basico: public Producto{

public:
    Basico();
    Basico(QString codigo, QString nombre, double unidades, double costo);

    QString getClase();
    double iva();
    double subtotal();
    double total();


};

#endif // BASICO_H
