# Known Issues

This page documents current limitations and minor issues in the Arithmetic Expression Evaluator project.

## 1. Floating point precision

Some floating-point calculations may display rounded values due to standard double precision formatting.

Examples:
- 2pi displays as 6.28319
- 3e displays as 8.15485

This behavior is expected with C++ double output formatting but could be improved with custom precision settings.

## 2. Extremely large exponentiation

Very large exponentiation operations may overflow standard double limits.

Example:

99999 ** 99999

Results in infinity (`inf`).

Future updates could add overflow detection.

## 3. Invalid decimal formatting

The program does not fully reject invalid decimal inputs such as:

1..2 + 3

This will incorrectly evaluate instead of throwing an error.

The tokenizer should be updated to validate that each number contains at most one decimal point.


# Future Improvements / Proposed Features

- Add variables/functions
- Add scientific notation support
