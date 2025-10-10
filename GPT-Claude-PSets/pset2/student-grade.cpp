#include <iostream>
#include <iomanip>

#define FIXED_FLOAT(x) std::fixed << std::setprecision(2) << x

int main() {
  int numberOfScores = 0;
  char grade;
// Validate Number of scores must be positive and greater than 1
  do {
    std::cout << "Enter number of scores you want to average: ";
    std::cin >> numberOfScores;
  } while (numberOfScores < 2);

  double scores [numberOfScores];
  double sum = 0, average = 0, newAverage = 0, lowest = 100;
  for (size_t i = 0; i < numberOfScores; i++) {
    std::cout << "Enter socre " << i + 1 << ": ";
    std::cin >> scores[i];
    while (scores[i] < 0 || scores[i] > 100) {
      std::cout << "Invalid Scores!\n";
      std::cout << "Renter Score: " << i + 1 << ": ";
      std::cin >> scores[i];
    }
    // Keep track of Lowest number
    if (scores[i] < lowest) {
      lowest = scores[i];
    } 
    sum += scores[i];
  }
  average = sum / numberOfScores;
  // Removing lowest and also reducing total scores by 1
  newAverage = (sum - lowest) / (numberOfScores - 1); 
  int rounded = newAverage; // Implicit conversion
  
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
  std::cout << "Original Average => " << FIXED_FLOAT(average)<< '\n';
  std::cout << "New Average (lowest dropped) => " << FIXED_FLOAT(newAverage) << '\n';
  std::cout << "Rounded => " << rounded << '\n';
  std::cout << "Grade => " << grade << '\n';
}