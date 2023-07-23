//header file
#include <iostream>  

//standard namespace
using namespace std; // to replace writing std::cout<<"Hello World!"; again and again

//main function
int main() // int->return data type
{
    //body of function
    // cout<<"Hello World!"<<endl<<"next line!"; about comments
    cout << "Hello World!" << endl // about end line endl
         << "next line!";

    //'>>'insertion operator
    //'<<'extraction operator

    // Declaration of Variable
    int num1 = 24;
    int num2 = 34;
  
    int result = num1 + num2;
  
    // Output
    cout << "first sum is "<<result << endl;
  
    // Return Statement
    return 0;
}

/*data types
    1. Built-in Data Types:int, char, boolean, float, double
    2. User-defined Data Types:structure, enumeration, union, class, typedef
    3. Derived Data Types:array, pointer, function
    */


/* 1. Memory Layout of C Programs: 
   - A C program's memory is typically divided into four main sections: the text/code section, data section, stack, and heap.
   - The text/code section contains the executable instructions of the program.
   - The data section includes global and static variables, as well as initialized and uninitialized data.
   - The stack is used for storing local variables and function call information.
   - The heap is dynamically allocated memory used for dynamic data structures and objects.
   - The memory layout of a C program is determined by the compiler and operating system, and understanding it is crucial for memory management and program execution. */