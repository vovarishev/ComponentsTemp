#include <iostream>
#include <stdlib.h>
#include "INCLUDES.h"
using namespace std;

int main(){
    HRESULT_ hp = S_FAIL_;

    S1Factory* pF = NULL;
    hp = GetClassObject(CLSID_Server1,IID_S1Factory,(void**) &pF);

    if(hp==S_OK_){
        hp = S_FAIL_;
        I1* pI1=NULL;
        hp = pF->CreateInstance(IID_I1,(void**) &pI1);
        if (hp==S_OK_){
            pI1->Func1();
        }
    }

    system("pause");
    return 0;
}