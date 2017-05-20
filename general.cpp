#include "general.h"

General::General(QString codigo, QString nombre, double unidades, double costo):Producto(codigo, nombre, unidades, costo){

    this->codigo = codigo;
    this-> nombre = nombre;
    this->unidades = unidades;
    this->costo = costo;

}

double General::iva(){
    return (0.19*costo);
}

double General::subtotal(){
    return (costo*unidades);
}

double General::total(){
    return (iva()+subtotal());
}

