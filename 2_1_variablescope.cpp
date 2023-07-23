#include <iostream>
using namespace std;

int globalVariable = 10; // Global variable(global scope)

void function()
{
    cout << "Accessing global variable from function: " << globalVariable << endl;

    int localVar = 20; // Local variable (local scope)
    cout << "Local variable within function: " << localVar << endl;

    localVar = 40; // Local variable within function(similar to local scope)function scope
    cout << "Local variable within function: " << localVar << endl;
}

int main()
{
    cout << "Accessing global variable from main: " << globalVariable << endl;
    function();

    int localVar = 30; // Local variable
    cout << "Local variable within main: " << localVar << endl;
    function();

    localVar = 50; // Local variable within main
    cout << "Local variable within main: " << localVar << endl;
    function();

    int x = 10; // Variable within the main block
    {
        int y = 20; // Variable within the inner block(block scope)
        cout << "Value of x: " << x << endl;
        cout << "Value of y: " << y << endl;
    }
    // The variable y is no longer accessible here, outside the inner block
    cout << "Value of x: " << x << endl;

    return 0;
}

/*
Variable scope-> visibility and accessibility of variables within a program.
1. Global Scope:available everywhere
2. Local Scope: within functoin/main
3. Function/Procedure Scope:
   -like to local scope, but it specifically refers to the variables that are accessible within a particular function or procedure.
4. Block/Statement Scope:within nested blocks

 */