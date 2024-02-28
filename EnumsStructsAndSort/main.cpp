#include <iostream>
#include <vector>
#include <format>

#include "func.h"

int main()
{
    std::vector<int> array;
    
    int element_count = 0;

    do
    {
        std::cout << "Enter the count of array elements: ";
        std::cin >> element_count;
    } while (element_count <= 0);

    array.resize(element_count);
    for (int i = 0; i < element_count; ++i)
    {
        std::cout << std::format("array[{}] = ", i);
        std::cin >> array[i];
    }

    SortType sort_obj;
    sortInput(sort_obj);

    sort_obj.sort_fptr(array);

    std::cout << array;

    return 0;
}