#include <iostream>

// Return factorial
long long unsigned factorial (int n) {
  long long unsigned fact = 1;
  if(n == 0 || n == 1){
    return 1;
  }
  return n * factorial(n -1);
}
int main() {
  int n;
  std::cout << "Enter a positive Integer to get it's factorial: ";
  std::cin >> n;
  
  while (n < 0) {
    std::cout << n << " is not a positive integer\n";
    std::cout << "Enter a positive Integer: ";
    std::cin >> n;
  }
  while (n > 65) {
    std::cout << n << " is out of range\n";
    std::cout << "Enter a number lower than 66: ";
    std::cin >> n;
  }
  if (n == 0) {
    std::cout << "Factorial of 0 is 1";
    return 0;
  }

  std::cout << "Factorial of " << n << " is " << factorial(n) << '\n';
}