| Week  | Topics                                         | Problems                                                                                                                                                       |
| ----- | ---------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 1–2   | Intro to C++ & First Program                   | 1. Input name & age → print greeting with future age.<br>2. Print ASCII box around your name.<br>3. Multiplication table of 5.                                 |
| 3     | Data Types + I/O                               | 1. BMI calculator (height, weight).<br>2. Average of 3 numbers (int, float, double).<br>3. Temperature converter (C ↔ F).                                      |
| 4     | Type Casting + Operators + Library Functions   | 1. Print floor, ceil, and round of a float.<br>2. Print ASCII value of a character.<br>3. Simple calculator (+, −, *, /, %).                                   |
| 5     | Loops (for, while, nested)                     | 1. Multiplication table (user input).<br>2. Sum of odd numbers (1–N).<br>3. Pyramid of stars `*`.                                                              |
| 6     | Loops (do-while)                               | 1. Guess-the-number game (1–50).<br>2. Menu program with add, factorial, exit.                                                                                 |
| 7     | Decision Making (if/else)                      | 1. Marks → percentage → grade.<br>2. Leap year checker.<br>3. Simple ATM (check balance, withdraw, deposit).                                                   |
| 8     | Switch, Logical & Conditional Operators        | 1. Calculator (switch).<br>2. Vowel/consonant checker.<br>3. Menu-based unit converter.                                                                        |
| 9–10  | Arrays + Strings                               | 1. Sum & average of 5 integers.<br>2. Reverse an array.<br>3. Count vowels & consonants in string.<br>4. Find max & min in array.                              |
| 11–12 | Functions (Pass by Value, Arrays in Functions) | 1. Factorial function.<br>2. Largest element in array (function).<br>3. Prime checker function.                                                                |
| 13    | Pass by Value + Returning Values               | 1. Swap two integers (function).<br>2. Circle area function.<br>3. Function to return grade from 5 subject marks.                                              |
| 14    | Function Overloading + Inline Functions        | 1. Overloaded add functions (int & double).<br>2. Inline function: square of number.<br>3. Inline function: max of two numbers.                                |
| 15    | Structures                                     | 1. `Student` structure: input & print 3 students.<br>2. `Book` structure: find most expensive.<br>3. Nested structure: Student with Address.                   |
| 16–17 | Pointers + File Handling                       | 1. Print value & memory address with pointer.<br>2. Word counter (file).<br>3. Reverse a string using pointers.<br>4. Student record system (file write/read). |


## Final Problems 
⚡ Functional Programming Style Challenge

Problem: Matrix Operations Library (Functional Style)

Implement a set of functions to handle a 2D integer matrix:

createMatrix(rows, cols) → initializes with user input.

printMatrix(matrix) → prints neatly.

addMatrices(a, b) → returns a new matrix that is the sum.

multiplyMatrices(a, b) → returns the product.

transpose(matrix) → returns transposed version.

Restrictions:

Use functions only (no classes, no OOP).

Pass arrays (or vectors) by reference where needed.

Don’t use any fancy STL shortcuts beyond basics (vector allowed).

Why it’s good: It forces you to organize functions, manage parameters, think about memory, and build reusable utilities. You’ll struggle a bit with array handling but won’t drown.

⚡ OOP Style Challenge

Problem: Student Management System (OOP Edition)

Build a program using classes + objects to manage students.

Features:

Class Student → attributes: roll number, name, marks in 5 subjects.

Class StudentManager → stores a list of students (array/vector).

Functions:

addStudent() → input new student.

printAll() → print all student details.

getTopper() → find the student with highest average.

searchStudent(rollNo) → returns details if found.

File Handling (bonus): Save & load students to/from a file.