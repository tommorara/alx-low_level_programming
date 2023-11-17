```markdown
# Project: 0x12. C - Singly Linked Lists

## Description
This project focuses on understanding and implementing singly linked lists in C. It covers fundamental concepts such as when and why to use linked lists versus arrays, and how to build and use linked lists.

## Concepts
- Data Structures

## Resources
- Linked Lists
- Google
- Youtube

## Learning Objectives
By the end of this project, you should be able to explain:
- When and why to use linked lists versus arrays
- How to build and use linked lists

## Copyright - Plagiarism
- Solutions for the tasks must be developed independently to meet the learning objectives.
- Plagiarism in any form is strictly forbidden and will result in removal from the program.

## Requirements
### General
- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code should use the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file
- Only the C standard library functions `malloc`, `free`, and `exit` are allowed
- Allowed macros: `va_start`, `va_arg`, and `va_end`
- Allowed function: `_putchar`
- Pushing of `_putchar.c` is not required

### Header File
- Prototypes of all functions and the `_putchar` function should be included in a header file named `lists.h`
- Header files should be include guarded

## Data Structure
Please use the following structure for this project:
```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Tasks
1. **Print list**
    - Write a function that prints all the elements of a `list_t` list.
    - Prototype: `size_t print_list(const list_t *h);`
    - Return: the number of nodes

2. **List length**
    - Write a function that returns the number of elements in a `list_t` list.
    - Prototype: `size_t list_len(const list_t *h);`

3. **Add node**
    - Write a function that adds a new node at the beginning of a `list_t` list.
    - Prototype: `list_t *add_node(list_t **head, const char *str);`
    - Return: the address of the new element, or `NULL` if it failed

4. **Add node at the end**
    - Write a function that adds a new node at the end of a `list_t` list.
    - Prototype: `list_t *add_node_end(list_t **head, const char *str);`
    - Return: the address of the new element, or `NULL` if it failed

5. **Free list**
    - Write a function that frees a `list_t` list.
    - Prototype: `void free_list(list_t *head);`
```

Feel free to modify and expand upon this template as needed for your project.
