#include <iostream>

int main () {
  int N, max_marks;
  std::cout << "Enter the number of students: ";
  std::cin >> N;
  int arr [N];
  for(int i = 0; i < N; i++) {
    std::cout << "Enter marks of student number " << i + 1 << " : ";
    std::cin >> arr[i];
  }

  for (int i = 0; i < 5; i++) {
    for (int j = i; j < 5; j++) {
      if(arr[j] < arr[i]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  std::cout << "Highest: " << arr[N - 1] << std::endl;
  std::cout << "Lowest: " << arr[0] << std::endl;

  return 0;
}