#include <iostream>

int main () {
  int option;
  std::cout << "1. Temprature" << '\n';
  std::cout << "2. Length" << '\n';
  std::cout << "3. Weight" << '\n';
  std::cout << "4. Currency" << '\n';
  std::cout << "5. Exit" << '\n';
  std::cout << "Select Conversion: ";
  std::cin >> option;

  switch (option) {
    double value, newValue;
    case 1: {
      std::cout << "Enter Temprature in C: ";
      std::cin >> value;
      newValue = (9.0 / 5.0) * value + 32;
      std::cout << value << " C" << " = " << newValue << " F" << '\n';
      break;
    }
    case 2: {
      std::cout << "Enter CM: ";
      std::cin >> value;
      newValue = value / 2.54;
      std::cout << value << " cm" << " = " << newValue << " inch"<< '\n';
      break;
    }
    case 3: {
      std::cout << "Enter Kg: ";
      std::cin >> value;
      newValue = value * 2.20462;
      std::cout << value << " Kg" << " = " << newValue << " Lb" << '\n';
      break;
    }
    case 4: {
      std::cout << "Enter Currency PKR: ";
      std::cin >> value;
      newValue = value / 281.25;
      std::cout << value << " PKR" << " = " << newValue << " USD"  << '\n';
      break;
    }
    case 5: {
      return 0;
    }
  }
}