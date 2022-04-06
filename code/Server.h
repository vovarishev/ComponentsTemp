#ifndef SERVER_H
#define SERVER_H
#include "IUnk.h"
class Server : public I1, public I2{
private:
    int a;
    int b;
    int m_cRef;
public:
    Server();
    ~Server();
    virtual void Func1();
    virtual void Func2();
    virtual void Func3();
    virtual void Func4();
    int QueryInterface(int,void**);
    int AddRef();
    int Release();
};

struct S1Factory : IClassFactory{
    private:
    int m_fRef;
    public:
    S1Factory();
    ~S1Factory();
    HRESULT_ CreateInstance (IID_ ,void**);
    HRESULT_ QueryInterface (IID_ ,void**);
    int AddRef();
    int Release();
};
#endif