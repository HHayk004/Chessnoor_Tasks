#include "func.h"

void sortInput(SortType& sort)
{
    int sort_option_int = 0;
    do
    {
        std::cout << "Enter the sorting Algotithm (0 for Selection, 1 for Bubble)";
        std::cin >> sort_option_int;
    } while (0 < sort_option_int && sort_option_int > 1);

    sort.sort_option = static_cast<SortingAlgorithms>(sort_option_int);

    switch (sort.sort_option)
    {
    case SortingAlgorithms::SELECTION_SORT:
        sort.sort_fptr = selectionSort;
        break;
    
    case SortingAlgorithms::BUBBLE_SORT:
        sort.sort_fptr = bubbleSort;
        break;

    default:
        std::cerr << "Error with sort_option:\n";
        exit(-1);
    }
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