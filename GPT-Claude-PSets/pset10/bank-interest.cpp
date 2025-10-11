#include <iostream>
#include <cmath>

double compountInterest(double principal, double rate, int frequency, int years){
  return principal * pow(1 + rate / frequency, frequency * years);
}

void displaySummary(double principal, double rate, int frequency, int years){
  const double amount = compountInterest(principal, rate, frequency, years);
  std::cout << "Final Amount: " << amount << '\n';
}
int main() {
  double prinicpal, rate, frequency, years;
  std::cout << "Put the vlaues to get compunded interest\n";
  std::cout << "Principal: ";
  std::cin >> prinicpal;
  std::cout << "Rate % : ";
  std::cin >> rate;
  rate = rate / 100;
  std::cout << "Compuneded: ";
  std::cin >> frequency;
  std::cout << "Years: ";
  std::cin >> years;
  
  displaySummary(prinicpal, rate, frequency, years);
  return 0;
}