#include "Server.h"
using namespace std;

IServer* CreateInstance()
{
    return new Server();
}