#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> numbers = {"one","two","three","four","five","six",
  "seven","eight","nine"};

  int n;

  scanf("%d", &n);

  if (n > 9) {
    printf("Greater than 9\n");

    return;
  }

  std::cout << numbers.at(n - 1);

  return 0;
}
