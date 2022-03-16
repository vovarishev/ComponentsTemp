#include <iostream>
#include "CONST.h"
#include "ISFactory.h"
using namespace std;
struct ISFactory : IClassFactory
{
int CreateInstance1(int iid, void** ppv) 
{
    int hp = S_FAIL_;
    IUnk* pI = NULL;
    cout<<"CreateInstance1: Linked Server1."<<endl;
    pI = (IX*) new Server;
    hp = pI->QueryInterface(iid,ppv);
    return hp;
}
};
