#include <iostream>
#include <string>
#include <fstream>

int main() {
  std::string line = "";
  std::ofstream file("notes.txt");
  std::cout << "Enter text (type 'END' on a new Line to finish)\n";
  
  while (line != "END") {
    std::cout << "> ";
    std::getline(std::cin, line);
    if (file.is_open()){
      file << line << "\n";
    }
  }
}