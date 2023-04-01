#include <iostream>
#include <vector>
#include <sstream>

std::vector<int> parseInts(std::string str) {
  std::stringstream stream(str);

  std::vector<int> integers;

  char comma;

  int integer;

  while (stream >> integer) {    
    integers.push_back(integer);

    stream >> comma;
  }

  return integers;
}

int main() {
  std::string str;

  std::cin >> str;

  std::vector<int> integers = parseInts(str);

  for (int integer : integers) {
    std::cout << integer << "\n";
  }

  return 0;
}
