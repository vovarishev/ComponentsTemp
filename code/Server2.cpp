#include <iostream>
#include "INCLUDES.h"
using namespace std;

Server2::Server2(){
    a = 0;
    b = 0;
}

Server2::~Server2() {};

void Server2::Func3(){
    std::cout << "S2::Func3" << std::endl;
}

void Server2::Func4(){
    std::cout << "S2::Func4" << std::endl;
}

int Server2::QueryInterface(IID_ IID,void** ppv){
    switch(IID){
        case 0:
            cout<<"QueryInterface: Вернуть указатель на IUnknown"<<endl;
            *ppv = (I2*)this;
            break;
        case 2:
            cout<<"QueryInterface: Вернуть указатель на IY"<<endl;
            *ppv = (I2*)this;
            break;    
        default:
            cout<<"QueryInterface: Интерфейс не поддерживается"<<endl;
            *ppv = NULL;
            return S_FAIL_;
    }
    return S_OK_;
}