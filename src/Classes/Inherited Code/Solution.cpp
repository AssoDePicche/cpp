#include <iostream>
#include "./BadLengthException.cpp"

bool checkUsername(std::string username) {
  bool isValid = true;

  int n = username.length();

  if (n < 5) {
    throw BadLendthException(n);
  }

  for (int i = 0; i < n - 1; i++) {
    if (username[i] == 'w' && username[i + 1] == 'w') {
      isValid = false;
    }
  }

  return isValid;
}

int main() {
  int inputs;

  std::cin >> inputs;

  while (inputs--) {
    std::string username;

    std::cin >> username;

    try {
      bool isValid = checkUsername(username);

      if (isValid) {
        std::cout << "Valid\n";
      } else {
        std::cout << "Invalid\n";
      }
    } catch (BadLendthException exception) {
      std::cout << "Too short: " << exception.what() << "\n";
    }
  }

  return 0;
}
