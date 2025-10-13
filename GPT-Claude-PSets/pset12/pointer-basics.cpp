#include <iostream>

int main() {
  int * x;
  std::cout << "Enter an integer X: ";
  std::cin >> *x; // * to store value in the location that pointer points to

  std::cout << &x << '\n'; // access the memory location of x
  std::cout << *x << '\n'; // Dereference get the value from the memory where x points to
  return 0;
}