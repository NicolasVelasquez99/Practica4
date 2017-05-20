#include "producto.h"




Producto::Producto(QString codigo, QString nombre, double unidades, double costo){

    this->codigo = codigo;
    this->nombre = nombre;
    this->unidades =  unidades;
    this->costo = costo;

}

QString Producto::getCodigo(){
 return codigo;
}

QString Producto::getNombre(){
    return nombre;
}

double Producto::getUnidades(){
    return unidades;
}

double Producto::getCosto(){
    return costo;
}

void Producto::setCodigo(QString codigo){
    this->codigo = codigo;
}

void Producto::setNombre(QString nombre){
    this->nombre = nombre;
}

void Producto::setUnidades(double unidades){
    this->unidades = unidades;
}

void Producto::setCosto(double costo){
    this->costo = costo;
}








