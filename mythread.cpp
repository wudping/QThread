#include "mythread.h"
#include <QtCore>

MyThread::MyThread(QObject *parent) :
    QThread(parent)
{
}


void MyThread::run()
{
    while(!Stop)
    {
      //  emit NumberChanged(messageStr);
        emit NumberChanged();
        this->msleep(500);
    }
    /*
    for(int i = 0;i<10000;i++)
    {
        QMutex mutex;
        mutex.lock();
        if(this->Stop) break;
        mutex.unlock();
        emit NumberChanged(i);

        this->msleep(1000);

    }*/
}

void MyThread::setMessage(QString message)
{
    messageStr = message;
}


