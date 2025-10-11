#include <iostream>

int add(int x,int y){
  return x + y;
}
int sub(int x,int y){
  return x - y;
}
int multiply(int x,int y){
  return x * y;
}
double divide(double x, double y){
  return y != 0 ? x / y: 0;
}
int main(){
  int x, y;
  double result;
  
  std::cout << "Etner two numbers: ";
  std::cin >> x >> y;
  std::cout << "Sum: " << add(x, y)<< '\n';
  std::cout << "Difference: "<< sub(x, y) << '\n';
  std::cout << "Product: " << multiply(x, y) << '\n';
  if (y != 0) {
    std::cout << "Division: " << divide(x, y) << '\n';
  } else {
    std::cout << "Division: " << "Invalid Operation" << '\n';
  }
  return 0;
}