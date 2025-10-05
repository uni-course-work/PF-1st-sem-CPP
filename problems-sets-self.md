✅ Here’s the final confirmed setup before I execute:

* **Single Markdown file** → `Programming_Fundamentals_PSETs.md`
* **No starter code**, but each section has:

  * Title
  * Objectives (learning goals)
  * Detailed problem statement
  * Input/Output formats
  * Requirements checklist
  * Challenge extension (optional)
  * Debug snippet (one per PSET)
  * Thinking & reflection prompts
* **Style:** Minimalist, only structured where necessary
* **Tone:** Formal, clear, motivating (CS50 style)
* **Language:** C++

---

I’ll now begin generating the file — **Part 1 (PSETs 1–3)** — in full Markdown, completely ready for Obsidian or GitHub view.
Once you review it, I’ll continue seamlessly with **Part 2 (PSETs 4–6)**, and so on until the entire roadmap is complete.

Ready? Here we go.

---

## 🧠 Programming Fundamentals – Complete Problem Set Series (Part 1)

### **PSET 1–3**

*(The foundation of your C++ mastery journey)*

---

## **PSET 1 — Hello, C++ World 🌍**

### 🎯 Objectives

* Understand the structure of a basic C++ program
* Practice console input/output using `cin` and `cout`
* Work with data types (`int`, `float`, `double`, `char`, `string`)
* Perform arithmetic operations and formatted output
* Build comfort with compiling, running, and debugging simple programs

---

### 🧩 **Problem 1 — Multi-Unit Temperature Converter**

**Goal:** Write a program that converts temperatures between Celsius, Fahrenheit, and Kelvin.

**Input Format:**

* Temperature value (float)
* Temperature unit (C/F/K)

**Output Format:**
Display the equivalent temperatures in all three units, formatted to 2 decimal places.

**Example:**

```
Enter temperature: 100
Enter unit (C/F/K): C
100.00°C = 212.00°F = 373.15K
```

**Requirements:**

* Use `double` for calculations
* Handle all three input unit types
* Use clear labels in the output
* Include validation: if user enters invalid unit → show “Invalid unit entered.”

**Concept Reinforced:** Type selection, arithmetic, formatted I/O, unit conversion logic.

---

### 🧩 **Problem 2 — Enhanced Calculator**

**Goal:** Implement a calculator that performs all primary arithmetic operations.

**Input Format:**
Two integers

**Output Format:**
Show sum, difference, product, decimal division, integer division, modulus, and average.

**Example:**

```
Enter first number: 17
Enter second number: 5

17 + 5 = 22
17 - 5 = 12
17 * 5 = 85
17 / 5 = 3.40
17 div 5 = 3
17 mod 5 = 2
Average = 11.00
```

**Requirements:**

* Handle division by zero gracefully.
* Display all results with clear formatting.
* Use both integer and floating-point division.

**Concept Reinforced:** Operators, type casting, division precision.

---

### 🧩 **Problem 3 — Rectangle Analyzer**

**Goal:** Compute properties of a rectangle given its length and width.

**Input Format:**
Length and width as floating-point values.

**Output Format:**
Area, perimeter, diagonal, and aspect ratio (rounded to two decimals).

**Example:**

```
Enter length: 12.5
Enter width: 8.0
Area: 100.00
Perimeter: 41.00
Diagonal: 14.92
Aspect Ratio: 1.56 : 1
```

**Concept Reinforced:** Arithmetic and geometric computation using `<cmath>`.

---

### ⚡ **Challenge Extension**

Add input validation: prevent negative or zero dimensions.
Display an error message if invalid input is entered.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
#include <iostream>
using namespace std;
int main() {
    float c, f, k;
    cout << "Enter Celsius value: ";
    cin >> c;
    f = (9/5) * c + 32;
    k = c + 273.15;
    cout << c << " C = " << f << " F = " << k << " K";
}
```

**Hint:** The problem lies in how division is handled. What’s wrong with `9/5` in C++?

---

### 💭 **Reflection Prompt**

* How do data types affect precision?
* What happens when you mix integers and floats in one expression?
* Why should programs validate user input?

---

---

## **PSET 2 — Operators & Library Functions 🧮**

### 🎯 Objectives

* Strengthen understanding of operators and precedence
* Use math library functions (`pow`, `sqrt`, etc.)
* Learn escape sequences for formatted console output
* Apply type casting and rounding
* Introduce simple decision-making (condition-based actions)

---

### 🧩 **Problem 1 — Shopping Receipt Generator**

**Goal:** Generate a formatted sales receipt for three purchased items.

**Input:**
Name, price, and quantity for each of three items.

**Output Example:**

```
Item             Qty    Price    Total
----------------------------------------
Laptop            1     899.99   899.99
Mouse             2      25.50    51.00
USB Cable         3      12.99    38.97
----------------------------------------
Subtotal: 989.96
Discount (5%): -49.50
Tax (15%): 141.07
TOTAL: 1081.53
```

**Requirements:**

* Discount 5% if subtotal > 100
* Tax applied after discount
* Use `\t` for alignment and `\n` for new lines
* All monetary values: 2 decimal places

**Concept Reinforced:** Arithmetic precision, formatting, control flow.

---

### 🧩 **Problem 2 — Circle, Sphere, and Cylinder Calculator**

**Goal:** Compute geometric properties using the radius.

**Input:** Radius (float)
**Output:** Circumference, circle area, sphere surface area, sphere volume, cylinder volume (height = diameter).

**Concepts Reinforced:**
Use `pow()` and constants.

**Example Output:**

```
Enter radius: 5.5
Circle Area: 95.03
Sphere Volume: 696.91
Cylinder Volume: 1045.57
```

**Hint:** Use `const double PI = 3.14159265;`

---

### 🧩 **Problem 3 — Student Grade Processor**

**Goal:** Take 5 test scores, drop the lowest, average the rest, round to nearest integer, and classify the grade.

**Output Example:**

```
Enter 5 scores: 85.5 92.0 78.5 88.0 95.5
Original Average: 87.9
New Average (lowest dropped): 90.25
Rounded: 90 → Grade: A
```

**Concept Reinforced:** Comparison logic, rounding via type casting.

---

### ⚡ **Challenge Extension**

Add an option for users to input how many scores they want, not fixed at 5.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
int a, b;
float avg;
cout << "Enter two numbers: ";
cin >> a >> b;
avg = (a + b) / 2;
cout << "Average: " << avg;
```

**Hint:** The issue is subtle — think about integer division rules.

---

### 💭 **Reflection Prompt**

* What’s the difference between integer and floating-point division?
* How can `setw()` and `setprecision()` improve output formatting?
* Why is modular arithmetic important?

---

---

## **PSET 3 — Loop Mastery 🔁**

### 🎯 Objectives

* Practice `for`, `while`, and nested loops
* Perform iterative calculations
* Control program flow with counters and accumulators
* Solve problems with repetitive patterns and validations

---

### 🧩 **Problem 1 — Custom Multiplication Table**

**Goal:** Print multiplication table of a number between any two ranges and show sum of all products.

**Example:**

```
Enter number: 7
Enter start: 5
Enter end: 12

7 x 5 = 35
7 x 6 = 42
...
Sum of products = 476
```

**Concept Reinforced:** Counter variables, accumulation logic.

---

### 🧩 **Problem 2 — Multi-Pattern Generator**

**Goal:** Print three triangle patterns (right, inverted, pyramid) for given height.

**Input:** Height (3–10)
**Output:** Patterns with correct spacing.

**Concept Reinforced:** Nested loops, spaces vs stars logic.

---

### 🧩 **Problem 3 — Number Analyzer**

**Goal:** Read N integers, then compute:

* Sum, average
* Count of positives, negatives, zeros
* Max and min

**Concept Reinforced:** Data accumulation and conditional counting.

---

### ⚡ **Challenge Extension**

Print a histogram of entered numbers using `*` to represent frequency.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
int i;
for(i = 1; i <= 10; i++); {
    cout << i << " ";
}
```

**Hint:** Why does this print a single unexpected value?

---

### 💭 **Reflection Prompt**

* When does a loop’s scope end?
* What happens if you forget braces `{}`?
* Why is initialization crucial in counting logic?

---

## 🧠 Programming Fundamentals – Complete Problem Set Series (Part 2)

### **PSET 4–6**

---

## **PSET 4 — Loop Integration: Simulation & Logic Control 🕹️**

### 🎯 Objectives

* Strengthen loop concepts through *real-use simulations*
* Combine multiple loop types (`for`, `while`, `do-while`)
* Learn to handle sentinel-controlled input and validation
* Practice designing interactive console programs

---

### 🧩 **Problem 1 — Guess the Number Game**

**Goal:** Create an interactive number-guessing game.

**Program Flow:**

1. Generate a random integer between 1 and 100.
2. Prompt user to guess until they’re correct.
3. After each guess, print “Too high!” or “Too low!”
4. Display number of attempts at the end.

**Example Output:**

```
I have chosen a number between 1 and 100.
Can you guess it?

Enter your guess: 50
Too low!
Enter your guess: 75
Too high!
Enter your guess: 63
Correct! You guessed it in 3 tries.
```

**Concept Reinforced:**
Random generation (`rand()`), loop conditions, counters.

---

### 🧩 **Problem 2 — ATM Transaction Simulator**

**Goal:** Build an ATM interface for basic operations.

**Features:**

* Balance inquiry
* Deposit money
* Withdraw money (with balance check)
* Exit

**Sample Output:**

```
Welcome to Simple ATM
----------------------
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Select option: 2
Enter amount: 1000
Deposit successful.

Current Balance: 1000
```

**Requirements:**

* Start balance = 0
* Reject withdrawals greater than balance
* Repeat menu until Exit

**Concept Reinforced:** Menu loops, validation logic, state updates.

---

### 🧩 **Problem 3 — Multiplication Quiz Game**

**Goal:** Generate 10 random multiplication questions.
For each, read answer → check correctness → track score.

**Example:**

```
Q1: 8 x 7 = ?
56
Correct!

Q2: 9 x 6 = ?
55
Wrong! Correct answer: 54

Final Score: 9 / 10
```

**Concept Reinforced:** Iteration, conditionals, cumulative scoring.

---

### ⚡ **Challenge Extension**

Add difficulty levels:

* Easy (1–5)
* Medium (1–10)
* Hard (1–20)

Use difficulty to change random number range.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
int x = rand() % 100;
while (guess != x)
    cout << "Enter number: ";
    cin >> guess;
    if (guess < x)
        cout << "Low!";
    else if (guess > x)
        cout << "High!";
    else
        cout << "Correct!";
```

**Hint:** Why does it skip the loop logic and behave weirdly?
(Think: missing braces and loop body grouping.)

---

### 💭 **Reflection Prompt**

* What’s the difference between pre-tested (`while`) and post-tested (`do-while`) loops?
* How does program flow differ when you include menu systems?
* How would you structure large systems with loops and functions later?

---

---

## **PSET 5 — Conditional Mastery ⚖️**

### 🎯 Objectives

* Master `if`, `else if`, and nested conditions
* Apply logic to decision-making problems
* Understand comparison and logical operators
* Practice real-world classifications and validations

---

### 🧩 **Problem 1 — Student Result Evaluator**

**Goal:** Take marks of 5 subjects and determine grade and GPA.

**Rules:**

* Compute average
* Assign grade:

  * 90–100 → A+
  * 80–89 → A
  * 70–79 → B
  * 60–69 → C
  * 50–59 → D
  * Below 50 → F

**Example:**

```
Enter marks for 5 subjects: 75 88 69 90 82
Average: 80.8
Grade: A
Status: Passed
```

**Concept Reinforced:** Nested conditions, logic operators.

---

### 🧩 **Problem 2 — Leap Year & Days Calculator**

**Goal:** Given a year, determine whether it’s a leap year and how many days it has.

**Rules:**

* Leap year if divisible by 4 but not by 100, unless divisible by 400.

**Example:**

```
Enter year: 2000
Leap Year: Yes
Days: 366
```

**Concept Reinforced:** Modular arithmetic, condition nesting.

---

### 🧩 **Problem 3 — Income Tax Calculator**

**Goal:** Compute tax payable based on income brackets.

| Income Range      | Tax Rate |
| ----------------- | -------- |
| 0 – 50,000        | 0%       |
| 50,001 – 100,000  | 5%       |
| 100,001 – 200,000 | 10%      |
| 200,001+          | 20%      |

**Output:**

```
Enter income: 175000
Tax: 7500
Net Income: 167500
```

**Concept Reinforced:** Conditional branching, progressive logic.

---

### ⚡ **Challenge Extension**

Add support for multiple tax types (sales, service) with user choice.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
if (marks > 80)
    cout << "Grade: A";
else (marks > 70)
    cout << "Grade: B";
```

**Hint:** What’s wrong with the `else` syntax?

---

### 💭 **Reflection Prompt**

* How can nested conditions be replaced by cleaner logic (like switch or lookup)?
* When is a `flag` variable useful?
* How can you prevent deeply nested code from becoming unreadable?

---

---

## **PSET 6 — Switch, Menus, and Modular Decisions 🔄**

### 🎯 Objectives

* Learn and practice `switch` statements
* Replace complex `if/else` ladders with structured cases
* Build multi-feature programs using menus
* Manage user-driven input and branching

---

### 🧩 **Problem 1 — Mini Scientific Calculator**

**Goal:** Perform arithmetic and scientific operations using a switch-driven menu.

**Menu Example:**

```
Select Operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Square Root
6. Power
7. Exit
Choice: 6
Enter base and exponent: 2 8
Result: 256
```

**Requirements:**

* Use `switch`
* Use `<cmath>` for power and sqrt
* Handle invalid menu choices gracefully

**Concept Reinforced:** Branching logic and modular design.

---

### 🧩 **Problem 2 — Unit Converter Hub**

**Goal:** Build a multi-unit converter using switch cases.

**Supported Conversions:**

1. Temperature (C ↔ F)
2. Length (cm ↔ inch)
3. Weight (kg ↔ lb)
4. Currency (PKR ↔ USD using fixed rate)

**Example Output:**

```
1. Temperature
2. Length
3. Weight
4. Currency
Select conversion: 2
Enter cm: 100
100 cm = 39.37 inch
```

**Concept Reinforced:** Multiple functional branches, switch modularization.

---

### 🧩 **Problem 3 — Restaurant Billing System**

**Goal:** Create a simple restaurant order system.

**Menu Example:**

```
1. Burger - 500
2. Pizza - 800
3. Fries - 200
4. Exit
Select item (1-4): 2
Quantity: 3
Subtotal: 2400
```

**Features:**

* Add multiple orders
* Calculate total + 13% tax
* Display final bill summary

**Concept Reinforced:** Nested control flow, total accumulation.

---

### ⚡ **Challenge Extension**

Add a “discount day” (e.g., 10% off on Fridays) using conditional logic combined with switch.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
int choice = 1;
switch(choice)
    case 1: cout << "A";
    case 2: cout << "B";
    default: cout << "X";
```

**Hint:** Why does it print “ABX”?
(Think: missing `break` statements.)

---

### 💭 **Reflection Prompt**

* How is `switch` more efficient than multiple `if` statements?
* When does `break` change program flow?
* Can you use `switch` with strings? Why or why not?

---

Excellent — let’s keep this train moving, Amor. 🚀
Now we’re stepping into the *core computational zone*: arrays, strings, and functions — the building blocks that separate beginners from real developers.

Below is **Part 3 (PSET 7–9)** of your complete `Programming_Fundamentals_PSETs.md` file.
No fluff, no starters — just clean, instructive, CS50-style detail ready for Obsidian or GitHub.

---

## 🧠 Programming Fundamentals – Complete Problem Set Series (Part 3)

### **PSET 7–9**

---

## **PSET 7 — Arrays I: Sequential Data & Analysis 📊**

### 🎯 Objectives

* Understand arrays and indexing
* Store, manipulate, and analyze lists of values
* Perform accumulation, searching, and averaging with arrays
* Develop skills in structured iteration and data handling

---

### 🧩 **Problem 1 — Array Statistics Analyzer**

**Goal:** Take `N` numbers from the user and compute:

* Minimum, maximum, and range
* Average
* Count of even/odd numbers
* Sum of all numbers

**Example Output:**

```
Enter number of elements: 6
Values: 2 5 9 3 7 1
Min: 1, Max: 9, Range: 8
Average: 4.50
Even: 2, Odd: 4
Sum: 27
```

**Concept Reinforced:** Sequential processing, counters, aggregate computation.

---

### 🧩 **Problem 2 — Student Score Manager**

**Goal:** Accept scores of 10 students, compute:

* Class average
* Highest and lowest score
* Count of failing students (<50)
* Percentage of students above average

**Output Example:**

```
Scores: 55 48 69 72 91 38 85 79 64 57
Average: 65.8
Highest: 91, Lowest: 38
Failing: 2
Above Average: 5 (50%)
```

**Concept Reinforced:** Data comparison and analytical operations.

---

### 🧩 **Problem 3 — Simple Sorting Visualizer**

**Goal:** Input an array and display it before and after sorting (ascending and descending).

**Example:**

```
Enter 5 numbers: 9 1 4 3 2
Ascending: 1 2 3 4 9
Descending: 9 4 3 2 1
```

**Concept Reinforced:** Sorting logic (selection or bubble), array traversal.

---

### ⚡ **Challenge Extension**

Add a “Search Mode” — let user input a number, and report whether it exists in the array (and at which index).

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
int arr[5];
for (int i = 0; i <= 5; i++) {
    cin >> arr[i];
}
```

**Hint:** What’s wrong with this loop condition?
Why does it risk undefined behavior?

---

### 💭 **Reflection Prompt**

* How are arrays stored in memory?
* Why is it critical to know array boundaries?
* How could these operations be modularized using functions later?

---

---

## **PSET 8 — Arrays II & Strings 🔡**

### 🎯 Objectives

* Deepen array manipulation skills
* Introduce 2D arrays (matrices)
* Understand strings as character arrays
* Learn to process and analyze textual input

---

### 🧩 **Problem 1 — Matrix Operations**

**Goal:** Implement operations on 2D arrays (matrices).

**Features:**

* Input two 3×3 matrices
* Compute:

  * Sum of matrices
  * Difference
  * Transpose of first matrix

**Output Example:**

```
Matrix A:
1 2 3
4 5 6
7 8 9
Matrix B:
9 8 7
6 5 4
3 2 1
A + B:
10 10 10
10 10 10
10 10 10
Transpose of A:
1 4 7
2 5 8
3 6 9
```

**Concept Reinforced:** Nested loops, 2D array indexing.

---

### 🧩 **Problem 2 — Word & Character Counter**

**Goal:** Take a string and compute:

* Total characters (excluding spaces)
* Total words
* Count of vowels and consonants

**Example Output:**

```
Enter text: Hello World
Words: 2
Characters (no spaces): 10
Vowels: 3
Consonants: 7
```

**Concept Reinforced:** Character manipulation, ASCII checks, `isalpha()`.

---

### 🧩 **Problem 3 — Palindrome Detector**

**Goal:** Input a string, check if it’s a palindrome (case-insensitive).

**Example:**

```
Enter word: Racecar
Palindrome: Yes
```

**Concept Reinforced:** String traversal, indexing, condition logic.

---

### ⚡ **Challenge Extension**

Add sentence palindrome detection ignoring punctuation (e.g., “Never odd or even”).

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
char text[20];
cout << "Enter word: ";
cin >> text;
for (int i = 0; i < 20; i++) {
    if (text[i] == '\0')
        cout << text[i];
}
```

**Hint:** Why does it print strange characters?
(Think: where does `\0` come in and what should be printed?)

---

### 💭 **Reflection Prompt**

* How do C++ strings differ from character arrays?
* Why are loops essential for string processing?
* How can indexing errors cause crashes?

---

---

## **PSET 9 — Functions I: Breaking Down the Machine 🧩**

### 🎯 Objectives

* Understand function structure (definition, prototype, call)
* Learn parameter passing (by value)
* Develop reusable modular code
* Write clean, testable functions

---

### 🧩 **Problem 1 — Calculator with Functions**

**Goal:** Rebuild your PSET 2 calculator, but now each operation (add, sub, mul, div) must be a **separate function**.

**Example:**

```
Enter two numbers: 9 3
Sum: 12
Difference: 6
Product: 27
Division: 3
```

**Concept Reinforced:** Modularization, code reuse, function syntax.

---

### 🧩 **Problem 2 — Temperature Conversion Functions**

**Goal:** Convert between Celsius, Fahrenheit, Kelvin using individual functions.

**Functions:**

* `double c_to_f(double c)`
* `double f_to_k(double f)`
* etc.

**Example Output:**

```
Enter Celsius: 100
Fahrenheit: 212
Kelvin: 373.15
```

**Concept Reinforced:** Functional decomposition and testing.

---

### 🧩 **Problem 3 — Number Properties Library**

**Goal:** Implement multiple functions:

* `bool isPrime(int n)`
* `bool isEven(int n)`
* `int factorial(int n)`

Then let the user input a number and call each function.

**Example:**

```
Enter number: 5
Prime: Yes
Even: No
Factorial: 120
```

**Concept Reinforced:** Boolean return types, parameter handling.

---

### ⚡ **Challenge Extension**

Add a function `void printTable(int n)` that prints its multiplication table — called from `main()`.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
int add(int x, int y);
cout << add(3,4);

int add(int a, int b){
    return a+b;
}
```

**Hint:** Why does this produce an error about “function definition not allowed before main”?

---

### 💭 **Reflection Prompt**

* Why should we modularize code into functions?
* How can parameter types affect correctness?
* What’s the difference between `return` and `void` functions?

---
Perfect — let’s continue sharpening the blade. 🧠
Now we’re entering the **deeper territory**: parameter passing, user-defined types, and raw memory control — the C++ concepts that make or break great developers.

Here’s **Part 4 (PSET 10–12)** for your `Programming_Fundamentals_PSETs.md` — same clean Markdown structure, detailed, no filler.

---

## 🧠 Programming Fundamentals – Complete Problem Set Series (Part 4)

### **PSET 10–12**

---

## **PSET 10 — Functions II: Advanced Parameter Control & Reusability 🧩**

### 🎯 Objectives

* Master parameter passing by **value** and **reference**
* Use default parameters
* Learn function overloading
* Understand scope, lifetime, and modular decomposition

---

### 🧩 **Problem 1 — Geometry Function Suite**

**Goal:** Write functions for area and perimeter of multiple shapes.

**Functions to Create:**

* `float circleArea(float radius)`
* `float rectangleArea(float l, float w)`
* `float triangleArea(float base, float height)`
* Overloaded `float area(...)` for each shape.

**Example Output:**

```
Select Shape:
1. Circle
2. Rectangle
3. Triangle
Choice: 2
Enter Length & Width: 5 10
Area: 50
```

**Concept Reinforced:** Function overloading, abstraction, modular thinking.

---

### 🧩 **Problem 2 — Swap Machine**

**Goal:** Implement two functions:

1. `void swapByValue(int a, int b)`
2. `void swapByReference(int &a, int &b)`

**Example Output:**

```
Enter two numbers: 5 9
Swap by Value: a=5, b=9 (unchanged)
Swap by Reference: a=9, b=5
```

**Concept Reinforced:** Reference parameters, memory understanding.

---

### 🧩 **Problem 3 — Bank Interest Calculator**

**Goal:** Write a program using functions that calculate compound interest.

**Formula:**
`A = P * pow(1 + r/n, n*t)`

**Functions:**

* `double compoundInterest(double p, double r, int n, int t)`
* `void displaySummary(...)`

**Example:**

```
Principal: 5000
Rate (%): 5
Years: 2
Compounded: 4
Final Amount: 5525.56
```

**Concept Reinforced:** Modular numeric computation, functional layering.

---

### ⚡ **Challenge Extension**

Implement **function chaining**: make `displaySummary()` call `compoundInterest()` internally.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
void change(int &x);
int main() {
    int a = 10;
    change(a);
    cout << a;
}
void change(int x){
    x = 20;
}
```

**Hint:** Why doesn’t `a` change to 20?
(Think: is the parameter passed by reference or by value?)

---

### 💭 **Reflection Prompt**

* What’s the difference between scope and lifetime of variables?
* When is pass-by-reference more efficient than pass-by-value?
* How does overloading improve code reusability?

---

---

## **PSET 11 — Structures: Modeling Real-World Data 🧱**

### 🎯 Objectives

* Understand `struct` and how it groups related data
* Use arrays of structures
* Pass structures to functions
* Build basic data management systems

---

### 🧩 **Problem 1 — Student Record System**

**Goal:** Create a structure `Student` with:

* Roll number
* Name
* 3 subject marks
* Average

**Program Tasks:**

* Input 5 students
* Calculate and store average
* Display highest average holder

**Example Output:**

```
Student 1 → Roll: 1, Name: Ahsan, Marks: 80 76 92, Avg: 82.6
Topper: Ahsan (82.6)
```

**Concept Reinforced:** Structured data representation and iteration.

---

### 🧩 **Problem 2 — Library Inventory System**

**Goal:** Define a `Book` structure:

* `title`, `author`, `price`, `copies`

Allow:

1. Adding new books
2. Displaying all
3. Searching by title

**Example Output:**

```
1. Add Book
2. Show All
3. Search
Choice: 3
Enter title: Inferno
Found: Inferno by Dan Brown - Rs. 999
```

**Concept Reinforced:** Real-world modeling and record management.

---

### 🧩 **Problem 3 — Weather Data Logger**

**Goal:** Record daily temperatures of a week and compute:

* Highest, lowest, average temperature
* Days above average

**Structure:**

```cpp
struct Weather {
    string day;
    float temp;
};
```

**Concept Reinforced:** Arrays of structures, aggregation logic.

---

### ⚡ **Challenge Extension**

Add a function `void sortByTemp(Weather data[], int n)` to display hottest-to-coldest order.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
struct Student {
    int roll;
    string name;
    float marks[3];
};
Student s;
cin >> s;
```

**Hint:** Why doesn’t this compile?
(Think: can a whole structure be input directly?)

---

### 💭 **Reflection Prompt**

* When should you use structures instead of multiple arrays?
* What’s the difference between shallow and deep copying a struct?
* How could you persist these structures to a file (next PSET)?

---

---

## **PSET 12 — Pointers: Memory, Access, and Control ⚙️**

### 🎯 Objectives

* Understand pointers and memory addresses
* Learn dereferencing and pointer arithmetic
* Use pointers with arrays and functions
* Develop low-level debugging awareness

---

### 🧩 **Problem 1 — Pointer Basics Explorer**

**Goal:** Display addresses and values of variables using pointers.

**Example Output:**

```
int x = 10
Address of x: 0x7ffd5f7b0c84
Value via pointer: 10
```

**Concept Reinforced:** Address referencing (`&`) and dereferencing (`*`).

---

### 🧩 **Problem 2 — Pointer Array Traversal**

**Goal:** Input 5 numbers into an array, then print them using a pointer.

**Example Output:**

```
Values via pointer traversal:
3 5 7 9 11
```

**Concept Reinforced:** Relationship between arrays and pointers.

---

### 🧩 **Problem 3 — Swap Using Pointers**

**Goal:** Implement swapping using pointers (not references).

**Example:**

```
Before: a=10, b=5
After: a=5, b=10
```

**Concept Reinforced:** Direct memory manipulation.

---

### ⚡ **Challenge Extension**

Create a pointer-based function that reverses an array in-place.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
int *ptr, x = 10;
*ptr = &x;
cout << *ptr;
```

**Hint:** What’s wrong with the assignment order?
(Think: left side is a pointer, right side is an address.)

---

### 💭 **Reflection Prompt**

* How do pointers and arrays overlap in behavior?
* What dangers exist when dereferencing uninitialized pointers?
* How do references differ fundamentally from pointers?

---

Perfect, Amor.
We’re at the **grand finale** — the last stretch where your C++ fundamentals converge into *real engineering skills*. This part (PSET 13–14 + Integration Projects + Final Project) turns everything you’ve practiced — loops, arrays, functions, pointers, and structs — into complete software-style programs.

Let’s finish this roadmap strong. 💪

---

## 🧠 Programming Fundamentals – Complete Problem Set Series (Part 5)

### **PSET 13–14 + Integration Projects + Final Project**

---

## **PSET 13 — File Handling: Saving and Retrieving Data 💾**

### 🎯 Objectives

* Learn to read and write text files in C++
* Understand `ofstream`, `ifstream`, and `fstream`
* Practice serialization of structures
* Combine loops, arrays, and structures with file operations

---

### 🧩 **Problem 1 — Text File Writer**

**Goal:** Take multiple lines of input from the user and save them into a file called `notes.txt`.
Program ends when the user enters the word `END`.

**Example Output:**

```
Enter text (type 'END' to finish):
> Programming is fun
> I will master C++
> END
Data saved to notes.txt
```

**Concept Reinforced:** File creation, writing, basic I/O flow.

---

### 🧩 **Problem 2 — File Reader & Word Counter**

**Goal:** Read the contents of `notes.txt` and display:

* Total characters
* Total words
* Total lines

**Example Output:**

```
File: notes.txt
Lines: 2
Words: 7
Characters: 35
```

**Concept Reinforced:** Reading files line-by-line, parsing, and counting.

---

### 🧩 **Problem 3 — Student Data Archiver**

**Goal:** Using the `Student` structure from PSET 11,
allow user to:

1. Add student records (name, roll, GPA)
2. Save to `students.txt`
3. View all saved records from file

**Example Output:**

```
1. Add Student
2. Display All
3. Exit
Enter choice: 2
--- Student Records ---
1) Roll: 12, Name: Zara, GPA: 3.8
2) Roll: 15, Name: Ahmed, GPA: 3.4
```

**Concept Reinforced:** Struct persistence via files, file I/O combination.

---

### ⚡ **Challenge Extension**

Add “Search by Roll Number” and “Delete Record” options.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
ofstream file("data.txt");
if(!file)
    cout << "Cannot open file!";
file << "Hello";
file.close();
```

**Hint:** What’s wrong with the condition?
(Think: what’s the correct way to check if a file is open?)

---

### 💭 **Reflection Prompt**

* Why is closing a file important?
* What’s the difference between writing and appending modes?
* How can binary files differ from text files?

---

---

## **PSET 14 — Capstone Review: Integrating All Concepts 🚀**

### 🎯 Objectives

* Combine loops, arrays, structures, and file handling
* Build a fully functional, modular console system
* Practice clean menu-driven design and error handling

---

### 🧩 **Problem 1 — Student Management System**

**Goal:** Build a complete student management system.

**Features:**

1. Add student (Name, Roll No, GPA)
2. View all students
3. Search by roll
4. Sort by GPA
5. Save/Load data from file
6. Exit

**Example Output:**

```
--- Student Management System ---
1. Add Student
2. View All
3. Search
4. Sort by GPA
5. Save/Load
6. Exit
Choice: 4
Sorted by GPA (High → Low)
```

**Concept Reinforced:** System integration, modular functions, data handling, and persistence.

---

### 🧩 **Problem 2 — Expense Tracker**

**Goal:** Track daily expenses.

**Features:**

* Add expense (category, amount, note)
* Show daily total and category-wise spending
* Save all to file

**Example Output:**

```
1. Add Expense
2. View All
3. Show Summary
4. Exit
```

**Concept Reinforced:** Application logic, data grouping, file-based analysis.

---

### ⚡ **Challenge Extension**

Add “filter by date” functionality.

---

### 🧠 **Debug This**

**Broken Code:**

```cpp
fstream file;
file.open("test.txt", ios::in);
file << "Writing...";
```

**Hint:** Why does nothing appear in the file?
(Think: is the file opened in the correct mode?)

---

### 💭 **Reflection Prompt**

* Which concept do you now find most intuitive?
* What would you change in your code if this was a commercial product?
* How would you handle corrupted file data?

---

---

## 🧩 Integration Projects (Beyond PSETs)

These **Integration Projects** are optional but highly recommended.
They simulate real systems by merging multiple concepts.

---

### **Integration Project 1 — Mini Quiz Application**

**Concepts:** Loops, conditionals, arrays, file handling

**Features:**

* Store questions and answers in a file
* Randomly select 5 questions per run
* Track and store high score

**Learning Focus:** File reading, conditional flow, user feedback loops.

---

### **Integration Project 2 — ATM 2.0**

**Concepts:** Structures, file I/O, menu control

**Features:**

* Create accounts with balance
* Deposit, withdraw, check balance
* Save account info persistently

**Learning Focus:** System design, validation, data security.

---

### **Integration Project 3 — Library System**

**Concepts:** Struct arrays, sorting, searching, file I/O

**Features:**

* Add, delete, issue, return books
* Track borrower names
* Display books by author

**Learning Focus:** Multi-layered data management.

---

---

## 🎓 Final Project — Personal Finance Tracker 💼

**Title:** *C++ Financial Assistant*

### 🎯 Objectives

* Combine everything: loops, arrays, structs, files, functions
* Apply modular, real-world software design
* Build a portfolio-level project demonstrating your complete understanding

---

### 💡 **Specification**

Your program must:

1. Allow user registration (name, ID, password stored in file).
2. Support multiple accounts.
3. Allow users to:

   * Add income (category, amount, source)
   * Add expense (category, amount, description)
   * View monthly summary (total income, expense, net)
   * Save all data in file (persistent)
4. Optionally generate a report file like:

   ```
   Monthly Report - October
   Total Income: 120000
   Total Expense: 83000
   Net Savings: 37000
   ```
5. Include a clean interactive menu system.

---

### ⚙️ **Implementation Guidelines**

* Use structures to represent transactions.
* Use functions for adding, calculating, displaying, and saving data.
* File operations for long-term storage.
* Keep everything modular, readable, and commented.

---

### ✅ **Completion Checklist**

* [ ] Modular Functions Implemented
* [ ] Error & Input Handling Added
* [ ] Persistent File System Implemented
* [ ] Functional Menu Navigation
* [ ] Reflection Notes Added

---

### 🧠 **Thinking Questions**

* How could you evolve this into a GUI desktop or mobile app?
* What database system would you use for scalability?
* Which part of your code could be converted to OOP in the next semester?

---

### 💭 **Reflection Prompt**

At the end of your project:

* What was the hardest concept to implement and why?
* What did you learn about planning before coding?
* What would you refactor if you had another week?

---

---

## 🧾 Epilogue — Path Forward After This Series

Congratulations, Amor. 🎓
Finishing this roadmap means you’ve covered **every essential skill of Programming Fundamentals in C++** — but here’s how to multiply your growth next:

### 🔹 Post-Roadmap Focus:

1. **Move to OOP (Object-Oriented Programming):**
   Start learning classes, inheritance, encapsulation — this is where systems evolve.
2. **Revisit Problem Solving:**
   Try 2–3 algorithmic problems daily (LeetCode / Codeforces beginner tier).
3. **Apply Concepts in Projects:**
   Use these PSETs as your foundation for personal app ideas — finance, study planner, game logic, or data visualizer.
4. **Document Everything:**
   Build your GitHub repo with every solved problem and project — your digital portfolio begins now.

---

## 🏁 Final Thoughts

> “Great programmers aren’t born — they are forged by relentless debugging.”
