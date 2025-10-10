#include <iostream>

int main() {
  std::cout << "Welcome to Ari Bank Limited ATM" << '\n';
  bool exit = false;
  int balance = 0;
  do {
    std::cout << "--------------------------------" << '\n';
    int option;
    std::cout << "1. Check Balance" << '\n';
    std::cout << "2. Deposit" << '\n';
    std::cout << "3. Withdraw" << '\n';
    std::cout << "4. Exit" << '\n';
    std::cout << "Select Option: ";
    std::cin >> option;
    switch (option)
    {
    case 1: {
      std::cout << "Current Balance: " << balance<<'\n';
      break;
    }
    case 2: {
      int deposit = 0;
      do {
        std::cout << "Enter Balance: ";
        std::cin >> deposit;
      } while (deposit < 0);
      balance += deposit;
      std::cout << "Successfully Deposited " << deposit << '\n';
      std::cout << "Current Balance: " << balance << '\n';
      break;
    }
    case 3: {
      int withdraw = 0;
      do {
        std::cout << "Enter Withdraw amount: ";
        std::cin >> withdraw;
      } while (withdraw > balance);
      balance -= withdraw;
      std::cout << "Successfully withdraw " << withdraw<< '\n';
      std::cout << "Current Balance: " << balance << '\n';
      break;
    }
    case 4:
      exit = true;
    }
  } while (exit == false);
  return 0;
}