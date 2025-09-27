#include <iostream>

int main() {
  const double PI = 3.14159265358979323846;
  double radius;
  std::cout << "Enter radius to get radius: ";
  std::cin >> radius;
  double area = 2 * PI * radius;
  std::cout << "Circle's area is: " << area << '\n';
}