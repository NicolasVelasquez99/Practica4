#include "Aseo.h"

Aseo::Aseo(QString codigo, QString nombre, double unidades, double costo):Producto(codigo, nombre, unidades, costo){

    this->codigo = codigo;
    this->nombre = nombre;
    this->unidades = unidades;
    this->costo = costo;

}

double Aseo::iva(){
    return (0.1*costo);
}

double Aseo::subtotal(){
    return (costo*unidades);
}

double Aseo::total(){
    return (iva()+subtotal());
   }
