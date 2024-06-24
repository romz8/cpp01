# C++ Module 01 - Memory Allocation, Pointers, References, and Switch Statements

## Overview
42 School's C++ curriculum, focusing on memory allocation, pointers to members, references, and the switch statement.

## Status
Validated on 16/01/2024. Grade: 100%.

## General Information
- **Compiler used:** `c++`
- **Compilation flags:** `-Wall -Wextra -Werror -std=c++98`
- **Standard:** C++98 for compliance, per the 42 School curriculum's requirements.

## Projects
This module is divided into several exercises, each emphasizing different aspects of C++ memory management and manipulation.

### Exercise 00: BraiiiiiiinnnzzzZ
- **Directory:** `ex00/`
- **Description:** Implement a Zombie class with a name and a method to announce itself. Create functions to allocate zombies on the heap and the stack, and determine the use cases for each.
- **Key Concepts:** Classes, dynamic and static memory allocation, destructors.

### Exercise 01: Moar brainz!
- **Directory:** `ex01/`
- **Description:** Create a function that allocates an array of zombies on the heap, initializing each with the same name. Ensure proper memory management and deletion.
- **Key Concepts:** Dynamic arrays, memory management, constructors.

### Exercise 02: HI THIS IS BRAIN
- **Directory:** `ex02/`
- **Description:** Create a program that demonstrates the use of pointers and references to a string variable. Print both the memory addresses and the values.
- **Key Concepts:** Pointers, references, address manipulation.

### Exercise 03: Unnecessary violence
- **Directory:** `ex03/`
- **Files:** `Makefile`, `main.cpp`, `Weapon.{h, hpp}`, `Weapon.cpp`, `HumanA.{h, hpp}`, `HumanA.cpp`, `HumanB.{h, hpp}`, `HumanB.cpp`
- **Description:** Implement Weapon, HumanA, and HumanB classes. HumanA has a Weapon reference, and HumanB has a Weapon pointer. Demonstrate differences in weapon handling between the two classes.
- **Key Concepts:** Class relationships, references vs pointers, member functions.

### Exercise 04: Sed is for losers
- **Directory:** `ex04/`
- **Description:** Create a program that replaces occurrences of a string in a file with another string, writing the results to a new file. Use standard C++ file handling.
- **Key Concepts:** File I/O, string manipulation, error handling.

### Exercise 05: Harl 2.0
- **Directory:** `ex05/`
- **Description:** Implement a Harl class with methods for different levels of logging. Use pointers to member functions to call the appropriate logging method.
- **Key Concepts:** Pointers to member functions, logging.

### Exercise 06: Harl filter
- **Directory:** `ex06/`
- **Description:** Extend the Harl class to filter and display messages based on a given log level using a switch statement.
- **Key Concepts:** Switch statements, logging, filtering.

## Compilation and Usage
Each exercise directory contains a Makefile for easy compilation. To compile an exercise, navigate to its directory and run:

### Example For `ex00`:
```sh
cd ex00 && make
./brainz
```
