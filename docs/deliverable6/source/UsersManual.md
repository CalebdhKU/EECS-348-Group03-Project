---

<div align="right">

# Group 3

</div>

---

# Arithmetic Expression Evaluator in C++
**Version:** 1.5   
**Date:** 05/10/2026  
**Document Identifier:** AEE-UM-1.5

---

# User's Manual
## Version 1.5

---

| Date | Version | Description | Author |
|------|---------|------------|--------|
| 04/01/2026 | 1.0 | Initial creation and conversion of Deliverable 6 into GitHub using Markdown format | Ivan Kullaya |
| 05/05/2026 | 1.1 | Addition of Sections 1, 2, 3 | Maha Jornaz |
| 05/05/2026 | 1.2 | Addition of Sections 5, 6, 7, 8 | Greeshma Kunduri |
| 05/08/2026 | 1.3 | Addition of Section 4 | Maha Jornaz |
| 05/10/2026 | 1.4 | Revised sections/Improved formatting consistency prior to submission | Ivan Kullaya |
| 05/10/2026 | 1.5 | Submission version of Deliverable 06 | Maha Jornaz |

---

## Table of Contents

1. Purpose  
2. Introduction
    - 2.1 Usage of Operators
3. Getting started
    - 3.1 How to Install and Run
      - 3.1.1 Features
      - 3.1.2 System Requirements
3. Advanced features
    - 4.1 How to use Implicit Multiplication
    - 4.2 How to use the History Textfile
    - 4.3 How to use Math Constants
    - 4.4 How to use Floating Point Numbers
      - 4.4.1 How to Evaluate Roots using Decimals
5. Troubleshooting
6. Examples of uses
7. Glossary
8. FAQ

---

# 1. Purpose

The purpose of the user manual document is to help students and users understand how the arithmetic evaluator operates. The user inputs an expression of their choice, and the software returns a value or an error back to the user. It handles operator precedence (PEMDAS), arithmetic expressions, and errors. The document includes the following sections: Purpose, Introduction, Getting Started, Advanced Features, Troubleshooting, Examples, Glossary of Terms, and FAQ. 

---

# 2. Introduction

**The software uses order of operations (PEMDAS) and supports the following operators and functions:**

1. __()__ is a parenthesis operator used to group numbers that need to be calculated first.
2. __**__ is an exponential operator used to take a number’s power.
3. __*__ is a multiplication operator used to calculate the product.
4. __/__ is a division operator used to calculate the quotient.
5. __+__ is an addition operator used to calculate the sum.
6. __-__ is a subtraction operator used to calculate the difference.
7. __%__ is a modulo operator used to calculate the remainder.
8. __Unary +__ is a unary positive operator used to explicitly indicate a positive value
9. __Unary -__ is a unary negative operator used to explicitly indicate a negative value

## 2.1 Usage of Operators

| Operator |  Description  | Expression |
|----------|---------------|------------|
|    ()    |  Parenthesis  |   (5 + 1)  |
|    **    |    Exponent   |    5 ** 1  |
|    *     | Multiplication|    5 * 1   |
|    /     |    Division   |    5 / 1   |
|    +     |    Addition   |    5 + 1   |
|    -     |  Subtraction  |    5 - 1   |
|    %     |     Modulo    |    5 % 1   |
|  Unary + | Positive unary operator | +(5) |
|  Unary - | Negative unary operator | -(5) |

---

# 3. Getting started

## 3.1 How to Install and Run

Make sure a C++ compiler and the make utility are installed on your system. Download or clone the source code from the GitHub repository, open a terminal in the project directory, and use the Makefile to build the program.

1. Download or clone the source code from the GitHub repository.
2. Open a terminal in the project directory.
3. Run the make command to build the program.
4. Execute the generated executable file.

    Example:
      - make
      - ./evaluator 

5. Input any arithmetic expression.

   Enter an expression: 4 + 1

6. After running the expression, the result should appear. 

     Result: 5

7. If the arithmetic expression is invalid, an error message will appear.

    Enter an expression: 7 / 0 
  
    Error: Division by zero

### 3.1.1 Features
- Handles order of operations (PEMDAS)
- Defined error messages
- Supports arithmetic expressions
- Handles unary operators

### 3.1.2 System Requirements
- C++17 compatible compiler
- make utility
- Terminal or command prompt

---

# 4. Advanced features

Some advanced features that are included in the calculator are:
- Implicit multiplication e.g. (3 + 7)(6 / 2) is the same as (3 + 7) * (6 / 2)
- Saves previous expressions and results to a history file
  - Expressions that resulted in an error will not be included in the history file
- Math constants e.g. pi and e
- Handles floating point numbers
  - It's required to add zero to the floating point number if it's less than 1.
  - It can evaluate roots when entered using decimal exponents.

## 4.1 How to use Implicit Multiplication

1. Enter an expression without any multiplication symbols.
2. View the result. 

Example:
- Enter an expression: 2(1 + 4)
- Result: 10

## 4.2 How to use the History Textfile

1. Enter several expressions.
2. View each result individually.
3. Open the generated/updated 'history.txt' textfile.
4. View the previous expressions displayed.

Example:
- Enter an expression: 3 + 1
- Result: 4
- Enter an expression: (8*1
- Result: Error: Mismatched parentheses!
- Enter an expression: 2 / 1
- Result: 2

(Open the generated/updated history.txt)
1. 3 + 1 = 4
2. 2 / 1 = 2

## 4.3 How to use Math Constants

1. Enter an expression using a math constant.
2. View the result.

Example:
- Enter an expression: 1 * pi
- Result: 3.14159
- Enter an expression: 3e
- Result: 8.15485

## 4.4 How to use Floating Point Numbers

1. Enter an expression using a decimal value.
2. View the result.

Example:
- Enter an expression: 0.1 + 3.1
- Result: 3.2

### 4.4.1 How to Evaluate Roots using Decimals

1. Enter an expression that raises a value to a fractional or decimal exponent.
2. Use:
    - 1/2 for square roots
    - 1/3 for cube roots
    - 1/n for other (n) root
3. View the result.

Example:
- Enter an expression: 49 ** 0.5
- Result: 7
- Enter an expression: 27 ** (1/3)
- Result: 3
- Enter an expression: 16 ** 0.25
- Result: 2

---

# 5. Troubleshooting

1. The program doesn’t run

Make sure the program was built successfully using the make command. If errors appear during the build process, fix the reported issues and run make again. Also verify that you are running the correct executable file. If you use a macOS/Linux operating system, make sure you use ./ before the executable name when running the program in a terminal.

2. Invalid expression error

This usually happens when something is wrong in the input. Common issues are missing operators (like 5 (2 + 3)), mismatched parentheses, or using invalid symbols like ^ or &.

3. Division by zero

You get this when a number is divided by zero, like 10 / (5 - 5). Just change the expression so the denominator isn’t zero.

4. Wrong result

This is usually because of order of operations. Try using parentheses to make it clearer, and remember exponentiation uses **, not ^.

5. Program crashes or stops

Re-run the program and check your input formatting. If it keeps happening, recompile and try again with a simpler expression.

6. Invalid decimal formatting

Decimal numbers less than 1 must include a leading zero. For example, use 0.5 instead of .5.

7. History file is empty or not updating

Only valid expressions are saved to history.txt. Expressions that produce errors will not be written to the file.

8. Unexpected root calculation result

Make sure fractional exponents are entered correctly. For example:

49 ** 0.5 = 7

27 ** (1/3) = 3

---

# 6. Examples of uses

Here are some examples of how the program works.

----------------------------------------------<br>
Arithmetic Expression Evaluator<br>
Enter 'q' to Quit<br>
----------------------------------------------<br>
Enter an expression: (3 + 2) * 4<br>
Result: 20<br>
----------------------------------------------<br>
Enter an expression: 4 * (3 + 2) % 7 - 1<br>
Result: 5<br>
----------------------------------------------<br>
Enter an expression: 5 (2 + 3)<br>
Result: 25<br>
----------------------------------------------<br>
Enter an expression: 30 - 8 / ( 5 - 5 )<br>
Error: Division by zero<br>
----------------------------------------------<br>
Enter an expression: q<br>
Exiting program...<br>

---

# 7. Glossary

- Arithmetic expression: A math problem made up of numbers and operators.
- Binary operator: An operator that works on two numbers, like 3 + 2.
- CLI (Command Line Interface): A text-based way to interact with the program.
- Exponentiation: Raising a number to a power using **.
- Floating point number: A number containing a decimal value.
- Implicit multiplication: Multiplication without using the * symbol, such as 2(3 + 4).
- Operand: A value used in a mathematical operation.
- Operator: A symbol like +, -, *, /, %, or **.
- PEMDAS: Order of operations (parentheses, exponents, multiply/divide, add/subtract).
- Parser: The part of the program that understands the structure of the expression.
- Parentheses: Symbols used to group parts of an expression.
- Tokenization: Breaking input into numbers, operators, and parentheses.
- Unary operator: An operator that works on one number, like -5.


---

# 8. FAQ

This section should answer frequently asked questions about the software. 

1. What operators are supported?

+, -, *, /, %, and **.

2. Can I use decimals?

Yes, as long as the number includes a leading zero.

3. What if I enter something wrong?

The program will show an error message instead of crashing.

4. Do I need parentheses?

Not always, but they help control order of operations.

5. Why doesn’t ^ work?

Because exponentiation uses ** in this program.

6. Can I enter multiple expressions at once?

No, only one expression at a time.

7. What happens if I divide by zero?

You will receive an error message.

8. Can I use spaces in expressions?

Yes, spaces are ignored and optional in most expressions.

9. Does the calculator support negative numbers?

Yes, unary operators allow expressions like -5 + 2.

10. Are invalid expressions saved to history.txt?

No, expressions that result in errors are not saved.

11. Can I use nested parentheses?

Yes, the calculator supports multiple levels of nested parentheses.

---

© Group 3, 2026
