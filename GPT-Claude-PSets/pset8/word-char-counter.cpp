#include <iostream>
#include <string>
#include <cctype>

int main() {
  std::string text;
  int words = 1, characters = 0, vowels = 0, consonants = 0;
  std::cout << "Enter Text: ";
  do {
    std::getline(std::cin, text);
  } while (text.length() < 1);
  
  size_t textLength = text.length();
  for (int i = 0; i < textLength; i++) {
    char lowercaseChar = towlower(text[i]);
    if (lowercaseChar == ' '){
      words ++;
    } else {
      characters ++;
    }

    if ( lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u'){
      vowels ++;
    } else if (isalpha(lowercaseChar)){
      consonants ++;
    }
  }
  std::cout << "Words: " << words << '\n';
  std::cout << "Characters: " << characters << '\n';
  std::cout << "Vowels: " << vowels << '\n';
  std::cout << "Consonants: " << consonants << '\n';
  
}