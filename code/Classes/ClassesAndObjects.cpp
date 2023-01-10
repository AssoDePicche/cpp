#include <iostream>

class Student {
  private:
    int totalScore; 

    std::vector<int> scores;

  public:
    void input() {
      for (int i = 0; i < 5; i++) {
        int score;

        scanf("%d", &score);

        scores.push_back(score);

        totalScore += score;
      }
    }

    int calculateTotalScore() {
      return totalScore;
    }
};
