#include <iostream>
#include "IManager.h"
using namespace std;

IUnk* CreateInstance(int SID) 
{
    IUnk* pI = NULL;
    switch (SID){
        case 1:
            cout<<"CreateInstance: Linked Server."<<endl;
            pI = (IX*) new Server;
            break;
        case 2:
            cout<<"CreateInstance: Lined Server2."<<endl;
            pI = (IY*) new Server2;
            break;
        default:
            cout<<"CreateInstance: Invalid server. Linked Server1"<<endl;
            pI = (IX*) new Server;
            break;
    }
    return pI;
}