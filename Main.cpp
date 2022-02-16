#include <iostream>
#include <stdlib.h>
#include "IServer.h"
#include "IServer2.h"
//using namespace std;

int main()
{
    IServer* S = CreateInstance();
    IServer2* S2 = (IServer2*)S;
    std::cout << S->Func()<< std::endl;
    std::cout << S2->Func2()<< std::endl;
    delete S;
    delete S2;
    delete S3;
    system("pause");
}