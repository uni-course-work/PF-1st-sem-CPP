#include <iostream>

int main () {
  int year, days;
  std::string leapYear;
  do {
    std::cout << "Enter Year: ";
    std::cin >> year;
  } while (year < 1);
  if (year % 400 == 0) {
    leapYear = "Yes";
    days = 366;
  } else if (year % 100 == 0) {
    leapYear = "No";
    days = 365;
  } else if (year % 4 == 0) {
    leapYear = "Yes";
    days = 366;
  } else {
    leapYear = "No";
    days = 365;
  }
  std::cout << "Leap Year: " << leapYear << std::endl;
  std::cout << "Days: " << days << std::endl;
}