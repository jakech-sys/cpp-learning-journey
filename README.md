# C++ Learning Journey

Welcome to my C++ learning repository!

This repository documents my journey of learning C++ programming through hands-on practice, small programs, experiments, and continuous improvement.

My goal is to develop a solid understanding of C++ by writing code, exploring how different language features work, identifying mistakes, and applying what I learn.

## Learning Objectives

Through this repository, I aim to:

- Understand C++ syntax and fundamental programming concepts.
- Become comfortable writing, compiling, and running C++ programs.
- Learn how to work with variables, data types, operators, and expressions.
- Understand conditional statements, loops, and functions.
- Explore arrays, strings, pointers, references, and memory management.
- Become familiar with object-oriented programming in C++.
- Practice using the C++ Standard Library.
- Develop good coding, debugging, and problem-solving habits.
- Write clean, readable, and well-structured C++ code.

## Development Environment

My initial C++ development environment consists of:

- **Language:** C++
- **Compiler:** GCC (g++) through MinGW-w64
- **Operating System:** Windows
- **Language Standard:** C++17 for the examples in this repository

## Repository Structure

The repository is organized by learning topic. Each directory contains C++ programs related to the concepts being studied.

```text
cpp-learning-journey/
├── README.md
└── 01-hello-world/
    └── hello.cpp
└── 02-variables/
    └── var.cpp
```

Additional directories and learning notes will be added as I progress.

## Learning Progress

The following checklist tracks the C++ topics I plan to explore.

- [x] Write my first C++ program
- [x] Variables and data types
- [ ] User input and output
- [ ] Operators and expressions
- [ ] Conditional statements
- [ ] Loops
- [ ] Functions
- [ ] Arrays and strings
- [ ] References and pointers
- [ ] Memory management
- [ ] Structures and classes
- [ ] Object-oriented programming
- [ ] File handling
- [ ] C++ Standard Library
- [ ] Debugging and exception handling

I will update this checklist as I complete each topic.

## My First C++ Program

My first C++ program prints two messages to the console.

**Source:** `01-hello-world/main.cpp`

```cpp
#include <iostream>

int main() {
    // This is my first C++ program!

    std::cout << "Hello world, I like meat!" << std::endl;
    std::cout << "It is really good!" << std::endl;

    return 0;
}
```

### Expected Output

```text
Hello world, I like meat!
It is really good!
```

### What I Learned

From this first program, I started exploring:

- `#include <iostream>`: Provides access to standard input and output functionality.
- `int main()`: Defines the entry point of a C++ program.
- `std::cout`: Writes output to the console.
- `<<`: Inserts values into an output stream.
- `std::endl`: Inserts a newline and flushes the output stream.
- `return 0;`: Indicates successful program termination.
- `//`: Introduces a single-line comment.

I also began learning how C++ source files are compiled into executable programs using `g++`.

## Compiling and Running a Program

To compile the first program, open a terminal in the repository's root directory.

**Step 1: Check the compiler installation**

```bash
g++ --version
```

**Step 2: Compile the source file**

```bash
g++ -std=c++17 -Wall -Wextra 01-hello-world/main.cpp -o hello-world.exe
```

**Step 3: Run the executable in PowerShell**

```powershell
.\hello-world.exe
```

The `-std=c++17` option enables C++17, while `-Wall` and `-Wextra` enable additional compiler warnings.

## My Learning Approach

I want this repository to reflect practical understanding rather than simply collecting code examples.

For each new concept, I will try to:

1. Understand what the concept means and why it is useful.
2. Write a small C++ program that demonstrates it.
3. Compile and run the program.
4. Experiment by modifying the code and observing the results.
5. Investigate compiler errors and unexpected behavior.
6. Document what I learned and what I still need to understand.

## Learning Notes

As I explore C++, I plan to document important concepts, common mistakes, compiler messages, and useful observations.

These notes will help me revisit topics, strengthen my understanding, and track how my programming skills develop.

## Progress Philosophy

This repository is a record of continuous learning. Early programs may be simple, and some solutions may be improved as I gain experience.

The focus is on understanding C++ fundamentals, practicing consistently, learning from mistakes, and becoming a more capable C++ programmer.

---

*Learning C++ one program at a time.*
