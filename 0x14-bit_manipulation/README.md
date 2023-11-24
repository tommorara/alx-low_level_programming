# 0x14. C - Bit Manipulation

## Introduction

Welcome to the "0x14. C - Bit Manipulation" project! This project, authored by Julien Barbier, is designed to deepen your understanding of bitwise operations and bit manipulation in the C programming language.

## Project Details

- **Start Date:** November 23, 2023, 6:00 AM
- **End Date:** November 24, 2023, 6:00 AM
- **Checker Release:** November 23, 2023, 12:00 PM
- **Auto Review:** An auto review will be launched at the deadline.

## Learning Objectives

By the end of this project, you are expected to be able to:

- Explain the manipulation of bits and the use of bitwise operators.
- Look for the right sources of information independently.

## Resources

To successfully complete this project, it is recommended to read or watch:

- Google
- Youtube

## Requirements

### General

- **Allowed Editors:** vi, vim, emacs
- **Compilation:** Ubuntu 20.04 LTS using gcc, with options -Wall -Werror -Wextra -pedantic -std=gnu89
- **File Endings:** All files should end with a new line.
- **README.md:** A README.md file at the root of the project folder is mandatory.
- **Coding Style:** Code should adhere to the Betty style, checked using betty-style.pl and betty-doc.pl.
- **Global Variables:** Not allowed.
- **Functions per File:** No more than 5 functions per file.
- **C Standard Library Functions:** Only allowed functions are `malloc`, `free`, and `exit`. Use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden.
- **_putchar:** You are allowed to use `_putchar`, but don't push `_putchar.c`; it will be provided.

### Quiz Questions

The project includes quiz questions to reinforce your understanding. Ensure you successfully complete them.

## Tasks

### Task 0: Binary to Unsigned Int

Write a function that converts a binary number to an unsigned int.

**Prototype:** `unsigned int binary_to_uint(const char *b);`

### Task 1: Print Binary

Write a function that prints the binary representation of a number.

**Prototype:** `void print_binary(unsigned long int n);`

### Task 2: Get Bit

Write a function that returns the value of a bit at a given index.

**Prototype:** `int get_bit(unsigned long int n, unsigned int index);`

### Task 3: Set Bit

Write a function that sets the value of a bit to 1 at a given index.

**Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`

### Task 4: Clear Bit

Write a function that sets the value of a bit to 0 at a given index.

**Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`

### Task 5: Flip Bits

Write a function that returns the number of bits you would need to flip to get from one number to another.

**Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`

## Conclusion

This project challenges you to develop a deep understanding of bit manipulation in C. Remember, learning is key, so dive in and enjoy the journey!

---

**Note:** Make sure to push only the required files and adhere to the project's guidelines.

