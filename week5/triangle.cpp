#include <iostream>

int main () {
  const char BULDING_BLOCK = '*';
  int N;
  std::cout << "Enter the Number: ";
  std::cin >> N;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << BULDING_BLOCK;
    }
    std::cout << '\n';
  }
}