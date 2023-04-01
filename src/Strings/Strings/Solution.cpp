#include <iostream>

int main() {
  std::string a, b;

  std::cin >> a >> b;

  std::cout << a.size() << ' ' << b.size() << "\n";

  std::cout << a + b << "\n";

  char temp = a[0];

  a[0] = b[0];

  b[0] = temp;

  std::cout << a << ' ' << b << "\n";

  return 0;
}
