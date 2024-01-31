# Calulator: Expression Evaluator using Command and Abstract Factory Pattern

## Overview
In this, implemented a basic expression evaluator using the Stack data structure created in OOPD_Stack-Queue_c. The evaluator will handle mathematical expressions with operators such as +, -, /, *, %, as well as parentheses and integers (positive and negative). The program will utilize the Infix to Postfix conversion algorithm to process expressions in O(n) time. To enhance the design, the Command Pattern will be used to evaluate the Postfix expression, and the (Abstract) Factory Pattern will be employed to create commands based on parsing the Infix expression.


## Files Included

### Classes
1. **Addition**
   - Basic implementation of a standard Addition class.

2. **Array**
   - Implementation of a standard array class for arbitrary elements.

3. **BinOP_Command**
   - Basic implementation of a standard Binary Operator Command class.

4. **Division**
   - Basic implementation of a standard Division class.

5. **Expr_Command**
   - Abstract class representing an expression command.

6. **Expr_Concrete_Command**
   - Concrete command class for various operations (Addition, Division, Modulus, Multiplication, Number, Subtraction).

7. **Main_Exec**
   - Class responsible for converting Infix to Postfix and running the expression evaluator.

8. **Modulus**
   - Basic implementation of a standard Modulus class.

9. **Multiplication**
   - Basic implementation of a standard Multiplication class.

10. **Number**
    - Basic implementation of a standard Number class.

11. **Stack**
    - Basic stack implementation for arbitrary elements.

12. **Subtraction**
    - Basic implementation of a standard Subtraction class.

### Compilation
- **MPC File**: `assignment3.mpc`
  - Compilation command: `make -f Makefile.assignment3`

## How to Run
1. Compile the program using the provided MPC file.
2. Run the executable (`assignment3`).
3. Enter mathematical expressions with spaces between each token.
4. The program will continuously process expressions until the user types "QUIT" (all caps).
5. View the results on the standard output.

## Runtime Requirements
- The program must handle the operators +, -, /, *, %, as well as parentheses and integers (positive and negative).
- All input should come from STDIN, and output should go to STDOUT.
- The program must loop until the user types "QUIT" (all caps).

## Important Notes
- Ensure that your MPC file is named `assignment3.mpc`.
- Modularize your classes for better design.
