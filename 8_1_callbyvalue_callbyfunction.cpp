#include <iostream>
using namespace std;

// Function 1to swap two numbers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue function - a: " << a << ", b: " << b << endl;
}

// Function 1 to swap two numbers using call by reference with pointers
void swapByReference(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Inside swapByReference function - a: " << *a << ", b: " << *b << endl;
}

// Function 2 to swap two numbers using call by value
void swapByvalue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByValue function - x: " << x << ", y: " << y << endl;
}

// Function 2 to swap two numbers using call by reference with reference variables
void swapByreference(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByReference function - x: " << x << ", y: " << y << endl;
}

// Function 3 to swap two numbers using call by reference with reference variables
int &swapbyreference(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
    return y;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    cout << "Before swapping - num1: " << num1 << ", num2: " << num2 << endl;

    // Call the function with call by value 1
    swapByValue(num1, num2);
    cout << "After swapByValue call 1 - num1: " << num1 << ", num2: " << num2 << endl;
    //change in values inside function dont affect values outside function

    // Call the function with call by reference using pointers 1
    swapByReference(&num1, &num2);
    cout << "After swapByReference call 1 - num1: " << num1 << ", num2: " << num2 << endl;
    //change in values inside function affects values outside function
    //here &num1=*a, &num2=*b


    cout << "\nBefore swapping - num1: " << num1 << ", num2: " << num2 << endl;

    // Call the function with call by value 2
    swapByvalue(num1, num2);
    cout << "After swapByValue call 2 - num1: " << num1 << ", num2: " << num2 << endl;

    // Call the function with call by reference using reference variables 2
    swapByreference(num1, num2);
    cout << "After swapByReference call 2 - num1: " << num1 << ", num2: " << num2 << endl;
    //here num1=&x, num2=&y
    //executes same as function 1

    // Call the function with call by reference using reference variables 3
    swapbyreference(num1, num2)=766;
    cout << "\nAfter swapByReference call 3 - num1: " << num1 << ", num2: " << num2 << endl;

    return 0;
}