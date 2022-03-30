#include <iostream>
#include "INCLUDES.h"
using namespace std;

IUnk* S1Factory::CreateServer(){
    return (I1*) new Server;
}