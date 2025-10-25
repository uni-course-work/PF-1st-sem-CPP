#include <iostream>

int main () {
  int a, b, temp;
  
  std::cout << "Enter values of a and b: ";
  std::cin >> a >> b;

  std::cout << "Values before swapping\n";
  std::cout << "a = " << a << " and b = " << b << '\n';
  
  temp = a;
  a = b;
  b = temp;

  std::cout << "Values after swapping\n";
  std::cout << "a = " << a << " and b = " << b << '\n';
  
  return 0;
}