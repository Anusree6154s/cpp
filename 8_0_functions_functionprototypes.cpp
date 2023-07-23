#include <iostream>
using namespace std;

// function definition 1
void add(int p, int q)
{
  int r = p + q;
  cout <<"sum1 = "<< r;
}

// Function prototype 2
void addNumbers(int a, int b);

// Function prototype 3
int product(int a, int b);

int main()
{
  // functions
  int m, n;
  cout << "enter first number" << endl;
  cin >> m;
  cout << "enter second number" << endl;
  cin >> n;
  // function call 1
  add(m, n);

  // Function call 2
  addNumbers(5, 10);

  // Function call 3
  int ans = product(5, 10);
  cout<<"product 1 = "<<ans<<endl;
  

  return 0;
}

// Function definition 2
void addNumbers(int a, int b)
{
  int result = a+b;
  cout<<"\nsum2 = "<<result<<endl;;//remove return statement when using void
}

// Function definition 3
int product(int a, int b)
{
  return a*b;
}


//function prototype need

// Function prototypes provide a forward declaration of a function.
// They serve as a way to inform the compiler about the existence of a function before its actual definition.
// A function prototype includes the function header (return type, function name, and parameter types) but lacks the function body.
// Function prototypes are typically placed in header files or at the top of a source file.
// They allow other parts of the code to use the function before its definition.
// Function prototypes are useful when functions are defined after they are called, or when splitting code into separate files (e.g., header files and implementation files).