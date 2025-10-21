## 🧠 Programming Fundamentals – Complete Problem Set Series (Restructured)

This series is designed to build a strong, practical foundation in C++ programming. Each problem set introduces core concepts and then challenges you to apply them to scenarios that mirror real-world software development tasks.

---

### **PSET 1–3**

*(The foundation of your C++ mastery journey)*

---

## **PSET 1 — Core I/O & Arithmetic**

### 🎯 Objectives

*   Understand the structure of a basic C++ program.
*   Master console input/output using `cin` and `cout`.
*   Work with fundamental data types (`int`, `double`, `char`, `string`).
*   Perform arithmetic operations and produce formatted output.
*   Build comfort with compiling, running, and debugging simple programs.

---

### 🧩 **Problem 1 — Multi-Scale Temperature Converter**

**Goal:** Write a robust program that converts temperatures between Celsius, Fahrenheit, and Kelvin.

**Scenario:** You are building a utility for a weather station that needs to process temperature data from different global sources.

**Requirements:**

*   Prompt the user for a temperature value and its unit (C, F, or K).
*   Handle both uppercase and lowercase unit inputs.
*   Calculate and display the temperature in all three scales, formatted to two decimal places.
*   **Input Validation:** If the user enters an invalid unit, display a clear error message and exit gracefully. Implement a check to prevent non-numeric temperature inputs from crashing the program.

**Example:**

```
Enter temperature and unit (e.g., 32 F): 100 C
100.00°C = 212.00°F = 373.15K
```

**Concepts Reinforced:** Data types, arithmetic precision, formatted I/O, conditional logic, input validation.

---

### 🧩 **Problem 2 — Interactive Arithmetic Calculator**

**Goal:** Implement a menu-driven calculator that performs primary arithmetic operations.

**Scenario:** You are creating a basic command-line tool for students. Instead of performing all calculations at once, the user should be able to choose the desired operation.

**Requirements:**

*   Present a menu with options: Addition, Subtraction, Multiplication, Division, and Exit.
*   Prompt the user to enter two numbers.
*   Based on the user's choice, perform the calculation and display the result.
*   For division, show both the floating-point result (e.g., `17 / 5 = 3.4`) and the integer division with remainder (e.g., `17 div 5 = 3, rem 2`).
*   **Error Handling:** Gracefully handle division by zero by displaying an error message instead of crashing.
*   The program should loop back to the menu after each calculation until the user chooses to exit.

**Concepts Reinforced:** Operators, type casting, menu-driven logic (`if/else` or `switch`), loop control.

---

### 🧩 **Problem 3 — Geometric Property Analyzer**

**Goal:** Compute and display key properties of a rectangle.

**Scenario:** A CAD tool needs a function to quickly analyze rectangular shapes.

**Requirements:**

*   Prompt the user for the length and width of a rectangle.
*   **Input Validation:** Ensure that both length and width are positive numbers. If not, display an error and ask for the input again.
*   Calculate and display the rectangle's area, perimeter, and the length of its diagonal.
*   Calculate and display the aspect ratio, formatted as `W:H` (e.g., `1.78:1` for a 16:9 screen). Normalize the ratio so the smaller dimension is `1`.

**Concepts Reinforced:** Geometric computation, using the `<cmath>` library (`sqrt`, `pow`), input validation loops.

---

### 💭 **Reflection Prompt**

*   How do data types (`int` vs. `double`) affect the precision and outcome of calculations?
*   What are the benefits of validating user input at the source?
*   When is a `do-while` loop more appropriate for input validation than a `while` loop?

---

## **PSET 2 — Operators & Standard Libraries**

### 🎯 Objectives

*   Strengthen understanding of operator precedence and associativity.
*   Utilize standard library functions, especially from `<cmath>` and `<iomanip>`.
*   Learn to format console output professionally using escape sequences and manipulators.
*   Apply type casting for correct calculations and rounding.

---

### 🧩 **Problem 1 — Tiered Discount Receipt Generator**

**Goal:** Generate a formatted sales receipt with a tiered discount system.

**Scenario:** You are programming a point-of-sale system for a retail store that offers discounts based on spending.

**Requirements:**

*   First, ask the user for the number of unique items being purchased.
*   For each item, take its name, price, and quantity as input.
*   Calculate the subtotal.
*   Apply a discount based on the following tiers:
    *   Subtotal > $500: **10% discount**
    *   Subtotal > $200: **7% discount**
    *   Subtotal > $100: **5% discount**
*   Apply a fixed 15% sales tax to the discounted total.
*   Display a neatly formatted bill, aligning all columns correctly. All monetary values must be shown to two decimal places.

**Concepts Reinforced:** Arithmetic precision, advanced formatting (`<iomanip>`), multi-level conditional logic.

---

### 🧩 **Problem 2 — Advanced Geometric Calculator**

**Goal:** Compute various geometric properties based on a single radius value.

**Scenario:** You are building a geometry library. Your task is to create a tool that provides comprehensive data for circular and spherical objects.

**Requirements:**

*   Take a single floating-point value, the radius, as input.
*   Calculate and display:
    *   The circumference and area of a circle.
    *   The surface area and volume of a sphere.
    *   The volume of a cylinder where the height is equal to its diameter (2 * radius).
*   Use the `M_PI` constant from the `<cmath>` library for `pi`. You may need to define `_USE_MATH_DEFINES` before including the library, a common practice in C++.

**Concepts Reinforced:** Using library constants, `pow()` function, understanding geometric formulas.

---

### 🧩 **Problem 3 — Dynamic Student Grade Processor**

**Goal:** Calculate a student's final grade after dropping the lowest score.

**Scenario:** A professor needs a flexible tool to calculate grades. The number of tests can vary.

**Requirements:**

*   First, ask the user how many test scores they want to enter.
*   Read that many scores from the user.
*   Find and drop the single lowest score.
*   Calculate the average of the remaining scores.
*   Display the original average, the new average (after dropping the lowest), and the final letter grade based on the new average (A: 90+, B: 80-89, C: 70-79, D: 60-69, F: <60).

**Concepts Reinforced:** Comparison logic, finding min/max in a set of inputs, dynamic averaging.

---

### 💭 **Reflection Prompt**

*   What is the difference between integer division and floating-point division, and when would you intentionally use each?
*   How can `setw()`, `setprecision()`, and `fixed` from `<iomanip>` be combined to create professional-looking tables?
*   Why is it sometimes necessary to explicitly cast a variable from one type to another (e.g., `static_cast<double>(...)`)?

---

## **PSET 3 — Loop Mastery & Pattern Generation**

### 🎯 Objectives

*   Master `for`, `while`, and nested loops for iterative tasks.
*   Use loops to perform accumulation (summing, counting) and data validation.
*   Solve problems involving repetitive patterns and structured data processing.

---

### 🧩 **Problem 1 — Advanced Multiplication Table**

**Goal:** Print a multiplication table for any number, over any range, and include an analysis of the results.

**Requirements:**

*   Prompt the user for a number, a starting multiplier, and an ending multiplier.
*   **Input Validation:** Ensure the starting multiplier is less than the ending multiplier. If not, swap them.
*   Print the multiplication table for the given range.
*   After printing the table, display the sum of all the products generated.
*   Also, count and display how many of the products are even and how many are odd.

**Concepts Reinforced:** Counter-controlled loops, accumulator variables, input validation.

---

### 🧩 **Problem 2 — Geometric Pattern Generator**

**Goal:** Print multiple geometric patterns using nested loops based on a user-defined height.

**Requirements:**

*   Prompt the user for a pattern height (e.g., an integer between 3 and 15).
*   Using nested loops, generate and print the following patterns:
    1.  A solid diamond.
    2.  A hollow square.
    3.  A number pyramid (where each row `n` contains the number `n`).

**Example for a diamond of height 5:**

```
  *
 ***
*****
 ***
  *
```

**Concepts Reinforced:** Nested loops, controlling spacing and characters, complex pattern logic.

---

### 🧩 **Problem 3 — Statistical Number Analyzer**

**Goal:** Read an arbitrary number of integers from the user and perform a full statistical analysis.

**Requirements:**

*   First, ask the user how many numbers they wish to analyze.
*   Read that many integers into your program.
*   Calculate and display the following:
    *   The sum and average of all numbers.
    *   A count of positive numbers, negative numbers, and zeros.
    *   The single largest and smallest number entered.
*   **Histogram:** After the analysis, print a simple horizontal histogram. For each number entered, print a line with that number followed by a number of asterisks (`*`) equal to its value (only for positive numbers).

**Concepts Reinforced:** Data aggregation, conditional counting within loops, finding min/max, data visualization.

---

### 💭 **Reflection Prompt**

*   What is the "scope" of a variable declared inside a loop? What happens to it after the loop finishes?
*   Why is it critical to initialize accumulator variables (like sums and counters) to zero before a loop begins?
*   Describe a scenario where a `while` loop is a better choice than a `for` loop.

---
## 🧠 Programming Fundamentals – Complete Problem Set Series (Part 2)

### **PSET 4–6**

---

## **PSET 4 — Loop Integration: Simulation & Logic Control 🕹️**

### 🎯 Objectives

*   Strengthen loop concepts through real-use simulations.
*   Combine multiple loop types (`for`, `while`, `do-while`) to build interactive programs.
*   Handle sentinel-controlled input and complex validation logic.
*   Practice designing stateful, interactive console applications.

---

### 🧩 **Problem 1 — Guess the Number: Limited Attempts**

**Goal:** Create an interactive number-guessing game with a limited number of tries.

**Program Flow:**

1.  Generate a random integer between 1 and 100.
2.  Give the player a fixed number of attempts (e.g., 7).
3.  Prompt the user to guess the number.
4.  After each guess, print "Too high!" or "Too low!" and show the number of attempts remaining.
5.  If the player guesses correctly, they win.
6.  If they run out of attempts, they lose, and the correct number is revealed.
7.  Ask if they want to play again.

**Concepts Reinforced:** Random number generation (`rand()`), loop control with multiple exit conditions, user interaction loops.

---

### 🧩 **Problem 2 — ATM Transaction Simulator with Fees**

**Goal:** Build an ATM interface that manages a user's bank account and includes transaction fees.

**Features:**

*   Start the user with an initial balance (e.g., $1000).
*   Present a menu: Check Balance, Deposit, Withdraw, Exit.
*   **Withdrawals:**
    *   Reject withdrawals greater than the current balance.
    *   Apply a transaction fee (e.g., $1.50) for every withdrawal.
    *   Ensure the user cannot withdraw an amount that would leave their balance negative *after* the fee is applied.
*   **Deposits:** Allow the user to deposit money into their account.
*   The menu should repeat until the user selects "Exit".

**Concepts Reinforced:** Menu-driven loops, state management (updating the balance), complex validation logic.

---

### 🧩 **Problem 3 — Multiplication Quiz with Difficulty Levels**

**Goal:** Generate random multiplication questions and track the user's score.

**Program Flow:**

1.  Ask the user to select a difficulty level:
    *   **Easy:** Numbers between 1 and 5.
    *   **Medium:** Numbers between 1 and 10.
    *   **Hard:** Numbers between 1 and 20.
2.  Generate 10 random multiplication questions based on the chosen difficulty.
3.  For each question, read the user's answer and tell them if they were correct. If wrong, provide the correct answer.
4.  At the end of the quiz, display their final score (e.g., "You scored 8 out of 10.") and a percentage.

**Concepts Reinforced:** Iteration with a fixed count, conditional scoring, using variables to control program logic.

---

### 💭 **Reflection Prompt**

*   What’s the difference between a pre-tested loop (`while`) and a post-tested loop (`do-while`)? When is one clearly better than the other?
*   How do you manage a program's "state" (e.g., the account balance in the ATM)? Why are global variables often a poor choice for this?
*   In the guessing game, what are the two conditions that can end the main game loop? How do you implement this logic?

---

## **PSET 5 — Advanced Conditional Logic**

### 🎯 Objectives

*   Master `if`, `else if`, and nested conditional statements.
*   Apply complex logical operators (`&&`, `||`, `!`) to solve decision-making problems.
*   Translate real-world rules and classifications into executable code.

---

### 🧩 **Problem 1 — Personalized Fitness Advisor**

**Goal:** Create a program that suggests a basic fitness and hydration plan based on user input.

**Scenario:** You're building a simple health app. The program should ask the user for their activity level and goals to provide a recommendation.

**Rules:**

1.  **Input:**
    *   Activity Level: `sedentary`, `moderate`, `active`.
    *   Primary Goal: `lose weight`, `build muscle`, `maintain health`.
2.  **Logic:**
    *   **Hydration:**
        *   `sedentary`: "Drink at least 2 liters of water a day."
        *   `moderate`: "Drink at least 3 liters of water a day."
        *   `active`: "Drink at least 4 liters of water a day."
    *   **Workout:**
        *   `lose weight`: "Focus on 30-45 minutes of cardio (running, cycling) 5 days a week."
        *   `build muscle`: "Focus on weight training 4 days a week, targeting different muscle groups."
        *   `maintain health`: "Incorporate a mix of cardio and light training 3-4 days a week."
3.  **Output:** Combine the hydration and workout advice into a single, clear recommendation.

**Concepts Reinforced:** Nested conditions, string comparisons, combining logical operators.

---

### 🧩 **Problem 2 — Leap Year & Day of the Week Calculator**

**Goal:** Given any year and month, determine if the year is a leap year and calculate the number of days in that month.

**Rules:**

*   A year is a leap year if it is divisible by 4, unless it is also divisible by 100 but *not* by 400. (e.g., 2000 was a leap year, 1900 was not).
*   **Input:** A year (e.g., 2023) and a month (e.g., 2 for February).
*   **Output:**
    *   "Year [year] is/is not a leap year."
    *   "Month [month] has [days] days."
    *   Your logic for days in the month must account for February having 29 days in a leap year.

**Concepts Reinforced:** Complex modular arithmetic, deeply nested conditional logic.

---

### 🧩 **Problem 3 — Marginal Income Tax Calculator**

**Goal:** Compute income tax based on a progressive, marginal tax bracket system.

**Scenario:** Most tax systems are "marginal." This means you pay different rates on different portions of your income.

**Brackets:**

*   **Bracket 1:** $0 – $50,000 is taxed at **5%**.
*   **Bracket 2:** $50,001 – $150,000 is taxed at **15%**.
*   **Bracket 3:** Any income above $150,000 is taxed at **25%**.

**Example Calculation for an income of $175,000:**

*   Tax on first $50,000: `$50,000 * 0.05 = $2,500`
*   Tax on next $100,000: `$100,000 * 0.15 = $15,000`
*   Tax on remaining $25,000: `$25,000 * 0.25 = $6,250`
*   **Total Tax:** `$2,500 + $15,000 + $6,250 = $23,750`

**Requirements:**

*   Take a single income value from the user.
*   Calculate the total tax owed based on the marginal rates.
*   Display the total tax and the final net income after tax.

**Concepts Reinforced:** Complex conditional branching, progressive calculation, real-world logic translation.

---

### 💭 **Reflection Prompt**

*   How can you simplify a deeply nested `if-else` structure? Could a different approach (like using a `switch` or functions) make the code more readable?
*   What is a "flag" variable, and how can it be used to track a state or condition through a complex series of checks?
*   Explain short-circuit evaluation for `&&` and `||` operators. How can it be useful?

---

## **PSET 6 — Switch, Menus, and Modular Decisions**

### 🎯 Objectives

*   Learn and practice `switch` statements as a clear alternative to `if/else` ladders.
*   Build multi-feature programs driven by user-selected menu options.
*   Manage program flow and branching based on user input.

---

### 🧩 **Problem 1 — Expanded Scientific Calculator**

**Goal:** Perform a variety of arithmetic and scientific operations using a `switch`-driven menu.

**Menu Options:**

1.  Addition, Subtraction, Multiplication, Division
2.  Power (`a^b`)
3.  Square Root
4.  Factorial (`n!`)
5.  Logarithm (base 10)
6.  Exit

**Requirements:**

*   Use a `switch` statement to handle the user's menu choice.
*   Use the `<cmath>` library for scientific operations.
*   For factorial, you will need to implement the calculation using a loop.
*   Handle invalid menu choices and mathematical errors (like division by zero or square root of a negative number) gracefully.

**Concepts Reinforced:** `switch` statements, combining loops and `switch`, error handling within cases.

---

### 🧩 **Problem 2 — Comprehensive Unit Converter**

**Goal:** Build a multi-category unit converter using nested `switch` statements.

**Program Flow:**

1.  **Main Menu:** Ask the user to select a conversion category:
    *   1. Temperature (C ↔ F)
    *   2. Length (meters ↔ feet)
    *   3. Weight (kg ↔ pounds)
    *   4. Data Storage (MB ↔ GB)
2.  **Sub-Menu:** Based on the first choice, present a second menu for the direction of conversion. For example, if they choose "Length":
    *   1. Meters to Feet
    *   2. Feet to Meters
3.  Perform the calculation and display the result.

**Requirements:**

*   Use a `switch` for the main menu and another (or `if/else`) for the sub-menus.
*   Use accurate conversion factors.
*   The program should loop back to the main menu after each conversion.

**Concepts Reinforced:** Nested control flow, `switch` for modularization, building a user-friendly interface.

---

### 🧩 **Problem 3 — Dynamic Restaurant Billing System**

**Goal:** Create a restaurant ordering system that allows a user to order multiple items and quantities.

**Menu:**

1.  Burger - $8.99
2.  Pizza - $12.50
3.  Salad - $7.00
4.  Fries - $3.50
5.  **Finalize Order**

**Program Flow:**

*   Display the menu and keep a running total, initialized to zero.
*   The user can select an item (1-4) repeatedly. Each time, ask for the quantity. Add the cost to the running total.
*   After adding an item, show the current subtotal and loop back to the main menu.
*   When the user selects "Finalize Order," calculate a 13% tax, add it to the subtotal, and display the final bill. The program then terminates.

**Concepts Reinforced:** Accumulator variables in loops, nested control flow, sentinel-controlled loops.

---

### 💭 **Reflection Prompt**

*   In what situations is a `switch` statement significantly better than an `if-else if` ladder? When is it not suitable?
*   What does the `break` keyword do inside a `switch` statement? What happens if you forget it (fall-through)?
*   Can you use `switch` with `string` variables in C++? Why or why not?

---
## 🧠 Programming Fundamentals – Complete Problem Set Series (Part 3)

### **PSET 7–9**

---

## **PSET 7 — Arrays I: Sequential Data & Analysis 📊**

### 🎯 Objectives

*   Understand arrays for storing and manipulating sequential data.
*   Perform aggregation (sum, average), searching, and analysis on lists of values.
*   Develop skills in structured iteration and data handling with arrays.
*   Implement fundamental sorting algorithms from scratch.

---

### 🧩 **Problem 1 — Array Statistics Analyzer**

**Goal:** Take `N` numbers from the user, store them in an array, and compute detailed statistics.

**Requirements:**

*   First, ask the user for the number of elements they want to enter.
*   Create an array of that size and read the values from the user.
*   Compute and display:
    *   Minimum, maximum, and range (max - min).
    *   Average of all elements.
    *   Count of even and odd numbers.
    *   The sum of all numbers.
*   **Search Mode:** After displaying the stats, ask the user to enter a number. Report whether that number exists in the array and, if so, at which index.

**Concepts Reinforced:** Array traversal, aggregate computation, linear search.

---

### 🧩 **Problem 2 — Student Score Manager**

**Goal:** Use an array to manage the scores of a class and perform a performance analysis.

**Requirements:**

*   Prompt the user to enter the scores for 10 students and store them in an array.
*   Calculate and display:
    *   The class average score.
    *   The highest and lowest scores in the class.
    *   The number of students who failed (score < 50).
    *   The number and percentage of students who scored above the class average.

**Concepts Reinforced:** Data analysis with arrays, multi-pass array traversal.

---

### 🧩 **Problem 3 — Manual Sorting Algorithm Visualizer**

**Goal:** Implement the **Bubble Sort** algorithm to sort an array in both ascending and descending order.

**Scenario:** To understand how sorting works, you will implement a common algorithm by hand instead of using a built-in library function.

**Requirements:**

*   Ask the user to enter 5-10 numbers and store them in an array.
*   Display the original, unsorted array.
*   Write a function that implements Bubble Sort to sort the array in ascending order. Display the sorted array.
*   Modify your logic or write a second function to sort the same original data in descending order. Display the result.

**Bubble Sort Logic:** Repeatedly step through the list, compare adjacent elements, and swap them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

**Concepts Reinforced:** Implementing sorting logic, array element manipulation (swapping), algorithm visualization.

---

### 💭 **Reflection Prompt**

*   How are arrays stored in memory? Why is this an efficient layout for sequential access?
*   What is an "off-by-one" error in the context of array loops? Why is it so common?
*   Why is it generally more efficient to perform multiple analyses on an array in separate loops rather than trying to do everything in a single, complex loop?

---

## **PSET 8 — Arrays II & C-Style Strings**

### 🎯 Objectives

*   Deepen array manipulation skills with multi-dimensional arrays (matrices).
*   Understand C-style strings as null-terminated character arrays.
*   Learn to process and analyze textual data by iterating through characters.

---

### 🧩 **Problem 1 — Matrix Operations Suite**

**Goal:** Implement fundamental operations on 2D arrays (matrices).

**Requirements:**

*   Allow the user to input two 3x3 matrices.
*   Write functions to perform the following operations:
    *   **Addition:** Compute the sum of the two matrices.
    *   **Transpose:** Compute the transpose of the first matrix.
    *   **Multiplication (Challenge):** Compute the product of the two matrices. This is significantly more complex than addition.
*   Display the original matrices and the results of each operation in a clean, grid-like format.

**Concepts Reinforced:** Nested loops for 2D arrays, matrix indexing, implementing mathematical formulas.

---

### 🧩 **Problem 2 — Text Analyzer**

**Goal:** Take a line of text as input and compute statistics about its contents.

**Requirements:**

*   Read a full sentence from the user (including spaces).
*   Calculate and display:
    *   Total number of characters (excluding spaces).
    *   Total number of words (a word is a sequence of non-space characters).
    *   Total count of vowels and consonants.
    *   The frequency of a specific character (e.g., ask the user which character to count).

**Concepts Reinforced:** Character manipulation, using `cin.getline()`, ASCII checks (`isalpha`, `isspace`, etc.).

---

### 🧩 **Problem 3 — Advanced Palindrome Detector**

**Goal:** Input a word or phrase and check if it’s a palindrome, ignoring case, spaces, and punctuation.

**Scenario:** A true palindrome check should work for phrases like "A man, a plan, a canal: Panama".

**Requirements:**

*   Read a string from the user.
*   "Sanitize" the string by creating a new, temporary string that contains only the lowercase alphabetic characters from the original.
*   Check if the sanitized string is a palindrome (reads the same forwards and backwards).
*   Report the result to the user.

**Example:**

```
Enter text: Racecar
Palindrome: Yes

Enter text: Never odd or even
Palindrome: Yes
```

**Concepts Reinforced:** String traversal and manipulation, two-pointer comparison logic.

---

### 💭 **Reflection Prompt**

*   What is the fundamental difference between a C++ `std::string` and a C-style character array (`char[]`)? What are the advantages of using `std::string`?
*   Why are nested loops the natural choice for processing 2D arrays?
*   How does the null terminator (` `) work in C-style strings, and why is it essential?

---

## **PSET 9 — Functions I: Modular & Reusable Code**

### 🎯 Objectives

*   Understand function structure: definition, prototype (declaration), and call.
*   Learn to pass data to functions using parameters (pass-by-value).
*   Develop reusable, modular code to avoid repetition and improve readability.
*   Write clean, single-purpose functions that are easy to test.

---

### 🧩 **Problem 1 — Calculator with Functions**

**Goal:** Re-engineer your earlier calculator (PSET 1), but this time, each mathematical operation must be encapsulated in its own function.

**Requirements:**

*   Create the following functions:
    *   `double add(double a, double b);`
    *   `double subtract(double a, double b);`
    *   `double multiply(double a, double b);`
    *   `double divide(double a, double b);`
*   In your `main` function, prompt the user for two numbers.
*   Call each of the four functions with the user's numbers and print the results, clearly labeling each one.
*   Your `divide` function should handle the case where `b` is zero, perhaps by returning a special value or printing an error message directly.

**Concepts Reinforced:** Code modularization, function syntax, `return` values, code reuse.

---

### 🧩 **Problem 2 — Temperature Conversion Library**

**Goal:** Create a set of functions to handle temperature conversions, effectively creating a small conversion "library."

**Requirements:**

*   Implement the following functions, each performing a single, specific conversion:
    *   `double celsiusToFahrenheit(double celsius);`
    *   `double fahrenheitToCelsius(double fahrenheit);`
    *   `double celsiusToKelvin(double celsius);`
    *   `double kelvinToCelsius(double kelvin);`
*   You can derive other conversions by composing these functions. For example, to convert Fahrenheit to Kelvin, you can first convert Fahrenheit to Celsius, and then that Celsius value to Kelvin.
*   In `main`, prompt the user for a temperature and its unit. Then, use your functions to display that temperature in the other two units.

**Concepts Reinforced:** Functional decomposition, composing functions, creating a mini-library.

---

### 🧩 **Problem 3 — Number Properties Library**

**Goal:** Implement a library of functions that test properties of an integer.

**Requirements:**

*   Create the following boolean functions:
    *   `bool isPrime(int n);` (returns `true` if `n` is a prime number, `false` otherwise).
    *   `bool isEven(int n);`
    *   `bool isPerfectSquare(int n);` (returns `true` if `n` is a perfect square).
*   Also create a function to calculate the factorial:
    *   `int factorial(int n);` (use a loop).
*   In `main`, ask the user for a number, then call each function with that number and print a report.

**Example:**

```
Enter number: 7
Is Prime? Yes
Is Even? No
Is a Perfect Square? No

Enter number: 9
Is Prime? No
Is Even? No
Is a Perfect Square? Yes
```

**Concepts Reinforced:** Boolean return types, single-responsibility principle, combining logic and loops in functions.

---

### 💭 **Reflection Prompt**

*   What is the difference between a function *declaration* (prototype) and a function *definition*? Why are prototypes necessary?
*   Explain "pass-by-value." When a variable is passed by value to a function, what is the function actually receiving?
*   Why is it good practice to design functions that have a single, clear purpose?

---
## 🧠 Programming Fundamentals – Complete Problem Set Series (Part 4)

### **PSET 10–12**

---

## **PSET 10 — Functions II: Advanced Parameter Control & Reusability 🧩**

### 🎯 Objectives

*   Master the difference between parameter passing by **value** and by **reference**.
*   Use default parameters to create more flexible functions.
*   Learn function overloading to create multiple functions with the same name but different parameters.
*   Understand variable scope, lifetime, and modular decomposition.

---

### 🧩 **Problem 1 — Geometry Function Suite with Overloading**

**Goal:** Write overloaded functions to calculate the area of multiple geometric shapes.

**Functions to Create:**

*   You will create three functions, all named `calculateArea`:
    1.  `double calculateArea(double radius);` // For a circle
    2.  `double calculateArea(double length, double width);` // For a rectangle
    3.  `double calculateArea(double base, double height, bool isTriangle);` // For a triangle
*   In your `main` function, create a menu that asks the user which shape they want to calculate.
*   Based on their choice, get the required inputs and call the appropriate version of `calculateArea`.

**Concepts Reinforced:** Function overloading, abstraction, compile-time polymorphism.

---

### 🧩 **Problem 2 — The Swap Machine: Value vs. Reference**

**Goal:** Visually demonstrate the critical difference between passing parameters by value and by reference.

**Requirements:**

1.  Implement two distinct functions:
    *   `void swapByValue(int a, int b);`
    *   `void swapByReference(int &a, int &b);`
2.  The logic inside both functions should be identical: a temporary variable is used to swap the values of `a` and `b`.
3.  In `main`:
    *   Initialize two integer variables, `x` and `y`.
    *   Call `swapByValue(x, y)`. Print the values of `x` and `y` immediately after the call.
    *   Call `swapByReference(x, y)`. Print the values of `x` and `y` again.
    *   Your output should clearly show which swap was effective and which was not.

**Concepts Reinforced:** Reference parameters (`&`), memory addresses, side effects in functions.

---

### 🧩 **Problem 3 — Bank Interest Calculator with Default Parameters**

**Goal:** Write a function that calculates compound interest, using default parameters for common scenarios.

**Formula:** `A = P * pow(1 + r/n, n*t)`
Where: `P`=principal, `r`=annual rate, `t`=years, `n`=times compounded per year.

**Function Signature:**

```cpp
double calculateCompoundInterest(double principal, double rate, int years, int compoundsPerYear = 4);
```

**Requirements:**

*   Implement the function using the signature above. Notice that `compoundsPerYear` has a default value of 4 (quarterly).
*   In `main`, demonstrate calling this function in two ways:
    1.  Providing all four arguments.
    2.  Providing only three arguments, allowing the default value for `compoundsPerYear` to be used.
*   Create a separate `void displaySummary(...)` function that takes the inputs and the final calculated amount and prints a clean report.

**Concepts Reinforced:** Default parameters, function chaining, modular numeric computation.

---

### 💭 **Reflection Prompt**

*   What is the performance difference between pass-by-value and pass-by-reference, especially for large data types like structures or objects?
*   When does function overloading improve code readability, and when might it cause confusion?
*   Explain the "scope" and "lifetime" of a local variable declared inside a function.

---

## **PSET 11 — Structures: Modeling Real-World Data 🧱**

### 🎯 Objectives

*   Understand `struct` for grouping related data into a single, logical unit.
*   Create and manipulate arrays of structures to manage collections of data.
*   Practice passing structures to functions by value and by reference.
*   Build basic data management systems for real-world entities.

---

### 🧩 **Problem 1 — Student Record System**

**Goal:** Create a `Student` structure and use it to manage records for a class, identifying the top performer.

**Structure Definition:**

```cpp
struct Student {
    int rollNumber;
    string name;
    double marks[3]; // Marks for 3 subjects
    double average;
};
```

**Program Tasks:**

*   Create an array of `Student` structures to hold data for 5 students.
*   Write a function `void inputStudents(Student students[], int size)` to get the data for all students.
*   Write a function `void calculateAverages(Student students[], int size)` that computes the average marks for each student and stores it in their `average` field.
*   Write a function `Student findTopper(const Student students[], int size)` that returns the `Student` structure of the student with the highest average.
*   In `main`, orchestrate the calls to these functions and display the name and average of the top student.

**Concepts Reinforced:** Structured data representation, arrays of structs, passing structs to functions.

---

### 🧩 **Problem 2 — Library Inventory System**

**Goal:** Define a `Book` structure and build a system to manage a library's inventory.

**Structure Definition:**

```cpp
struct Book {
    string title;
    string author;
    double price;
    int copiesInStock;
};
```

**Program Features:**

*   Use an array of `Book` structs to store the inventory.
*   Implement a menu-driven system with the following options:
    1.  **Add New Book:** Prompt for book details and add it to the inventory.
    2.  **Display All Books:** List all books with their details.
    3.  **Search by Title:** Ask for a title and display the book's information if found. Handle the case where the book is not in the inventory.
    4.  **Sell a Copy:** Ask for a title to sell. If found and `copiesInStock > 0`, decrement the count. Handle cases where the book is not found or is out of stock.

**Concepts Reinforced:** Real-world data modeling, record management, searching and updating data in an array of structs.

---

### 🧩 **Problem 3 — Weekly Weather Data Logger**

**Goal:** Use a structure to record the weather for a week and perform an analysis.

**Structure Definition:**

```cpp
struct WeatherDay {
    string dayName; // e.g., "Monday"
    double temperature;
    string condition; // e.g., "Sunny", "Cloudy"
};
```

**Program Tasks:**

*   Create an array of 7 `WeatherDay` structs.
*   Prompt the user to enter the temperature and condition for each day of the week.
*   After collecting the data, calculate and display:
    *   The highest and lowest temperatures of the week and on which days they occurred.
    *   The average temperature for the week.
    *   A count of how many days were "Sunny", "Cloudy", "Rainy", etc.
*   **Challenge:** Write a function `void sortByTemp(WeatherDay data[], int size)` that sorts the array from the coldest day to the hottest day and displays the result.

**Concepts Reinforced:** Arrays of structures, data aggregation, combining sorting algorithms with custom data types.

---

### 💭 **Reflection Prompt**

*   When is it more advantageous to use a `struct` versus using several parallel arrays (e.g., a `string` array for names, an `int` array for IDs)?
*   What is the difference between accessing a struct member with a dot (`.`) versus an arrow (`->`)? (This hints at pointers to structs).
*   When passing a struct to a function, should you pass it by value or by reference? What are the trade-offs?

---

## **PSET 12 — Pointers: Memory, Access, and Control ⚙️**

### 🎯 Objectives

*   Understand pointers as variables that store memory addresses.
*   Learn to use the address-of (`&`) and dereference (`*`) operators.
*   Use pointers to interact with arrays and to modify function arguments directly.
*   Develop an awareness of low-level memory manipulation.

---

### 🧩 **Problem 1 — Pointer Basics Explorer**

**Goal:** Write a program to explicitly show the relationship between a variable, its memory address, and a pointer.

**Requirements:**

1.  Declare an integer variable `x` and a double variable `y`. Initialize them.
2.  Declare an integer pointer `ptr_x` and a double pointer `ptr_y`.
3.  Store the memory address of `x` in `ptr_x` and the address of `y` in `ptr_y`.
4.  Display the following for both variables:
    *   The value of the variable itself.
    *   The memory address of the variable (using the `&` operator).
    *   The value stored in the pointer variable (which should be the address).
    *   The value the pointer points to (using the `*` operator).
5.  Modify the value of `x` *using only the pointer `ptr_x`*. Then, print the value of `x` again to confirm it changed.

**Concepts Reinforced:** Address-of (`&`), dereference (`*`), pointer declaration and assignment.

---

### 🧩 **Problem 2 — Array Traversal with Pointers**

**Goal:** Input numbers into an array and then print them using only pointer arithmetic, not array indexing (`[]`).

**Requirements:**

*   Declare an array of 5 integers.
*   Declare a pointer and make it point to the first element of the array.
*   Use a loop and the pointer to read 5 integers from the user into the array.
*   Use a second loop and the same pointer to print out all the elements of the array.
*   **Crucially, you are not allowed to use the `[]` syntax in your second loop.** You must use pointer arithmetic (e.g., `*(ptr + i)`).

**Concepts Reinforced:** The relationship between arrays and pointers, pointer arithmetic.

---

### 🧩 **Problem 3 — Swap and Reverse with Pointers**

**Goal:** Implement a swap function and an array-reversal function using pointers.

**Requirements:**

1.  **Swap Function:**
    *   Write a function `void swap(int *ptr_a, int *ptr_b)`.
    *   This function should take two integer pointers and swap the values stored at their addresses.
    *   Demonstrate this function working in `main`.
2.  **Array Reversal Function (Challenge):**
    *   Write a function `void reverseArray(int *arr, int size)`.
    *   This function should reverse the elements of the array *in-place* using pointers.
    *   Hint: Use two pointers, one starting at the beginning and one at the end, and swap elements as they move towards the center.
    *   Demonstrate this by printing an array before and after calling the function.

**Concepts Reinforced:** Direct memory manipulation, passing pointers to functions, in-place algorithms.

---

### 💭 **Reflection Prompt**

*   What is a "dangling pointer" and a "null pointer"? Why is dereferencing them dangerous?
*   Explain the statement: "An array's name is essentially a constant pointer to its first element." What are the implications of this?
*   How do C++ references (from PSET 10) differ from pointers? When would you choose one over the other?

---
## 🧠 Programming Fundamentals – Complete Problem Set Series (Part 5)

### **PSET 13–14 + Integration Projects + Final Project**

---

## **PSET 13 — File Handling: Saving and Retrieving Data 💾**

### 🎯 Objectives

*   Learn to read from and write to text files using `ifstream` and `ofstream`.
*   Understand file streams and how to check for file-opening errors.
*   Practice serializing (saving) and deserializing (loading) structured data.
*   Combine loops, arrays, and structs with persistent file operations.

---

### 🧩 **Problem 1 — Persistent Journal**

**Goal:** Take multiple lines of input from the user and append them to a file named `journal.txt`.

**Program Flow:**

*   Open `journal.txt` in **append mode**. If the file doesn't exist, it should be created.
*   Inform the user they can start writing, and to type `END` on a new line to finish.
*   Use a loop to read lines of text from the user and write each line to the file.
*   The program should stop when the user enters `END`.
*   Each time the program is run, new entries should be added to the end of the file, not overwrite it.

**Concepts Reinforced:** File creation and appending (`ofstream`), sentinel-controlled loops with file I/O.

---

### 🧩 **Problem 2 — File Analyzer**

**Goal:** Read the contents of a text file (`journal.txt` from Problem 1, or any other `.txt` file) and display statistics about it.

**Requirements:**

*   Prompt the user for a filename to analyze.
*   Handle the case where the file cannot be opened.
*   Read the file and display:
    *   The total number of characters.
    *   The total number of words.
    *   The total number of lines.
*   **Challenge:** Find and display the single longest line in the file.

**Concepts Reinforced:** Reading files (`ifstream`), parsing file content line-by-line and word-by-word, error handling.

---

### 🧩 **Problem 3 — Student Data Archiver with CRUD Operations**

**Goal:** Using the `Student` structure from PSET 11, create a system that can Create, Read, Update, and Delete records from a file.

**Requirements:**

*   Use the same `Student` struct (roll number, name, GPA).
*   Data should be stored in a file named `students.dat`.
*   Implement a menu with the following features:
    1.  **Add Student:** Add a new student record to the file.
    2.  **Display All Students:** Read all records from the file and display them.
    3.  **Search by Roll Number:** Find and display the record for a specific student.
    4.  **Delete Record:** This is the most challenging part. To delete a record, you typically need to:
        *   Read all records from `students.dat` into memory (e.g., an array of structs).
        *   Write all records *except* the one to be deleted to a temporary file (e.g., `temp.dat`).
        *   Delete the original `students.dat`.
        *   Rename `temp.dat` to `students.dat`.

**Concepts Reinforced:** Struct persistence, file-based CRUD (Create, Read, Update, Delete), advanced file manipulation.

---

### 💭 **Reflection Prompt**

*   Why is it critical to always check if a file opened successfully before trying to read from or write to it?
*   What is the difference between text mode and binary mode for file I/O? When would you use binary mode?
*   Why is closing a file (`file.close()`) important, especially after writing?

---

## **PSET 14 — Capstone Review: Integrating All Concepts 🚀**

### 🎯 Objectives

*   Combine loops, arrays, structs, functions, and file handling to build a complete program.
*   Practice clean, modular, menu-driven design.
*   Implement robust error handling for both user input and file operations.

---

### 🧩 **Problem 1 — Complete Student Management System**

**Goal:** Build a comprehensive, file-persistent student management system that integrates all concepts learned so far.

**Features:**

1.  **Data Model:** Use a `Student` struct (e.g., `rollNo`, `name`, `gpa`).
2.  **Modular Functions:** Every feature should be in its own function (e.g., `addStudent()`, `displayStudents()`, `saveToFile()`, etc.).
3.  **Menu System:**
    *   Add a new student.
    *   View all students.
    *   Search for a student by roll number.
    *   Sort all students by GPA (high to low) and display the sorted list.
    *   Save all current data to `students.dat`.
    *   Load all data from `students.dat` at the start of the program.
    *   Exit.
4.  **Persistence:** The system should automatically load from the file when it starts and offer to save before it exits.

**Concepts Reinforced:** Full system integration, data persistence, modular design, user-centric workflow.

---

### 🧩 **Problem 2 — Personal Expense Tracker**

**Goal:** Create a command-line application to track daily expenses and provide summary reports.

**Features:**

1.  **Data Model:** Use an `Expense` struct (`category`, `amount`, `description`, `date`).
2.  **Menu System:**
    *   **Add Expense:** Log a new expense with its details.
    *   **View All Expenses:** Display a list of all recorded expenses.
    *   **Show Daily Summary:** Ask for a date and show the total expenses for that day.
    *   **Show Category Summary:** Display total spending broken down by category (e.g., Food: $150, Transport: $80).
3.  **File I/O:** All expenses should be saved to `expenses.csv` (Comma-Separated Values) format, which makes it easy to open in spreadsheet software. Each line in the file should represent one expense.
4.  **Challenge:** Add a "filter by date range" feature that shows all expenses between two given dates.

**Concepts Reinforced:** Application logic, data aggregation and reporting, file formatting.

---

### 💭 **Reflection Prompt**

*   Looking back at your code for these capstone projects, which parts were the most difficult to design?
*   How would you handle a corrupted data file? What strategies could make your program more resilient to errors?
*   If this were a commercial product, what would be the top 3 features you would add next?

---

## 🧩 Integration Projects (Beyond PSETs)

These projects simulate real systems by merging multiple concepts. They are optional but highly recommended for building a strong portfolio.

---

### **Integration Project 1 — Mini Quiz Application**

*   **Concepts:** Loops, conditionals, arrays/vectors, file handling, functions.
*   **Features:**
    *   Store questions, multiple-choice options, and correct answers in a text file.
    *   The program reads the file to load the quiz.
    *   Randomly select 10 questions to present to the user for each run.
    *   Track the user's score and, at the end, tell them how they did.
    *   **Challenge:** Implement a high-score system that saves the top score to a separate file.

---

### **Integration Project 2 — ATM 2.0 with Multiple Accounts**

*   **Concepts:** Structs, arrays of structs, file I/O, menu control, robust validation.
*   **Features:**
    *   Create an `Account` struct (`accountNumber`, `pin`, `balance`).
    *   Store multiple user accounts in a file (`accounts.dat`).
    *   On startup, the program requires a user to "log in" with an account number and PIN.
    *   Once logged in, the user can deposit, withdraw, and check their balance.
    *   All changes to the balance must be saved back to the file.

---

### **Integration Project 3 — Library Management System**

*   **Concepts:** Struct arrays, sorting, searching, file I/O, data relationships.
*   **Features:**
    *   Use a `Book` struct and a `Borrower` struct.
    *   Allow a librarian to add, delete, or update book records.
    *   Implement a system to "issue" a book to a borrower and "return" it. This should update the book's status (e.g., a `borrowerId` field in the `Book` struct).
    *   Allow searching for books by title or author.
    *   Display a list of all books currently checked out.

---

## 🎓 Final Project — Personal Finance Tracker 💼

**Title:** *C++ Financial Assistant*

### 🎯 Objectives

*   Combine everything: loops, arrays, structs, files, functions, pointers (optional).
*   Apply modular, real-world software design principles.
*   Build a portfolio-level project demonstrating your complete understanding of procedural C++.

---

### 💡 **Specification**

Your program must be a multi-user personal finance management tool.

1.  **User Authentication:**
    *   Allow users to register with a username and password.
    *   Store user credentials securely in a file (e.g., `users.dat`).
    *   Require users to log in to access their financial data.
2.  **Data Management:**
    *   Each user should have their own data file (e.g., `username_data.csv`).
    *   Use a `Transaction` struct (`type` (income/expense), `category`, `amount`, `description`, `date`).
3.  **Core Features (after login):**
    *   **Add Income:** Log a source of income.
    *   **Add Expense:** Log an expense.
    *   **View Transactions:** Display a list of all transactions, sorted by date.
    *   **Monthly Summary:** Generate a report for a given month showing total income, total expenses, and net savings.
    *   **Category Report:** Show how much was spent in each category for a given month.
4.  **Persistence:** All data must be saved to files automatically. When a user logs in, their data is loaded. When they add a transaction, it's immediately saved.
5.  **Interface:** The program must be driven by a clean, interactive, and intuitive menu system.

---

### ⚙️ **Implementation Guidelines**

*   **Modular Design:** Break every single feature into its own function. Your `main` function should be very small, mostly handling the main program loop and calling other functions.
*   **Error Handling:** Your program must not crash. Handle bad user input, file opening errors, and incorrect logins gracefully.
*   **Data Storage:** Using a `.csv` format for transaction data is recommended, as it's human-readable and can be opened in Excel.

---

### ✅ **Completion Checklist**

*   [ ] Modular Functions Implemented for All Features
*   [ ] Robust Error & Input Handling Added
*   [ ] Persistent File System for Users and Transactions
*   [ ] Fully Functional and Intuitive Menu Navigation
*   [ ] Code is Well-Commented and Readable

---

### 💭 **Reflection Prompt**

*   What was the most challenging part of this project: the logic, the data management, or the user interface?
*   If you were to build this again, what would you design differently from the start?
*   How could you extend this project? What features would a real-world version of this app need? (e.g., budgets, recurring transactions, data visualization).

---

# ⚙️ **Advanced C++ Problem Set Series — Part 6: “The Craftsman Level”**

> **Theme:** From programmer → software craftsman
> **Focus:** Logic design, abstraction, modularity, OOP transition
> **Goal:** Each PSET should *stretch your brain* but not *snap your patience*.

---

## 🧠 **PSET 15 — Functional Abstraction & Modular Logic**

### 🎯 Objectives

* Build complex programs by composing multiple functions.
* Handle modular decomposition and layered problem-solving.
* Practice thinking in *systems*, not snippets.

### 🧩 **Problem 1 — Gradebook Analyzer 2.0**

You’re given multiple classes, each with multiple students.
Compute class-wise averages, top students, and an overall report.

**Features:**

* Input `n` classes, each with `m` students (name, marks of 3 subjects).
* Use functions for:

  * input,
  * average calculation,
  * topper detection,
  * summary display.
* Output class topper and overall topper.

**Concepts Reinforced:** Nested function calls, struct arrays, aggregation logic.

---

### 🧩 **Problem 2 — Expense Tracker 2.0**

Build an expense manager that:

* Records daily expenses in categories (`Food`, `Transport`, `Bills`, etc.)
* Uses separate functions for adding, displaying, filtering, and calculating totals.
* Computes:

  * Total spend,
  * Category-wise percentage,
  * Daily average.

**Optional Twist:** Save & load data from file (review of PSET 13).

---

### ⚡ **Challenge Extension**

Add a **monthly summary function** that reads all daily records and prints which category consumed most spending.

---

### 💭 Reflection Prompt

How does dividing your code into small, reusable functions improve readability?
Where does modularization *hurt* (e.g., too many small functions)?

---

---

## 🧩 **PSET 16 — Object-Oriented Awakening: Encapsulation & Design**

### 🎯 Objectives

* Understand **classes and objects** in real-world modeling.
* Use constructors, getters/setters, and method logic.
* Grasp **encapsulation** and **data integrity**.

---

### 🧩 **Problem 1 — Bank Account Class**

Design a `BankAccount` class with:

* Private attributes: `accountNo`, `name`, `balance`
* Public methods: `deposit()`, `withdraw()`, `display()`
* Constructor for initialization, validation for negative deposits.

**Example Output:**

```
Account created: ZephyrAmmor (ID: 1001)
Deposit: 5000
Withdraw: 1200
Balance: 3800
```

**Concept Reinforced:** Encapsulation, class design, member functions.

---

### 🧩 **Problem 2 — Inventory Management System**

Create an `Item` class:

* Attributes: `id`, `name`, `price`, `quantity`
* Methods: `addStock()`, `sellItem()`, `display()`
* Create an array/vector of items and operate on them.

**Concept Reinforced:** Class-object manipulation, encapsulated state.

---

### ⚡ **Challenge Extension**

Add a static counter to track how many items exist in the system at any time.

---

### 💭 Reflection Prompt

Why does OOP make data management safer and more scalable?
What design trade-offs come with encapsulation?

---

---

## 🧩 **PSET 17 — OOP Level 2: Inheritance & Polymorphism**

### 🎯 Objectives

* Understand how inheritance avoids redundancy.
* Learn virtual functions and method overriding.
* Build layered systems.

---

### 🧩 **Problem 1 — Shape Hierarchy**

Create a base class `Shape` and derived classes `Circle`, `Rectangle`, and `Triangle`.

**Requirements:**

* Virtual function `area()`
* Input radius, base/height, etc. as per type.
* Display area using base pointer array to demonstrate polymorphism.

**Example Output:**

```
Circle Area: 78.5
Rectangle Area: 45.0
Triangle Area: 24.0
```

**Concept Reinforced:** Inheritance, polymorphism, abstraction.

---

### 🧩 **Problem 2 — Employee Management System**

* Base class: `Employee` → name, ID, salary
* Derived classes:

  * `Manager` → bonus
  * `Engineer` → overtime pay
  * `Intern` → stipend
* Use virtual function `calculatePay()` and store all employees in an array of pointers.

**Concept Reinforced:** Dynamic binding, clean OOP hierarchy.

---

### ⚡ **Challenge Extension**

Add a file-saving function to store all employee details and reload them.

---

### 💭 Reflection Prompt

When should you use inheritance vs. composition?
Why can virtual functions make code slower but more flexible?

---

---

## 🧩 **PSET 18 — Data Structures and STL Foundation**

### 🎯 Objectives

* Introduce STL (Standard Template Library).
* Learn to use `vector`, `map`, `set`, and algorithms.
* Practice abstract thinking in data management.

---

### 🧩 **Problem 1 — Student Ranking System**

* Use a `vector<pair<string, double>>` to store student names and GPAs.
* Sort them in descending order.
* Display top 3 performers and class average.

**Concept Reinforced:** Vectors, sorting algorithms, pair usage.

---

### 🧩 **Problem 2 — Word Frequency Counter**

Read text from file and count the frequency of each word using `map<string, int>`.

**Example:**

```
Input: "I will master C++ and I will build great AI"
Output:
I → 2
will → 2
master → 1
C++ → 1
build → 1
great → 1
AI → 1
```

**Concept Reinforced:** Maps, iterators, algorithmic counting.
