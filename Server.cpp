#include <iostream>
#include <stdlib.h>
#include "Server.h"
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

int Server::QueryInterface(int IID,void** ppv){
    switch(IID){
        case 0:
            cout<<"QueryInterface: return IUnknown"<<endl;
            system("pause");
            *ppv = (IX*)this;
            break;
        case 1:
            cout<<"QueryInterface: return IX"<<endl;
            system("pause");
            *ppv = (IX*)this;
            break;
        case 2:
            cout<<"QueryInterface: return IY"<<endl;
            system("pause");
            *ppv = (IY*)this;
            break;    
        default:
            cout<<"QueryInterface: Invalid interface"<<endl;
            system("pause");
            *ppv = NULL;
            return 1;
    }
    return 0;
}
