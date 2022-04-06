#include <iostream>
#include "INCLUDES.h"
using namespace std;

HRESULT_ CreateInstance(CLSID_ clsid, IID_ iid,void** ppv){
    IClassFactory* pF = NULL;
    HRESULT_ hr = GetClassObject(clsid,IID_IClassFactory,(void**) &pF);
    if(hr==S_FAIL_) return hr;
    return pF->CreateInstance(iid,ppv);
    pF->Release();
}

HRESULT_ GetClassObject(CLSID_ clsid, IID_ iid, void** ppv){
    switch (clsid){
        case CLSID_Server1:
            cout<<"GetClassObject: Create ISFactory."<<endl;
            *ppv = new S1Factory;
            break;
        case CLSID_Server2:
            cout<<"GetClassObject: Create ISFactory."<<endl;
            *ppv = new S2Factory;
            break;             
        default:
            cout<<"GetClassObject: Invalid CLSID."<<endl;
            *ppv = NULL; 
            return S_FAIL_; 
            break;
    }
    reinterpret_cast<IUnk*>(*ppv)->AddRef();
    return S_OK_; 
}