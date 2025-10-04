#include <iostream>

int main () {
  int number;
  std::cout << "Enter a number to get it's Math Table: ";
  std::cin >> number;

  for(int i = 1; i <= 10; i ++) {
    std::cout << number << " X " << i << " = " << number * i << '\n';
  }
  return 0;
}