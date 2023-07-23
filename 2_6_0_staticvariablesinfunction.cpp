/* static functions
-  “static” keyword before a function name makes it static.
- access to static functions is restricted to the file where they are declared
 */

/* static variables in functions
1. Static variables in a function have a lifetime that spans the entire program execution.
2. Space for a static variable is allocated only once.4
3. therefore Static variables are not re-initialized each time the function is called.
4. The value of a static variable is retained and carried over to the next function call.
5. Static variables are useful for storing and preserving the state of a function.
6. Static variables are not accessible directly outside of the function.
7. Static local variables can be used for implementing coroutines or preserving function state.
8. Java does not support static local variables in functions. */

// C++ program to demonstrate
// the use of static Static
// variables in a Function
#include <iostream>
#include <string>
using namespace std;

// function with static variable
void function1()
{
	// declare and initialise static variable
	static int i = 0;

	// doactoins with static variable
	// each time the function is called, static variable gets incremented from previous value
	i++;
	cout << i;
}

// function without static variable
void function2()
{
	// declare and initialise normal variable
	int j = 0;

	// each time the function is called, variable gets incremented from 0
	j++;
	cout << j;
}

int main()
{
	for (int x = 0; x < 5; x++)
	{ // call the function thus accessing the static variable
		function1();
	}

cout<<""<<endl;

	for (int x = 0; x < 5; x++)
	{ // call the function thus accessing the static variable
		function2();
	}
	return 0;
}

//therefore static variales can be used to check hoe many times a function has been called
