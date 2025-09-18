# Aim: To Study & Implement Exception Handling.

# Tool: VS CODE.

# Theory:

## Exception Handling in C++

## Introduction

Exception Handling is a mechanism in C++ used to handle runtime errors so that the normal flow of a program is not disrupted.

Instead of crashing the program when an error occurs, exceptions allow the program to detect, throw, and catch errors gracefully.

## Key Concepts

### Exception: An exception is an unexpected problem or error that occurs during program execution (e.g., divide by zero, invalid age, file not found, memory error).

### Throw: The throw keyword is used to signal (raise) an exception.

Example: throw 0;   // throws an integer exception

### Try: A try block contains code that may generate an exception.

Example: try {
    // risky code here
}

### Catch: A catch block handles the exception thrown by throw.

Example: catch (int e) {
    cout << "Error: " << e;
}

### Multiple Catch Blocks: A single try block can have multiple catch blocks to handle different types of exceptions.

Example: try {
    throw 3.14;  
}
catch (int x) { cout << "Integer Exception"; }
catch (float y) { cout << "Float Exception"; }
catch (...) { cout << "Default Exception"; } // catch any type

### General Syntax:

try {
    // Code that may cause an exception
    if (condition)
        throw exception_value;
}
catch (datatype var) {
    // Handle exception
}

## Advantages

Separates error-handling code from normal code.

Provides a robust way to handle runtime errors.

Prevents program termination due to unexpected errors.

Improves readability and maintainability.

# Algorithms:

## Algorithm: Division with Exception Handling

Start

Declare three variables: n1, n2, and ans (all float).

Display message: "Enter values of numbers 1 & 2:".

Read values of n1 and n2 from the user.

Begin try block.

If n2 == 0:

Throw n2 as an exception.

Else:

Compute ans = n1 / n2.

Display result: "Answer = ans".

Catch block:

If exception occurs, print "ERROR: Division by <value>".

End

## Algorithm: Underage Voting Exception Handling

Start

Declare variable age (integer).

Display message: "Enter age:".

Read input value into age.

Begin try block:

If age < 18

Throw exception with value age.

Else

Print "Age: age" and "APPROVED".

Catch block:

If exception occurs, display "ERROR: Underage! (age)".

End

# Conclusion: 

Exception handling in C++ provides a structured way to detect and manage runtime errors. 

Using try, throw, and catch, we can write programs that are safe, reliable, and user-friendly by preventing crashes and providing meaningful error messages.

