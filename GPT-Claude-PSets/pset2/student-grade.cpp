#include <iostream>
#include <iomanip>

int main() {
  int numberOfScores = 1;
  char grade;
  std::cout << "Enter number of scores you want to average: ";
  std::cin >> numberOfScores;
  double scores [numberOfScores];
  double sum = 0, average = 0, newAverage = 0, lowest = 100;
  for (size_t i = 0; i < numberOfScores; i++) {
    std::cout << "Enter socre " << i + 1 << ": ";
    std::cin >> scores[i];
    if (scores[i] < lowest) {
      lowest = scores[i];
    } 
    sum += scores[i];
  }
  average = sum / numberOfScores;
  newAverage = (sum - lowest) / (numberOfScores - 1);
  int rounded = newAverage;
  
  if (rounded >= 90) {
    grade = 'A';
  } else if (rounded >= 75) {
    grade = 'B';
  } else if (rounded >= 65) {
    grade = 'C';
  } else if (rounded >= 55) {
    grade = 'D';
  } else if (rounded >= 50) {
    grade = 'E';
  } else {
    grade = 'F';
  }
  std::cout << "Original Average => " << average << std::endl;
  std::cout << "New Average (lowest dropped) => " << newAverage << std::endl;
  std::cout << "Rounded => " << rounded << std::endl;
  std::cout << "Grade => " << grade << std::endl;
}