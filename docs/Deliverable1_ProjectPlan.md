<img width="468" height="32" alt="image" src="https://github.com/user-attachments/assets/b1e62795-122c-479f-aed2-2c68b3cb90ce" /># Group 3

# Arithmetic Expression Evaluator in C++
**Version:** 1.0  
**Date:** <02/19/2026>  
**Document Identifier:** <document identifier>

---

# Software Development Plan  
## Version 1.0

---

# Revision History

| Date | Version | Description | Author |
|------|---------|------------|--------|
| 02/19/2026 | 1.0 | Initial creation and conversion of Deliverable 1 into GitHub using Markdown format | Ivan Kullaya|
| <dd/mmm/yy> | <x.x> | <details> | <name> |

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
[The introduction of the Software Development Plan provides an overview of the entire document. It includes the purpose, scope, definitions, acronyms, abbreviations, references, and overview of this Software Development Plan.]

## 1.1 Purpose

The purpose of this Software Development Plan is to provide a clear roadmap for developing an Arithmetic Expression Parser built in C++. This document defines how the project will be planned, executed, and monitored, ensuring that the team delivers a functional, reliable, and well-documented parser.
The following people use the Software Development Plan: 
•	The project manager uses it to plan the project schedule and resource needs, and to track progress against the schedule. 
•	Project team members use it to understand what they need to do, when they need to do it, and what other activities they are dependent         upon. 

---

## 1.2 Scope
[A brief description of the scope of this Software Development Plan; what Project(s) it is associated with and anything else that is affected or influenced by this document. The text below is provided as an example.]

This plan covers all phases, from planning and requirements gathering to design, implementation, testing, and final delivery. The parser will support arithmetic expressions with operators (+, -, *, /, %, **), parentheses, and unary operators, following standard precedence and associativity rules.

Included in scope:
•	Defining project goals, deliverables, and key milestones.
•	Outlining development processes, schedules, and resource requirements.
•	Following quality, testing, and documentation standards. 
Excluded from scope:
•	Detailed iteration-level task assignments, which are documented separately in the Iteration Plans.
---

## 1.3 Definitions, Acronyms, and Abbreviations
[This subsection provides the definitions of all terms, acronyms, and abbreviations required to properly interpret the Software Development Plan. This information may be provided by reference to the project’s Glossary.]

See the Project Glossary.

---

## 1.4 References
[This subsection provides a complete list of all documents referenced elsewhere in the Software Development Plan. Identify each document by title, report number if applicable, date, and publishing organization. Specify the sources from which the references can be obtained. This information may be provided by reference to an appendix or to another document.

For the Software Development Plan, the list of referenced artifacts includes:
- Iteration Plans  
- Development Case  
- Vision [you may prepare a vision statement of your own: what your vision for the project is]  
- Glossary  
- Any other supporting plans or documentation.  

---

## 1.5 Overview
[This subsection describes what the rest of the Software Development Plan contains and explains how the document is organized. The text below is provided as an example.]

This Software Development Plan contains the following information:
- **Project Overview** – provides a description of the project's purpose, scope, and objectives.  It also defines the deliverables that the project is expected to deliver.
- **Project Organization** – describes the organizational structure of the project team.
- **Management Process** – explains the estimated cost and schedule, defines the major phases and milestones for the project, and describes how the project will be monitored.
- **Applicable Plans and Guidelines** – provide an overview of the software development process, including methods, tools and techniques to be followed.

---

# 2. Project Overview

## 2.1 Project Purpose, Scope, and Objectives
[A brief description of the purpose and objectives of this project and a brief description of what deliverables the project is expected to deliver.]

This project aims to develop a C++ arithmetic expression parser for integration into a larger compiler. It will evaluate expressions with operators (+, -, *, /, %, **), parentheses, and unary operators according to standard precedence. 
Objectives:
•	Build a parser that correctly evaluates arithmetic expressions.
•	Handle errors such as division by zero or invalid syntax.
•	Produce clear documentation and a user-friendly interface.
•	Keep the parser modular and ready to integrate into a larger compiler system.
---

## 2.2 Assumptions and Constraints
[A list of assumptions that this plan is based and any constraints, for example. staff, equipment, schedule, that apply to the project.]
Assumptions:
•	Initial input will use integers; floating-point support may be added later.
•	Required tools and resources will be available throughout the project.
Constraints:
•	Must be completed within the Spring 2026 term.
•	Team availability may be limited by other commitments.
•	Must run across Windows, Linux, iOS, and Android.
•	Integration with the larger compiler may impose design limits.

---

## 2.3 Project Deliverables
[A list of the artifacts to be created during the project, including target delivery dates. The text below is provided as an example.] Requirements, design specs, test cases, code  

•	Project Management Plan: Timeline, milestones, and roles.
•	Requirements Document: Functional and non-functional requirements.
•	Design Document: System architecture and algorithms.
•	Test Suite: Test cases and results for valid and invalid expressions.
•	C++ Source Code: Clean, modular, and documented code.
•	User Manual/README: Instructions with examples for using the parser.
•	Iteration Reports: Progress summaries at the end of each iteration.

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

The project team consists of six members, each assigned a leadership role to ensure structured execution and accountability throughout the project's timeline. While each member has defined responsibilities, collaboration is encouraged and team members may contribute beyond their assigned roles when necessary. <br><br>
The division of roles and section responsibilities is as follows:

*	__Aaron Trites (QA Testing Leader)__:  Develops testing strategies, identifies any defects or issues in the code, and compares expected vs actual results. Assigned sections 4.5 - 4.7.

*	__Caleb Harmsen (GitHub Manager)__: Manages the project repository, maintains folder structure, and oversees merges and version history. Assigned section 4.8.
 
*	__Greeshma Kunduri (Requirements Leader)__: Defines project scope, objectives, and constraints, and ensures requirements align with project timeline. Assigned sections 1.1 – 1.2, 2.1 – 2.3.
  
*	__Ivan Kullaya (Documentation Leader)__: Manages the UPEDU template, consolidates team contributions and ensures clarity and consistency to prevent point loss. Assigned sections 1.3 – 1.5. 

*	__Jerry Merveille (Technical Leader)__: Provides technical direction, recommended tools and implementation approaches, and ensures technical practicality. Assigned sections 4.1 – 4.2, 4.4. 

*	__Maha Jornaz (Project Leader)__: Oversees the project coordination, schedules the meetings, records the meeting logs, and submits the project. Assigned sections 3.1 – 3.3, 2.4, 4.3.

---

## 3.2 External Interfaces
[Describe how the project interfaces with external groups. For each external group, identify the internal and external contact names. This should include responsibilities related to deployment and acceptance of the product.]

---

## 3.3 Roles and Responsibilities 


| Person | Unified Process for EDUcation Role | Contact Info |
|--------|----------------| -------- |
| Aaron Trites | QA Testing Leader | atrites92@ku.edu |
| Caleb Harmsen | GitHub Manager | charmsen@ku.edu |
| Greeshma Kunduri | Requirements Leader | g675k904@ku.edu |
| Ivan Kullaya | Documentation Leader | ivan.kullaya@ku.edu |
| Jerry Marveille | Technical Leader | j675m841@ku.edu |
| Maha Jornaz | Project Leader | m130j132@ku.edu |


Anyone on the project can perform Any Role activities.

---

# 4. Management Process

## 4.1 Project Estimates
[Provide the estimated cost and schedule for the project, as well as the basis for those estimates, and the points and circumstances in the project when re-estimation will occur.] 

---

## 4.2 Project Plan
[This section contains the schedule and resources for the project.]Project artifact as well as iteration schedules] 

### 4.2.1 Phase Plan
[Include the following:
- a Gantt chart showing the allocation of time to the project phases (Not necessarily detailed to the activity level; this type of Gantt Chart is providing along with the Iteration Plans themselves; Provide an Overview of the project Timeline with the major miles stones]
- identify major milestones with their achievement criteria
Define any important release points and demos.]
[If available, refer to the related Iteration Plan Documents for more details]

### 4.2.2 Iteration Objectives
[Briefly list the objectives to be accomplished for each of the iterations and Refer to the related Iteration Plan Documents for more details.]

### 4.2.3 Releases
[A brief description of each software release and whether it’s demo, beta, and so on.]

### 4.2.4 Project Schedule
[Diagrams or tables showing target dates for completion of iterations and phases, release points, demos, and other milestones.] [Limit to major project milestone, e.g., requirements, design, implementaiotn, and testing]

### 4.2.5 Project Resourcing
[Identify the numbers and type of staff required here, including any special skills or experience, scheduled by project phase or iteration.

List any special training project team members will require, with target dates for when this training should be completed.]

---

## 4.3 Project Monitoring and Control
[The following is a checklist of items to consider:
- Requirements Management: Specify the information and control mechanisms which will be collected and used for measuring, reporting, and controlling changes to the product requirements.
- Quality Control: Describe the timing and methods to be used to control the quality of the project deliverables and how to take corrective action when required. Include techniques, metrics, criteria, and procedures used for evaluation— this will include walkthroughs, inspections, and reviews. Note that this is in addition to the Test Plan, which is not enclosed in the Software Development Plan.
- Reporting and Measurement: Describe reports to be generated. Specify which metrics should be collected and why. OR if available, refer to the Project Measurements and Project Measurements document
- Risk Management: Describe the approach that will be used to identify, analyze, prioritize, monitor and mitigate risks.  If available, refer to the Risk List document.
- Configuration Management: Describe the process by which problems and changes are submitted, reviewed, and dispositioned. Describe how project or product artifacts are to be named, marked, and numbered, including  system software, plans, models, components, test software, results and data, executables, and so on. Describe retention policies, and the back-up, disaster, and recovery plans.  OR if Available, Refer to the Configuration Management Plan document
The text that follows is provided as an example.]

### 4.4 Requirements Management
The requirements for this system are captured in the Vision document. Requested changes to requirements are captured in Change Requests, and are approved as part of the Configuration Management process.

### 4.5 Quality Control
Defects will be recorded and tracked as Change Requests, and defect metrics will be gathered (see Reporting and Measurement below).

All deliverables are required to go through the appropriate review process, as described in the Development Case. The review is required to ensure that each deliverable is of acceptable quality, using guidelines and checklists. 

Any defects found during review which are not corrected prior to releasing for integration must be captured as Change Requests so that they are not forgotten. 

### 4.6 Reporting and Measurement
Updated schedule estimates, and metrics summary reports, will be generated at the end of each iteration. 

The Minimal Set of Metrics, as described in the RUP Guidelines: Metrics will be gathered on a weekly basis.  These include: 

Earned value for completed tasks. This is used to re-estimate the schedule and budget for the remainder of the project, and/or to identify need for scope changes. 

Total defects open and closed – shown as a trend graph. This is used to help estimate the effort remaining to correct defects. 

Acceptance test cases passing – shown as a trend graph. This is used to demonstrate progress to stakeholders.

Refer to the Project Measurements Document (AAA-BBB-X.Y.doc) for detailed information.

### 4.7 Risk Management
Risks will be identified in Inception Phase using the steps identified in the RUP for Small Projects activity “Identify and Assess Risks”. Project risk is evaluated at least once per iteration and documented in this table.

Refer to the Project Measurements Document (AAA-BBB-X.Y.doc) for detailed information.

### 4.8 Configuration Management
Appropriate tools will be selected which provide a database of Change Requests and a controlled versioned repository of project artifacts.

All source code, test scripts, and data files are included in baselines. Documentation related to the source code is also included in the baseline, such as design documentation. All customer deliverable artifacts are included in the final baseline of the iteration, including executables.

The Change Requests are reviewed and approved by one member of the project, the Change Control Manager role.

Refer to the Project Measurements Document (AAA-BBB-X.Y.doc) for detailed information.

---

# 5. Annexes
[Additional material of use to the reader of the Software Development Plan. Reference or include any project technical standards and plans which apply to this project. This typically includes the Programming Guidelines, Design Guidelines, and other process guidelines. The text that follows is provided as an example.]

The project will follow the UPEDU process. 

Other applicable process plans are listed in the references section, including Programming Guidelines.

---

# Confidential  
© Group 3, 2026
