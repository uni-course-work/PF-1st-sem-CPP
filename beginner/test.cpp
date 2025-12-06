#include <iostream>

char difference = 'a' - 'A';
char tolower(char c) {
  if(c >= 'A' && c <= 'Z') {
    return c + difference;
  }
  return c;
}
char toupper(char c) {
  if (c >= 'a' && c <='z') {
    return c - difference;
  }
  return c;
}
int main() {
std::cout << tolower('A') << " " << tolower('b') << std::endl;
std::cout << toupper('Z') << " " << toupper('c') << std::endl;
}