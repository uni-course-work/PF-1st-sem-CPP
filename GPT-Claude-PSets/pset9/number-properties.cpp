#include <iostream>
#include <math.h>

bool isPrime(int number) {
  int squareRoot = round(sqrt(number));
  if(number < 2){
    return false;
  } else if (number == 2) {
    return true;
  } else {
    for (int i = 2; i <= squareRoot; i++){
      if(number % i == 0){
        return false;
      }
    }
    return true;
  }
}

bool isEven(int number) {
  return number % 2 == 0 ? true : false;
}

long long unsigned int getFactorial(int number){
  if (number < 0){
    return 0;
  }
  if (number == 1 || number == 0){
    return 1;
  }
  return number * getFactorial(number - 1);
}

void printTable(int number){
  for (int i = 1; i <= 10; i ++){
    std::cout << number << " x " << i << "\t= " << number * i << '\n';
  }
}

int main() {
  int number, option;
  std::string result;
  std::cout << "Choose from the below options:" << '\n';
  while (true) {
    std::cout << "1. Check Prime" << '\n';
    std::cout << "2. Check Even or Odd" << '\n';
    std::cout << "3. Get Factorial" << '\n';
    std::cout << "4. Get Mulitplication Table" << '\n';
    std::cout << "Press any other key to Exit" <<'\n';
    std::cout << "Choose an option: ";
    std::cin >> option;

    if (option > 0 && option < 5){
      std::cout << "Enter Number: ";
      std::cin >> number;
    }
    switch (option)
    {
    case 1:
      result = isPrime(number) ? "Yes" : "No";
      std::cout << "Prime: " << result << '\n';
    break;
  
    case 2:
      result = isEven(number) ? "Yes" : "No";
      std::cout << "Even: " << result << '\n';
    break;
    case 3:
      std::cout << "Factorial: " << getFactorial(number) << '\n';
    break;
    case 4:
      std::cout << "Multiplication Table of " << number << '\n';
      printTable(number);
    default:
      return 0;
  }
  std::cout << '\n';
 }
 return 1;
}