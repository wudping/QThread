#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);
    void run();
    bool Stop;
    void setMessage(QString message);

signals:
    //void NumberChanged(QString );
    void NumberChanged();
    
private:
    QString messageStr;


public slots:
    
};

#endif // MYTHREAD_H
