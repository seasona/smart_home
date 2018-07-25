#include "login.h"
#include "ui_login.h"
#include "QMessageBox"
#include <QLabel>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    if(ui->user->text()==tr("dino")&&
            ui->password->text()==tr("123456"))
    {
    accept();
    }
    else
    {
        QMessageBox::information(this,"warning","error!");
    }
}
