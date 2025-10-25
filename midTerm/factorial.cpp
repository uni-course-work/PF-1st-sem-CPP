#include <iostream>

int main() {
  int number;
  long long unsigned fact = 1;

  std::cout << "🧐 We can't handle factorials of numbers greater than 65\n";
  std::cout << "Enter a positve integer to get it's factorial 👁️ : ";
  std::cin >> number;

  while (number > 65 || number < 0) {
    std::cout << "Opps!🙊\n";
    std::cout << "Factorials of negatives is not appreciated!😤\n";
    std::cout << "🧐 We can't handle factorials of numbers greater than 65\n";
    std::cout << "Re Enter a positve integer smaller than 66 👁️: ";
    std::cin >> number;
  }
  
  if(number == 0) {
    std::cout << "Factorial of " << number << " = " << 1 << '\n';
    return 0;
  }

  for(int i = 1; i <= number; i++) {
    fact *= i;
  }
  
  std::cout << "Factorial of " << number << " is " << fact;
  return 0;
}