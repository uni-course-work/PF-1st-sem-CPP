#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  // Seed for rand also making sure we get new number each time
  srand(time(0));
  
  int randomNumber = (rand() % 50) + 1;
  int numberFromUser;
  std::cout << "Guess a number between 1 and 50 : ";
  std::cin >> numberFromUser;
  int difference;
  do {
  difference = numberFromUser - randomNumber;
    if (difference == 0) {
      std::cout << "You Got it ! It was indeed : " << randomNumber << std::endl;
      return 0;
    } else if (difference > 0) {
      std::cout << "Decrease A bit: ";
      std::cin >> numberFromUser;
      continue;
    } else if (difference < 0) {
      std::cout << "Increase A bit: ";
      std::cin >> numberFromUser;
      continue;
    }
  } while (difference != 0);
}