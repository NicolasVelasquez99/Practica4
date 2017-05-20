#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "producto.h"
#include "general.h"
#include "Basico.h"
#include "Aseo.h"
#include <vector>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_objCategoria_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    vector<Producto*> listaProducto;
    vector<General*> listaProducGeneral;
    vector<Aseo*> listaProducAseo;
    vector<Basico*> listaProducBasico;

};

#endif // MAINWINDOW_H
