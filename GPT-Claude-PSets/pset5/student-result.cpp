#include <iostream>
#include <iomanip>

int main () {
  double average, sum = 0, studentMarks[5];
  char grade;
  std::string status = "Passed";
  std::cout << "Enter Marks for 5 subjects: ";
  for (int i = 0; i < 5; i++){
    std::cin >> studentMarks[i];
    sum += studentMarks[i];
  }
  average = sum / 5.0;
  if (average > 90) {
    grade = 'A';
  } else if (average > 80) {
    grade = 'B';
  } else if (average > 70) {
    grade = 'C';
  } else if (average > 60) {
    grade = 'D';
  } else if (average > 50) {
    grade = 'E';
  } else {
    grade = 'F';
    status = "Failed";
  }
  std::cout << "Average: " << average << '\n';
  std::cout << "Grade: " << grade << '\n';
  std::cout << "Status: " << status << '\n';
  return 1;
}