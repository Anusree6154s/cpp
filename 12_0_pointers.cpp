#include <iostream>
using namespace std;

int main()
{
    // pointers ->data type that hold address of other variables
    int a = 5; // or float or any data type. doesnt matter
    int *p;
    p = &a;
    int *q = &a; // either way pointer can be initialised

    //& ->(address of) operator
    cout << "address of a is " << p << endl;
    cout << "address of a is " << q << endl;
    cout << "address of a is " << &a << endl;
    cout << "value at p&q is " << p << endl;
    cout << "asddress of p is " << &p << endl;
    cout << "address of q is " << &q << endl;

    //*- (value at) dereferencing operator- something that points to integer(normal)value. which means value at that address
    cout << "value at a is " << a << endl;
    cout << "value at a is " << *p << endl;
    cout << "value at a is " << *q << endl;

    // pointer to a pointer
    int **x = &p;
    cout << "value at x is " << x << endl;
    cout << "address of p is " << x << endl;
    cout << "value at p is " << *x << endl;
    cout << "value at a is " << **x << endl;

    int ***y=&x;
    cout<<"value at a is "<<***y<<endl;

    return 0;
}