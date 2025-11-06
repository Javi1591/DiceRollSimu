# Dice Roll Simulation and Loop Practice (Chapter 5)

A C++ program that uses random number generation and loop control structures to simulate dice rolls and demonstrate multiple types of loops.

## Overview
- Simulates a single six-sided die roll and compares it to a user’s guess.
- Prints special messages based on the result of the roll and guess.
- Demonstrates several loop constructs and exercises:
  - For loop counting up from 1 to 5.
  - For loop counting down from 100 to 0, printing numbers divisible by 17.
  - While loop performing the same divisible-by-17 task.
  - Do-while loop repeatedly prompting the user for input and computing modulus 5.
  - Nested loops generating a multiplication grid (1×1 through 5×6).

## Core Logic
- Generates pseudo-random numbers using `rand()` seeded with `time(NULL)`.
- Evaluates conditional expressions for “WINNER”, “DOUBLE WINNER”, and “LUCKY PERSON” scenarios.
- Demonstrates the difference between pre-test, post-test, and nested loop structures.

## Input Validation
- Ensures the user’s guess is within the range 1–6.
- Uses a do-while loop to continue prompting until valid input is received.

## Build & Run
- Visual Studio (Windows): open the solution or create a Console App and add the source file, then **Build → Run**.
- g++ (CLI):
  ```bash
  g++ -std=c++11 -O2 -o DiceRollSimu nazarioCPP14.cpp
  ./DiceRollSimu
