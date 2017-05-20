#include "Basico.h"

Basico::Basico(QString codigo, QString nombre, double unidades, double costo):Producto(codigo, nombre, unidades, costo){

    this->codigo = codigo;
    this->nombre = nombre;
    this->unidades = unidades;
    this->costo = costo;
}


double Basico::iva(){
    return (0.5*costo);
}

double Basico::subtotal(){
    return (costo*unidades);
}

double Basico::total(){
    return (iva()+subtotal());
}
