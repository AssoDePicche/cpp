#include <iostream>
#include <set>

int main() {
  int q, x, y;

  std::set<int> set;

  scanf("%d", &q);

  for (int i = q; i != 0; i--) {
    scanf("%d %d", &y, &x);

    switch (y) {
      case 1:
        set.insert(x);
        break;
      
      case 2:
        set.erase(x);
        break;
      
      case 3:
        std::set<int>::iterator iterator = set.find(x);

        if (iterator == set.end()) {
          printf("No\n");
          
          continue;
        }

        printf("Yes\n");
        break;
    }
  }

  return 0;
}
