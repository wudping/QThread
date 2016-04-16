#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <mythread.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    MyThread *mThread1;
     MyThread *mThread2;
    
private:
    Ui::MainWindow *ui;

 public slots:
 //   void onNumberChanged1(QString Number);
  //  void onNumberChanged2(QString Number);
    void onNumberChanged1( );
     void onNumberChanged2( );
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // MAINWINDOW_H
