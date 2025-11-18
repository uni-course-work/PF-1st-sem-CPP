#include <iostream>

int main () {
  int rowsA, columnsA, columnsB, rowsB;

  do {
  std::cout << "Enter the Dimensions of Matrix A: ";
  std::cin >> rowsA >> columnsA;
  std::cout << "Enter the Dimensions of Matrix B: ";
  std::cin >> rowsB >> columnsB;
  } while (rowsA < 1 || rowsA > 10 || columnsA < 1 || columnsA > 10 || rowsB < 1 || rowsB > 10 || columnsB < 1 || columnsB > 10);
  // Take Matices A and B

  int aMatrix[rowsA][columnsA];
  int bMatrix[rowsB][columnsB];
  std::cout << "Enter Matrix A:"<< '\n';
  for (int i = 0; i < rowsA; i++) {
    for (int j = 0; j < columnsA; j++) {
      std::cin >> aMatrix[i][j];
    }
  }
  std::cout << "Enter B:" << '\n';
  for (int i = 0; i < rowsB; i++) {
    for (int j = 0; j < columnsB; j++) {
      std::cin >> bMatrix[i][j];
    }
  }
  // Sum of matrix a and b
if(rowsA == rowsB && columnsA == columnsB) {
  int rows = rowsA, columns = columnsA;
  std::cout << "A + B:" << '\n';
  for (int i = 0; i < rows; i ++) {
    for (int j = 0; j < columns; j++) {
      std::cout << aMatrix[i][j] + bMatrix[i][j] << ' ';
    }
    std::cout << '\n';
  }
  // Difference of Matrix a and b

  std::cout << "A - B:" << '\n';
  for (int i = 0; i < rows; i ++) {
    for (int j = 0; j < columns; j++) {
      std::cout << aMatrix[i][j] - bMatrix[i][j] << ' ';
    }
    std::cout << '\n';
  }
} else {
  std::cout << "Can't add or subtract unequal metrices\n";
}
  // Transpose of A
  if (rowsA == columnsA) {
    std::cout << "Transpose of A:" << '\n';
    for (int i = 0; i < rowsA; i ++) {
      for (int j = 0; j < columnsA; j++) {
        std::cout << aMatrix[j][i] << ' ';
      }
    std::cout << '\n';
    }
  } else {
    std::cout << "Can't take Transpose of a Rectangular Matrix\n";
  }
// Transpose of B
  if (rowsB == columnsB) {
    std::cout << "Transpose of B:" << '\n';
    for (int i = 0; i < rowsB; i ++) {
      for (int j = 0; j < columnsB; j++) {
        std::cout << aMatrix[j][i] << ' ';
      }
    std::cout << '\n';
    }
  } else {
    std::cout << "Can't take Transpose of a Rectangular Matrix\n";
  }
  // Multiplication
  
  if(rowsA == columnsB) {
    std::cout << "A X B\n";
    int multiple [rowsA][columnsB];
    for(int i = 0; i < rowsA; i++) {
      for(int j = 0; j < columnsB; j++) {
        multiple[i][j] = 0;
        for(int k = 0; k < columnsA; k++) {
          multiple[i][j] += aMatrix[i][k] * bMatrix[k][j];
        }
      }
    }
    for(int i = 0; i < rowsA; i++) {
      for(int j = 0; j < columnsB; j++) {
        std::cout << multiple[i][j] << ' ';
      }
      std::cout << '\n';
    }
  } else {
    std::cout << "These matrices can't be multiplied\n";
  }
  std::cout << std::endl;
  return 0;
}