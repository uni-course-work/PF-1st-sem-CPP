#include <iostream>
#include <cmath>

int main () {
  int choice;
  do {
    std::cout << "Select Operation: " << '\n';
    std::cout << "1. Addition" << '\n';
    std::cout << "2. Subtraction" << '\n';
    std::cout << "3. Multiplication" << '\n';
    std::cout << "4. Division" << '\n';
    std::cout << "5. Square Root" << '\n';
    std::cout << "6. Power" << '\n';
    std::cout << "7. Exit" << '\n';
    std::cout << "Choice: ";
    std::cin >> choice;
  } while (choice < 1 || choice > 7);

  switch (choice) {
    double x,y;
    case 1:{
      std::cout << "Enter two numbers to get their sum: ";
      std::cin >> x >> y;
      std::cout << x << " + " << y << " = " << x + y << '\n';
      break;
    }
    case 2: {
      std::cout << "Enter two numbers to get thir difference: ";
      std::cin >> x >> y;
      std::cout << x << " - " << y << " = " <<x- y << '\n';
      break;
    }
    case 3: {
      std::cout << "Enter two numbers to get their product: ";
      std::cin >> x >> y;
      std::cout << x << " * " << y << " = " << x * y << '\n';
      break;
    }
    case 4: {
      std::cout << "Enter two numbers to get their division: ";
      std::cin >> x >> y;
      if (y == 0) {
        std::cout << "Invalid Operation" << '\n';
        break;
      }
      std::cout << x << " / " << y << " = " << x / y << '\n';
      break;
    }
    case 5: {
      std::cout << "Enter number to get square root: ";
      std::cin >> x;
      std::cout << "Square Root of " << x << " = "<<sqrt(x) << '\n';
      break;
    }
    case 6: {
      std::cout << "Enter base and exponent: ";
      std::cin >> x >> y;
      std::cout << x << " power " << y << " = " << pow(x, y) << '\n';
      break;
    }
    case 7: {
      return 0;
    }
  }

}