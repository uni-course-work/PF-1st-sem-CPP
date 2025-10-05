#include <iostream>
#include <iomanip>
#include <math.h>

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
  std::cout << "Area: " << width * length << std::endl;
  std::cout << "Perimeter: " << 2 * width + 2 * length << std::endl;
  std::cout << "Diagonal: " << sqrt(width * width + length * length) << std::endl;
  std::cout << "Aspect Ration: " << length / width << " : 1" << std::endl;
  return 0;
}