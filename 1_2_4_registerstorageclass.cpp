// register Storage Class - like the auto variables. difference is compiler tries to store them in the register of the microprocessor if a free register is available.
// Scope: Local
// Default Value: Garbage Value
// Memory Location: Register in CPU or RAM
// Lifetime:  function block

// C++ Program to illustrate the use of register variables
#include <iostream>
using namespace std;

void registerStorageClass()
{

    cout << "Demonstrating register class\n";

    // declaring a register variable
    //a warning will come bcz register storage specifier is deprecated ( no longer recommended for use) in modern compiler.
    register char b = 'G'; 

    // printing the register variable 'b'
    cout << "Value of the variable 'b'"
         << " declared as register: " << b;
}
int main()
{

    // To demonstrate register Storage Class
    registerStorageClass();
    return 0;
}
