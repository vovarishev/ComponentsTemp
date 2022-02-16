#include <iostream>
#include "Server.h"
using namespace std;

Server::Server() 
{
    a = 1;
    b = 1;
};

Server::~Server() {};

void Server::Func1()
{
    std::cout << "Func1" << std::endl;
}

void Server::Func2()
{
    std::cout << "Func2" << std::endl;
}

void Server::Func3()
{
    std::cout << "Func3" << std::endl;
}

void Server::Func4()
{
    std::cout << "Func4" << std::endl;
}
