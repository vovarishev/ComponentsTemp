#include <iostream>
#include <stdlib.h>
#include "IManager.h"
#include "IClassFactory.h"
using namespace std;

int main()
{
    HRESULT_ hp = 1;

    ISFactory* pF = NULL;
    hp = GetClassObject(CLSID_Server1,IID_S1Factory,(void**) &pIX);

    if(hp==S_OK_)
    {
        hp = S_FAIL_;
        IX* pIX=NULL;
        hp = pF->CreateInstance1(IID_IServer1,(void**) pIX);
        if (hp==S_OK_)
        {
            pIX->Func1();
        }
    }



    system("pause");
    return 0;
}