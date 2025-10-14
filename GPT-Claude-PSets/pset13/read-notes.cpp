#include <iostream>
#include <fstream>
#include <string>

int main () {
  std::ifstream file("notes.txt");

  size_t words = 0, lines = 0,  characters = 0;
  char ch;
  if (file.is_open()) {
    while(file.get(ch)){
      if(ch == '\n'){
        lines ++;
        words ++;
      } else if (ch == ' ') {
        words ++;
      } else{
        characters ++;
      }
    }
    file.close();
  } else {
    std::cerr << "Error unable to open file\n";
  }
  std::cout << "Lines: " << lines  << '\n';
  std::cout << "Words: " << words << '\n';
  std::cout << "Characters: " << characters << '\n';
  return 0;
}