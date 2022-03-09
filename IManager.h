#ifndef IMANAGER_H
#define IMANAGER_H
#include "IUnk.h"
#include "Server.h"
#include "Server2.h"
#include "OBJBASE.h"
int CreateInstance(int clsid, int iid, void** ppv);
#endif