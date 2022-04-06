#ifndef SERVER2_H
#define SERVER2_H
#include "IUnk.h"
class Server2 : public I2{
private:
    int a;
    int b;
    int m_cRef;
public:
    Server2();
    ~Server2();
    void Func3();
    void Func4();
    int QueryInterface(int,void**);
    int AddRef();
    int Release();
};
#endif

struct S2Factory : IClassFactory{
    private:
    int m_fRef;
    public:
    S2Factory();
    ~S2Factory();
    HRESULT_ CreateInstance (IID_ ,void**);
    HRESULT_ QueryInterface (IID_ ,void**);
    int AddRef();
    int Release();
};