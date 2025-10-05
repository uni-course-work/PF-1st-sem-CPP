#include <iostream>
#include <iomanip>

#define FIXED_FLOAT(x) std::fixed <<std::setprecision(2)<<(x)

int main() {
  double temprature, kelvin, celsius, farhenheit;
  char unit;
  std::cout << "Enter Temprature: ";
  std::cin >> temprature;
  std::cout << "Enter Unit: ";
  std::cin >> unit;
  unit = std::toupper(unit);
  switch (unit)
  {
  case 'C':
    celsius = temprature;
    kelvin = celsius + 273.15;
    farhenheit = celsius * 9.0/5.0 + 32;
    break;
  case 'F':
    farhenheit = temprature;
    celsius = 5.0 / 9.0 * (farhenheit - 32);
    kelvin = celsius + 273.15;
    break;
  case 'K':
    kelvin = temprature;
    celsius = kelvin - 273.15;
    farhenheit = (celsius * 9.0 / 5.0) + 32;
    break;
  default:
    std::cout << "Unkown Unit: ";
    return 1;
  }
  std::cout << FIXED_FLOAT(celsius) <<"°C = ";
  std::cout << FIXED_FLOAT(farhenheit) <<"°F = ";
  std::cout << FIXED_FLOAT(kelvin) <<"°K\n";
  return 0;
}