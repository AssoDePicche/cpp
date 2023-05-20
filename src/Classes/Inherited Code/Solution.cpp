#include "./BadLengthException.hpp"
#include <iostream>
#include <string>

bool checkUsername(std::string username)
{
  bool is_valid = true;

  int username_length = username.length();

  if (username_length < 5)
  {
    throw BadLengthException(username_length);
  }

  for (int index = 0; index < username_length - 1; index++)
  {
    if (username[index] == 'w' && username[index + 1] == 'w')
    {
      is_valid = false;
    }
  }

  return is_valid;
}

int main()
{
  int inputs;

  bool is_valid;

  std::string username, validation_message;

  std::cin >> inputs;

  while (inputs-- != 0)
  {
    std::cin >> username;

    try
    {
      is_valid = checkUsername(username);

      validation_message = is_valid ? "Valid" : "Invalid";

      std::cout << validation_message << std::endl;
    }
    catch (BadLengthException exception)
    {
      std::cout << "Too short: " << exception.what() << std::endl;
    }
  }

  return 0;
}
