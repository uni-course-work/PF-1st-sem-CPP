#include <iostream>

int main() {
  int array[5], sortedArray[5], temp;
  std::cout << "Enter 5 Numbers: ";
  for (size_t i = 0; i < 5; i++) {
    std::cin >> array[i];
  }
  
  for (size_t i = 1; i < 5; i++) {
    for (size_t j = 1; j < 5; j++) {
      if (array[j] < array[j-1]) {
        int temp = array[j - 1];
        array[j - 1] = array[j];
        array[j] = temp;
      }
    }
  }
  std::cout << "Ascending: ";
  for (size_t i = 0; i < 5; i++) {
    std::cout << array[i] << ' ';
  }
  std::cout << std::endl;
  std::cout << "Desending: ";
  for (size_t i = 5; i > 0; i --) {
    std::cout << array[i - 1] << ' ';
  }
  std::cout << std::endl;
}
