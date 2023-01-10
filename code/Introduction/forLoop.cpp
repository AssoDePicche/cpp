#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> numbers = {"one","two","three","four","five","six",
  "seven","eight","nine"};

  int a, b;

  scanf("%d %d", &a, &b);

  for (a; a <= b; a++) {
    if (a <= 9) {
      std::cout << numbers.at(a - 1) << "\n";

      continue;
    }

    if (a % 2 == 0) {
      printf("even\n");

      continue;
    }

    printf("odd\n");
  }

  return 0;
}
