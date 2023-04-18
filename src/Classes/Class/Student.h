#include <string>

class Student
{
  private:
    int age, standard;

    std::string first_name, last_name;

  public:
    int get_age();

    void set_age(int _age);

    std::string get_first_name();

    void set_first_name(std::string _first_name);

    std::string get_last_name();

    void set_last_name(std::string _last_name);

    int get_standard();

    void set_standard(int _standard);

    std::string to_string();
};
