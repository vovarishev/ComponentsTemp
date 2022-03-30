#include <iostream>
#include "INCLUDES.h"
using namespace std;

HRESULT_ IClassFactory::CreateInstance(IID_ iid, void** ppv){
    HRESULT_ hr = S_FAIL_;
    cout<<"CreateInstance: Create: Server\n";
    //IUnk* pI = (I1*) new Server;
    IUnk* pI = CreateServer();
    hr = pI->QueryInterface(iid,ppv);
    return hr;
}

HRESULT_ GetClassObject(CLSID_ clsid, IID_ iid, void** ppv){
    HRESULT_ hp = S_FAIL_;
    switch (clsid){
        case CLSID_Server1:
            cout<<"GetClassObject: Create ISFactory."<<endl;
            *ppv = new S1Factory;
            hp = S_OK_;
            break;            
        default:
            cout<<"GetClassObject: Invalid CLSID."<<endl;
            *ppv = NULL;   
            break;
    }
    return hp;
}