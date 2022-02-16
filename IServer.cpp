#include "Server.h"
using namespace std;

IServer* CreateInstance()
{
    return new Server();
}

IServer* CreateInstance(int a, int b)
{
    return new Server(a, b);
}
