#include <iostream>

int main () {
  int N = 0, total = 0;
  std::cout << "Enter a Number: ";
  std::cin >> N;
  for(int i = 1; i <= N; i += 2) {
    total+= i;
  }
  std::cout << total << '\n';
  return total;
}