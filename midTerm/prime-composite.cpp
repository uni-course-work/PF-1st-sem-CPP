#include <iostream>
#include <cmath>

int main() {
  int number;

  std::cout << "Enter a number to check weather it's prime or composite: ";
  std::cin >> number;

  int square_root_of_number = round(sqrt(number));

  for(int i = 2; i <= square_root_of_number; i ++) {
    if(number % i == 0) {
      std::cout << number << " is composite as it has a smallest factor " << i << '\n';
      return 0;
    }
  }

  std::cout << number << " is prime as it has no factors\n";
  return 0;
}