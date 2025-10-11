#include <iostream>

double cToF(double temp){
  return (9.0/5.0 * temp) + 32;
}
double cToK(double temp){
  return temp + 273.15;
}
int main() {
  double celsius, kelvin, fahrenheit;
  std::cout << "Etner Ceslsius: ";
  std::cin >> celsius;

  std::cout << "Fahrenheit: " << cToF(celsius) << '\n';
  std::cout << "Kelvin: " << cToK(celsius) << '\n';
  return 0;
}