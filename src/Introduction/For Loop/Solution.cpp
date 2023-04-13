#include <iostream>

bool is_even(const int number)
{
  return number % 2 == 0;
}

int main()
{
  std::string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  int start, end;

  std::cin >> start >> end;

  for (start; start <= end; start++)
  {
    if (start > 0 && start <= 9)
    {
      std::cout << numbers[start - 1] << std::endl;
    }
    else if (is_even(start))
    {
      std::cout << "even" << std::endl;
    }
    else
    {
      std::cout << "odd" << std::endl;
    }
  }

  return 0;
}
