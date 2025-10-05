#include <iostream>
#include <iomanip>

int main() {
  int x, y;
  std::cout << "Enter First Integer: ";
  std::cin >> x;
  std::cout << "Enter Second Integer: ";
  std::cin >> y;
  std::cout << std::endl;
  std::cout << x << " + " << y << " = " << x + y << std::endl;
  std::cout << x << " - " << y << " = " << x - y << std::endl;
  std::cout << x << " * " << y << " = " << x * y << std::endl;
  if (y != 0) {
    std::cout << x << " div " << y << " = " << x / y << std::endl;
  } else {
    std::cout << "Can't Divide By Zero\n";
  }
  if (y != 0) {
    std::cout << x << " / " << y << " = " << (double) x / (double) y << std::endl;
  } else {
    std::cout << "Can't Divide By Zero\n";
  }
  if (y != 0) {
    std::cout << x << " mod " << y << " = " << x % y << std::endl;
  } else {
    std::cout << "Can't Divide By Zero\n";
  }
  
  std::cout << "Average" << " = " << (x + y) / 2.0 << std::endl;
  return 0;
}