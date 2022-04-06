#ifndef IUNK_H
#define IUNK_H

#include "Includes.h"

struct IUnk{
    virtual int QueryInterface(int, void**) = 0;
    virtual int AddRef() = 0;
    virtual int Release() = 0;
};

struct I1 : IUnk{
    virtual void Func1() = 0;
    virtual void Func2() = 0;
};

struct I2 : IUnk{
    virtual void Func3() = 0;
    virtual void Func4() = 0;
};

struct IClassFactory:IUnk{
    virtual HRESULT_ CreateInstance (IID_ ,void**) = 0;
};

#endif