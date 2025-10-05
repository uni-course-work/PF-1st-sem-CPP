#include <iostream>
#include <math.h>
#include <iomanip>

#define FIXED_FLOAT(x) std::fixed << std::setprecision(2) << x

int main() {
  double radius, area, sphereVolume, cylinderVolume;
  std::cout << "Enter Radius: ";
  std::cin >> radius;
  area = M_PI * pow(radius, 2);
  sphereVolume = (4.0 / 3.0) * M_PI * pow(radius, 3);
  cylinderVolume = M_PI * pow(radius, 2) * (2 * radius);
  std::cout << "Circle Area    : " << FIXED_FLOAT(area) << std::endl;
  std::cout << "Sphere Volume  : " << FIXED_FLOAT(sphereVolume) << std::endl;
  std::cout << "Cylinder Volume: " << FIXED_FLOAT(cylinderVolume) << std::endl;
  return 0;
}