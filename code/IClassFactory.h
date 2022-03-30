#ifndef ICLASSFACTORY_H
#define ICLASSFACTORY_H
#include "CONST.h"

struct IClassFactory{
    public:
    HRESULT_ CreateInstance (IID_ ,void**);
    virtual IUnk* CreateServer() = 0; 
};

HRESULT_ GetClassObject(CLSID_,IID_,void**);
#endif