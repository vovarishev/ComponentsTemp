#ifndef S1FACTORY_H
#define S1FACTORY_H
#include "INCLUDES.h"
struct S1Factory : IClassFactory{
    IUnk* CreateServer();
};
#endif