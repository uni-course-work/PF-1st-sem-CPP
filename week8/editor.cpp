#include <iostream>

int countWords(std::string);
int countVowels(std::string);
std::string formatText(std::string);
std::string formatText(std::string, bool);
std::string formatText(std::string, char);

int main() {
  std::string text = "";
  std::cout << "Enter END on a new line to finish entering text\n";
  std::cout << "Enter Text\n";
  std::string temp = "";
  do {
    std::cout << "> ";
    std::getline(std::cin, temp);
    temp != "END" ? text += temp: text += "";
    text += ' ';
  } while(temp != "END");
  std::cout << "+===============+\n" << "| Text Analysis |\n" << "+===============+\n";
  std::cout << "Number of words: " << countWords(text) << '\n';
  std::cout << "Number of vowels: " << countVowels(text) << '\n';
  std::cout << "UPPER CASE: " << formatText(text) << '\n';
  std::cout << "Reversed: " << formatText(text, true) << '\n';
  std::cout << "Replaced: " << formatText(text, '#') << '\n';
  return 0;
}

int countWords(std::string text) {
  int length = text.length();
  int words = 1;
  for(int i = 1; i < length -1; i++) {
    if(text[i] == ' ' && text[i + 1] != ' ') {
      words ++;
    }
  }
  return words;
}

int countVowels(std::string text) {
  int length = text.length();
  int vowels = 0;
  for(int i = 0; i < length; i++) {
    char c = tolower(text[i]);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      vowels ++;
    }
  }
  return vowels;
}

std::string formatText(std::string text) {
  std::string upper = "";
  int length = text.length();
  for(int i = 0; i < length; i++) {
    upper += toupper(text[i]);
  }
  return upper;
}

std::string formatText(std::string text, bool) {
  std::string reverse = "";
  int length = text.length();
  for(int i = length - 1; i >= 0; i--) {
    reverse += text[i];
  }
  return reverse;
}

std::string formatText(std::string text, char c) {
  std::string replaced = "";
  int length = text.length();
  for(int i = 0; i < length; i ++) {
    char rep = text[i];
    if(rep == ' ') {
      replaced += c;
    } else {
      replaced += rep;
    }
  }
  return replaced;
}