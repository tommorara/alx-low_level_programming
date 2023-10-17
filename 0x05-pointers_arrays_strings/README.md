# 0x05. C - Pointers, Arrays, and Strings

This project covers the concepts of pointers, arrays, and strings in C. The focus is on understanding how to use and manipulate these fundamental elements.

## Concepts

For this project, you will need to familiarize yourself with the following concepts:

- Pointers and arrays
- Data structures

If you're struggling with the development environment, you can use Docker & WSL on your local host.

## Resources

We recommend reading or watching the following resources to enhance your understanding:

- [C - Arrays](https://www.learn-c.org/en/Arrays)
- [C - Pointers](https://www.learn-c.org/en/Pointers)
- [C - Strings](https://www.learn-c.org/en/Strings)
- [Memory Layout](https://www.learn-c.org/en/Memory_Layout)

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without assistance:

- Understanding pointers and how to use them
- Understanding arrays and how to use them
- Differentiating between pointers and arrays
- Manipulating strings in C
- Understanding the scope of variables

## Copyright - Plagiarism

Please remember that copying and pasting someone else’s work is strictly forbidden and will result in removal from the program. Make sure to come up with solutions for the tasks independently to meet the learning objectives.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- Compilation: `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Files should end with a new line
- Code should adhere to the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- Maximum of 5 functions per file
- Do not use standard library functions, except for `_putchar`
- The prototypes of all functions and `_putchar` should be included in `main.h`
- Do not forget to push the header file

## Tasks

1. **98 Battery st.**
   Write a function that takes a pointer to an int as a parameter and updates the value it points to 98.

   Prototype: `void reset_to_98(int *n);`

2. **Don't swap horses in crossing a stream**
   Write a function that swaps the values of two integers.

   Prototype: `void swap_int(int *a, int *b);`

3. **This report, by its very length, defends itself against the risk of being read**
   Write a function that returns the length of a string.

   Prototype: `int _strlen(char *s);`

4. **I do not fear computers. I fear the lack of them**
   Write a function that prints a string, followed by a new line, to stdout.

   Prototype: `void _puts(char *str);`

5. **I can only go one way. I've not got a reverse gear**
   Write a function that prints a string, in reverse, followed by a new line.

   Prototype: `void print_rev(char *s);`

6. **Half the lies they tell about me aren't true**
   Write a function that prints every other character of a string, starting with the first character, followed by a new line.

   Prototype: `void puts2(char *str);`

7. **Winning is only half of it. Having fun is the other half**
   Write a function that prints half of a string, followed by a new line.

   Prototype: `void puts_half(char *str);`

8. **Arrays are not pointers**
   Write a function that prints n elements of an array of integers, followed by a new line.

   Prototype: `void print_array(int *a, int n);`

9. **strcpy**
   Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

   Prototype: `char *_strcpy(char *dest, char *src);`

© 2023 ALX. All rights reserved.
