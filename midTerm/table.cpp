#include <iostream>

int main() {
  const int MAX = 10;
  int number;

  std::cout << "Enter an integer to get it's table: ";
  std::cin >> number;

  for(int i = 1; i <= MAX; i++) {
    std::cout << number << "  X  " << i << "  =  " << number * i << '\n';
  }
  return 0;
}