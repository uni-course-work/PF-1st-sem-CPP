#include <iostream>
using namespace std;

int main () {
  int highest = 0;
  int lowest = 25;
  int marks [] = {10, 15, 9, 19, 22, 23, 24, 21, 15, 19};

  for(int i = 0; i < 10; i++) {
    if(marks[i] > highest) {
      highest = marks[i];
    }
    if (marks[i] < lowest) {
      lowest = marks[i];
    }
  }

  cout << "Highest marks are: " << highest << endl;
  cout << "Lowest marks are: " << lowest << endl;

  return 0;
}