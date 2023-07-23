// C++ Program to illustrate the extern storage class
#include <iostream>
using namespace std;

// declaring the variable globally which is to be made extern 
// an initial value can also be initialized to x
int x;
void externStorageClass()
{

    cout << "Demonstrating extern class\n";

    // telling the compiler that the variable x is an extern variable and has been defined elsewhere (above the main function)
    extern int x;

    // printing the extern variables 'x'
    cout << "Value of the variable 'x' "
         << "declared, as extern: " << x << "\n";

    // value of extern variable x modified locally
    x = 2;

    // printing the modified values of extern variables 'x'
    cout << "Modified value of the variable 'x'"
         << " declared as extern: \n"
         << x;
}

int main()
{

    // To demonstrate extern Storage Class
    externStorageClass();

    return 0;
}

// external Storage Class - like global variable
            // keyword: extern
            // Scope: Global
            // Default Value: Zero
            // Memory Location: RAM
            // Lifetime: whole program
