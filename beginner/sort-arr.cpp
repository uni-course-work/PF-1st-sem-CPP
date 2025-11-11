#include <iostream>

using namespace std;

int main () {
  int N, max_marks;
  // Validate No of students must be at least one.
  do {
    cout << "Enter the number of students: ";
    cin >> N;
  } while(N < 1);
  // Declare arr equal to no of students
  int arr [N];
  // Take marks of N students and store result in arr
  for(int i = 0; i < N; i++) {
    cout << "Enter marks of student number " << i + 1 << " : ";
    cin >> arr[i];
  }

  // Sort arry 
  for (int i = 0; i < N; i++) {
    for (int j = i; j < N; j++) {
      if(arr[j] < arr[i]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  cout << "Highest: " << arr[N - 1] << endl;
  cout << "Lowest: " << arr[0] << endl;

  return 0;
}