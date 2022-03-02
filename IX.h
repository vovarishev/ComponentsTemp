#ifndef IX_H
#define IX_H
#include "IUnk.h"
struct IX : IUnk
{
    virtual void Func1() = 0;
    virtual void Func2() = 0;
};
#endif