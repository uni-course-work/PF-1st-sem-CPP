#include <iostream>

void swapByValue(int a, int b){
  int tmp = a;
  a = b;
  b = tmp;
}

void swapByReference(int &a, int &b){
  int tmp = a;
  a = b;
  b = tmp;
}
int main() {
  int a, b;
  std::cout << "Enter two Integers: ";
  std::cin >> a >> b;

  std::cout << "Unswaped value: a = " << a << " b = " << b << '\n';
  swapByValue(a, b);
  std::cout << "Swap by value: a = " << a << " b = " << b << '\n';
  swapByReference(a, b);
  std::cout << "Swap by Reference: a = " << a << " b = " << b << '\n';
  return 0;
}