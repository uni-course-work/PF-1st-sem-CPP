#include <iostream>
#include <math.h>

double getPerimeter(double radius) {
  return 2 * M_PI * radius;
}

double getPerimeter(double width, double length) {
  return 2 * width + 2 * length;
}

double getPerimeter(double a, double b, double c) {
  return a + b + c;
}

double getArea(double radius) {
  return M_PI * radius * radius;
}

double getArea(double width, double length) {
  return width * length;
}

double getArea(double a, double b, double c) {
  double s = getPerimeter(a, b, c) / 2 ; // s = semiperimeter
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
  int option;
  double area, perimeter;

  std::cout << "Press any other key to exit \n";
  std::cout << "Select Shape\n";
  std::cout << "1. Circle\n";
  std::cout << "2. Rectangle\n";
  std::cout << "3. Triangle\n";

  while(true){
    std::cout << "Choice: ";
    std::cin >> option;

    switch (option)
    {
    case 1: {
      double radius;
      std::cout << "Enter Radius: ";
      std::cin >> radius;
      area = getArea(radius);
      perimeter = getPerimeter(radius);
      break;
    }
    
    case 2: {
      double length, width;
      std::cout << "Enter length and width: ";
      std::cin >> length >> width;
      area = getArea(length, width);
      perimeter = getPerimeter(length, width);
      break;
    }

    case 3: {
      double a, b, c;
      std::cout << "Enter sides a, b and c: ";
      std::cin >> a >> b >> c;
      area = getArea(a, b, c);
      perimeter = getPerimeter(a, b, c);
      break;
    }
    default:
      return 0;
    }
    std::cout << "Area: " <<  area << '\n';
    std::cout << "Perimeter: " << perimeter << "\n\n";
  }
  return 0;
}