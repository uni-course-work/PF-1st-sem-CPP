#include <iostream>
#include <cctype>
#include <string>

int main() {
  std::string word, newWord;
  bool status = true;
  std::cout << "Enter Word to check weather it's palindrome or not: ";
  std::getline(std::cin, word);
  size_t lengthOfWord = word.length();
  for(int i = 0; i < lengthOfWord; i++){
    if (isalnum(word[i])){
      newWord.push_back(word[i]);
    }
  }
  size_t lengthOfNewWord = newWord.length();
  size_t halfOfWord = ( lengthOfNewWord + 1) / 2;
  for (int i = 0; i <= halfOfWord; i++) {
    if (tolower(newWord[i]) != tolower(newWord[lengthOfNewWord - (i + 1)])) {
      status = false;
      break;
    }
  }

  std::cout << "Palindrome: " << (status ? "Yes" : "No") << '\n';
}