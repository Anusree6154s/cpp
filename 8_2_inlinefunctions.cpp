#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline int square_inline(int num)
{
    return num * num;
}

// Normal function to calculate the square of a number
int square_normal(int num)
{
    return num * num;
}

int main()
{
    // inline function -> same as normal function, just uses the word 'inline'
    // Inlining eliminates the need for a function call by replacing the function call statement with the actual function code at the call site.
    // This reduces the *overhead but can result in larger code size. so must only be used for small functions
    //it is speed vs size

    int number = 5;

    // Inline function call
    int result_inline = square_inline(number);

    // Normal function call
    int result_normal = square_normal(number);

    cout << "Square using inline function: " << result_inline << endl;
    cout << "Square using normal function: " << result_normal << endl;

    return 0;
}

//*Function call overhead refers to the cost or overhead incurred when calling a function in a program. It includes the time and resources needed to transfer control to the function, execute the function code, and return control back to the caller.
// inlining reduces overhead
