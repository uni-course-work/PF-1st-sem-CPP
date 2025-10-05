#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  int random1, random2, result, answer, points = 0, total = 10;
  int variable, option;
  do {
  std::cout << "1. Easy" << std::endl;
  std::cout << "2. Medium" << std::endl;
  std::cout << "3. Hard" << std::endl;
  std::cout << "4. Exit"<< std::endl;
  std::cout << "Choose option: ";
  std::cin >> option;

  if (option == 3){
    variable = 19;
  } else if (option == 2){
    variable = 9;
  } else if (option == 1) {
    variable = 6;
  } else if (option == 4) {
    return 0;
  }
  srand(time(0));
  
  for (int i = 1; i <=10; i ++) {
    random1 = rand() % variable + 2;
    random2 = rand() % variable + 2;
    result = random1 * random2;
    std::cout << 'Q' << i << ": " << random1 << " x " << random2 << " = ?" << std::endl;
    std::cin >> answer;
    if (answer == result) {
      std::cout << "Correct!" << std::endl;
      points ++;
    } else {
      std::cout << "Wrong! Correct answer: " << result << std::endl;
    }
  }
  std::cout << "Final Score: " << points << " / " << total << std::endl;
  std::cout << "Another Excercise!"<<std::endl;
  } while (true);
  return 0;
}