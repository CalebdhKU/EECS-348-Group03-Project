
# Group 3

</div>

---

# Arithmetic Expression Evaluator in C++
**Version:** 1.0   
**Date:** 04/01/2026  
**Document Identifier:** AEE-UM-1.0

---

# User's Manual
## Version 1.0

---

| Date | Version | Description | Author |
|------|---------|------------|--------|
| 04/01/2026 | 1.0 | Initial creation and conversion of Deliverable 6 into GitHub using Markdown format | Ivan Kullaya |
| 05/05/2026 | 1.1 | Addition of Sections 5, 6, 7, 8 | Greeshma Kunduri |
| 05/05/2026 | 1.2 | Revise UsersManual with detailed software instructions | Maha Jornaz |

---

## Table of Contents

1. Purpose  
2. Introduction 
3. Getting started
4. Advanced features
5. Troubleshooting
6. Examples of uses
7. Glossary
8. FAQ

---

# 1. Purpose
The purpose of the user’s manual document is to guide students/users to understand how the arithmetic evaluator operates. The user inputs an expression of their choice, and the software returns a value or an error back to the user. It handles operator precedence (PEMDAS), arithmetic expressions, and errors. The document includes the following sections: Purpose, Introduction, Getting Started, Advanced Features, Troubleshooting, Examples, Glossary of Terms, and FAQ. 

---

# 2. Introduction
__The software uses order of operations (PEMDAS) and other functions, which includes:__

*	__()__ : is a parenthesis operator used to group numbers that need to be calculated first
*	__**__ : is an exponential operator used to take a number’s power 
*	__*__ : is a multiplication operator used to calculate the product
*	__/__ : is a division operator used to calculate the quotient
*	__+__ : is an addition operator used to calculate the sum
*	__-__ : is a subtraction operator used to calculate the difference
*	__%__ : is a modulo operator used to calculate the modulus
*	__=__ : is an equal operator used to return the output of the expression
*	__+__: is a unary positive operator used to keep a value positive
*	__-__: is a unary begative operator used to keep a value negative

<br>

__Features__
* Handles order of operations (PEMDAS)
* Defined error messages
* Supports arithmetic expressions
* Handles unary operators


<br>

__How to Install and Run__

Have a C++ compiler downloaded and ready to be used. Download the source code from the GitHub Repository and upload it into the C++ compiler. Finally, execute the source code. 


---

# 3. Getting started

### __Steps__ 

Step 1: Download the source code and compile it with a C++ compiler

Step 2: Input any arithmetic expression 
*	Enter expression: 4 + 1

Step 3: After running the expression, the result should appear. 
*	Result: 5

Step 4: If the arithmetic expression is invalid, an error message will appear 
*	Enter expression: 7 / 0 
*	ERROR: Division by 0

<br>

### __Usage of Operators__

| Operator |  Description  | Expression |
|----------|---------------|------------|
|    ()    |  Parenthesis  |   (5 + 1)  |
|    **    |    Exponent   |    5 ** 1  |
|    *     | Multiplication|    5 * 1   |
|    /     |    Division   |    5 / 1   |
|    +     |    Addition   |    5 + 1   |
|    -     |  Subtraction  |    5 - 1   |
|    %     |     Modulo    |    5 % 1   |




---

# 4. Advanced features
This section should describe any advanced features of the software, such as the ability to save and load expressions, 
or to define custom variables and functions. 

---

# 5. Troubleshooting
* Program doesn’t run
Make sure it compiled correctly first. If it didn’t, fix the errors and try again. Also double check you’re running the right executable.

* Invalid expression error
This usually happens when something is wrong in the input. Common issues are missing operators (like 5 (2 + 3)), mismatched parentheses, or using invalid symbols like ^ or &.

* Division by zero
You get this when a number is divided by zero, like 10 / (5 - 5). Just change the expression so the denominator isn’t zero.

* Wrong result
This is usually because of order of operations. Try using parentheses to make it clearer, and remember exponentiation uses **, not ^.

* Program crashes or stops
Re-run the program and check your input formatting. If it keeps happening, recompile and try again with a simpler expression.

---

# 6. Examples of uses
Here are some examples of how the program works.

* 3 + 4 → 7
* 10 - 2 → 8
* 10 * 2 / 5 → 4
* 8 - (5 - 2) → 5
* (3 + 2) * 4 → 20
* 2 ** 3 → 8
* 4 * (3 + 2) % 7 - 1 → 5
* -(+2) * (+3) → -6
* 5 (2 + 3) → Error: Invalid expression

---

# 7. Glossary
* Arithmetic expression: A math problem made up of numbers and operators.

* Operator: A symbol like +, -, *, /, %, or **.

* Unary operator: An operator that works on one number, like -5.

* Binary operator: An operator that works on two numbers, like 3 + 2.

* CLI (Command Line Interface): A text-based way to interact with the program.

* Parser: The part of the program that understands the structure of the expression.

* Tokenization: Breaking input into numbers, operators, and parentheses.

* PEMDAS: Order of operations (parentheses, exponents, multiply/divide, add/subtract).

* AST: A tree structure used internally to evaluate expressions.

---

# 8. FAQ
This section should answer frequently asked questions about the software. 

* What operators are supported?
+, -, *, /, %, and **.

* Can I use decimals?
No, only integers are supported right now.

* What if I enter something wrong?
The program will show an error instead of crashing.

* Do I need parentheses?
Not always, but they help control order of operations.

* Why doesn’t ^ work?
Because exponentiation uses ** in this program.

* Can I enter multiple expressions at once?
No, one expression at a time.

* What happens if I divide by zero?
You’ll get an error message.

---

© Group 3, 2026
