# Project: 0x04. C - More functions, more nested loops

## Introduction

This project focuses on enhancing your understanding and proficiency in C programming by working with functions and nested loops. The project covers various tasks, each targeting specific learning objectives related to functions, loops, and programming concepts in C.

## Learning Objectives

- Understand and utilize nested loops effectively.
- Grasp the concepts of functions and their usage in C.
- Distinguish between function declaration and definition.
- Use function prototypes for better code organization.
- Understand the scope of variables within a program.
- Utilize GCC compiler flags such as -Wall, -Werror, -Wextra, -pedantic, and -std=gnu89 for improved code quality.
- Incorporate header files to organize and share function prototypes and constants.

## Files and Directories

- **main.h**: Header file containing function prototypes and constants.
- **0-isupper.c**: Function to check if a character is uppercase.
- **1-isdigit.c**: Function to check if a character is a digit.
- **2-mul.c**: Function to multiply two integers.
- **3-print_numbers.c**: Function to print numbers from 0 to 9.
- **4-print_most_numbers.c**: Function to print numbers from 0 to 9, excluding 2 and 4.
- **5-more_numbers.c**: Function to print numbers from 0 to 14, ten times.
- **6-print_line.c**: Function to print a straight line using '_' character.
- **7-print_diagonal.c**: Function to print a diagonal line using '\' character.
- **8-print_square.c**: Function to print a square using '#' character.
- **9-fizz_buzz.c**: Program to print numbers from 1 to 100 with specific rules (Fizz, Buzz, FizzBuzz).
- **10-print_triangle.c**: Function to print a triangle using '#' character.
- **101-print_number.c**: Function to print an integer.

## Compilation and Usage

All files in this project are intended to be compiled on Ubuntu 20.04 LTS using GCC (GNU Compiler Collection) with specific options:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <source_file.c> -o <output_file>
```

For example, to compile `0-isupper.c`:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-isupper.c -o isupper
```

To run the resulting executable:
```bash
./isupper
```

## Style and Documentation

All code in this project follows the Betty style to ensure consistency and readability.

- Functions have appropriate comments explaining their purpose.
- Function prototypes and constants are defined in the `main.h` header file.
- File names and functions are named according to the task they fulfill.

## Conclusion

Through this project, you'll reinforce your understanding of functions, nested loops, variable scope, and best programming practices in C. Following the guidelines and completing the tasks will help you become more proficient in C programming. Good luck!
