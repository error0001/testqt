#include "listener.h"

Listener::Listener()
{
    Init();
}

Listener::Init()
{
    listener = new QSerialPort();
}

Listener::~Listener()
{
    delete listener;
}
