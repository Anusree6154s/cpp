#include <iostream>
using namespace std;

int globallocal = 3; // Global variable

// Function to study global variables
void printglobal()
{
  cout << "Global variable is = " << globallocal << endl;//prints global since there's no local varibale here
}

int main()
{
  int globallocal = 56; // Local variable

  // Variables (sizes in bytes vary based on memory architecture)
  int a = 4, b = 56;
  char c = 'h';
  short d = 6;
  short _u = 9; // Variable names can begin with letter or underscore
  long e;
  long long y;
  float o = 0.45;
  double r = 4.65335;
  long double t = 45.675445;
  t = 4;             // Variables can be reassigned another value
  const float f = 6; // Constant variable for fixed values throughout the code

  cout << a << endl;
  cout << b << endl;
  cout << d << endl;
  cout << _u << endl;
  cout << t << endl;

  cout << "Local variable is = " << globallocal << endl; // Prints 56
  // Local variable always overrides global variable

  printglobal(); // Prints global variable
  // Since it's outside, it prints the global variable

  return 0;
}