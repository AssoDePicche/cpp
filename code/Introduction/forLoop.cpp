#include <iostream>
#include <cstdio>
#include <string>

void toString(int number)
{
    switch (number)
    {
    case 1:
        std::cout << "one\n";
        break;
    case 2:
        std::cout << "two\n";
        break;
    case 3:
        std::cout << "three\n";
        break;
    case 4:
        std::cout << "four\n";
        break;
    case 5:
        std::cout << "five\n";
        break;
    case 6:
        std::cout << "six\n";
        break;
    case 7:
        std::cout << "seven\n";
        break;
    case 8:
        std::cout << "eight\n";
        break;
    case 9:
        std::cout << "nine\n";
        break;
    }
}

int main()
{
    int a, b;

    std::cin >> a >> b;

    for (a; a <= b; a++)
    {
        if (a <= 9)
        {
            toString(a);

            continue;
        }

        if (a % 2 == 0)
        {
            std::cout << "even\n";

            continue;
        }

        std::cout << "odd\n";
    }

    return 0;
}
