#include <iostream>

int main() {
  int number;

  std::cout << "Enter an integer to check weather it's even or odd: ";
  std::cin >> number;

  if(number % 2 == 0) {
    std::cout << number << " is an even number\n";
  } else {
    std::cout << number << " is an odd number\n";
  }

  return 0;
}