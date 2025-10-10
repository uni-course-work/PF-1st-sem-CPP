#include <iostream>

int main() {
  int number, min, max, total = 0, temp;
  std::cout << "Enter Number: ";
  std::cin >> number;
  std::cout << "Enter Start: ";
  std::cin >> min;
  std::cout << "Enter End: ";
  std::cin >> max;
  
  if (min > max) {
    int tmp = min;
    min = max;
    max = tmp;
  }
  for (int i = min; i <= max; i ++) {
    temp = number * i;
    std::cout << number << " x " << i << " = " << temp << '\n';
    total += temp;
  }
  std::cout << "Sum of Products: " << total << '\n';
  return 0;
}