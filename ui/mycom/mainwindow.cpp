#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <QtDebug>
using namespace std;


int tem=0;
int hum=0;
int light=0;

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->closeMyComBtn->setEnabled(false); //开始“关闭串口”按钮不可用
    ui->green->show();
    ui->red->hide();
}

void MainWindow::readMyCom() //读串口函数
{
//myCom->setBaudRate(BAUD115200);
QByteArray temp = myCom->readAll();
//读取串口缓冲区的所有数据给临时变量temp
string s=string(temp);
qDebug()<<temp;
if(s.size()<=6){
    light=s[1]-'0';
}else if(s.size()==7){
    light=s[1]-'0';
    tem=(s[2]-'0')*10+(s[3]-'0');
    hum=(s[4]-'0')*10+(s[5]-'0');
}

if(light==1){
    ui->label_mie->show();
    ui->label_liang->hide();
}else{
    ui->label_mie->hide();
    ui->label_liang->show();
}
int floorNum=ui->floor->text().toInt();
int ceilNum=ui->ceil->text().toInt();
if(tem<=ceilNum&&tem>=floorNum){
    ui->green->show();
    ui->red->hide();
}else{
    ui->green->hide();
    ui->red->show();
}
ui->lcdNumber->display(tem);
ui->lcdNumber_2->display(hum);
//ui->textBrowser->insertPlainText(i);
//将串口的数据显示在窗口的文本浏览器中
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openMyComBtn_clicked()
{
    struct PortSettings myComSetting = {BAUD115200,DATA_8,PAR_NONE,STOP_1,FLOW_OFF,500};
    //定义一个结构体，用来存放串口各个参数
    myCom = new Win_QextSerialPort("com7",myComSetting,QextSerialBase::EventDriven);
    //定义串口对象，并传递参数，在构造函数里对其进行初始化
    myCom ->open(QIODevice::ReadWrite);
    //以可读写方式打开串口
    connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));
    //信号和槽函数关联，当串口缓冲区有数据时，进行读串口操作
    myCom->setBaudRate(BAUD115200);
    ui->openMyComBtn->setEnabled(false); //打开串口后“打开串口”按钮不可用
    ui->closeMyComBtn->setEnabled(true); //打开串口后“关闭串口”按钮可用
}

void MainWindow::on_closeMyComBtn_clicked()
{
    myCom->close(); //关闭串口，该函数在win_qextserialport.cpp文件中定义
    ui->openMyComBtn->setEnabled(true); //关闭串口后“打开串口”按钮可用
    ui->closeMyComBtn->setEnabled(false); //关闭串口后“关闭串口”按钮不可用
}
