#include <iostream>
using namespace std;

int main()
{
    // Storage Classes are used to describe the characteristics of a variable/function. It determines the lifetime, visibility, default value, and storage location

    // 6types:
    // automatic Storage Class - like local variable
            // keyword: auto
            // Scope: Local
            // Default Value: Garbage Value
            // Memory Location: RAM
            // Lifetime: function block
    // static Storage Class - like local constants
            // Scope: Local
            // Default Value: Zero
            // Memory Location: RAM
            // Lifetime: whole program
    // external Storage Class - like global variable
            // keyword: extern
            // Scope: Global
            // Default Value: Zero
            // Memory Location: RAM
            // Lifetime: whole program
    // register Storage Class - like the auto variables. difference is compiler tries to store them in the register of the microprocessor if a free register is available.
            // Scope: Local
            // Default Value: Garbage Value
            // Memory Location: Register in CPU or RAM
            // Lifetime:  function block
    // mutable Storage Class - word added to a member of a const fuction so as to change it when needed
            // Scope: Local
            // Lifetime:  class
            // Default Value: Garbage Value
    // thread_local Storage Class - local variables used for thread functions
            // Memory Location: RAM
            // Lifetime: whole thread
            // Scope: Local
            // Default Value: Garbage Value
    return 0;
}   