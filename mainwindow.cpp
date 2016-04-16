#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mThread1 = new MyThread(this);
    mThread2 = new MyThread(this);
  //  mThread1->setMessage("A");
 //   mThread2->setMessage("B");
   // connect(mThread1,SIGNAL(NumberChanged(QString)),this,SLOT(onNumberChanged1(QString)));
  //  connect(mThread2,SIGNAL(NumberChanged(QString)),this,SLOT(onNumberChanged2(QString)));
     connect(mThread1,SIGNAL(NumberChanged()),this,SLOT(onNumberChanged1()));
     connect(mThread2,SIGNAL(NumberChanged()),this,SLOT(onNumberChanged2()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::onNumberChanged1( )
{
    //ui->label->setText(QString::number(Number));
    ui->textBrowser->append("A");
}

void MainWindow::onNumberChanged2( )
{
    ui->textBrowser_2->append("B");
}
/*
void MainWindow::onNumberChanged1(QString Number)
{
    //ui->label->setText(QString::number(Number));
    ui->textBrowser->append(Number);
}

void MainWindow::onNumberChanged2(QString Number)
{
    ui->textBrowser_2->append(Number);
}
*/
void MainWindow::on_pushButton_clicked()
{
    //started

    mThread1->start();
    mThread1->Stop = false;
}

void MainWindow::on_pushButton_2_clicked()
{
    //stopped
    mThread1->Stop = true;
}

void MainWindow::on_pushButton_3_clicked()
{
    mThread2->start();
    mThread2->Stop = false;
}

void MainWindow::on_pushButton_4_clicked()
{
       mThread2->Stop = true;
}
