#ifndef GENERAL_H
#define GENERAL_H
#include <QString>
#include "producto.h"


class General: public Producto{

public:

    General();
    General(QString codigo, QString nombre, double unidades, double costo);

    QString getClase();
    double iva();
    double subtotal();
    double total();
};

#endif // GENERAL_H
