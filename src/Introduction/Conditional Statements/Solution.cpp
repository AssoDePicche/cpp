#include <iostream>

int main()
{
  std::string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  int number;

  std::cin >> number;

  if (number > 9)
  {
    std::cout << "Greater than 9" << std::endl;
  }
  else
  {
    std::cout << numbers[number - 1] << std::endl;
  }

  return 0;
}
