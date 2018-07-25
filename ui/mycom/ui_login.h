/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Fri Jul 20 10:21:40 2018
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *password;
    QLineEdit *user;
    QLabel *label_3;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(421, 297);
        login->setMinimumSize(QSize(421, 297));
        login->setMaximumSize(QSize(421, 297));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 140, 81, 20));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 220, 71, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 262, 71, 31));
        QFont font1;
        font1.setPointSize(15);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        password = new QLineEdit(login);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(140, 220, 113, 20));
        user = new QLineEdit(login);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(140, 140, 111, 20));
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 421, 301));
        label_3->setMinimumSize(QSize(421, 301));
        label_3->setMaximumSize(QSize(421, 301));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/jurassic world.jpg);"));
        label_3->raise();
        label->raise();
        label_2->raise();
        pushButton->raise();
        password->raise();
        user->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("login", "\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
