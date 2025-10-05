#include <iostream>
#include <iomanip>
#include <math.h>

#define FIXED_FLOAT(x) std::fixed <<std::setprecision(2)<<(x)

int main() {
  double width, length;
  std::cout << "Enter Length: ";
  std::cin >> length;
  std::cout << "Enter Width: ";
  std::cin >> width;
  if (width <= 0 || length <= 0) {
    std::cout << "Invalid Dimensions";
    return 1;
  }
  std::cout << "Area: " << FIXED_FLOAT(width * length) << std::endl;
  std::cout << "Perimeter: " << FIXED_FLOAT(2 * width + 2 * length) << std::endl;
  std::cout << "Diagonal: " << FIXED_FLOAT(sqrt(width * width + length * length)) << std::endl;
  std::cout << "Aspect Ration: " << FIXED_FLOAT(length / width) << " : 1" << std::endl;
  return 0;
}