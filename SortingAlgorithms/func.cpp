#include "func.h"

void (*sortChoose())(std::vector<int>&)
{
    std::string sort_mode;

    std::cin.get();
    do
    {
        std::cout << "Enter the sort mode (\'selectionsort\' for Selection Sort, \'bubblesort\' for Bubble Sort): ";
        std::getline(std::cin, sort_mode);
    } while (sort_mode != "selectionsort" && sort_mode != "bubblesort");

    if (sort_mode == "selectionsort")
    {
        return selectionSort;
    }   

    return bubbleSort;
}

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vec)
{
    for (int elem : vec)
    {
        os << elem << ' ';
    }
    os << std::endl;

    return os;
}

void selectionSort(std::vector<int>& vec)
{
    for (int i = 0; i < vec.size() - 1; ++i)
    {
        int min_index = i;
        for (int j = i + 1; j < vec.size(); ++j)
        {
            if (vec[j] < vec[min_index])
            {
                min_index = j;
            }
        }

        if (min_index != i)
        {
            std::swap(vec[i], vec[min_index]);
        }
    }
}

void bubbleSort(std::vector<int>& vec)
{
    for (int i = 0; i < vec.size() - 1; ++i)
    {
        bool swap_check = true;
        for (int j = 1; j < vec.size() - i; ++j)
        {
            if (vec[j] < vec[i])
            {
                swap_check = false;
                std::swap(vec[j], vec[j - 1]);
            }
        }

        if (swap_check)
        {
            break;
        }
    }
}