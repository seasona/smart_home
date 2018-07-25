#include <QtGui/QApplication>
#include "mainwindow.h"
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login l;
    //w.show();
    l.show();
    if(l.exec()==QDialog::Accepted)
    {
      w.show();
      return a.exec();
    }
    else return 0;
}
