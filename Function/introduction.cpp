/*
===========================================================
                FUNCTIONS IN C++ - NOTES
===========================================================

What is a Function?
-------------------
A function is a block of code that performs a specific task.
Instead of writing the same code repeatedly, we write it once
and call it whenever needed.

Example:
--------
printHello();

Advantages:
-----------
1. Code Reusability
2. Reduces Code Duplication
3. Easy to Read
4. Easy to Debug
5. Modular Programming
6. Easy Maintenance

===========================================================
FUNCTION SYNTAX
===========================================================

return_type function_name(parameters)
{
    // Function Body
}

Example:

int add(int a, int b)
{
    return a + b;
}

===========================================================
PARTS OF A FUNCTION
===========================================================

int add(int a, int b)
{
    return a + b;
}

int        --> Return Type
add        --> Function Name
(int a,b)  --> Parameters
{ }        --> Function Body

===========================================================
FUNCTION DECLARATION (Prototype)
===========================================================

Tells the compiler that the function exists.

Syntax:

int add(int, int);

No function body.

===========================================================
FUNCTION DEFINITION
===========================================================

Contains the actual implementation.

int add(int a, int b)
{
    return a + b;
}

===========================================================
FUNCTION CALL
===========================================================

Calling means executing the function.

Example:

add(10,20);

===========================================================
PROGRAM FLOW
===========================================================

Program Starts
      |
      V
main()
      |
      V
Function Call
      |
      V
Function Executes
      |
      V
Returns to main()
      |
      V
Program Ends

===========================================================
TYPES OF FUNCTIONS
===========================================================

1. Library Functions
--------------------
Already provided by C++.

Examples:
sqrt()
pow()
strlen()
sort()
max()

2. User Defined Functions
-------------------------
Created by the programmer.

Example:

void greet()
{
    cout<<"Hello";
}

===========================================================
FUNCTION TYPES BASED ON PARAMETERS & RETURN VALUE
===========================================================

Type 1
-------
No Parameters
No Return Value

void greet()
{
    cout<<"Hello";
}

Use:
Simple tasks like displaying a message.

-----------------------------------------------

Type 2
-------
Parameters
No Return Value

void add(int a,int b)
{
    cout<<a+b;
}

Use:
When input is required but only printing is needed.

-----------------------------------------------

Type 3
-------
No Parameters
Return Value

int getNumber()
{
    return 100;
}

Use:
When the function generates or retrieves a value.

-----------------------------------------------

Type 4 (Most Used)
------------------
Parameters
Return Value

int add(int a,int b)
{
    return a+b;
}

Use:
Accept input and return a result.
Most commonly used in interviews and projects.

===========================================================
PARAMETERS VS ARGUMENTS
===========================================================

Function:

int add(int x,int y)

x and y --> Parameters

Call:

add(10,20);

10 and 20 --> Arguments

Parameters:
Variables written inside the function definition.

Arguments:
Actual values passed during function call.

===========================================================
RETURN TYPE
===========================================================

void
----
Returns nothing.

int
---
Returns an integer.

float
-----
Returns a decimal value.

char
----
Returns a single character.

bool
----
Returns true or false.

string
------
Returns a string.

===========================================================
WAYS TO WRITE FUNCTIONS
===========================================================

Method 1
---------
Function Before main()

void greet()
{
    cout<<"Hello";
}

int main()
{
    greet();
}

No declaration needed.

-----------------------------------------------

Method 2
---------
Function After main()

Prototype

void greet();

int main()
{
    greet();
}

void greet()
{
    cout<<"Hello";
}

Declaration is required because the compiler reads
the program from top to bottom.

===========================================================
WHY DECLARATION IS NEEDED?
===========================================================

Compiler reads code line by line.

If a function is called before it is defined,
the compiler doesn't know about it.

Solution:
Use a Function Prototype (Declaration).

===========================================================
WHEN TO USE WHICH FUNCTION TYPE?
===========================================================

Type 1:
Print Welcome Message

Type 2:
Calculate and Print

Type 3:
Return Fixed/Generated Value

Type 4:
Take Input + Return Result
(Best & Most Common)

===========================================================
IMPORTANT INTERVIEW QUESTIONS
===========================================================

Q1. What is a Function?
Ans:
A reusable block of code that performs a specific task.

-----------------------------------------------

Q2. Difference between Declaration and Definition?

Declaration:
Only tells the compiler about the function.

Definition:
Contains the actual implementation.

-----------------------------------------------

Q3. What is a Function Call?

Executing a function.

Example:
add(10,20);

-----------------------------------------------

Q4. Difference between Parameters and Arguments?

Parameters:
Variables in function definition.

Arguments:
Actual values passed during function call.

-----------------------------------------------

Q5. What is Return?

return sends a value back to the calling function
and immediately ends the function execution.

===========================================================
KEYWORDS TO REMEMBER
===========================================================

Function
Prototype
Definition
Call
Return Type
void
Parameters
Arguments
Library Function
User Defined Function
Return Statement

===========================================================
NEXT TOPICS
===========================================================

1. Call by Value
2. Call by Reference
3. Recursion
4. Searching

===========================================================
*/