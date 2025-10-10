#include <iostream>

int main () {
  int rows, columns;

  do {
  std::cout << "Enter the Dimensions of Matrices: ";
  std::cin >> rows >> columns;
  } while (rows < 0 || rows > 10 || columns < 0 || columns > 10);
  // Take Matices A and B

  int aMatrix[rows][columns];
  int bMatrix[rows][columns];
  std::cout << "Enter Matrix A:"<< std::endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      std::cin >> aMatrix[i][j];
    }
  }
  std::cout << std::endl;
  std::cout << "Enter B:" << std::endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      std::cin >> bMatrix[i][j];
    }
  }
  // Sum of matrix a and b

  std::cout << "A + B:" << std::endl;
  for (int i = 0; i < rows; i ++) {
    for (int j = 0; j < columns; j++) {
      std::cout << aMatrix[i][j] + bMatrix[i][j] << ' ';
    }
    std::cout << std::endl;
  }
  // Difference of Matrix a and b

  std::cout << "A - B:" << std::endl;
  for (int i = 0; i < rows; i ++) {
    for (int j = 0; j < columns; j++) {
      std::cout << aMatrix[i][j] - bMatrix[i][j] << ' ';
    }
    std::cout << std::endl;
  }
  std::cout << "Transpose of A:" << std::endl;

  // Transpose of A
  if (rows == columns) {
    for (int i = 0; i < rows; i ++) {
      for (int j = 0; j < columns; j++) {
        std::cout << aMatrix[j][i] << ' ';
      }
    std::cout << std::endl;
    }
  } else {
    std::cout << "Can't take Transpose of a Rectangular Matrix" << std::endl;
  }
  return 0;
}