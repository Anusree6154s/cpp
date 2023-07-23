#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /* Manipulators:
    1. keywords used to manipulate iostream
    2. uses header #include <iomanip>
    3. includes: */

    //     setw: Sets the width of the next output field. used for right alignment
    int number = 42;
    cout << "Number: " << setw(5) << number << endl;

    // setprecision: Sets the precision (number of decimal places) for floating-point output.
    double value = 3.14159;
    cout << fixed << setprecision(2);
    cout << "Value: " << value << endl;

    // fixed and scientific: Specify the output format for floating-point numbers as fixed-point or scientific notation.
    double value2 = 12345.6789;
    cout << "Fixed: " << fixed << value2 << endl;
    cout << "Scientific: " << scientific << value2 << endl;

    // endl: Inserts a newline character and flushes the output buffer.
    cout << "Hello, World!" << endl;
    cout << "This is a new line." << endl;

    return 0;
}