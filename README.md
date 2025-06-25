# StackCalculator

StackCalculator is a command-line C++ application that evaluates arithmetic expressions using the **shunting yard algorithm** to convert infix notation to postfix (Reverse Polish Notation), and then evaluates the result using a stack.

This project demonstrates expression parsing, tokenisation, infix-to-postfix conversion, and stack-based evaluation using clean and modular C++ code.

---

## 📌 Features

- Supports integer arithmetic expressions
- Handles operators: `+`, `-`, `*`, `/`
- Supports parentheses `()` for precedence
- Parses multi-digit numbers correctly
- Detects and handles division by zero
- Outputs tokenised and postfix forms of input expression

---

## 🚀 How It Works

1. **Tokenisation** – Breaks the input string into a list of tokens (`Token` structs) representing numbers and operators.
2. **Infix to Postfix** – Uses the shunting yard algorithm to reorder tokens based on operator precedence.
3. **Evaluation** – Uses a stack to compute the final result from the postfix expression.

---

## 🧠 Example

**Input:**

3 + 4 * 2 / (1 - 5)

**Tokenised Output:**

{'n', 3} {'+', 0} {'n', 4} {'*', 0} {'n', 2} {'/', 0} {'(', 0} {'n', 1} {'-', 0} {'n', 5} {')', 0}

**Postfix Output:**

{'n', 3} {'n', 4} {'n', 2} {'*', 0} {'n', 1} {'n', 5} {'-', 0} {'/', 0} {'+', 0}

**Result:**

1

### 🧱 Requirements

- C++17 or later
- CMake (if building manually)
- CLion (optional, for IDE support)

### 💻 Compile & Run (Command Line)

```bash
g++ -std=c++20 main.cpp calc.cpp -o StackCalculator
./StackCalculator


