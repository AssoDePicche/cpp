#include <iostream>

void update(int *a, int *b) {
  int temp = *a;

  *a += *b;

  *b = abs(temp - *b);
}

int main() {
  int a, b, *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);

  update(pa, pb);

  printf("%d\n%d", a, b);

  return 0;
}
