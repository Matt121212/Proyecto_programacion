#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString usuario = ui->txt_1u->text();
    QString contrasenia = ui->txt_2c->text();
    if(usuario == "admin123" and contrasenia == "admin123"){
        QMessageBox::information(this,"Login","Ingreso con exito");
        hide();
        crudDialog = new CrudDialog(this);
        crudDialog->show();

    }else{
        QMessageBox::warning(this,"Login","Usuario o contraseña incorrecta");
    }
}


