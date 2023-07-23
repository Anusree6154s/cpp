#include <iostream>
using namespace std;

void autoStorageClass()
{
 
    cout << "Demonstrating auto class\n";
 
    // Declaring an auto variable
    int a = 32;
    float b = 3.2;
    char const *c = "GeeksforGeeks";//like strings but more dangerous. char *c isnt allowed in cpp but is in c. 
    char d = 'G';
 
    // printing the auto variables
    cout << a << " \n";
    cout << b << " \n";
    cout << c << " \n";
    cout << d << " \n";
}

int main()
{
    // automatic Storage Class - like local variable
            // keyword: auto
            // Scope: Local
            // Default Value: Garbage Value
            // Memory Location: RAM
            // Lifetime: function block

    // To demonstrate auto Storage Class
    autoStorageClass();

    return 0;
}