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
    ui->closeMyComBtn->setEnabled(false); //��ʼ���رմ��ڡ���ť������
    ui->green->show();
    ui->red->hide();
}

void MainWindow::readMyCom() //�����ں���
{
//myCom->setBaudRate(BAUD115200);
QByteArray temp = myCom->readAll();
//��ȡ���ڻ��������������ݸ���ʱ����temp
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
//�����ڵ�������ʾ�ڴ��ڵ��ı��������
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openMyComBtn_clicked()
{
    struct PortSettings myComSetting = {BAUD115200,DATA_8,PAR_NONE,STOP_1,FLOW_OFF,500};
    //����һ���ṹ�壬������Ŵ��ڸ�������
    myCom = new Win_QextSerialPort("com7",myComSetting,QextSerialBase::EventDriven);
    //���崮�ڶ��󣬲����ݲ������ڹ��캯���������г�ʼ��
    myCom ->open(QIODevice::ReadWrite);
    //�Կɶ�д��ʽ�򿪴���
    connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));
    //�źźͲۺ��������������ڻ�����������ʱ�����ж����ڲ���
    myCom->setBaudRate(BAUD115200);
    ui->openMyComBtn->setEnabled(false); //�򿪴��ں󡰴򿪴��ڡ���ť������
    ui->closeMyComBtn->setEnabled(true); //�򿪴��ں󡰹رմ��ڡ���ť����
}

void MainWindow::on_closeMyComBtn_clicked()
{
    myCom->close(); //�رմ��ڣ��ú�����win_qextserialport.cpp�ļ��ж���
    ui->openMyComBtn->setEnabled(true); //�رմ��ں󡰴򿪴��ڡ���ť����
    ui->closeMyComBtn->setEnabled(false); //�رմ��ں󡰹رմ��ڡ���ť������
}
