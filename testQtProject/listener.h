#ifndef LISTENER_H
#define LISTENER_H
#include <QThread>
#include <QTimer>
#include <QtSerialPort>

class Listener
{
private:
    QSerialPort *listener;
public:
    Listener();
    void Init();
    ~Listener();
};

#endif // LISTENER_H
