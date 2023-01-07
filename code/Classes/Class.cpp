#include <iostream>
#include <string>

class Student
{
private:
    int age, standard;

    std::string first_name, last_name;

public:
    int get_age()
    {
        return age;
    }

    void set_age(int _age)
    {
        age = _age;
    }

    std::string get_first_name()
    {
        return first_name;
    }

    void set_first_name(std::string _first_name)
    {
        first_name = _first_name;
    }

    std::string get_last_name()
    {
        return last_name;
    }

    void set_last_name(std::string _last_name)
    {
        last_name = _last_name;
    }

    int get_standard()
    {
        return standard;
    }

    void set_standard(int _standard)
    {
        standard = _standard;
    }

    std::string to_string()
    {
        return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
    }
};
