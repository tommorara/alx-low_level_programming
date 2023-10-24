# 0x07. C - Even more pointers, arrays and strings

## Description

This project, "0x07. C - Even more pointers, arrays, and strings," is part of the curriculum at [ALX - Holberton School](https://www.holbertonschool.com/). In this project, you will dive deeper into the concepts of pointers, arrays, and strings in the C programming language. The project also works with multidimensional arrays and practice using some of the most common C standard library functions for string manipulation.

## Concepts

In this project, you will be exploring the following concepts:

* Pointers to pointers
* Multidimensional arrays
* Common C standard library functions for manipulating strings

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without needing Google's help:

* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings

## Copyright - Plagiarism

You are expected to create solutions for the tasks on your own to meet the project's learning objectives. Plagiarism, copying, or reusing someone else's work is strictly forbidden and will result in removal from the program. You are not allowed to publish any content related to this project.

## Requirements

### General

* You are allowed to use the following editors: vi, vim, emacs.
* All your code files should be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
* Each code file should end with a new line.
* A `README.md` file at the root of the project folder is mandatory.
* Your code should follow the [Betty style](https://github.com/holbertonschool/Betty/wiki), which will be checked using `betty-style.pl` and `betty-doc.pl`.
* You are not allowed to use global variables.
* Each file should contain no more than 5 functions.
* You are not allowed to use the standard library. Functions like `printf`, `puts`, and others from the standard library are forbidden.
* You are allowed to use the `_putchar` function, and you don't need to push `_putchar.c` - the checker will use its own file.
* The prototypes for all functions, including `_putchar`, should be included in a header file called `main.h`. Don't forget to push your header file.

## Tasks

### Task 0: memset

Write a function that fills memory with a constant byte.

* Prototype: `char *_memset(char *s, char b, unsigned int n);`
* The `_memset` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.
* Returns a pointer to the memory area `s`.
* Note: The standard library provides a similar function called `memset`. Run `man memset` to learn more.

### Task 1: memcpy

Write a function that copies memory area.

* Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
* The `_memcpy` function copies `n` bytes from the memory area `src` to the memory area `dest`.
* Returns a pointer to `dest`.
* Note: The standard library provides a similar function called `memcpy`. Run `man memcpy` to learn more.

### Task 2: strchr

Write a function that locates a character in a string.

* Prototype: `char *_strchr(char *s, char c);`
* Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found.
* Note: The standard library provides a similar function called `strchr`. Run `man strchr` to learn more.

### Task 3: strspn

Write a function that gets the length of a prefix substring.

* Prototype: `unsigned int _strspn(char *s, char *accept);`
* Returns the number of bytes in the initial segment of `s` that consist only of bytes from `accept`.
* Note: The standard library provides a similar function called `strspn`. Run `man strspn` to learn more.

### Task 4: strpbrk

Write a function that searches a string for any of a set of bytes.

* Prototype: `char *_strpbrk(char *s, char *accept);`
* The `_strpbrk` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`.
* Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found.
* Note: The standard library provides a similar function called `strpbrk`. Run `man strpbrk` to learn more.

### Task 5: strstr

Write a function that locates a substring.

* Prototype: `char *_strstr(char *haystack, char *needle);`
* The `_strstr` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared.
* Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.
* Note: The standard library provides a similar function called `strstr`. Run `man strstr` to learn more.

### Task 6: Chess is mental torture

Write a function that prints the chessboard.

* Prototype: `void print_chessboard(char (*

a)[8]);`
* You will be provided with an 8x8 two-dimensional array (`char a[8][8]`) representing a chessboard.
* The function should print the chessboard to the standard output in the format shown in the example below.
* You are allowed to use the standard library.

### Task 7: The line of life is a ragged diagonal between duty and desire

Write a function that prints the sum of the two diagonals of a square matrix of integers.

* Prototype: `void print_diagsums(int *a, int size);`
* You will be provided with a square matrix of integers (`int *a`) and its size (`size`).
* The function should print the sum of the two diagonals, separated by a comma and a space, as shown in the example below.
* You are allowed to use the standard library.

## Example

Here is an example of how the `print_diagsums` function should behave:

```c
int c3[3][3] = {
    {0, 1, 5},
    {10, 11, 12},
    {1000, 101, 102},
};
print_diagsums((int *)c3, 3);
```

Output:

```
113, 1016
```

## Additional Information

For the full details of each task, refer to the corresponding task files in the [GitHub repository](https://github.com/openai-microsoft/ALX-Computer-Science-Projects/tree/master/0x07-pointers_arrays_strings).

## About

This project is part of the ALX - Holberton School curriculum. For any suggestions or corrections, please feel free to reach out.

**Happy coding!**
