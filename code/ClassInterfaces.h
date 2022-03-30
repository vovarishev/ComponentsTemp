#ifndef CLASSINTERFACES_H
#define CLASSINTERFACES_H
struct IUnk{
    virtual int QueryInterface(int, void**) = 0;
};

struct I1 : IUnk{
    virtual void Func1() = 0;
    virtual void Func2() = 0;
};

struct I2 : IUnk{
    virtual void Func3() = 0;
    virtual void Func4() = 0;
};

#endif