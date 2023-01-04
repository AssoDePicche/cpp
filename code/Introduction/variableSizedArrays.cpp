#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    int n, q, size, value, column, index;

    std::vector<std::vector<int>> matrix;

    scanf("%d %d", &n, &q);

    for (int i = 0; i < n; i++)
    {
        std::vector<int> vector;

        scanf("%d", &size);

        for (int j = 0; j < size; j++)
        {
            scanf("%d", &value);

            vector.push_back(value);
        }

        matrix.push_back(vector);
    }

    for (int k = 0; k < q; k++)
    {
        scanf("%d %d", &column, &index);

        printf("%d\n", matrix[column][index]);
    }

    return 0;
}