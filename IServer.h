#ifndef ISERVER_H
#define ISERVER_H
class IServer
{
public:
    virtual int Func() = 0;
};

IServer* CreateInstance();
IServer* CreateInstance(int, int);
#endif