#ifndef CRUDDIALOG_H
#define CRUDDIALOG_H

#include <QDialog>

namespace Ui {
class CrudDialog;
}

class CrudDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CrudDialog(QWidget *parent = nullptr);
    ~CrudDialog();

private:
    Ui::CrudDialog *ui;
};

#endif // CRUDDIALOG_H
