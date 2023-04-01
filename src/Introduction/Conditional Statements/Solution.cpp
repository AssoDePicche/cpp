#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> numbers = {"one","two","three","four","five","six",
  "seven","eight","nine"};

  int n;

  std::cin >> n;

  if (n > 9) {
    std::cout << "Greater than 9\n";
  } else {
    std::cout << numbers.at(n - 1);
  }

  return 0;
}
