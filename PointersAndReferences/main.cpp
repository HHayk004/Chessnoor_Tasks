#include <iostream>
#include <format>

void changeByVal(int val);
void changeByPtr(int* ptr);
void changeByRef(int& ref);

int main()
{
    int number = 0;
    int* number_ptr = &number;
    int& number_ref = number;

    changeByVal(number);
    std::cout << std::format("Number value is {}\n", number);

    changeByPtr(number_ptr);
    std::cout << std::format("Number value is {}\n", number);

    changeByRef(number_ref);
    std::cout << std::format("Number value is {}\n", number);

    return 0;
}