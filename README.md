# C Beginner CLI Projects

Welcome to my collection of **beginner-friendly C command-line projects!**  
These small programs are perfect for learning the fundamentals of C programming — including input/output, conditionals, arithmetic, and functions.

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

### Upcoming Projects
Here’s what’s planned next to continue improving my C skills:

#	Project Idea	Focus Area
3	🔢 Number Guessing Game	Loops, conditionals
4	📁 File Handler	File I/O
5	📊 Student Grade Calculator	Structs, arrays
6	🕹️ Mini Tic-Tac-Toe	2D arrays, logic

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












