#include <iostream>
#include <stdlib.h>
#include "IManager.h"

int main()
{
    Server* pS = CreateInstance();
    pS->Func3();
    I1* pI1 = (I1*)pS;
    pI1->Func1();
    I2* pI2 = (I2*)pI1;
    pI2->Func3();
    system("pause");
}