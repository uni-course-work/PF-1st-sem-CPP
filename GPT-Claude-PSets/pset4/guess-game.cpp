#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
  srand(time(0));

  const int randomNumber = rand() % 101;
  int numberByUser;
  std::cout << "I've chosen a number between 1 and 100\nCan you Guess it?\n";
  do {
    std::cout << "Enter Your guess: ";
    std::cin >> numberByUser;
    if (numberByUser < randomNumber) {
      std::cout << "Too Low!\n";
    } else if (numberByUser > randomNumber) {
      std::cout << "Too High\n";
    } else if (numberByUser > 100 || numberByUser < 0) {
      std::cout << "Now You are thinking out of the box!\n";
    }
  } while (numberByUser != randomNumber);
  std::cout << "You got this, It was indeed: " << randomNumber<< std::endl;
  return 0;
}