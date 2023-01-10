#include <iostream>

class Triangle {
  public:
    void triangle() {
        printf("I am a triangle\n");
    }
};

class Isosceles : public Triangle {
  public:
    void isosceles() {
        printf("I am an isosceles triangle\n");
    }

    void description() {
        printf("In an isosceles triangle two sides are equal\n");
    }
};
