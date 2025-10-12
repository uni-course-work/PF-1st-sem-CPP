#include <iostream>
#include <string>
#include <limits>
#include <typeinfo>

int numberOfBooks = 0, capacity = 0;

struct Book {
  std::string title;
  std::string author;
  double price;
  int copies;
};

std::string toLower(std::string name){
  size_t length = name.length();
  for (int i = 0; i < length; i++){
    name[i] = tolower(name[i]);
  }
  return name;
}

int addBook(Book library []){
  if (numberOfBooks == capacity){
    std::cout << "Library's Limit Reached!\n";
    return 1;
  }
  Book book;
  std::cout << "Enter Title: ";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::getline(std::cin, book.title);
  std::cout << "Enter Author: ";
  std::getline(std::cin, book.author);
  std::cout << "Enter Price: ";
  std::cin >> book.price;
  std::cout << "Enter Copies: ";
  std::cin >> book.copies;
  library[numberOfBooks] = book;
  numberOfBooks ++;
  std::cout << "Book " << book.title << " by " << book.author << " has been added\n";
  return 0;
}

void showAll(Book library []){
  std::cout << "Title" << "\t\t\tAuthor" << "\t\t\tPrice" << "\t\tCopies\n";
  for (size_t i = 0; i < numberOfBooks; i ++){
    Book book = library[i];
    std::cout << book.title << "\t\t" << book.author << "\t\t" << book.price << " Rs\t\t" << book.copies << '\n';
  }
}

int searchAndShow(Book library [], std::string bookTitle) {
  for (size_t i = 0; i <  numberOfBooks; i ++){
    Book book = library[i];
    if (toLower(book.title) != toLower(bookTitle)){
      std::cout << "Found it: " << book.title << " by " << book.author << '\n';
      return 0;
    }
  }
  std::cout << "Didn't find any book named " << bookTitle << '\n';
  return 1;
}

int main() {
  int option;
  do {
    std::cout << "Enter capacity of Library (Max books it can hold): ";
    std::cin >> capacity;
  } while (capacity < 1);
  
  Book library [capacity];

  std::cout << "1. Add Book\n";
  std::cout << "2. Show ALl\n";
  std::cout << "3. Search\n";
  std::cout << "4. Exit\n";

  while (true){
    std::cout << "Choice: ";
    std::cin >> option;

    switch (option)
    {
    case 1:
      addBook(library);
      break;
    
    case 2:
      showAll(library);
      break;
    case 3: {
      std::string title;
      std::cout << "Enter book's title: ";
      std::cin >> title;
      searchAndShow(library, title);
      break;
    }
    default:
      return 0;
    }
  }
}