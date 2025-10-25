## **1. Data Types**

### **Definition**

Data types specify the kind of data a variable can hold and how much memory it occupies. They help the compiler allocate the right amount of storage and enforce type safety.

### **Classification**

#### **A. Fundamental (Built-in) Data Types**

| Type     | Description              | Example               | Size (typical) |
| -------- | ------------------------ | --------------------- | -------------- |
| `int`    | Integer numbers          | `int a = 5;`          | 4 bytes        |
| `float`  | Single-precision decimal | `float b = 3.14;`     | 4 bytes        |
| `double` | Double-precision decimal | `double c = 3.14159;` | 8 bytes        |
| `char`   | Single character         | `char ch = 'A';`      | 1 byte         |
| `bool`   | True or False            | `bool flag = true;`   | 1 byte         |
| `void`   | No data type / no return | Used in functions     | 0 bytes        |

#### **B. Derived Data Types**

* **Arrays** – `int arr[5];`
* **Pointers** – `int *p;`
* **Functions**
* **References**

#### **C. User-Defined Data Types**

* `struct`, `class`, `union`, `enum`, `typedef`

### **Example**

```cpp
int age = 19;
float percentage = 91.3;
char grade = 'A';
bool isPassed = true;
```

### **Exam Tip**

Memorize:
`int → whole numbers`, `float/double → decimal`, `char → characters`, `bool → logical`, `void → no data`.

---

## **2. Variable Declaration & Initialization**

### **Definition**

A **variable** is a named memory location that stores data of a particular type.

### **Declaration**

Tells the compiler to reserve space for a variable.

```cpp
int num;
float rate;
```

### **Initialization**

Assigns a value at the time of declaration.

```cpp
int num = 10;
```

### **Rules for Naming Variables**

* Must begin with a letter or underscore.
* Cannot contain spaces or special characters.
* Case-sensitive.
* Should not use reserved keywords (like `int`, `return`, etc.)

### **Example**

```cpp
int age = 20;     // declaration + initialization
float pi(3.14);   // constructor-style
```

### **Exam Tip**

Difference between declaration and initialization is often asked:

> Declaration only defines variable type; initialization assigns a value.

---

## **3. Type Casting**

### **Definition**

Type casting converts a variable from one data type to another. It ensures correct data manipulation and avoids loss of information.

### **Types of Type Casting**

#### **A. Implicit Type Casting (Type Promotion)**

Automatic conversion by compiler when mixing data types.

```cpp
int a = 5;
float b = 2.5;
float c = a + b;  // int automatically promoted to float
```

#### **B. Explicit Type Casting (Manual Conversion)**

Done by the programmer using cast operators.

```cpp
float a = 5.5;
int b = (int)a;  // explicit cast
```

### **Example**

```cpp
int x = 10, y = 4;
float result = (float)x / y;  // result = 2.5
```

### **Exam Tip**

Implicit → compiler’s job
Explicit → programmer’s job

---

## **4. C++ Operators**

### **Definition**

Operators are special symbols that perform operations on operands.

### **Classification of Operators**

| Type                    | Example           | Description               |                 |                    |
| ----------------------- | ----------------- | ------------------------- | --------------- | ------------------ |
| **Arithmetic**          | `+ - * / %`       | Perform math operations   |                 |                    |
| **Relational**          | `== != > < >= <=` | Compare values            |                 |                    |
| **Logical**             | `&&               |                           | !`              | Combine conditions |
| **Assignment**          | `= += -= *= /=`   | Assign values             |                 |                    |
| **Increment/Decrement** | `++ --`           | Increase or decrease by 1 |                 |                    |
| **Bitwise**             | `&                | ^ << >> ~`                | Operate on bits |                    |
| **Ternary**             | `? :`             | Short form of `if-else`   |                 |                    |
| **Comma**               | `,`               | Separate expressions      |                 |                    |
| **sizeof**              | `sizeof(type)`    | Returns size in bytes     |                 |                    |

### **Example**

```cpp
int a = 10, b = 20;
cout << (a < b && b == 20); // true
```

### **Exam Tip**

Operator precedence determines which operator executes first — memorize the order of arithmetic and logical operators.

---

## **5. C++ Escape Sequences**

### **Definition**

Escape sequences are special character combinations used to format output.

| Sequence | Meaning         |
| -------- | --------------- |
| `\n`     | New line        |
| `\t`     | Tab             |
| `\\`     | Backslash       |
| `\"`     | Double quote    |
| `\'`     | Single quote    |
| `\b`     | Backspace       |
| `\r`     | Carriage return |

### **Example**

```cpp
cout << "Hello\tWorld\n";
```

**Output:**

```
Hello   World
```

### **Exam Tip**

They always start with a backslash `\`. Used in `cout` for neat output formatting.

---

## **6. Switch Statement Program**

### **Definition**

A **switch** statement allows multi-way branching based on a variable’s value. It replaces multiple `if-else` statements for clarity.

### **Syntax**

```cpp
switch(expression) {
    case value1:
        // statements
        break;
    case value2:
        // statements
        break;
    default:
        // executed if no case matches
}
```

### **Rules**

* `expression` must evaluate to `int` or `char` type.
* Each `case` must be unique.
* `break` prevents fall-through.
* `default` is optional but recommended.

### **Example**

```cpp
int choice;
cout << "Enter 1 for Add, 2 for Subtract: ";
cin >> choice;

switch(choice) {
    case 1:
        cout << "Addition\n";
        break;
    case 2:
        cout << "Subtraction\n";
        break;
    default:
        cout << "Invalid choice\n";
}
```

### **Exam Tip**

If `break` is missing, control “falls through” to next case — often an MCQ point.

---

## **7. Error Types**

### **Definition**

Errors are mistakes in code that prevent correct execution.

### **Main Types**

#### **A. Syntax Errors**

Caused by breaking language rules.

> Example: Missing `;` or using undeclared variable.

#### **B. Logical Errors**

Program runs but gives wrong output.

> Example: Using `+` instead of `*`.

#### **C. Runtime Errors**

Occur during execution.

> Example: Division by zero or invalid array index.

#### **D. Semantic Errors**

Meaning-related mistakes — code compiles but behavior is wrong.

### **Example**

```cpp
int a = 5, b = 0;
cout << a / b;  // runtime error
```

### **Exam Tip**

Remember order:
**Syntax → Runtime → Logical**
(Detected at compile-time → run-time → logical reasoning)

---

## **8. Debugging**

### **Definition**

Debugging is the process of identifying and fixing errors in a program.

### **Steps in Debugging**

1. **Reproduce** the error.
2. **Isolate** the problem.
3. **Analyze** possible causes.
4. **Fix** the code.
5. **Re-test** after fixing.

### **Tools**

* **Compiler messages** (errors/warnings)
* **IDE debuggers** (Code::Blocks, Visual Studio, etc.)
* **Command-line tools** (`gdb` for GNU compilers)
* **Print debugging** using `cout` statements.

### **Example**

```cpp
cout << "Value before: " << x << endl;
```

### **Exam Tip**

Debugging ≠ testing.
Testing finds errors; debugging fixes them.

---

## **9. Header Files**

### **Definition**

Header files contain **declarations** of functions, classes, constants, and macros used across multiple `.cpp` files.

### **Purpose**

* Promote code reuse and modularity.
* Allow separation of interface (header) and implementation (source).

### **Types**

| Type                          | Example                             | Description           |
| ----------------------------- | ----------------------------------- | --------------------- |
| **Standard Header Files**     | `<iostream>`, `<cmath>`, `<string>` | Provided by C++       |
| **User-Defined Header Files** | `"myheader.h"`                      | Created by programmer |

### **Example**

```cpp
// mathutils.h
int add(int a, int b);
```

```cpp
// main.cpp
#include "mathutils.h"
#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

int main() {
    cout << add(5, 6);
}
```

### **Header Guards**

Prevent multiple inclusions:

```cpp
#ifndef MYHEADER_H
#define MYHEADER_H
// declarations
#endif
```

### **Exam Tip**

`#include <...>` = system header
`#include "..."` = user-defined header

---

## **10. C++ Program Structure**

### **Basic Structure**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!";
    return 0;
}
```

### **Key Components**

1. **Preprocessor Directives** – start with `#`, e.g. `#include`.
2. **Namespace** – groups identifiers to avoid conflicts.
3. **Main Function** – entry point of program.
4. **Statements & Expressions** – perform operations.
5. **Comments** – `// single-line` or `/* multi-line */`.

### **Program Flow**

1. Preprocessing
2. Compilation
3. Linking
4. Execution

### **Exam Tip**

Every C++ program **must** have one `main()` function — it’s where execution begins.

---

# **⚡ Summary Table (Quick Revision)**

| Topic                | Core Idea             | Example/Keyword        | Common Exam Focus    |   |            |
| -------------------- | --------------------- | ---------------------- | -------------------- | - | ---------- |
| Data Types           | Type of data & size   | `int`, `float`, `char` | Size & category      |   |            |
| Variable Declaration | Reserve memory        | `int a = 5;`           | Rules & naming       |   |            |
| Type Casting         | Convert data types    | `(float)a / b`         | Implicit vs Explicit |   |            |
| Operators            | Perform operations    | `+ - * / &&            |                      | ` | Precedence |
| Escape Sequences     | Format output         | `\n`, `\t`             | Meaning              |   |            |
| Switch               | Multi-way branch      | `switch(choice)`       | Role of `break`      |   |            |
| Error Types          | Kinds of bugs         | syntax, runtime        | Identification       |   |            |
| Debugging            | Fixing errors         | `cout` / debugger      | Steps                |   |            |
| Header Files         | Function declarations | `#include`             | Guards               |   |            |
| Program Structure    | Framework             | `#include`, `main()`   | Execution order      |   |            |
