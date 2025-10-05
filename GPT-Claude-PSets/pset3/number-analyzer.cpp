#include <iostream>
#include <iomanip>

int main() {
  const int MIN = -1000, MAX = 1000;
  int N, sum = 0, positiveCount = 0, negativeCount = 0, zerosCount = 0, min = MAX, max = MIN;
  double average;
  do {
    std::cout << "Enter the Number of Integers You want to provide: ";
    std::cin >> N;
  } while (N < 0 || N > 100);

  std::cout << "Enter Integers Between -1000 and 1000\n";
  int numbers [N];
  for (int i = 0; i < N; i++){
    // Validate number is in between the supported range
    do {
      std::cout << "Enter Integer # " << i + 1 << ": ";
      std::cin >> numbers[i];
    } while (numbers[i] < MIN || numbers[i] > MAX);

    // Accumulate provided ints
    sum += numbers[i];

    // Count positives, negatives or zeros
    if (numbers[i] == 0){
      zerosCount++;
    } else if (numbers[i] > 0){
      positiveCount++;
    } else {
      negativeCount++;
    }
    
    // Update min and max if there is any min and max than them respectively.

    if (numbers[i] < min) {
      min = numbers[i];
    }
    if (numbers[i] > max) {
      max = numbers[i];
    }
  }
  // Print Results
  average = (double)sum / N;
  std::cout << "Sum       \t: " << sum << std::endl;
  std::cout << "Average   \t: " << std::fixed << std::setprecision(2) << average << std::endl;
  std::cout << "Min       \t: " << min << std::endl;
  std::cout << "Max       \t: " << max << std::endl;
  std::cout << "Positives \t: " << positiveCount << std::endl;
  std::cout << "Negatives \t: " << negativeCount << std::endl;
  std::cout << "Zeros     \t: " << zerosCount << std::endl;
  return 0;
}