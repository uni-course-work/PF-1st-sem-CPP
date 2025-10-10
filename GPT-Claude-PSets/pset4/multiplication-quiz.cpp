#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  int random1, random2, result, answer, points = 0, total = 10;
  int variable, option;
  do {
  std::cout << "1. Easy" << '\n';
  std::cout << "2. Medium" << '\n';
  std::cout << "3. Hard" << '\n';
  std::cout << "4. Exit"<< '\n';
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
    std::cout << 'Q' << i << ": " << random1 << " x " << random2 << " = ?" << '\n';
    std::cin >> answer;
    if (answer == result) {
      std::cout << "Correct!" << '\n';
      points ++;
    } else {
      std::cout << "Wrong! Correct answer: " << result << '\n';
    }
  }
  std::cout << "Final Score: " << points << " / " << total << '\n';
  std::cout << "Another Excercise!"<<'\n';
  } while (true);
  return 0;
}