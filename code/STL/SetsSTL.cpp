#include <iostream>
#include <set>

int main() {
  int queries, input, number;

  std::set<int> set;

  scanf("%d", &queries);

  for (int i = queries; i != 0; i--) {
    scanf("%d %d", &input, &number);

    switch (input) {
      case 1:
        set.insert(number);
        break;
      
      case 2:
        set.erase(number);
        break;
      
      case 3:
        if (set.find(number) == set.end()) {
          printf("No\n");
          
          continue;
        }

        printf("Yes\n");
        break;
    }
  }

  return 0;
}
