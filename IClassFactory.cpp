#include <iostream>
#include "CONST.h"
#include "IClassFactory.h"
using namespace std;

int GetClassObject(int clsid, int iid, void** ppv) 
{
    int hp = S_FAIL_;
    IClassFactory* pI = NULL;
    switch (clsid){
        case 1:
            cout<<"GetClassObject: Create ISFactory."<<endl;
            pI = (ISFactory*) new ISFactory;
            hp = S_OK_;
            break;            
        default:
            cout<<"GetClassObject: Invalid clsid. Create ISFactory"<<endl;
            pI = (ISFactory*) new ISFactory;
            hp = S_OK_;
            break;
    }
    return hp;
}