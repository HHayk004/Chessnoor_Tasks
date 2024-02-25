#include <vector>

int minimumOfArray(const std::vector<int>& array)
{
    int min = array[0];
    for (int i = 1; i < array.size(); ++i)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}

int maximumOfArray(const std::vector<int>& array)
{
    int max = array[0];
    for (int i = 1; i < array.size(); ++i)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}

double averangeOfArray(const std::vector<int>& array)
{
    double sum = 0;
    for (int i = 0; i < array.size(); ++i)
    {
        sum += array[i];
    }

    return sum / array.size();
}
