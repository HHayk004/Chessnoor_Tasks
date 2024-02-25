#include <iostream>
#include <vector>
#include <format>

int minimumOfArray(const std::vector<int>& array);
int maximumOfArray(const std::vector<int>& array);
double averangeOfArray(const std::vector<int>& array);

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

    std::cout << std::format("Minimum of array is {}\n", minimumOfArray(array));
    std::cout << std::format("Maximum of array is {}\n", maximumOfArray(array));
    std::cout << std::format("Averange of array is {}\n", averangeOfArray(array));

    return 0;
}
