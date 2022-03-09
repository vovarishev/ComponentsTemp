#ifndef IUNKNOWN_H
#define IUNKNOWN_H
struct IUnknown
{
    virtual void Func1() = 0;
    virtual void Func2() = 0;
};
#endif