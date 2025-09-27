#include <iostream>

int main () {
  const int DAYS_IN_A_YEAR = 365;
  const int DAYS_IN_A_WEEK = 7;
  int days, weeks, years, remaining_days;
  std::cout << "Enter number of Days: ";
  std::cin >> days;
  years = days / DAYS_IN_A_YEAR;
  remaining_days = days % DAYS_IN_A_YEAR;
  weeks = remaining_days / DAYS_IN_A_WEEK;
  remaining_days %= DAYS_IN_A_WEEK;

  std::cout << "Number of Years: " << years << '\n';
  std::cout << "Number of Weeks: " << weeks << '\n';
  std::cout << "Remaining Days : " << remaining_days << '\n';
}