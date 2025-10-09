#include <iostream>

int main() {
  int sizeOfArray;
  std::cout << "Enter number of Integers you want to input: ";
  std::cin >> sizeOfArray;
  int array[sizeOfArray], sortedArray[sizeOfArray], temp;
  std::cout << "Enter " << sizeOfArray << " Numbers: ";
  for (size_t i = 0; i < sizeOfArray; i++) {
    std::cin >> array[i];
  }
  
  for (size_t i = 1; i < sizeOfArray; i++) {
    for (size_t j = 1; j < sizeOfArray; j++) {
      if (array[j] < array[j-1]) {
        int temp = array[j - 1];
        array[j - 1] = array[j];
        array[j] = temp;
      }
    }
  }
  std::cout << "Ascending: ";
  for (size_t i = 0; i < sizeOfArray; i++) {
    std::cout << array[i] << ' ';
  }
  std::cout << std::endl;
  std::cout << "Desending: ";
  for (size_t i = sizeOfArray; i > 0; i --) {
    std::cout << array[i - 1] << ' ';
  }
  std::cout << std::endl;
}
