#include <iostream>

int main() {
  int option, quantity, subtotal;
  int burgerPrice = 500;
  int pizzaPrice = 800;
  int friesPrice = 200;
  std::cout << "1. Burger - " << burgerPrice << std::endl;
  std::cout << "2. Pizza - " << pizzaPrice << std::endl;
  std::cout << "3. Fries - " << friesPrice << std::endl;
  std::cout << "4. Exit" << std::endl;
  std::cout << "Select Item (1-4): ";
  std::cin >> option;
  do {
    std::cout << "Quantity: ";
    std::cin >> quantity;
  } while (quantity < 1);
  
  switch (option)
  {
  case 1:
    subtotal = burgerPrice * quantity;
    break;
  case 2:
    subtotal = pizzaPrice * quantity;
    break;
  case 3:
    subtotal = friesPrice * quantity;
  default:
    std::cout << "Unkown Option" << std::endl;
    break;
  }
  std::cout << "Subtotal: " << subtotal << std::endl;
}