#include <iostream>
#include <stdlib.h>
#include "IManager.h"
using namespace std;

int main()
{
    IUnk* pIUnk = CreateInstance(1);

    IX* pIX = NULL;
    if(pIUnk->QueryInterface(1,(void**)&pIX)!=0)
    {
        cout<<"Warning"<<endl;
        system("pause");
        return 0;
    }
        pIX->Func1();


    system("pause");
    return 0;
}