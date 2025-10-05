#include <iostream>

int main() {
  int N;
  do {
    std::cout << "Enter a number between 3 and 10 to get shapes: ";
    std::cin >> N;
  }
  while (N < 3 || N > 10);
  // Right Angle Triangle
  for (int i = 1; i <= N; i ++) {
    for (int j = 1; j <= i; j++){
      std::cout << "* ";
    }
    std::cout<<std::endl;
  }
  std::cout << "------------------" << std::endl;
  // Inverted Right Angle Triangle
  for (int i = 0; i <= N; i++){
    for (int j = N - i; j > 0; j -- ) {
      std::cout << "* ";
    }
    std::cout << std::endl;
  }
  // Pyramid

  int spaces = N -1;
  for (int i = 1; i <= N; i ++) {
    for (int j = 1; j <= spaces; j++){
      std::cout << " ";
    }
    spaces--;
    for (int k = 0; k < i; k++){
      std::cout << "* ";
    }
    std::cout << std::endl;
  }
}