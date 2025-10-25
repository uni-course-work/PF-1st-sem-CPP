#include <iostream>

int main() {
  int number, first, second, third;
  std::cout << "Enter a 3 digit number to reverse it: ";
  std::cin >> number;

  while(number < -999 || number > 999) {
    std::cout << "Only three digit numbers are allowed\n";
    std::cout << "Enter a 3 digit number to reverse it: ";
    std::cin >> number;
  }

  first = number % 10;
  second = (number / 10) % 10;
  third = number / 100;

  int result = first * 100 + second * 10 + third;
  std::cout << result<< '\n';
  return 0;
}