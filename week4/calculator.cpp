#include <iostream>

double add(double x, double y) {
  return x + y;
}
double minus(double x, double y) {
  return x - y;
}
double multiply(double x, double y) {
  return x * y;
}
double divide(double x, double y) {
  if (y != 0) {
    return x / y;
  }
  std::cout << "Can't divide by zero\n";
  return 0.0;
}
int main () {
  double x, y, result;
  char operation;
  std::cout << "Enter Expressiong seperated by space: ";
  std::cin >> x >> operation >> y;

  if (operation == '+') {
    std::cout << (add(x, y)) << '\n';
    return 0;
  } else if (operation == '-') {
    std::cout << (minus(x, y)) << '\n';
    return 0;
  } else if (operation == '*' || operation == 'x') {
    std::cout << (multiply (x, y)) << '\n';
    return 0;
  } else if (operation == '/') {
    const double answer = divide(x, y);
    if (answer != 0.0) {
      std::cout << answer << '\n';
      return 0;
    }
  } else {
    std::cout << "Unkown Operation" << '\n';
    return 1;
  }
}