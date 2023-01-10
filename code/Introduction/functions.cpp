#include <iostream>

int max_of_four(int a, int b, int c, int d) {
  int max = 0;

  int numbers[4] = {a, b, c, d};

  for (int i = 0; i < 4; i++) {
    max = max < numbers[i] ? numbers[i] : max;
  }

  return max;
}

int main() {
  int a, b, c, d;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  int ans = max_of_four(a, b, c, d);

  printf("%d", ans);

  return 0;
}
