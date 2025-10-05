#include <iostream>

int main() {
  std::cout << "Welcome to Ari Bank Limited ATM" << std::endl;
  bool exit = false;
  int balance = 0;
  do {
    std::cout << "--------------------------------" << std::endl;
    int option;
    std::cout << "1. Check Balance" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Select Option: ";
    std::cin >> option;
    switch (option)
    {
    case 1: {
      std::cout << "Current Balance: " << balance<<std::endl;
      break;
    }
    case 2: {
      int deposit = 0;
      do {
        std::cout << "Enter Balance: ";
        std::cin >> deposit;
      } while (deposit < 0);
      balance += deposit;
      std::cout << "Successfully Deposited " << deposit << std::endl;
      std::cout << "Current Balance: " << balance << std::endl;
      break;
    }
    case 3: {
      int withdraw = 0;
      do {
        std::cout << "Enter Withdraw amount: ";
        std::cin >> withdraw;
      } while (withdraw > balance);
      balance -= withdraw;
      std::cout << "Successfully withdraw " << withdraw<< std::endl;
      std::cout << "Current Balance: " << balance << std::endl;
      break;
    }
    case 4:
      exit = true;
    }
  } while (exit == false);
  return 0;
}