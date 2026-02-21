# C Beginner CLI Projects

Welcome to my collection of **beginner-friendly C command-line projects!**  
These small programs are perfect for learning the fundamentals of C programming — including input/output, conditionals, arithmetic, and functions. Also a beginner beginner-friendly place to learn different c stuffs.

---

## 📁 Project Structure
```fl
    C-Beginner-CLI-Projects/
    ├── calculator.c
    ├── converter.c
    ├── README.md
    └── .gitignore
```

Each file represents a small standalone program that can be compiled and run directly using GCC.

---

## Project 1: Simple Calculator

A simple **CLI calculator** that performs basic arithmetic operations.

### Features
- Accepts two numbers from the user  
- Supports the four main operations: `+`, `-`, `*`, `/`  
- Displays the result of the operation

### Example Output
```text
Enter first number: 10
Enter second number: 5
Enter operation (+, -, *, /): *
Result: 50
```

###  How to Compile and Run
```bash
# Compile
gcc cal.c -o cal

# Run
./calculator
```

### What I Learned
* Using printf and scanf for input/output

* Performing arithmetic operations

* Handling basic control flow with if statements

## Project 2: Temperature Converter
A temperature conversion tool that converts values between Celsius and Fahrenheit.

### Features
- Converts Celsius → Fahrenheit

- Converts Fahrenheit → Celsius

- User selects the conversion mode

### Example Output
```text
Choose conversion:
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
Enter choice: 1

Enter temperature in Celsius: 0
0°C = 32°F
```

### How to Compile and Run
```bash
# Compile
gcc converter.c -o converter

# Run
./converter
```
### What I Learned
- Using functions for modular code

- Working with floating-point numbers (double, float)

- Formatting output cleanly

## 20 Beginner C Projects to Learn the Fundamentals
#### Projects to be featured or featured in this repo
Here’s what’s planned next to continue improving my C skills:

### Level 1 - Basics & I/O (Getting Started)
#### Focus: Input/Output, arithmetic, conditionals

| S/No | Project Idea | Details |
|------|--------------|------------|
| 1	   | Simple Calculator | Perform `+`, `-`, `*`, `/` operations on two numbers. |
| 2	   | Temperature Converter | Convert between Celsius and Fahrenheit. |
| 3	   | Even or Odd Checker | Determine whether a number is even or odd. |
| 4	   | Positive, Negative, or Zero | Basic use of if-else conditions. |
| 5	   | Largest of Three Numbers | Compare and find the maximum of three numbers. |


### Level 2 - Loops & Control Flow
#### Focus: `for`, `while`, and `do-while` loops.

| S/No | Project Idea | Details |
|------|--------------|------------|
| 6	   | Multiplication Table Generator | Display multiplication tables for any number. |
| 7	   | Sum of N Natural Numbers | Use a loop to calculate the sum. |
| 8	   | Factorial Calculator | Compute the factorial of a given number. |
| 9	   | Prime Number Checker | Check if a number is prime. |
| 10   | Number Guessing Game | Random number guessing using loops and conditions. |


### Level 3 - Arrays & Strings
#### Focus: Arrays, strings, and basic data manipulation

| S/No | Project Idea | Details |
|------|--------------|------------|
| 11   | Array Statistics | Find sum, average, min, and max of array elements.|
| 12   | Reverse an Array | Practice array traversal and swapping. |
| 13   | String Length Finder | Count string length without using `strlen()`. |
| 14   | Palindrome Checker | Check if a string or number reads the same backward. |
| 15   | Simple Voting System | Count votes using arrays. |


### Functions & Modular Programming
#### Focus: Functions, scope, and code reuse

| S/No | Project Idea | Details |
|------|--------------|------------|
| 16   | Menu-Driven Calculator | Use functions for each operation. |
| 17   | Sum of N Natural Numbers | Use a loop to calculate the sum. |
| 18   | Power of a Number | Implement using recursion. |
| 19   | GCD & LCM Calculator | Use loops or recursion for computation.
| 20   | Simple Banking System (CLI) | Deposit, withdraw, check balance (using functions and structures). |

---

### Concepts You’ll Master Along the Way
| Concept | Covered In |
|---------|------------|
| Input/Output | Projects 1–5 |
| Conditionals | Projects 3–5, 10 |
| Loops | Projects 6–10 |
| Arrays | Projects 11–12 |
| Strings | Projects 13–14 |
| Functions | Projects 16–19 |
| Recursion | Project 18 |
| Structures | Project 20 |
| File Handling (optional next step) | Future add-ons |

## Next Steps

After these 20 projects, move to intermediate C topics:

* File handling (read/write text files)
* Pointers and dynamic memory (malloc, free)
* Structs and enums
* Mini data management systems (contacts, students, etc.)


##  Author
Thomas Jose
- Software Engineering Student
- Passionate about learning low-level programming through C.
- Currently exploring CLI apps, file handling, and algorithms.

## 🌟 Contribute or Connect
If you’re also learning C, feel free to:

* ⭐ Star this repository

* 🍴 Fork it and add your own beginner projects

* 🧑‍🤝‍🧑 Open issues or suggestions

# Let’s grow together as C programmers!

*“Programs must be written for people to read, and only incidentally for machines to execute.”*
— Harold Abelson

