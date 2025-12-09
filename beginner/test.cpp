#include <iostream>
#include <fstream>

using namespace std;

int main () {
  std::ofstream ofile ("./hmmm.txt");

  if(!ofile) {
    cout << "Ops! We are unable to open hmmm.txt for writing\n";
    return 0;
  }
  std::cout << "Enter END at a new line to stop inserting text\n";
  std::cout << "Enter Text\n";
  
  std::string line{};
  while(line != "END") {
    std::cout << "> ";
    std::getline(std::cin, line);
    if(line != "END") {
      ofile << line << '\n';
    }
  }
  ofile.close();
  std::ifstream ifile ("hmmm.txt");
  if(!ifile) {
    cout << "Oops! We are unable to open hmmm.txt for writing\n";
    return 0;
  }
  string words;
  while(getline(ifile, words)) {
    std::cout << words << '\n';
  }
  return 0;
}