#include <iostream>

int main() {
  int scores[10];
  int high = 0, low = 100, fail = 0, aboveAvg = 0, sum = 0;
  double average;
  std::cout << "Scores: ";
  for (size_t i = 0; i < 10; i++) {
    std::cin >> scores[i];
    sum += scores[i];
    if (scores[i] > high) {
      high = scores[i];
    }
    if (scores[i] < low) {
      low = scores[i];
    }
    if (scores[i] < 50) {
      fail ++;
    }
  }
  average = sum / 10.0;
  for (size_t i = 0; i < 10; i++) {
    if (scores[i] > average) {
      aboveAvg ++;
    }
  }
  std::cout << "Average: " << average << std::endl;
  std::cout << "Highest: " << high << ", Lowest: " << low << std::endl;
  std::cout << "Failing: " << fail << std::endl;
  std::cout << "Above Average: " << aboveAvg << " (50%)" << std::endl;
  return 0;
}