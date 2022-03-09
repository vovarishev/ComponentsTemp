#include <iostream>
#include "IManager.h"
using namespace std;

int CreateInstance(int clsid, int iid, void** ppv) 
{
    int hp = 1;
    IUnk* pI = NULL;
    switch (clsid){
        case 1:
            cout<<"CreateInstance: Linked Server1."<<endl;
            pI = (IX*) new Server;
            break;
        case 2:
            cout<<"CreateInstance: Linked Server2."<<endl;
            pI = (IY*) new Server2;
            break;
        default:
            cout<<"CreateInstance: Invalid server. Linked Server1"<<endl;
            pI = (IX*) new Server;
            break;
    }
    hp = pI->QueryInterface(iid,ppv);
    return hp;
}