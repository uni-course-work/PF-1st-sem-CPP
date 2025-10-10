#include <iostream>
#include <math.h>
#include <iomanip>

#define FIXED_FLOAT(x) std::fixed <<std::setprecision(2)<<(x)
#define DASHED_LINE std::cout << "---------------------------------------------"<<'\n'
#define PRINT_ITEM(name, qty, price, total) std::cout << name <<"\t\t" << qty << '\t' << FIXED_FLOAT(price) << '\t' << FIXED_FLOAT(total) <<'\n'

int main() {
  
  const double DISCOUNT = 0.05;
  const double TAX = 0.15;
  std::cout << "Usage: ItemName quantity unit_price" <<'\n';
  std::string item1, item2, item3;
  int q1, q2, q3;
  double price1, price2, price3;
  double total1, total2, total3, subtotal, grandTotal;
  double discount = 0, tax = 0;
  
  std::cout << "Enter Details of First  Item: ";
  std::cin >> item1 >> q1 >> price1;
  std::cout << "Enter Details of Second Item: ";
  std::cin >> item2 >> q2 >> price2;
  std::cout << "Enter Details of Third  Item: ";
  std::cin >> item3 >> q3 >> price3;
  
  total1 = price1 * q1;
  total2 = price2 * q2;
  total3 = price3 * q3;

  subtotal = total1 + total2 + total3;
  if (subtotal > 100) {
    discount = subtotal * DISCOUNT;
  }
  tax = (subtotal - discount) * TAX;
  grandTotal = subtotal - discount + tax;
  std::cout << "Item\t\t" << "Qty\t" << "Price\t" << "Total\n";
  DASHED_LINE;
  PRINT_ITEM(item1, q1, price1, total1);
  PRINT_ITEM(item2, q2, price2, total2);
  PRINT_ITEM(item3, q3, price3, total3);
  DASHED_LINE;
  std::cout << "Subtotal: " << FIXED_FLOAT(subtotal) << '\n';
  std::cout << "Discount: " << FIXED_FLOAT(discount) << '\n';
  std::cout << "TAX     : " << FIXED_FLOAT(tax) << '\n';
  std::cout << "TOTAL   : " << FIXED_FLOAT(grandTotal) << '\n';
  return 0;
}