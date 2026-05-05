---

<div align="right">

# Group 3

</div>

---

# Arithmetic Expression Evaluator in C++
**Version:** 1.1   
**Date:** 04/27/2026 </br>
**Document Identifier:** AEE-TC-1.0

---

# Test Case
## Version 1.1

---

| Date | Version | Description | Author |
|------|---------|------------|--------|
| 04/01/2026 | 1.0 | Initial creation and conversion of Deliverable 5 into GitHub using Markdown format | Ivan Kullaya |
| 04/27/2026 | 1.1 | Rough draft of sections 1 through 5 | Aaron Trites |

---

## Table of Contents

1. Purpose  
2. Test case identifier  
3. Test item
4. Input specifications
5. Output specifications

---

# 1. Purpose

This Test Case Specification document for the Arithmetic Expression Evaluator in C++ defines the test cases used to verify that the evaluator correctly parses, validates, and evaluates arithmetic expressions entered by a user through the command-line interface.

The purpose of these test cases is to confirm that the evaluator handles normal arithmetic operations, operator precedence, parentheses, unary operators, exponentiation, modulo operations, whitespace, nested expressions, and invalid input conditions. These tests support the project goal of producing a reliable C++ parser and evaluator that follows standard arithmetic rules and provides error handling for unsupported or malformed expressions.

---

# 2. Test case identifier

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
| TC17 | Verify double negative mulitplication | -7 * -9 | Valid expression with two negative factors |
| TC18 | Verify negative number subtraction | 10 - - 3 | Valid expression with double negative |

---

# 5. Output specifications

The evaluator should produce the exact expected result for valid expressions. For invalid expressions, the evaluator should produce an appropriate error message. Actual results and pass/fail status should be completed during test execution.

| Test Case ID | Expected Output | Actual Output | Pass/Fail |
|-------------|-----------------|---------------|-----------|
| TC01 | 6 | To be filled during execution | To be filled during execution |
| TC02 | 7 | To be filled during execution | To be filled during execution |
| TC03 | 16 | To be filled during execution | To be filled during execution |
| TC04 | 512 | To be filled during execution | To be filled during execution |
| TC05 | Error: Invalid character | To be filled during execution | To be filled during execution |
| TC06 | 11 | To be filled during execution | To be filled during execution |
| TC07 | 4 | To be filled during execution | To be filled during execution |
| TC08 | 1 | To be filled during execution | To be filled during execution |
| TC09 | 11 | To be filled during execution | To be filled during execution |
| TC10 | 18 | To be filled during execution | To be filled during execution |
| TC11 | 5 | To be filled during execution | To be filled during execution |
| TC12 | 2 | To be filled during execution | To be filled during execution |
| TC13 | Error: Mismatched parentheses | To be filled during execution | To be filled during execution |
| TC14 | Error: Division by zero | To be filled during execution | To be filled during execution |
| TC15 | 8 | To be filled during execution | To be filled during execution |
| TC16 | -1 | To be filled during execution | To be filled during execution |
| TC17 | 63 | To be filled during execution | To be filled during execution |
| TC18 | 13 | To be filled during execution | To be filled during execution |

---


© Group 3, 2026
