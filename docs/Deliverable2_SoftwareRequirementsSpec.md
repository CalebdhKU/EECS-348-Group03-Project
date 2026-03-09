---

<div align="right">

## Group 3

</div>

---

# Arithmetic Expression Evaluator in C++
**Version:** 1.2   
**Date:** 02/23/2026  
**Document Identifier:** Software Requirements Specifications

---

# Software Requirements Specifications 
## Version 1.2

---

| Date | Version | Description | Author |
|------|---------|------------|--------|
| 02/23/2026 | 1.0 | Initial creation and conversion of Deliverable 2 into GitHub using Markdown format | Ivan Kullaya |
| 03/05/2026 | 1.1 | Addition of sections 2.1.1-2.1.4 | Maha Jornaz |
| 03/05/2026 | 1.2 | Addition of section 2.3 | Ivan Kullaya |

---

## Table of Contents

1. Introduction  
   - 1.1 Purpose  
   - 1.2 Scope  
   - 1.3 Definitions, Acronyms, and Abbreviations  
   - 1.4 References  
   - 1.5 Overview  
2. Overall Description  
   - 2.1 Product perspective
     - 2.1.1 System Interfaces
     - 2.1.2 User Interfaces
     - 2.1.3 Hardware Interfaces
     - 2.1.4 Software Interfaces
     - 2.1.5 Communication Interfaces
     - 2.1.6 Memory Constraints
     - 2.1.7 Operations
   - 2.2 Product functions 
   - 2.3 User characteristics 
   - 2.4 Constraints
   - 2.5 Assumptions and dependencies
   - 2.6 Requirements subsets  
3. Specific Requirements  
   - 3.1 Functionality
     - 3.1.1 \<Functional Requirement One\>
   - 3.2 Use-Case Specifications  
   - 3.3 Supplementary Requirements
4. Classification of Functional Requirements  
5. Appendices

---

# 1. Introduction
[The introduction of the Software Requirements Specification (SRS) provides an overview of the entire SRS. It includes the purpose, scope, definitions, acronyms, abbreviations, references, and overview of the SRS.]

[Note: The SRS captures the complete software requirements for the system, or a portion of the system. Following is a typical SRS outline for a project using use-case modeling. This artifact consists of a package containing use cases of the use-case model and applicable Supplementary Specifications and other supporting information.]

[Many different arrangements of an SRS are possible. Refer to [IEEE830-1998] for further elaboration of these explanations, as well as other options for SRS organization.]


## 1.1 Purpose
The purpose of the SRS document is to identify the functional and non-functional conditions of the calculator system. It describes the external behavior of the system, such as how it performs calculations, returns results, and handles user interactions. It also outlines the design constraints and other factors that may influence the system.   


Furthermore, this document provides the team with a reference that guides them in creating organized and clear requirements. This ensures that all team members comprehend the system’s functionality and requirements throughout the development process.


## 1.2 Scope
[A brief description of the software application that the SRS applies to, the feature or other subsystem
grouping, what Use-Case model(s) it is associated with, and anything else that is affected or influenced by
this document.]


## 1.3 Definitions, Acronyms, and Abbreviations
[This subsection provides the definitions of all terms, acronyms, and abbreviations required to properly
interpret the SRS. This information may be provided by reference to the project’s Glossary.]


## 1.4 References
[This subsection provides a complete list of all documents referenced elsewhere in the SRS. Identify each
document by title, report number if applicable, date, and publishing organization. Specify the sources
from which the references can be obtained. This information may be provided by reference to an appendix
or to another document.]


## 1.5 Overview
The Software Requirements Specification is divided into five organized sections.    


Section 1 contains the introduction, which includes the purpose, scope, definitions, references, and overview of the document.

Section 2 provides the overall description of the system and includes product functions, user characteristics, constraints, assumptions, and requirements subsets.

Section 3 establishes the specific requirements, including functionality, use-case specifications, and supplementary requirements.

Section 4 contains the classification of functional requirements, where each requirement is categorized as Essential Desirable and Optional.

Section 5 includes the appendices, which provide additional supporting information for the project.

Together, these sections create a well-structured document that ensures consistency, clarity, and organization throughout the specification.

---

# 2. Overall Description
[This section of the SRS describes the general factors that affect the product and its requirements. This
section does not state specific requirements. Instead, it provides a background for those requirements,
which are defined in detail in Section 3, and makes them easier to understand. Include such items as:


## 2.1 Product perspective


### 2.1.1 System Interfaces

The Arithmetic Expression Evaluator interfaces with the following external components:
* __User (via Command-Line Interface)__: The system accepts a single-line arithmetic
expression entered through standard input and returns either the evaluated result or
an appropriate error message through standard output.
* __Operating System__: The system relies on the host operating system to manage
input/output operations and program execution.

The system does not interface with external databases, network services, or third-party
applications.

### 2.1.2 User Interfaces

The system provides a text-based Command-Line Interface (CLI).
User interaction shall follow this process:
1. The user enters an arithmetic expression as a single line of text.
2. The system processes the expression.
3. The system displays:
   * The computed numerical result if the expression is valid.
   * A clear and descriptive error message if the expression is invalid.

The interface shall be simple, readable, and easy to use.
No graphical user interface (GUI) is required for this version of the system.

### 2.1.3 Hardware Interfaces

The system does not require specialized hardware.
The software shall operate on standard computing hardware, including:
* Desktop computers
* Laptop computers
The system requires:
* A keyboard for input
* A monitor for output
  
No external devices or hardware integrations are required.

### 2.1.4 Software Interfaces

The system shall be implemented in C++ and shall rely on:
* The C++ Standard Library (e.g., input/output streams, strings, containers, stacks).
* A standard C++ compiler (e.g., g++, clang++, or MSVC).
* A desktop operating system such as Windows, macOS, or Linux.
  
The system does not require external libraries, databases, web services, or network
connectivity.

### 2.1.5 Communication Interfaces


### 2.1.6 Memory Constraints


### 2.1.7 Operations


## 2.2 Product functions


## 2.3 User characteristics

The primary users of the Arithmetic Expression Evaluator are:
- College students (primarily in EECS)
- Software developers
- Individuals with basic familiarity with arithmetic expressions
- Users with experience using command-line interfaces

Users are expected to:
- Understand standard arithmetic operators (+, -, *, /, %, **)
- Understand parentheses for grouping expressions
- Enter expressions using proper mathematical syntax

No advanced programming knowledge is required to operate the system; however, users should have basic familiarity with typing commands in a command-line environment.

The system does not require specialized training, but users are expected to follow correct arithmetic formatting rules.

## 2.4 Constraints


## 2.5 Assumptions and dependencies


## 2.6 Requirements subsets

---

# 3. Specific Requirements
[This section of the SRS contains all software requirements to a level of detail sufficient to enable
designers to design a system to satisfy those requirements, and testers to test that the system satisfies those
requirements. When using use-case modeling, these requirements are captured in the Use Cases and the
applicable supplementary specifications. If use-case modeling is not used, the outline for supplementary
specifications may be inserted directly into this section, as shown below.]


## 3.1 Functionality
The Arithmetic Expression Evaluator shall provide the following functional capabilities.   
### 3.1.1 \<Expression Processing\>

The system shall: 
* Accept a single-line arithmetic expression entered through the command-line interface. * Interpret the input as a sequence of numeric constants, operators, and parentheses.
* Produce either a computed result or an appropriate error message.

### 3.1.2 \<Supported Operators\>

The system shall support evaluation of the following operators: 
* Addition (+) 
* Subtraction (−) 
* Multiplication (*)
* Division (/)
* Modulo (%)
* Exponentiation (**)
  
The system shall support both binary and unary forms of the + and − operators.

### 3.1.3 \<Precedence and Associativity Rules\>    

The system shall evaluate expressions according to standard mathematical precedence rules: 

1. Parentheses shall be evaluated first.
2. Exponentiation (**) shall be evaluated with right-to-left associativity.
3. Multiplication (*), Division (/), and Modulo (%) shall be evaluated left-to-right.
4. Addition (+) and Subtraction (−) shall be evaluated left-to-right.

### 3.1.4 \<Parenthesis Handling\>

The system shall: 
* Correctly evaluate nested and multiple levels of parentheses.
* Detect and report mismatched or unbalanced parentheses.


### 3.1.5 \<Numeric Support\>
The system shall support integer numeric constants.   

Support for floating-point values may be added in future revisions.    


### 3.1.6 \<Error Detection and Reporting\>
The system shall detect and report, at minimum, the following error conditions: 
* Division by zero
* Invalid or unsupported characters
* Missing operands
* Invalid operator placement
* Mismatched parentheses The system shall display a clear error message and shall not terminate unexpectedly due to invalid input.


### 3.1.7 \<Output Behavior\>
The system shall: 
* Display the correct numerical result for valid expressions.
* Display a descriptive error message for invalid expressions. 



## 3.2 Use-Case Specifications
[In use-case modeling, the use cases often define the majority of the functional requirements of the system,
along with some non-functional requirements.]


## 3.3 Supplementary Requirements
[Supplementary Specifications capture other requirements, e.g., non-functional requirements and
development constraints, that are not included in the use cases and non-functional requirements.]

---

# 4. Classification of Functional Requirements
[List, usually in a table, all functional requirements and order them by Type (Essential, Desirable, and
Optional) or by order of appearance in the document.]

| Functionality | Type |
|------------------------|-------|
| ... | |
| ... | |

---

# 5. Appendices
[When appendices are included, the SRS should explicitly state whether or not the appendices are to be
considered part of the requirements]

---

© Group 3, 2026
