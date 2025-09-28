#include <iostream>
#include <math.h>

int main () {
  float N;
  std::cout << "Enter a float : ";
  std::cin >> N;
  std::cout << "Floor Value : " << floor(N) << " Rounded Value : " << round(N) << " Ceiled Value : " << ceil(N) << '\n';
}