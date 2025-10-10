#include <iostream>

int main() {
  int option, quantity, subtotal, total = 0;
  double tax = 0.13;
  bool exit = false;
  int burgerPrice = 500;
  int pizzaPrice = 800;
  int friesPrice = 200;
  do {
    std::cout << "1. Burger - " << burgerPrice << '\n';
    std::cout << "2. Pizza - " << pizzaPrice << '\n';
    std::cout << "3. Fries - " << friesPrice << '\n';
    std::cout << "4. Exit" << '\n';
    std::cout << "Select Item (1-4): ";
    std::cin >> option;
    if (option != 4) {
      do {
        std::cout << "Quantity: ";
        std::cin >> quantity;
      } while (quantity < 1);
    }

    switch (option)
    {
    case 1:
      subtotal = burgerPrice * quantity;
      total += subtotal;
      break;
    case 2:
      subtotal = pizzaPrice * quantity;
      total += subtotal;
      break;
    case 3:
      subtotal = friesPrice * quantity;
      total += subtotal;
      break;
    case 4:
      exit = true;
      break;
    default:
      std::cout << "Unkown Option" << '\n';
      break;
    }
    std::cout << "Subtotal: " << subtotal << '\n';
  } while (exit == false);
  int newTotal = total + total * tax;
  std::cout << "Total: " << total << '\n';
  std::cout << "Tax: " << total * tax << '\n';
  std::cout << "Net Total: " << newTotal << '\n';
  return 0;
}