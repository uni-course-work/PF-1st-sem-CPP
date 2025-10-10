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

  for (int i = max; i >=0; i --){
    for (int j = 0; j < N; j++){
      int temp = numbers[j];
      if (temp > i) {
        std::cout << '*';
      } else if (temp < 0) {
        std::cout << ' ';
      }
      std::cout << '\t';
    }
    std::cout << '\n';
  }
  std::cout << '\n';
  for (int i = 0; i <N; i++){
    std::cout << numbers[i] << '\t';
  }
  std::cout << '\n';
  for (int i = 0; i >=min; i --){
    for (int j = 0; j < N; j++){
      int temp = numbers[j];
      if (temp < i) {
        std::cout << '*';
      } else if ( temp >= 0) {
        std::cout << ' ';
      }
      std::cout << '\t';
    }
    std::cout << '\n';
  }
  // Print Results
  average = (double)sum / N;
  std::cout << "Sum       \t: " << sum << '\n';
  std::cout << "Average   \t: " << std::fixed << std::setprecision(2) << average << '\n';
  std::cout << "Min       \t: " << min << '\n';
  std::cout << "Max       \t: " << max << '\n';
  std::cout << "Positives \t: " << positiveCount << '\n';
  std::cout << "Negatives \t: " << negativeCount << '\n';
  std::cout << "Zeros     \t: " << zerosCount << '\n';
  return 0;
}