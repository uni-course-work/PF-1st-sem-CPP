#include <iostream>

int main () {
  int option;
  std::cout << "1. Temprature" << std::endl;
  std::cout << "2. Length" << std::endl;
  std::cout << "3. Weight" << std::endl;
  std::cout << "4. Currency" << std::endl;
  std::cout << "Select Conversion: ";
  std::cin >> option;

  switch (option) {
    double value, newValue;
    case 1: {
      std::cout << "Enter Temprature in C: ";
      std::cin >> value;
      newValue = (9.0 / 5.0) * value + 32;
      std::cout << newValue << std::endl;
      break;
    }
    case 2: {
      std::cout << "Enter CM: ";
      std::cin >> value;
      newValue = value / 2.54;
      std::cout << newValue << std::endl;
      break;
    }
    case 3: {
      std::cout << "Enter Kg: ";
      std::cin >> value;
      newValue = value * 2.20462;
      std::cout << newValue << std::endl;
      break;
    }
    case 4: {
      std::cout << "Enter Currency PKR: ";
      std::cin >> value;
      newValue = value / 281.25;
      std::cout << newValue << std::endl;
      break;
    }
  }
}