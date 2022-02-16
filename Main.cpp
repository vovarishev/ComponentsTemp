#include <iostream>
#include <stdlib.h>
#include "IServer.h"
//using namespace std;

int main()
{
    IServer* S = CreateInstance(19, 11);
    std::cout << S->Func()<< std::endl;
    delete S;
    system("pause");
}