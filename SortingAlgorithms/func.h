#include <vector>
#include <iostream>

void (*sortChoose())(std::vector<int>&);

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vec);

void selectionSort(std::vector<int>& vec);
void bubbleSort(std::vector<int>& vec);