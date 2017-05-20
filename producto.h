#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <QString>

class Producto
{

protected:
    QString codigo;
    QString nombre;
    double unidades;
    double costo;



    public:
    Producto();
    Producto(QString codigo, QString nombre, double unidades, double costo);

    QString getCodigo();
    QString getNombre();
    double getUnidades();
    double getCosto();


    void setCodigo(QString codigo);
    void setNombre(QString nombre);
    void setUnidades(double unidades);
    void setCosto(double costo);

    virtual double iva() = 0;
    virtual double subtotal() = 0;
    virtual double total() = 0;
};

#endif // PRODUCTO_H
