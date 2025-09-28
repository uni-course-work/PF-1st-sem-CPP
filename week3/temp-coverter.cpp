#include <iostream>

int main () {
  const float C_TO_F = 9.0 / 5.0;
  const float F_TO_C = 5.0 / 9.0;
  const float THIRTY_TWO = 32;
  float temp;
  char temp_unit;
  std::cout << "Usage: 50 F ... For converting 50 degree Celsius to Fahrenheit\n";
  std::cout << "Enter Temprature and Unit to convert Into : ";
  std::cin >> temp >> temp_unit;
  if (temp_unit == 'F') {
    std::cout << C_TO_F * temp + THIRTY_TWO <<" F\n";
    return 0;
  } else if (temp_unit == 'C') {
    std::cout << F_TO_C * (temp - THIRTY_TWO)  <<" C\n";
    return 0;
  } else {
    std::cout << "Unkown Unit"  << '\n';
    return 1;
  }
}