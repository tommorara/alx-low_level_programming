# 0x15. C - File I/O

## Introduction

Welcome to the "0x15. C - File I/O" project! This project, authored by Julien Barbier, focuses on file input and output operations in the C programming language using system calls. Through this project, you will deepen your understanding of file descriptors, system calls, and file permissions.

## Project Details

- **Start Date:** November 27, 2023, 6:00 AM
- **End Date:** November 28, 2023, 6:00 AM
- **Checker Release:** November 27, 2023, 12:00 PM
- **Auto Review:** An auto review will be launched at the deadline.

## Learning Objectives

By the end of this project, you are expected to be able to:

- Explain how to create, open, close, read, and write files in C.
- Understand file descriptors and their role in file I/O.
- Identify and use standard system calls such as `read`, `write`, `open`, and `close`.
- Set file permissions when creating a file.
- Distinguish between a function and a system call.
- Learn how to use flags like `O_RDONLY`, `O_WRONLY`, and `O_RDWR`.

## Resources

To successfully complete this project, it is recommended to read or watch:

- File descriptors
- C Programming in Linux Tutorial #024 - `open()`, `read()`, `write()` Functions

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
- **Allowed Syscalls:** `read`, `write`, `open`, `close`
- **_putchar:** You are allowed to use `_putchar`, but don't push `_putchar.c`; it will be provided.

### Quiz Questions

The project includes quiz questions to reinforce your understanding. Ensure you successfully complete them.

## Tasks

### Task 0: Tread lightly, she is near

Write a function that reads a text file and prints it to the POSIX standard output.

**Prototype:** `ssize_t read_textfile(const char *filename, size_t letters);`

### Task 1: Under the snow

Create a function that creates a file.

**Prototype:** `int create_file(const char *filename, char *text_content);`

### Task 2: Speak gently, she can hear

Write a function that appends text at the end of a file.

**Prototype:** `int append_text_to_file(const char *filename, char *text_content);`

### Task 3: cp

Write a program that copies the content of a file to another file.

**Usage:** `cp file_from file_to`

## Conclusion

This project provides hands-on experience with file I/O operations in C, enhancing your understanding of system calls and file manipulation. Enjoy the coding journey!

---

**Note:** Make sure to push only the required files and adhere to the project's guidelines.

