#ifndef IMANAGER_H
#define IMANAGER_H
class IServer
{
public:
    virtual int Func() = 0;
};

IServer* CreateInstance();
#endif