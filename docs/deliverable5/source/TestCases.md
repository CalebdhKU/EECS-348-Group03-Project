---

<div align="right">

# Group 3

</div>

---

# Arithmetic Expression Evaluator in C++
**Version:** 1.4   
**Date:** 05/10/2026   
**Document Identifier:** AEE-TC-1.4

---

# Test Case
## Version 1.4

---

| Date | Version | Description | Author |
|------|---------|------------|--------|
| 04/01/2026 | 1.0 | Initial creation and conversion of Deliverable 5 into GitHub using Markdown format | Ivan Kullaya |
| 05/05/2026 | 1.1 | Rough draft of sections 1 through 5 | Aaron Trites |
| 05/06/2026 | 1.2 | Filled in actual outputs for test cases in Section 5 | Aaron Trites |
| 05/10/2026 | 1.3 | Added sections 6-8, Updated Sections 4-5 to include advanced features test case & Improved formatting consistency prior to submission | Ivan Kullaya |
| 05/10/2026 | 1.4 | Submission version of Deliverable 05 | Maha Jornaz |

---

## Table of Contents

1. Purpose  
2. Test Case identifier  
3. Test item
4. Input specifications
5. Output specifications
6. Environmental needs
    - 6.1 Hardware
    - 6.2 Software
    - 6.3 Other
7. Special procedural requirements
8. Intercase dependencies

---

# 1. Purpose

This Test Case Specification document for the Arithmetic Expression Evaluator in C++ defines the test cases used to verify that the evaluator correctly parses, validates, and evaluates arithmetic expressions entered by a user through the command-line interface.

The purpose of these test cases is to confirm that the evaluator handles normal arithmetic operations, operator precedence, parentheses, unary operators, exponentiation, modulo operations, whitespace, nested expressions, and invalid input conditions. These tests support the project goal of producing a reliable arithmetic expression parser and evaluator implemented in C++. These test cases are designed to be repeatable and independently verifiable.

---

# 2. Test Case identifier

Each test case is assigned a unique identifier using the format TC##, where TC stands for Test Case and ## is a two-digit number.

| Test Case ID | Test Case Name |
|-------------|----------------|
| TC01 | Unary Operator Handling |
| TC02 | Basic Addition |
| TC03 | Parentheses Override Precedence |
| TC04 | Exponentiation Associativity |
| TC05 | Invalid Character Handling |
| TC06 | Multiplication Before Addition |
| TC07 | Division Operation |
| TC08 | Modulo Operation |
| TC09 | Nested Parentheses |
| TC10 | Whitespace Handling |
| TC11 | Unary Plus Handling |
| TC12 | Negative Number Addition |
| TC13 | Invalid Parentheses Handling |
| TC14 | Division by Zero Handling |
| TC15 | Complex Valid Expression |
| TC16 | Negative Number Output |
| TC17 | Double Negative Multiplication |
| TC18 | Negative Number Subtraction |
| TC19 | Invalid Operator Sequence |
| TC20 | Unsupported Operator Handling |
| TC21 | Complex Nested Unary and Exponentiation |
| TC22 | Implicit Multiplication with Parentheses |
| TC23 | Implicit Multiplication Between Parentheses |
| TC24 | Pi Constant Handling |
| TC25 | e Constant Handling |
| TC26 | Expression History File Logging |

---

# 3. Test item

The test item is the Arithmetic Expression Evaluator in C++ application. The evaluator accepts a user-entered arithmetic expression, parses the expression, applies the correct order of operations, and returns either the computed result or an error message.

The features exercised by these test cases include:

- Basic arithmetic operators: +, -, *, /, and %
- Exponentiation using **
- Unary operators: unary plus and unary minus
- Parentheses and nested parentheses
- Operator precedence and associativity
- Whitespace tolerance in user input
- Error handling for invalid characters, invalid parentheses, and division by zero
- Negative number output
- Double negative multiplication
- Negative number subtraction
- Advanced features including implicit multiplication, math constants pi and e, and expression history logging to a text file

---

# 4. Input specifications

Each test case uses a single arithmetic expression entered as command-line input. The evaluator should read the expression, tokenize or parse it, evaluate it according to the required arithmetic rules, and produce the expected output.

| Test Case ID | Description | Test Input | Input Type / Notes |
|-------------|-------------|------------|--------------------|
| TC01 | Verify unary operator handling | -(2 * (-3)) | Valid expression using nested unary minus |
| TC02 | Verify basic addition | 3 + 4 | Valid expression using addition |
| TC03 | Verify parentheses override precedence | (3 + 5) * 2 | Valid expression using parentheses before multiplication |
| TC04 | Verify exponentiation associativity | 2 ** 3 ** 2 | Valid expression using exponentiation; should evaluate right-to-left |
| TC05 | Verify invalid character handling | 7 & 3 | Invalid expression using unsupported character & |
| TC06 | Verify multiplication has higher precedence than addition | 3 + 4 * 2 | Valid expression requiring multiplication before addition |
| TC07 | Verify division operation | 20 / 5 | Valid expression using division |
| TC08 | Verify modulo operation | 10 % 3 | Valid expression using modulo |
| TC09 | Verify nested parentheses | (2 + (3 * (4 - 1))) | Valid expression with multiple parenthetical groups |
| TC10 | Verify whitespace handling |   8   +   2 * 5   | Valid expression with extra spaces |
| TC11 | Verify unary plus handling | +(5) | Valid expression using unary plus |
| TC12 | Verify addition with a negative number | 5 + -3 | Valid expression using unary minus after addition operator |
| TC13 | Verify invalid parentheses handling | (3 + 4 | Invalid expression with missing closing parenthesis |
| TC14 | Verify division by zero handling | 10 / 0 | Invalid arithmetic operation |
| TC15 | Verify a complex valid expression | 3 + 10 * 2 / (1 - 3) ** 2 | Valid expression using precedence, parentheses, division, and exponentiation |
| TC16 | Verify a negative number output | 5 - 6 | Valid expression with negative output |
| TC17 | Verify double negative multiplication | -7 * -9 | Valid expression with two negative factors |
| TC18 | Verify negative number subtraction | 10 - - 3 | Valid expression with double negative |
| TC19 | Verify invalid operator sequence | 5 + * 2 | Invalid expression with incorrect operator sequence |
| TC20 | Verify unsupported operator | 7 ^ 9 | Invalid expression using unsupported operator ^ |
| TC21 | Verify complex nested unary and exponentiation | -((2 + 3) ** 2 % 4) | Valid expression using nested unary operators, exponentiation, modulo, and parentheses |
| TC22 | Verify implicit multiplication with parentheses | 2(3 + 4) | Valid expression using implicit multiplication between a number and parentheses |
| TC23 | Verify implicit multiplication between parentheses | (3 + 7)(6 / 2) | Valid expression using implicit multiplication between parenthetical expressions |
| TC24 | Verify pi constant handling | 2pi | Valid expression using implicit multiplication with pi constant |
| TC25 | Verify e constant handling | 3e | Valid expression using implicit multiplication with e constant |
| TC26 | Verify expression history file logging | 3 + 4 | Valid expression that should also be saved to the history text file |

---

# 5. Output specifications

The evaluator should produce the exact expected result for valid expressions. For invalid expressions, the evaluator should produce an appropriate error message. Actual results and pass/fail status should be completed during test execution.

| Test Case ID | Expected Output | Actual Output | Pass/Fail |
|-------------|-----------------|---------------|-----------|
| TC01 | 6 | 6 | Pass |
| TC02 | 7 | 7 | Pass |
| TC03 | 16 | 16 | Pass |
| TC04 | 512 | 512 | Pass |
| TC05 | Error: Invalid character | Error: Invalid character entered! | Pass |
| TC06 | 11 | 11 | Pass |
| TC07 | 4 | 4 | Pass |
| TC08 | 1 | 1 | Pass |
| TC09 | 11 | 11 | Pass |
| TC10 | 18 | 18 | Pass |
| TC11 | 5 | 5 | Pass |
| TC12 | 2 | 2 | Pass |
| TC13 | Error: Mismatched parentheses | Error: Mismatched parentheses.  | Pass |
| TC14 | Error: Division by zero | Error: Division by zero | Pass |
| TC15 | 8 | 8 | Pass |
| TC16 | -1 | -1 | Pass |
| TC17 | 63 | 63 | Pass |
| TC18 | 13 | 13 | Pass |
| TC19 | Error: Invalid expression | Error: Invalid expression! | Pass |
| TC20 | Error: Invalid character | Error: Invalid character entered! | Pass |
| TC21 | -1 | -1 | Pass |
| TC22 | 14 | 14 | Pass |
| TC23 | 30 | 30 | Pass |
| TC24 | 6.283185307 | 6.28319 | Pass |
| TC25 | 8.154845485 | 8.15485 | Pass |
| TC26 | Expression evaluates to 7 and is saved to the history file | Expression evaluates to 7 and is saved to the history file | Pass |

---

# 6. Environmental needs

## 6.1 Hardware

No special hardware requirements are needed. The evaluator can run on any modern computer capable of compiling and running C++ programs.

## 6.2 Software 

- C++17 compatible compiler (g++)
- Make utility for compiling the project using the Makefile
- Terminal or command-line interface
- macOS, Windows, or Linux operating system

## 6.3 Other

GitHub was used for version control and team collaboration. A history text file is also generated or updated by the evaluator to store previously entered expressions and results.

---

# 7. Special procedural requirements

Before executing the test cases:
- Compile the program successfully using the Makefile.
- Run the executable from the command line.
- Enter each test expression individually.

---

# 8. Intercase dependencies

The test cases are independent and may be executed in any order.

---

© Group 3, 2026
