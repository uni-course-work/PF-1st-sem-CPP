## Second week's problem set

Take user input and display a formatted output.

```cpp
  #include <iostream>
using namespace std;
int main () {
  const string initials = "What's your ";
  string first_name, second_name;
  int age;
  float height;
  cout << initials << "first name? ";
  cin >> first_name;
  cout << initials << "second name? ";
  cin >> second_name;
  cout << initials << "age? ";
  cin >> age;
  cout << initials << "height? (in Feet) ";
  cin >> height;

  std::cout <<"Your name is "<<first_name<<' '<<second_name<<'.'<<" You are "<<age<<" years old and "<<height<<" feet tall."<<'\n';
  return 0;
}
```

__BY ABDUL SAMAD__