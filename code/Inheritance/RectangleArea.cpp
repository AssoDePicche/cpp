#include <iostream>

class Rectangle {
  public:
    int width, heigth;

    void display() {
        printf("%d %d\n", width, heigth);
    }
};

class RectangleArea : public Rectangle {
  public:
    void read_input() {
        scanf("%d %d\n", &width, &heigth);
    }

    void display() {
        printf("%d\n", width * heigth);
    }
};
