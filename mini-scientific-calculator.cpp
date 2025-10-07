#include <iostream>
#include <cmath>

int main () {
  int choice;
  do {
    std::cout << "Select Operation: " << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Square Root" << std::endl;
    std::cout << "6. Power" << std::endl;
    std::cout << "7. Exit" << std::endl;
    std::cout << "Choice: ";
    std::cin >> choice;
  } while (choice < 1 || choice > 7);

  switch (choice) {
    double x,y;
    case 1:{
      std::cout << "Enter two numbers to get their sum: ";
      std::cin >> x >> y;
      std::cout << x << " + " << y << " = " << x + y << std::endl;
      break;
    }
    case 2: {
      std::cout << "Enter two numbers to get thir difference: ";
      std::cin >> x >> y;
      std::cout << x << " - " << y << " = " <<x- y << std::endl;
      break;
    }
    case 3: {
      std::cout << "Enter two numbers to get their product: ";
      std::cin >> x >> y;
      std::cout << x << " * " << y << " = " << x * y << std::endl;
      break;
    }
    case 4: {
      std::cout << "Enter two numbers to get their division: ";
      std::cin >> x >> y;
      if (y == 0) {
        std::cout << "Invalid Operation" << std::endl;
        break;
      }
      std::cout << x << " / " << y << " = " << x / y << std::endl;
      break;
    }
    case 5: {
      std::cout << "Enter number to get square root: ";
      std::cin >> x;
      std::cout << "Square Root of " << x << " = "<<sqrt(x) << std::endl;
      break;
    }
    case 6: {
      std::cout << "Enter base and exponent: ";
      std::cin >> x >> y;
      std::cout << x << " power " << y << " = " << pow(x, y) << std::endl;
      break;
    }
    case 7: {
      return 0;
    }
  }

}