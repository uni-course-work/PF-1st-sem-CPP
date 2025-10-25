#include <iostream>
#include <cmath>

int main() {
  // a, b, c, three sides of triangle and s is semiperimeter
  double a, b, c, s, area;
  
  // Heron's formula  area = sqrt(s*(s - a)*(s - b)*(s - c))
  std::cout << "Etner three sides of triangle: ";
  std::cin >> a >> b >> c;

  while( a <= 0 || b <= 0 || c <= 0) {
    std::cout << "Invalid Dimensions: " << a << ' ' << b << ' ' << c << '\n';
    std::cout << "Renter positive values only: ";
    std::cin >> a >> b >> c;
  }
  s = (a + b + c) / 2;
  
  if(a + b <= c || a + c <= b || b + c <= a) {
    std::cout << "Invalid Dimensions: " << a << ' ' << b << ' ' << c << '\n';
    return 1;
  }
  area = sqrt(s*(s - a)*(s - b)*(s - c));

  std::cout << "Area of a triangle with sides " << a << ' ' << b << ' ' << c << " = " << area << '\n';

  return 0;
}