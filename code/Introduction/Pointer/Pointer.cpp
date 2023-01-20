#include <iostream>

void update(int *a, int *b) {
  int temp = *a;

  *a += *b;

  *b = abs(temp - *b);
}

int main() {
  int a, b, *pa = &a, *pb = &b;

  std::cin >> a >> b;

  update(pa, pb);

  std::cout << a << "\n" << b;

  return 0;
}
