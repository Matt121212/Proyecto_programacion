#include "cruddialog.h"
#include "ui_cruddialog.h"

CrudDialog::CrudDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CrudDialog)
{
    ui->setupUi(this);
}

CrudDialog::~CrudDialog()
{
    delete ui;
}
