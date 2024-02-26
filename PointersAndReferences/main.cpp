#include <iostream>
#include <format>

#include "func.h"

int main()
{
    int number = 0;
    int* number_ptr = &number;
    int& number_ref = number;

    changeByVal(number);
    std::cout << std::format("Number value after changeByVal is {}\n", number);

    changeByPtr(number_ptr);
    std::cout << std::format("Number value after changeByPtr is {}\n", number);

    changeByRef(number_ref);
    std::cout << std::format("Number value after changeByRef is {}\n", number);

    return 0;
}