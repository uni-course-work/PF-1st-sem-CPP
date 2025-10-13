#include <iostream>

int main() {

  int x, y;

  std::cout << "Enter a and b to swap: ";
  std::cin >> x >> y;

  int *a = &x;
  int *b = &y;

  std::cout << "Before: a = " << *a << " b = " << *b << '\n';

  int tmp = *a;
  *a = *b;
  *b = tmp;

  std::cout << "After: a = " << *a << " b = " << *b << '\n';
  return 0;
}
