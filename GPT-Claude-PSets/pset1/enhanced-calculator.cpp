#include <iostream>
#include <iomanip>

int main() {
  int x, y;
  std::cout << "Enter First Integer: ";
  std::cin >> x;
  std::cout << "Enter Second Integer: ";
  std::cin >> y;
  std::cout << '\n';
  std::cout << x << " + " << y << " = " << x + y << '\n';
  std::cout << x << " - " << y << " = " << x - y << '\n';
  std::cout << x << " * " << y << " = " << x * y << '\n';
  if (y != 0) {
    std::cout << x << " div " << y << " = " << x / y << '\n';
  } else {
    std::cout << "Can't Divide By Zero\n";
  }
  if (y != 0) {
    std::cout << x << " / " << y << " = " << (double) x / (double) y << '\n';
  } else {
    std::cout << "Can't Divide By Zero\n";
  }
  if (y != 0) {
    std::cout << x << " mod " << y << " = " << x % y << '\n';
  } else {
    std::cout << "Can't Divide By Zero\n";
  }
  
  std::cout << "Average" << " = " << (x + y) / 2.0 << '\n';
  return 0;
}