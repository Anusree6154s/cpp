#include <iostream>
/*
2 types of header files:
1. system header files (comes with compiler)
2. user defined header files (set by programmer. should exist in current dirctory. else will cause error.)
*/

using namespace std;

int main()
{
     // computation (operators)
     int g, h;
     cout << endl
          << "enter first number";
     cin >> g;
     cout << endl
          << "enter second number";
     cin >> h;
     cout << endl
          << "the sum is " << g + h;
     cout << endl
          << "the difference is " << g - h;
     cout << endl
          << "the product is " << g * h;
     cout << endl
          << "the quotient is " << (float)g / h << endl; // chanding final variables type is called typecasting

     // operator precedence
     int result = 10 + 5 * 2; // arithmetic operator
     // result = 20, multiplication (*) is evaluated before addition (+)
     int x = 5;
     int y = 10;                // assignment operator
     x += y *= 2;               // y is multiplied by 2, then the result is assigned to x (x = 25, y = 20)
     int x = 5;                 // unary/binary operator
     int y = ++x * 3;           // prefix increment (++) is evaluated first, then multiplication (*) (x = 6, y = 18)
     int result = (10 + 5) * 2; // parentheses overriding
     // result = 30, addition inside parentheses is evaluated first

     return 0;
}

// operators
/*
1. assignment operators (=, +=, -=, *=, /=, %=, <<=, >>=, |=, &=)
2. comparison operators(==, <, >, !=, <=, >=)
3. arithmetic(+, -, /, *, ++, --, % )
4. bitwise (<<, >>, |, &, ^[xor], ~[not])
5. logical (||, &&, ![not]) */

// Operator Precedence: order in which the operators do the operations