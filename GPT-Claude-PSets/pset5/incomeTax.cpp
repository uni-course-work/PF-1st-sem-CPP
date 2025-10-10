#include <iostream>

int main () {
  double income, taxPercent, tax, netIncome;

  std::cout << "Enter Income: ";
  std::cin >> income;
  if (income > 200000) {
    taxPercent = 20;
  } else if (income > 100000) {
    taxPercent = 10;
  } else if (income > 50000) {
    taxPercent = 5;
  } else {
    taxPercent = 0;
  }
  tax = income * (taxPercent / 100);
  netIncome = income - tax;
  std::cout << "Tax: " << tax << '\n';
  std::cout << "Net Income: " << netIncome << '\n';
}