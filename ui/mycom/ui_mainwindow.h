/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Jul 20 14:13:50 2018
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *openMyComBtn;
    QPushButton *closeMyComBtn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_liang;
    QLabel *label_mie;
    QLabel *label_3;
    QLabel *green;
    QLabel *red;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *ceil;
    QLineEdit *floor;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(604, 390);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(604, 390));
        MainWindow->setMaximumSize(QSize(604, 390));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        openMyComBtn = new QPushButton(centralWidget);
        openMyComBtn->setObjectName(QString::fromUtf8("openMyComBtn"));
        openMyComBtn->setGeometry(QRect(30, 250, 75, 23));
        openMyComBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 255);"));
        closeMyComBtn = new QPushButton(centralWidget);
        closeMyComBtn->setObjectName(QString::fromUtf8("closeMyComBtn"));
        closeMyComBtn->setGeometry(QRect(30, 290, 75, 23));
        closeMyComBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 255);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 40, 81, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 50, 14);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 40, 71, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_liang = new QLabel(centralWidget);
        label_liang->setObjectName(QString::fromUtf8("label_liang"));
        label_liang->setGeometry(QRect(520, 190, 41, 61));
        label_liang->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/1.png);"));
        label_mie = new QLabel(centralWidget);
        label_mie->setObjectName(QString::fromUtf8("label_mie"));
        label_mie->setGeometry(QRect(510, 180, 51, 71));
        label_mie->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/22.png);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-20, -10, 641, 361));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/\344\270\273\347\225\214\351\235\242.jpg);\n"
""));
        green = new QLabel(centralWidget);
        green->setObjectName(QString::fromUtf8("green"));
        green->setGeometry(QRect(510, 40, 41, 41));
        green->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/\347\273\277\347\201\257.jpg);\n"
"background-color: rgb(255,255,255);"));
        red = new QLabel(centralWidget);
        red->setObjectName(QString::fromUtf8("red"));
        red->setGeometry(QRect(510, 40, 41, 41));
        red->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/\347\272\242\347\201\257.jpg);\n"
"background-color: rgb(213, 213, 213);"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 80, 131, 81));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 20, 54, 12));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 255);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 50, 54, 12));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 255);"));
        ceil = new QLineEdit(groupBox);
        ceil->setObjectName(QString::fromUtf8("ceil"));
        ceil->setGeometry(QRect(70, 20, 51, 21));
        ceil->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        floor = new QLineEdit(groupBox);
        floor->setObjectName(QString::fromUtf8("floor"));
        floor->setGeometry(QRect(70, 50, 51, 21));
        floor->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(180, 40, 64, 23));
        lcdNumber->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"background-color: rgb(235, 232, 232);"));
        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(390, 40, 64, 23));
        lcdNumber_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        label_3->raise();
        openMyComBtn->raise();
        closeMyComBtn->raise();
        label->raise();
        label_2->raise();
        label_liang->raise();
        label_mie->raise();
        green->raise();
        red->raise();
        groupBox->raise();
        lcdNumber->raise();
        lcdNumber_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 18));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        openMyComBtn->setText(QApplication::translate("MainWindow", "open", 0, QApplication::UnicodeUTF8));
        closeMyComBtn->setText(QApplication::translate("MainWindow", "close", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\270\251\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\271\277\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_liang->setText(QString());
        label_mie->setText(QString());
        label_3->setText(QString());
        green->setText(QString());
        red->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\270\251\345\272\246\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246\344\270\212\351\231\220\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246\344\270\213\351\231\220\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
