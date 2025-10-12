#include <iostream>

int main() {
  float avg, sum = 0, min = 10000, max = -273.15;
  struct Weather {
    std::string dayName;
    float temp;
  };

  Weather week [7];

  for(size_t i = 0; i < 7; i++) {
    Weather day;
    std::cout << "Enter Day Name and Temp: ";
    std::cin >> day.dayName >> day.temp;
    sum += day.temp;
    if (day.temp < min){
      min = day.temp;
    }
    if (day.temp > max) {
      max = day.temp;
    }

    week[i] = day;
  }
  avg = sum / 7;
  std::cout << "Average Temperature: " << avg << '\n';
  std::cout << "Max Temperature: " << max << '\n';
  std::cout << "Min Temperature: " << min << '\n';
  std::cout << "Below Average: ";
  for (size_t i = 0; i < 7; i ++) {
    Weather day = week[i];
    if (day.temp < avg){
      std::cout << day.dayName << " : " << day.temp << '\t';
    }
  }
  std::cout << '\n';
  std::cout << "Above Average: ";
  for (size_t i = 0; i < 7; i ++) {
    Weather day = week[i];
    if (day.temp > avg){
      std::cout << day.dayName << " : " << day.temp << '\t';
    }
  }
  std::cout << '\n';
}