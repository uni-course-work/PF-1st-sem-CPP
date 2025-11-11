#include <iostream>

int main() {
  double a = 0.000000044;
  double b = 0.000000055;
  double c = 0.000000099;
  if(c == a + b){
    std::cout << "C = " << c << '\n';
  } else {
    std::cout << "hmm C = " << c << '\n';
  }
}