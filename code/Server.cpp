#include <iostream>
#include "INCLUDES.h"
using namespace std;

Server::Server(){
    a = 1;
    b = 1;
    m_cRef = 0;
};

Server::~Server(){
    cout<<"Server1 deleted.\n";
};

S1Factory::S1Factory(){
    m_fRef = 0;
}

S1Factory::~S1Factory(){}

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
    reinterpret_cast<IUnk*>(*ppv)->AddRef();
    return S_OK_;
}

HRESULT_ S1Factory::CreateInstance(IID_ iid, void** ppv){
    HRESULT_ hr = S_FAIL_;
    cout<<"S2Factory::CreateInstance: Create: Server\n";
    IUnk* pI = (I1*) new Server;
    hr = pI->QueryInterface(iid,ppv);
    return hr;
}

HRESULT_ S1Factory::QueryInterface(IID_ iid, void** ppv){
    if ((iid == IID_IUnk) || (iid == IID_IClassFactory)){
        *ppv = static_cast<IClassFactory*>(this);
    }

    else{
        *ppv = NULL;
        return S_FAIL_;
    }
    
    return S_OK_;
}

int Server::AddRef(){
    return ++m_cRef;
}

int Server::Release(){
    if (--m_cRef == 0){
        delete this;
        return 0;
    }
    return m_cRef;
} 

int S1Factory::AddRef(){
    return ++m_fRef;
}

int S1Factory::Release(){
    if (--m_fRef == 0){
        delete this;
        return 0;
    }
    return m_fRef;
} 