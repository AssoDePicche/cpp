#include <iostream>

int max_of_four(int a, int b, int c, int d) {
  int max = 0, numbers[4] = {a,b,c,d};

  for (int number : numbers) {
    if (max < number) {
      max = number;
    }
  }

  return max;
}

int main() {
  int a, b, c, d;

  std::cin >> a >> b >> c >> d;

  std::cout << max_of_four(a, b, c, d);

  return 0;
}
