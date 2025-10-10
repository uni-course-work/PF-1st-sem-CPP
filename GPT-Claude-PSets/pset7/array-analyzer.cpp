#include <iostream>

int main() {
  int arrayLength, odds = 0, evens = 0, min = 1000, max = -1000, sum = 0, range, elem;
  double average;
  do {
    std::cout << "Enter number of element: ";
    std::cin >> arrayLength;
  } while (arrayLength < 1);
  int array [arrayLength];
  std::cout << "Values Should be smaller than 1000.";
  std::cout << "Values: ";
  for (size_t i = 0; i < arrayLength; i ++) {
    do {
      std::cin >> elem;
    } while (elem > 1000 || array[i] < -1000);
    if (elem < min) {
      min = elem;
    }
    if (elem > max) {
      max = elem;
    }
    if (elem % 2 == 0) {
      evens ++;
    } else {
      odds ++;
    }
    sum += elem;
    array[i] = elem;
  }
  std::cout << "Min: " << min << ", Max: " << max << ", Range: " << max - min << '\n';
  std::cout << "Average: " << (double) sum / (double) arrayLength << '\n';
  std::cout << "Even: " << evens << ", Odds: " << odds << '\n';
  std::cout << "Sum: " << sum << '\n';
  return 0;
}