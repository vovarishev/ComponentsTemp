#ifndef S2FACTORY_H
#define S2FACTORY_H
#include "INCLUDES.h"
struct S2Factory : IClassFactory{
    IUnk* CreateServer();
};
#endif