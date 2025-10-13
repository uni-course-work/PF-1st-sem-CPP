#include <iostream>

int main() {
  int arr[5];

  std::cout << "Enter five integers: ";
  for (size_t i = 0; i < 5; i ++) {
    std::cin >> arr[i];
  }
  
  int *first = &arr[0];
  for (size_t i = 0; i < 5; i ++) {
    std::cout << *(first + i) << '\n';
  }
}