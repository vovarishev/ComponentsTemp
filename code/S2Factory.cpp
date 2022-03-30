#include <iostream>
#include "INCLUDES.h"
using namespace std;
IUnk* S2Factory::CreateServer(){
    return (I2*) new Server2;
}