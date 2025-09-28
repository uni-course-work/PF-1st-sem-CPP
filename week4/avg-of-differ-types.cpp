#include <iostream>

int main () {
  int integer;
  float less_precised;
  double more_precised;

  std::cout << "Usage : integer float double";
  std::cout << "Enter Three space serpated digits to have an average : "; 
  std::cin >> integer >> less_precised >> more_precised;

  double avg = (double)integer + (double)less_precised + more_precised / 3.0;
  std::cout << "Average: " << avg << '\n';
}