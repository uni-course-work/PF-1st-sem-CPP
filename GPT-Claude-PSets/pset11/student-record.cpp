#include <iostream>
#include <string>
#include <limits>

int main() {
  int numberOfStudents, numberOfSubjects;
  struct Student {
    int rollNumber;
    std::string name;
    std::string fatherName;
    double marks[6];
    double average;
  };

  do{
    std::cout << "Enter number of students: ";
    std::cin >> numberOfStudents;
  } while (numberOfStudents < 1);

  do{
    std::cout << "Enter number of subjects: ";
    std::cin >> numberOfSubjects;
  } while (numberOfSubjects < 1);

  Student topper;
  topper.average = 0;
  
  Student students[numberOfStudents];
  
  for (size_t i = 0; i < numberOfStudents; i++) {
    Student student;
    double sum = 0;
    std::cout << "Enter Student #" << i + 1 << std::endl;
    std::cout << "Enter Name: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, student.name);
    std::cout << "Enter Father Name: ";
    std::getline(std::cin, student.fatherName);
    std::cout << "Enter Roll Number: ";
    std::cin >> student.rollNumber;
    std::cout << "Enter Student's "<< numberOfSubjects << " subjects marks: ";
    for (size_t i = 0; i < numberOfSubjects; i++) {
      do{
        std::cin >> student.marks[i];
      } while (student.marks[i] < 0 || student.marks[i] > 100);
      sum += student.marks[i];
    }
    student.average = sum / numberOfSubjects;
    students[i] = student;
  }

  for (size_t i = 0; i < numberOfStudents; i ++) {
    Student currentStudent = students[i];
    if (currentStudent.average > topper.average){
      topper = currentStudent;
    }
  }

  std::cout << " Student: -> ";
  std::cout << "| Name -> " << topper.name;
  std::cout << "| Father Name -> " << topper.fatherName;
  std::cout << "| Roll Number -> " << topper.rollNumber;
  std::cout << "| Average -> " << topper.average;
  std::cout << "| has the highest average.\n";
  return 0;
}