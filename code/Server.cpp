#include <iostream>
#include "INCLUDES.h"
using namespace std;

Server::Server() {
    a = 1;
    b = 1;
};

Server::~Server() {};

void Server::Func1(){
    std::cout << "Func1" << std::endl;
}

void Server::Func2(){
    std::cout << "Func2" << std::endl;
}

void Server::Func3(){
    std::cout << "Func3" << std::endl;
}

void Server::Func4(){
    std::cout << "Func4" << std::endl;
}

int Server::QueryInterface(IID_ iid,void** ppv){
    switch(iid){
        case IID_IUnk:
            cout<<"QueryInterface: return IUnknown"<<endl;
            *ppv = (I1*)this;
            break;
        case IID_I1:
            cout<<"QueryInterface: return IX"<<endl;
            *ppv = (I1*)this;
            break;
        case IID_I2:
            cout<<"QueryInterface: return IY"<<endl;
            *ppv = (I2*)this;
            break;    
        default:
            cout<<"QueryInterface: Invalid interface"<<endl;
            *ppv = NULL;
            return S_FAIL_;
    }
    return S_OK_;
}
