# Cumulative Sum Pattern Calculator

## Overview
This is a simple C++ program that calculates a cumulative sum based on a triangular pattern of additions. The program takes a user input and generates a sum according to a specific mathematical progression.

## Features
- Accepts a single integer input from the user
- Calculates a cumulative sum using nested loops
- Handles both positive and negative result outputs

## Mathematical Pattern
The program creates a cumulative sum using the following logic:
- For each number from 1 to the input value
- It adds a number of times equal to the current iteration
- Accumulates the total sum in the `result` variable

### Example
- If input is 3:
  - First iteration (i=1): Adds 1 once
  - Second iteration (i=2): Adds 1 twice
  - Third iteration (i=3): Adds 1 three times

## Prerequisites
- C++ Compiler (supporting C++11 or later)
- Standard input/output libraries

## Compilation
```bash
g++ -std=c++11 cumulative_sum_pattern.cpp -o cumulative_sum_pattern
```

## Usage
1. Run the compiled executable
2. Enter a positive integer when prompted
3. The program will output the cumulative sum

## Potential Improvements
- Add input validation
- Handle edge cases
- Implement more robust error checking
- Create a more generalized pattern generation algorithm

## Mathematical Complexity
- Time Complexity: O(n²)
- Space Complexity: O(1)

## License
Open-source MIT License

## Author
Salman Hashemi
