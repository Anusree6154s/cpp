// C++ program to illustrate the static storage class
// objects
#include <iostream>
using namespace std;

// Function containing static variables
// memory is retained during execution
int staticFun()
{
    cout << "For static variables: ";
    // static variable initialised
    // will not be initialised in the second function calling
    static int count = 0;
    count++;
    return count;
}

// Function containing non-static variables
// memory is destroyed
int nonStaticFun()
{
    cout << "For Non-Static variables: ";

    int count = 0;
    count++;
    return count;
}

int main()
{

    // Calling the static parts
    cout << staticFun() << "\n";
    cout << staticFun() << "\n";
    ;

    // Calling the non-static parts

    cout << nonStaticFun() << "\n";
    ;
    cout << nonStaticFun() << "\n";
    ;
    return 0;
}

// static Storage Class
// class with static members in it
// like local constants
// no new memory is allocated because they are not re-declared
// use static int to count the number of times a function is called

// Scope: Local
// Default Value: Zero
// Memory Location: RAM
// Lifetime: whole program