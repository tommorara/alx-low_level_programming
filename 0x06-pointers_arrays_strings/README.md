# Project Title: 0x06. C - More pointers, arrays and strings

## Table of Contents
* [Description](#description)
* [Concepts](#concepts)
* [Learning Objectives](#learning-objectives)
* [Copyright - Plagiarism](#copyright-plagiarism)
* [Requirements](#requirements)
* [Tasks](#tasks)
  * [Task 0: strcat](#task-0-strcat)
  * [Task 1: strncat](#task-1-strncat)
  * [Task 2: strncpy](#task-2-strncpy)
  * [Task 3: strcmp](#task-3-strcmp)
  * [Task 4: I am a kind of paranoid in reverse. I suspect people of plotting to make me happy](#task-4-reverse-array)
  * [Task 5: Always look up](#task-5-string-toupper)
  * [Task 6: Expect the best. Prepare for the worst. Capitalize on what comes](#task-6-cap-string)
  * [Task 7: Mozart composed his music not for the elite, but for everybody](#task-7-leet)
  * [Task 8: rot13](#task-8-rot13)
  * [Task 9: Numbers have life; they're not just symbols on paper](#task-9-print-number)
  * [Task 10: A dream doesn't become reality through magic; it takes sweat, determination and hard work](#task-10-magic)
  * [Task 11: It is the addition of strangeness to beauty that constitutes the romantic character in art](#task-11-11-add)
  * [Task 12: Noise is a buffer, more effective than cubicles or booth walls](#task-12-104-print-buffer)

## Description

This project, "0x06. C - More pointers, arrays, and strings," is part of the curriculum at [ALX - Holberton School](https://www.holbertonschool.com/). The purpose of this project is to further reinforce the use of pointers, arrays, and strings in the C programming language. By completing various tasks, students will deepen their understanding of these fundamental concepts.

## Concepts

In this project, students are expected to explore the following concepts:

* Pointers and their usage
* Arrays and how to manipulate them
* Differences between pointers and arrays
* String manipulation
* Scope of variables

## Learning Objectives

Upon completing this project, students are expected to:

* Gain a deep understanding of pointers and how to use them effectively.
* Learn how to work with arrays and manipulate them for various purposes.
* Differentiate between pointers and arrays, understanding their individual use cases.
* Develop the skills to work with strings and perform string manipulation.
* Understand the scope of variables in C and how they operate.

## Copyright - Plagiarism

It's essential to create solutions for the tasks individually to meet the project's learning objectives. Plagiarism is strictly forbidden, and any form of plagiarism will result in removal from the program. The projects should be completed without copying and pasting someone else's work, and content from the project should not be published.

## Requirements

### General

* Allowed editors: vi, vim, emacs
* All files must be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All code files should end with a new line
* A `README.md` file at the root of the project folder is mandatory
* The code should use the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`
* Global variables should not be used
* Each file should contain no more than 5 functions
* The standard library is not allowed, so functions like `printf`, `puts`, etc., should not be used
* `_putchar` is allowed and can be used
* You don't need to push `_putchar.c`; the checker will use its own file
* The prototypes for all functions and the prototype for the function `_putchar` should be included in a header file called `main.h`
* The header file should be pushed along with the source code

## Tasks

### Task 0: strcat

Write a function that concatenates two strings.

* Prototype: `char *_strcat(char *dest, char *src);`
* This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte.
* Returns a pointer to the resulting string `dest`

### Task 1: strncat

Write a function that concatenates two strings.

* Prototype: `char *_strncat(char *dest, char *src, int n);`
* The `_strncat` function is similar to the `_strcat` function, except that it will use at most `n` bytes from `src`.
* `src` does not need to be null-terminated if it contains `n` or more bytes.
* Return a pointer to the resulting string `dest`.

### Task 2: strncpy

Write a function that copies a string.

* Prototype: `char *_strncpy(char *dest, char *src, int n);`
* Your function should work exactly like `strncpy`.

### Task 3: strcmp

Write a function that compares two strings.

* Prototype: `int _strcmp(char *s1, char *s2);`
* Your function should work exactly like `strcmp`.

### Task 4: I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

Write a function that reverses the content of an array of integers.

* Prototype: `void reverse_array(int *a, int n);`
* Where `n` is

 the number of elements in the array

### Task 5: Always look up

Write a function that changes all lowercase letters of a string to uppercase.

* Prototype: `char *string_toupper(char *s);`

### Task 6: Expect the best. Prepare for the worst. Capitalize on what comes

Write a function that capitalizes all words of a string.

* Prototype: `char *cap_string(char *s);`

### Task 7: Mozart composed his music not for the elite, but for everybody

Write a function that encodes a string into 1337.

* Prototype: `char *leet(char *s);`

### Task 8: rot13

Write a function that encodes a string using rot13.

* Prototype: `char *rot13(char *s);`

### Task 9: Numbers have life; they're not just symbols on paper

Write a function that prints an integer.

* Prototype: `void print_number(int n);`

### Task 10: A dream doesn't become reality through magic; it takes sweat, determination and hard work

Write a function that prints a number with `putchar`.

* Prototype: `void print_number(int n);`

### Task 11: It is the addition of strangeness to beauty that constitutes the romantic character in art

Create a program that adds the two numbers stored in the environment variables `VARIABLE1` and `VARIABLE2`, and prints the result.

* The output should be in the format: `SUM = SUM_OF_VARIABLES`
* Return `0` if the task is successful, otherwise return `1`.

### Task 12: Noise is a buffer, more effective than cubicles or booth walls

Write a function that prints a buffer.

* Prototype: `void print_buffer(char *b, int size);`
* The function should print the content of `size` bytes from the buffer pointed to by `b`.
* The output should print 10 bytes per line.
* Each line should be preceded by the position of the first byte in hexadecimal (8 characters), starting at `0`.
* Each line should be separated by a single space.
* Print only up to the last byte.
* If `size` is 0 or less, the function should only print a new line.
* You are allowed to use the standard library.
