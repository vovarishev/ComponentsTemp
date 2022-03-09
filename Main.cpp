#include <iostream>
#include <stdlib.h>
#include "IManager.h"
using namespace std;

int main()
{
    HRESULT_ hp = 1;

    IX* pIX = NULL;
    hp = CreateInstance(CLSID_Server1,IID_IServer1,(void**) &pIX);

    if(hp!=0)
    {
        cout<<"Warning"<<endl;
        system("pause");
        return 0;
    }
        pIX->Func1();


    system("pause");
    return 0;
}