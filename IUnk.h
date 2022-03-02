#ifndef IUNK_H
#define IUNK_H
struct IUnk
{
    virtual int QueryInterface(int, void**) = 0;
};
#endif