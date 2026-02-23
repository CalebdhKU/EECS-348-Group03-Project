---

<div align="right">

## Group 3

</div>

---

# Arithmetic Expression Evaluator in C++
**Version:** 1.14   
**Date:** 02/19/2026  
**Document Identifier:** Software Development Plan

---

# Software Development Plan  
## Version 1.14

---

# Revision History

| Date | Version | Description | Author |
|------|---------|------------|--------|
| 02/19/2026 | 1.0 | Initial creation and conversion of Deliverable 1 into GitHub using Markdown format | Ivan Kullaya |
| 02/20/2026 | 1.1 | Addition of Sections 1.1-1.3 & 2.2-2.3 | Greeshma Kunduri |
| 02/20/2026 | 1.2 | Addition of Sections 3.3, 3.1 & 2.4 | Maha Jornaz |
| 02/20/2026 | 1.3 | Revision of Sections 3.1 & 2.4 | Maha Jornaz |
| 02/21/2026 | 1.4 | Revision of Section 3.1 | Jerry Merveille |
| 02/21/2026 | 1.5 | Removal of Sections 3.2, 4.1, 4.2.1, 4.2.5, 4.6 | Maha Jornaz |
| 02/21/2026 | 1.6 | Revision of Sections 1.1-1.2, 2.2-2.3, & 3.3 | Maha Jornaz |
| 02/21/2026 | 1.7 | Addition of Sections 4.2 (including subsections) & 4.4 | Jerry Merveille |
| 02/22/2026 | 1.8 | Addition of Sections 4.5 & 4.7 | Aaron Trites |
| 02/22/2026 | 1.9 | Addition of Section 4.3 | Maha Jornaz |
| 02/22/2026 | 1.10 | Addition of Section 4.8 | Caleb Harmsen |
| 02/22/2026 | 1.11 | Addition of Sections 1.3-1.5 & Section 5 | Ivan Kullaya |
| 02/22/2026 | 1.12 | Revision of Group Title, Revision History, & Formatting | Ivan Kullaya |
| 02/22/2026 | 1.13 | Addition of New Team Member Role/Contact Info | Maha Jornaz |
| 02/22/2026 | 1.14 | Improved formatting consistency prior to submission | Ivan Kullaya |
| 02/22/2026 | 1.15 | Submission version of Deliverable 01 | Maha Jornaz |

---

# Table of Contents


1. Introduction  
   - 1.1 Purpose  
   - 1.2 Scope  
   - 1.3 Definitions, Acronyms, and Abbreviations  
   - 1.4 References  
   - 1.5 Overview  
2. Project Overview  
   - 2.1 Project Purpose, Scope, and Objectives  
   - 2.2 Assumptions and Constraints  
   - 2.3 Project Deliverables  
   - 2.4 Evolution of the Software Development Plan  
3. Project Organization  
   - 3.1 Organizational Structure  
   - 3.2 External Interfaces  
   - 3.3 Roles and Responsibilities
4. Management Process  
   - 4.1 Project Estimates  
   - 4.2 Project Plan  
   - 4.3 Project Monitoring and Control  
   - 4.4 Requirements Management  
   - 4.5 Quality Control  
   - 4.6 Reporting and Measurement  
   - 4.7 Risk Management  
   - 4.8 Configuration Management  
5. Annexes  

---

# 1. Introduction


## 1.1 Purpose

The purpose of this Software Development Plan is to provide a clear roadmap for developing an Arithmetic Expression Parser built in C++. This document defines how the project will be planned, executed, and monitored, ensuring that the team delivers a functional, reliable, and well-documented parser.
The following people use the Software Development Plan:
- The project manager uses it to plan the project schedule and resource needs, and to track progress against the schedule.
- Project team members use it to understand what they need to do, when they need to do it, and what other activities they are dependent         upon. 

---

## 1.2 Scope

This plan covers all phases, from planning and requirements gathering to design, implementation, testing, and final delivery. The parser will support arithmetic expressions with operators (+, -, *, /, %, **), parentheses, and unary operators, following standard precedence and associativity rules.

Included in scope:
- Defining project goals, deliverables, and key milestones.
- Outlining development processes, schedules, and resource requirements.
- Following quality, testing, and documentation standards. 

Excluded from scope:
- Detailed iteration-level task assignments, which are documented separately in the Iteration Plans.

---

## 1.3 Definitions, Acronyms, and Abbreviations

- **Binary Operator** - An operator that operates on two operands (e.g., 1 + 2).
- **CLI (Command-Line Interface)** - A text-based interface used for entering program input.
- **Expression Evaluator** - A program that computes the result of a mathematical expression.
- **OOP (Object-Oriented Programming)** - A programming paradigm based on objects, classes, and encapsulation.
- **Parser** - A software component that analyzes input text according to a defined grammar and structure.
- **PEMDAS** - Order of operations: Parentheses, Exponents, Multiplication/Division, Addition/Subtraction.
- **Unary Operator** - An operator that operates on a single operand (e.g., +9, -5)

---

## 1.4 References

- EECS348: Term Project in C++ -- Arithmetic Expression Evaluator in C++, Professor Hossein Saiedian, Spring 2026
- Unified Process for Education (UPEDU) Template -- Software Development Plan, Professor Hossein Saiedian, Spring 2026

---

## 1.5 Overview

This Software Development Plan outlines the management, organization, and development strategy for the Arithmetic Expression Evaluator project in C++. The document describes the project’s purpose, scope, objectives, and deliverables, as well as the organizational structure and roles of team members.

The plan further defines the project timeline, major milestones, risk management strategy, quality control processes, and configuration management procedures. This document serves as the primary management reference for guiding development activities throughout the semester.

---

# 2. Project Overview


## 2.1 Project Purpose, Scope, and Objectives

This project aims to develop a C++ arithmetic expression parser for integration into a larger compiler. It will evaluate expressions with operators (+, -, *, /, %, **), parentheses, and unary operators according to standard precedence. 
Objectives:
- Build a parser that correctly evaluates arithmetic expressions.
- Handle errors such as division by zero or invalid syntax.
- Produce clear documentation and a user-friendly interface.
- Keep the parser modular and ready to integrate into a larger compiler system.

---

## 2.2 Assumptions and Constraints

Assumptions:
- Initial input will use integers; floating-point support may be added later.
- Required tools and resources will be available throughout the project.

Constraints:
- Must be completed within the Spring 2026 term.
- Team availability may be limited by other commitments.
- Must run across Windows, Linux, and macOS (or major desktop platforms).
- Integration with the larger compiler may impose design limits.

---

## 2.3 Project Deliverables
 
- Project Management Plan: Timeline, milestones, and roles.
- Requirements Document: Functional and non-functional requirements.
- Design Document: System architecture and algorithms.
- Test Suite: Test cases and results for valid and invalid expressions.
- C++ Source Code: Clean, modular, and documented code.
- User Manual/README: Instructions with examples for using the parser.
- Iteration Reports: Progress summaries at the end of each iteration.

---

## 2.4 Evolution of the Software Development Plan

The Software Development Plan will be revised prior to the start of each Iteration phase. In addition to scheduled updates, unscheduled revisions are allowed as needed to improve clarity and formatting.

| Software Development Plan Version | Date | Description of Changes |
| ----------- | ------ | ------------- |
| 1.0 | 2/10/26 | Initial Download of Software Development Plan |
| 1.1 | 2/17/26 | Updated plan to reflect reassignment of team section responsibilities |


---

# 3. Project Organization

## 3.1 Organizational Structure

The project team consists of seven members, each assigned a leadership role to ensure structured execution and accountability throughout the project's timeline. While each member has defined responsibilities, collaboration is encouraged and team members may contribute beyond their assigned roles when necessary.

The division of roles and section responsibilities is as follows:

- __Abina Arshad (Integration Leader)__: Ensures code from different team members integrates properly, prevents merge conflicts, and makes sure the program compiles and runs correctly across different systems. Assigned sections: N/A (late addition)
 
- __Aaron Trites (QA Testing Leader)__:  Develops testing strategies, identifies any defects or issues in the code, and compares expected vs actual results. Assigned sections: 4.5 - 4.7.

- __Caleb Harmsen (GitHub Manager)__: Manages the project repository, maintains folder structure, and oversees merges and version history. Assigned section: 4.8.
 
- __Greeshma Kunduri (Requirements Leader)__: Defines project scope, objectives, and constraints, and ensures requirements align with project timeline. Assigned sections: 1.1 – 1.2, 2.1 – 2.3.
  
- __Ivan Kullaya (Documentation Leader)__: Manages the UPEDU template, consolidates team contributions and ensures clarity and consistency to prevent point loss. Assigned sections: 1.3 – 1.5, 5. 

- __Jerry Merveille (Technical Leader)__: Provides technical direction, recommended tools and implementation approaches, and ensures technical practicality. Assigned sections: 4.1 – 4.2, 4.4. 

- __Maha Jornaz (Project Leader)__: Oversees the project coordination, schedules the meetings, records the meeting logs, and submits the project. Assigned sections: 3.1 – 3.3, 2.4, 4.3.

---

## 3.2 External Interfaces
N/A

---

## 3.3 Roles and Responsibilities 

| Person | Unified Process for EDUcation Role | Contact Info |
|--------|----------------| -------- |
| Abina Arshad | Integration Leader | abina.arshad@ku.edu |
| Aaron Trites | QA Testing Leader | atrites92@ku.edu |
| Caleb Harmsen | GitHub Manager | charmsen@ku.edu |
| Greeshma Kunduri | Requirements Leader | g675k904@ku.edu |
| Ivan Kullaya | Documentation Leader | ivan.kullaya@ku.edu |
| Jerry Merveille | Technical Leader | j675m841@ku.edu |
| Maha Jornaz | Project Leader | m130j132@ku.edu |

Each team member’s availability, programming experience, and computing platform experience are documented in the project README within the GitHub repository. These details assist in resource allocation and task delegation. Team members may support responsibilities outside their primary assigned role when necessary.

---

# 4. Management Process


## 4.1 Project Estimates

The project is scheduled to be completed within the Spring 2026 semester. The total development effort is distributed across four primary phases: Requirements, Design, Implementation, and Testing.

Effort estimates are based on:
- Academic semester timeline (15 weeks)
- Seven team members contributing weekly
- Increasing technical complexity during implementation

Re-estimation will occur at the end of each iteration to adjust for schedule deviations, technical challenges, or scope changes.

---

## 4.2 Project Plan
This section contains the schedule and resources for the project. This section includes the project schedule and iteration plans.

### 4.2.1 Phase Plan
The project follows the UPEDU lifecycle consisting of Inception, Elaboration, Construction, and Transition phases. Each phase aligns with the semester schedule and is mapped to iteration objectives and milestone deliverables as described in Sections 4.2.2 and 4.2.4.

### 4.2.2 Iteration Objectives

#### Iteration 1 – Requirements Specifications (Weeks 6–8)
-	Define the supported operators.
-	Specify precedence and associativity rules (PEMDAS).
-	Identify required features such as tokenizing, parsing, unary operators, parentheses, and error handling.
-	Document functional and non-functional requirements.
-	Identify risks or complexity.

#### Iteration 2 – Architecture & Design (Weeks 9–10/11)
-	Select parsing strategy.
-	Implement/design a class diagram using OOP principles.
-	Define the data structures for tokens, stacks, or expression trees.
-	Create UML diagrams.

#### Iteration 3 – Implementation (Weeks 10/11–14)
-	Implement the tokenizer for numbers, operators, and parentheses.
-	Implement the parser with precedence and associativity logic.
-	Implement an evaluation logic (tree or stack‑based).
-	Add unary operator support.
-	Add error handling (division by zero, invalid expressions).

#### Iteration 4 – Testing, Validation & Finalization (Weeks 13–15)
-	Develop a full unit test suite (valid, invalid, edge cases).
-	Fix bugs and/or refine the evaluation logic.
-	Finalize the user-friendly and legible command-line interface (CLI).
-	Complete test cases, documentation, and user manual.

### 4.2.3 Releases

#### Release 1 – Requirements Documentation (Preliminary)
-	The complete documentation of the requirements defining operators, precedence, unary operators cases, parentheses handling, numeric constants, and error conditions.

#### Release 2 – Architecture & Design (Beta)
-	UML diagrams, class structure, chosen data structures, and parsing strategy.

#### Release 3 – Implementation/Functional Build (Demo) 
-	A working arithmetic expression evaluator supporting all operators, parentheses, unary operators, and error handling. A basic CLI prototype is included.

#### Release 4 – Final Release (Final) 
-	Fully tested C++ program with complete documentation and a user manual.

### 4.2.4 Project Schedule

| Phases |	Milestone |	Target Week	| Description |
|--------|-----------| -------- | ------- |
| Inception	| Requirements completed | Week 8 | Operators, precedence, unary operators rules, and error cases are documented
| Elaboration | Architecture & Design completed	| Week 10 | A parsing strategy has been chosen, and UML diagrams have been implemented
| Construction	| Core Implementation completed | Week 13	| A fully functional evaluator and CLI are ready
| Transition | Testing & Improvement | Week 14 | Unit tests, bug fixes, and the CLI have been polished
| Transition | Final Release & Documentation	| Week 15 | Final build, test results, and user manual released

### 4.2.5 Project Resourcing
N/A

---

## 4.3 Project Monitoring and Control

Project progress will be monitored through weekly team meetings, milestone tracking, and GitHub activity (commits, pull requests, and issues). The team meets weekly to review progress, discuss risks, and assign upcoming tasks. Meetings are conducted virtually using Discord voice channels. The Project Leader records meeting minutes and posts them in the Meeting Logs directory within the repository. Communication between meetings occurs through Discord. Task assignments and updates are tracked using GitHub commits, pull requests, and issue discussions. The Project Leader verifies completion of assigned tasks and ensures milestones remain aligned with the course timeline. If delays occur, corrective actions may include reassigning tasks, adjusting intermediate deadlines, or increasing meeting frequency.

---

## 4.4 Requirements Management
Requirements will be documented formally in the Software Requirements Specification (the next Deliverable). Any proposed requirement changes must be reviewed by the Requirements Leader and approved by the Project Leader before implementation. All changes will be tracked through GitHub and reflected in revision history updates.

---

## 4.5 Quality Control
The goal for quality control in this project is to make sure our Arithmetic Expression Evaluator works correctly and handles both valid and invalid input(s) without crashing. Rather than waiting until the end to test our program, we will be checking correctness throughout development so problems can be caught early in the process and fixed before they become bigger issues.

We will use the following methods to verify the correctness of quality.

- **Peer Reviews:** Before code is added to the main project, at least one other team member will look over it. We will check for logic mistakes, incorrect operator precedence, unclear or missing comments. This will help catch simple mistakes. If issues are found, they will be corrected before merging with the main branch.

- **Coding Style and Documentation:** All code will have clear comments so that other team members understand how it works and what the code is being used to accomplish. We will also try to keep formatting and naming conventions consistent to make debugging easier.

- **Unit Testing:** Each part of the program will be tested separately before combining everything together. Each of these parts must pass their test(s) before moving on. This includes, but is not limited to:
   - Tokenizing the input expression
   - Parsing operators (including unary operators)
   - Operator precedence
   - Handling parentheses
   - Final evaluation
   - User interface

- **Integration Testing:** After individual parts work, we will connect them together and make sure they still function correctly as a complete system. We will focus on operator precedence and nested parentheses since those are the easiest places for bugs to occur.

- **System Testing:** Once we believe the units have been integrated properly, we will run the program against many expressions through a shell script. These tests will include:
   - Normal, valid expressions
   - Complex expressions with nested parentheses
   - Edge cases
   - Invalid inputs

- **Error Handling:** The program should never crash when the user enters bad input. We will need to ensure the program can handle:
   - Division by zero
   - Missing operands
   - Invalid characters
   - Mismatched parentheses
   - Incorrect operator placement
   The program should print a clear error message instead of terminating unexpectedly.

- **Acceptance Criteria:** Our program will be considered fully operational and working when:
   - All test cases produce correct results
   - Invalid inputs show useful error messages
   - The program never crashes during testing
   If any bugs are found, they will be fixed and retested.

Defects will be recorded and tracked as Change Requests, and defect metrics will be gathered (see Reporting and Measurement below).

---

## 4.6 Reporting and Measurement

Progress will be reported during weekly team meetings. The following metrics will be monitored:

- Completion of planned iteration objectives
- Milestone completion status
- Number of open and resolved defects
- Successful execution of unit and integration tests

**Change Requests and Defect Tracking**

Defects and enhancement requests will be tracked as Change Requests using GitHub Issues. Each Change Request will include:
- A short title and description of the issue
- Steps to reproduce (if applicable)
- Expected vs. actual behavior
- Severity (Low / Medium / High)
- Assigned owner
- Status (Open / In Progress / Resolved / Closed)
- Link to related commits or pull requests (when applicable)

During each weekly meeting, the team will review active Change Requests and confirm priorities for the next work period. Resolved Change Requests will be verified through re-testing before being closed. Updates to schedule and deliverables will be reflected in GitHub commits and meeting logs. Any deviations from planned milestones will be documented and discussed for corrective action.

---

## 4.7 Risk Management
There are several things that could go wrong while developing an Arithmetic Expression Evaluator. We will keep track of the following risks and try to reduce their impact as much as possible. Risks will be discussed during team meetings and addressed when necessary. The QA/Testing lead will mainly monitor testing-related risks.
|Risk|Impact|Likelihood|Mitigation|
|:--:|:--:|:--:|:--:|
|Incorrect code implementation | High | Medium | Peer reviews with possibly more than two team members|
Invalid inputs not handled correctly | High | Medium | Create many negative test cases and validate input before evaluating|
Modules do not work together |	High | Medium | Perform integration testing and debugging whenever a new part is added |
Program crashes | High | Low | Add input checking and error handling after investigation root cause|
Team member availability conflicts | Medium | High| Communicate as openly and regularly as possible, ensure responsibilities are not too heavily placed on one individual|
Running out of time before deadlines |	High | Medium |	Begin testing early and test continuously throughout development cycle|
Requirement changes (such as allowing floating point constants) |	Low |	Low |	Ensure parsing method can easily accommodate more than just integers|

Risks will be identified in Inception Phase using the steps identified in the RUP for Small Projects activity “Identify and Assess Risks”. Project risk is evaluated at least once per iteration and documented in this table.

---

## 4.8 Configuration Management
Configuration Management ensures that all project artifacts are properly controlled, versioned, and traceable throughout the development of the Arithmetic Expression Evaluator. This process helps maintain consistency between requirements, design, implementation, and testing while allowing the team to manage changes in an organized and structured manner.

- All source code, documentation, and test artifacts will be stored in a shared Git repository (e.g., GitHub), which will serve as the central version control system. Team members will commit changes regularly using clear and meaningful commit messages.
- The repository will use a simple branching strategy:
  - **main** – stable, tested versions of the project  
  - **development** – integration of completed features  
  - **feature branches** – implementation of individual components such as tokenization, operator precedence, and error handling  
- All changes to requirements, design, or implementation must be discussed and documented in a Change Log. Major changes require updates to the requirements and design documents before implementation.
- Bugs and defects will be tracked using an issue tracking system. Each issue will include a description, expected versus actual results, the assigned team member, and its status (Open, In Progress, Resolved, Closed).
- Version numbers will follow the **Major.Minor** format (e.g., 1.0, 1.1). Project baselines will be established at major milestones such as requirements completion, design completion, implementation completion, and final release.
- The remote repository provides backup and recovery through version history, allowing previous versions of files to be restored if necessary.

---

# 5. Annexes
The following supporting materials may be included as annexes or referenced as separate documents:
- Project Description (EECS348 Deliverable 00)
- Project Plan (EECS348 Deliverable 01)
- Software Requirements Specifications (to be developed in subsequent deliverables)
- Software Architecture Design (to be developed in subsequent deliverables)
- Test Cases (to be developed in subsequent deliverables)
- User Manual (to be developed in subsequent deliverables)
- Meeting Logs (Maintained in project repository)

The project will follow the UPEDU process. 

---

© Group 3, 2026
