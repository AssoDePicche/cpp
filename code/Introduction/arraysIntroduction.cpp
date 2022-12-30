#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    int arraySize;

    std::cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        std::cin >> array[i];
    }

    arraySize--;

    while (arraySize >= 0)
    {
        std::cout << array[arraySize] << " ";

        arraySize--;
    }

    return 0;
}
