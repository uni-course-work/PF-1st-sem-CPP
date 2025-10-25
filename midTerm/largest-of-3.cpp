#include <iostream>
#include <algorithm>

int main() {
  int a, b, c;

  std::cout << "Enter three numbers a, b and c to compare them : ";
  std::cin >> a >> b >> c;

  if(a == b && a == c) {
    std::cout << "All the three digits are equal\n";
  } else {
    int largest = std::max({a, b, c});
    int smallest = std::min({a, b, c});
    int middle = a + b + c - largest - smallest;

    std::cout << "Largest = " << largest << '\n';
    std::cout << "Smallest = " << smallest << '\n';
    std::cout << "Middle = " << middle << '\n';
    return 0;
  }
}