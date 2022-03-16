#ifndef ISFACTORY_H
#define ISFACTORY_H
#include "ISFactory.h"
struct ISFactory : IClassFactory
{
    CreateInstance1(int iid, void** ppv);
};
#endif