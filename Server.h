#ifndef SERVER_H
#define SERVER_H
#include "IX.h"
#include "IY.h"
class Server : public IX, public IY
{
private:
    int a;
    int b;
public:
    Server();
    ~Server();
    virtual void Func1();
    virtual void Func2();
    virtual void Func3();
    virtual void Func4();
    int QueryInterface(int,void**);
};
#endif