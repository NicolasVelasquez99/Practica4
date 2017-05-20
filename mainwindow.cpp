#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Aseo.h"
#include "Basico.h"
#include "general.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString codigo = ui->objCodigo->text();
    QString nombre = ui->objNombre->text();
    QString categoria = ui->objCategoria->currentText();
    double unidades = ui->objUnidades->text().toDouble();
    double costo = ui->objCosto->text().toDouble();

    if(categoria == "General"){

        General * objProducGeneral = new General(codigo, nombre, unidades, costo);

        listaProducGeneral.push_back(objProducGeneral);

        ui->objCodigo->setText("");
        ui->objNombre->setText("");
        ui->objUnidades->setText("");
        ui->objCosto->setText("");

    }

    if(categoria == "Aseo"){

        Aseo * objProducAseo = new Aseo(codigo, nombre, unidades, costo);

        listaProducAseo.push_back(objProducAseo);

        ui->objCodigo->setText("");
        ui->objNombre->setText("");
        ui->objUnidades->setText("");
        ui->objCosto->setText("");
    }

    if(categoria == "Basico"){

        Basico * objProducBasico = new Basico(codigo, nombre, unidades, costo);

        listaProducBasico.push_back(objProducBasico);

        ui->objCodigo->setText("");
        ui->objNombre->setText("");
        ui->objUnidades->setText("");
        ui->objCosto->setText("");
    }


    //double subtotal = ui->objSubtotal->text().toDouble();
    //double iva= ui->objIva->text().toDouble();
    //double total= ui->objTotal->text().toDouble();


    /*Producto * objProducto = new Producto(codigo, nombre, unidades, costo);

    listaProducto.push_back(objProducto);
    ui->objCodigo->setText("");
    //ui->objCategoria->setCurrentText("");
    ui->objNombre->setText("");
    ui->objUnidades->setText("");
    ui->objCosto->setText("");
    //ui->objsubtotal->setText("");
    //ui->objIva->setText("");
    //ui->objtotal->setText("");*/
}

void MainWindow::on_pushButton_2_clicked()
{
    QString salida = "Codigo\tNombre\tUnidades\tCosto\tSubtotal\tIva\tTotal\t\t\t";
    for(int i=0; i<(int)listaProducGeneral.size() ;i++){
        salida+=listaProducGeneral[i]->getCodigo();
        salida+="\t";
        salida+=listaProducGeneral[i]->getNombre();
        salida+="\t";
        salida+=QString::number(listaProducGeneral[i]->getUnidades());
        salida+="\t";
        salida+=QString::number(listaProducGeneral[i]->getCosto());
        salida+="\t";
        salida+=QString::number(listaProducGeneral[i]->subtotal());
        salida+="\t";
        salida+=QString::number(listaProducGeneral[i]->iva());
        salida+="\t";
        salida+=QString::number(listaProducGeneral[i]->total());
        salida+="\t";

    }

    for(int i=0; i<(int)listaProducAseo.size() ;i++){
        salida+=listaProducAseo[i]->getCodigo();
        salida+="\t";
        salida+=listaProducAseo[i]->getNombre();
        salida+="\t";
        //salida+=listaProducto[i]->getCategoria();
        //salida+="\t";
        salida+=QString::number(listaProducAseo[i]->getUnidades());
        salida+="\t";
        salida+=QString::number(listaProducAseo[i]->getCosto());
        salida+="\t";
        salida+=QString::number(listaProducAseo[i]->subtotal());
        salida+="\t";
        salida+=QString::number(listaProducAseo[i]->iva());
        salida+="\t";
        salida+=QString::number(listaProducAseo[i]->total());
        salida+="\t";

    }

    for(int i=0; i<(int)listaProducBasico.size() ;i++){
        salida+=listaProducBasico[i]->getCodigo();
        salida+="\t";
        salida+=listaProducBasico[i]->getNombre();
        salida+="\t";
        //salida+=listaProducto[i]->getCategoria();
        //salida+="\t";
        salida+=QString::number(listaProducBasico[i]->getUnidades());
        salida+="\t";
        salida+=QString::number(listaProducBasico[i]->getCosto());
        salida+="\t";
        salida+=QString::number(listaProducBasico[i]->subtotal());
        salida+="\t";
        salida+=QString::number(listaProducBasico[i]->iva());
        salida+="\t";
        salida+=QString::number(listaProducBasico[i]->total());
        salida+="\t";

    }

    ui->objSalida->setText(salida);
}


void MainWindow::on_objCategoria_activated(const QString &arg1){

}
