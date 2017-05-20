#ifndef ASEO_H
#define ASEO_H
#include <QString>
#include "producto.h"


class Aseo: public Producto{

public:
    Aseo();
    Aseo(QString codigo, QString nombre, double unidades, double costo);

    QString getClase();
    double iva();
    double subtotal();
    double total();

};

#endif // ASEO_H
