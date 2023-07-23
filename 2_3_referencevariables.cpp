#include <iostream>
using namespace std;

int main()
{
    int x = 56;

    // Example 1: Reference variable
    int &y = x;
    y = 100; // Modify y, which also modifies x
    cout << "Example 1:" << endl;
    cout << "x: " << x << endl; // Output: x: 100
    cout << "y: " << y << endl; // Output: y: 100

    // Example 2: Separate variable
    int z = x;
    z = 200; // Modify z, does not affect x
    cout << "Example 2:" << endl;
    cout << "x: " << x << endl; // Output: x: 100 (unchanged)
    cout << "z: " << z << endl; // Output: z: 200

    // therefore (&y=x)!= (y=x)
    
    return 0;
}
