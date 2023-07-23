#include <iostream>
using namespace std;

int main()
{
    int x;
    // numeric constants - numbers are constants
    int num = 42;          // modifieable const.
    num = 34;              // constant modified
    num = x;               // modifiable variable which can take any value - (not a const)
    const float pi = 3.14; // made const using word'const'
    cout << num << " " << pi << endl;

    // string constants - strings are const
    const char *message = "Hello, World!";

    // boolean const - true or false is const
    bool isTrue = true;

    // symbolic const - constants made using word 'const' or preprocessor macros (#define)
    const int MAX_VALUE = 100;

    return 0;
}