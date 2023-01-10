#include <algorithm>
#include <iostream>
#include <vector>


int main() {
  int n;

  std::vector<int> vector;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int input;

    scanf("%d", &input);

    vector.push_back(input);
  }

  std::sort(vector.begin(), vector.end());

  for (int element : vector) {
    printf("%d ", element);
  }

  return 0;
}
