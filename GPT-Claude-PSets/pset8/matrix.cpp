#include <iostream>

int main () {
  int aMatrix[3][3];
  int bMatrix[3][3];

  // Take Matices A and B
  
  std::cout << "Enter Matrix A:"<< std::endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cin >> aMatrix[i][j];
    }
  }
  std::cout << std::endl;
  std::cout << "Enter B:" << std::endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cin >> bMatrix[i][j];
    }
  }
  // Sum of matrix a and b

  std::cout << "A + B:" << std::endl;
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j++) {
      std::cout << aMatrix[i][j] + bMatrix[i][j] << ' ';
    }
    std::cout << std::endl;
  }
  // Difference of Matrix a and b

  std::cout << "A - B:" << std::endl;
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j++) {
      std::cout << aMatrix[i][j] - bMatrix[i][j] << ' ';
    }
    std::cout << std::endl;
  }
  std::cout << "Transpose of A:" << std::endl;

  // Transpose of A
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j++) {
      std::cout << aMatrix[j][i] << ' ';
    }
    std::cout << std::endl;
  }
}