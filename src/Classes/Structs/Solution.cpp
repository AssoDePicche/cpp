#include <iostream>
#include "./Student.cpp"

int main() {
  Student student;

  std::cin >> student.age >> student.first_name >> student.last_name >> student.standard;

  std::cout << student.age << ' ' << student.first_name << ' ' << student.last_name << ' ' << student.standard;

  return 0;
}
