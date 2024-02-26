#include "func.h"

void changeByVal(int val)
{
    val = 10;
}

void changeByPtr(int* ptr)
{
    *ptr = 20;
}

void changeByRef(int& ref)
{
    ref = 30;
}