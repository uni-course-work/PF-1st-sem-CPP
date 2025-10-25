#include <iostream>
#include <string>
#include <cmath>

int main() {
  int number, result = 0;

  do {
    std::cout << "Enter positive integers to check weather they are armstrong or not: ";
    std::cin >> number;
  } while (number < 1);

  if(number < 10) {
    std::cout << number << " is an armstrong\n";
    return 0;
  }

  std::string str_num = std::to_string(number);
  int number_of_digits = str_num.length();

  for(int i = 0; i < number_of_digits; i++) {
    int num = str_num[i] - '0';
    num = pow(num, number_of_digits);
    result += num;
  }

  if(result == number) {
    std::cout << number << " is an armstrong\n";
  } else {
    std::cout << number << " is not an armstrong\n";
  }
  return 0;
}