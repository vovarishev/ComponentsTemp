#ifndef SERVER2_H
#define SERVER2_H
#include "ClassInterfaces.h"
class Server2 : public I2{
private:
    int a;
    int b;
public:
    Server2();
    ~Server2();
    void Func3();
    void Func4();
    int QueryInterface(int,void**);
};
#endif