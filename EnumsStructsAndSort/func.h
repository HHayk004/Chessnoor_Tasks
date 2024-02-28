#include <vector>
#include <iostream>

enum class SortingAlgorithms {
    SELECTION_SORT, BUBBLE_SORT
};

struct SortType {
    SortingAlgorithms sort_option;
    void (*sort_fptr) (std::vector<int>& vec);
};

void sortInput(SortType& sort);

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vec);

void selectionSort(std::vector<int>& vec);
void bubbleSort(std::vector<int>& vec);