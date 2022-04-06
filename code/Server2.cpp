#include <iostream>
#include "INCLUDES.h"
using namespace std;

Server2::Server2(){
    a = 0;
    b = 0;
    m_cRef = 0;
}

Server2::~Server2() {};

S2Factory::S2Factory(){
    m_fRef = 0;
}

S2Factory::~S2Factory(){}

void Server2::Func3(){
    std::cout << "S2::Func3" << std::endl;
}

void Server2::Func4(){
    std::cout << "S2::Func4" << std::endl;
}

HRESULT_ Server2::QueryInterface(IID_ IID,void** ppv){
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
    reinterpret_cast<IUnk*>(*ppv)->AddRef();
    return S_OK_;
}

HRESULT_ S2Factory::CreateInstance(IID_ iid, void** ppv){
    HRESULT_ hr = S_FAIL_;
    cout<<"S2Factory::CreateInstance: Create: Server2\n";
    IUnk* pI = (I2*) new Server2;
    hr = pI->QueryInterface(iid,ppv);
    return hr;
}

HRESULT_ S2Factory::QueryInterface(IID_ iid, void** ppv){
    if ((iid == IID_IUnk) || (iid == IID_IClassFactory)){
        *ppv = static_cast<IClassFactory*>(this);
    }

    else{
        *ppv = NULL;
        return S_FAIL_;
    }

    return S_OK_;
}

int Server2::AddRef(){
    return ++m_cRef;
}

int Server2::Release(){
    if (--m_cRef == 0){
        delete this;
        return 0;
    }
    return m_cRef;
} 

int S2Factory::AddRef(){
    return ++m_fRef;
}

int S2Factory::Release(){
    if (--m_fRef == 0){
        delete this;
        return 0;
    }
    return m_fRef;
} 