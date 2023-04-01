#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> numbers = {"one","two","three","four","five","six",
  "seven","eight","nine"};

  int a, b;

  std::cin >> a >> b;

  for (a; a <= b; a++) {
    if (a <= 9) {
      std::cout << numbers.at(a - 1) << "\n";

      continue;
    }

    if (a % 2 == 0) {
      std::cout << "even\n";

      continue;
    }
    
    std::cout << "odd\n";
  }

  return 0;
}
