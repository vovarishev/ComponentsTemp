#ifndef IMANAGER_H
#define IMANAGER_H
#include "Includes.h"

HRESULT_ CreateInstance(CLSID_ clsid, IID_ iid,void** ppv);
HRESULT_ GetClassObject(CLSID_,IID_,void**);

#endif