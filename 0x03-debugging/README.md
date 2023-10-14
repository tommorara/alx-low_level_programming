# Debugging in C - Project Overview

**Author:** Tom Morara

**Project Duration:** Ongoing, started on October 11, 2023, at 6:00 AM, and must end by October 15, 2023, at 6:00 AM

**Auto QA Review:** 0.0/40 (mandatory)

**Project Summary:**
Debugging is a critical aspect of software development, involving finding and correcting errors that prevent programs from running correctly. In this project, you will learn the fundamentals of debugging manually, understanding debugging concepts, methods, and error message interpretation.

## Table of Contents

1. [Introduction](#introduction)
2. [Learning Objectives](#learning-objectives)
3. [Project Tasks](#project-tasks)
4. [Repository Structure](#repository-structure)
5. [Resources](#resources)
6. [Copyright - Plagiarism](#copyright-plagiarism)
7. [Requirements](#requirements)

## Introduction

Welcome to the Debugging in C project! This project is designed to enhance your debugging skills and deepen your understanding of identifying and rectifying errors in C programs. The tasks will focus on debugging techniques, code analysis, and producing correct program outputs.

## Learning Objectives

By the end of this project, you will be able to explain to anyone, without external assistance:
- The fundamental concepts of debugging
- Various methods of manual debugging
- How to interpret error messages effectively

## Project Tasks

### Task 0: Multiple Mains
- **Score:** 0.0%
- **Description:** Test the `positive_or_negative()` function for the case of 0.
- **File:** [0-main.c](0x03-debugging/0-main.c), [main.h](0x03-debugging/main.h)

### Task 1: Like, Comment, Subscribe
- **Score:** 0.0%
- **Description:** Comment out the code causing an infinite loop in the provided `main.c`.
- **File:** [1-main.c](0x03-debugging/1-main.c)

### Task 2: 0 > 972?
- **Score:** 0.0%
- **Description:** Correct the code to print the largest of three integers accurately.
- **Files:** [2-main.c](0x03-debugging/2-main.c), [2-largest_number.c](0x03-debugging/2-largest_number.c), [main.h](0x03-debugging/main.h)

### Task 3: Leap Year
- **Score:** 0.0%
- **Description:** Fix the function to correctly determine days left in the year, considering leap years.
- **Files:** [3-main_a.c](0x03-debugging/3-main_a.c), [3-convert_day.c](0x03-debugging/3-convert_day.c), [3-print_remaining_days.c](0x03-debugging/3-print_remaining_days.c), [main.h](0x03-debugging/main.h), [3-main_b.c](0x03-debugging/3-main_b.c)

## Repository Structure

```
|-- alx-low_level_programming
    |-- 0x03-debugging
        |-- 0-main.c
        |-- 1-main.c
        |-- 2-main.c
        |-- 2-largest_number.c
        |-- 3-main_a.c
        |-- 3-convert_day.c
        |-- 3-print_remaining_days.c
        |-- main.h
        |-- README.md
```

In each task folder, you'll find the respective C files for the tasks along with the `main.h` header file for function prototypes.

## Resources

To enhance your understanding of debugging, consider referring to the following resources:
- [Debugging](https://en.wikipedia.org/wiki/Debugging)
- [Rubber Duck Debugging](https://rubberduckdebugging.com/)

## Copyright - Plagiarism

Plagiarism is strictly prohibited in this project. Ensure all work is original and developed according to the project requirements.

## Requirements

Ensure you meet the following requirements for this project:
- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files end with a new line
- Code should adhere to the Betty style guidelines as checked using betty-style.pl and betty-doc.pl
- A README.md file is present at the root of the repository and within the project folder, describing the repository and each project task.
