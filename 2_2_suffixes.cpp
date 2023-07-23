#include <iostream>
using namespace std;

int main()
{
    float a = 3.14; // Without 'f' suffix, the literal is treated as 'double'
                    // float b = 31.4; // With 'f' suffix, the literal is treated as 'float'
    long b = 34;
    cout << sizeof(3.14) << endl;  // 8 bytes, cuz all floats are default double
    cout << sizeof(3.14f) << endl; // 4bytes
    cout << sizeof(3.14l) << endl; // 16 bytes
    cout << sizeof(34u) << endl;   // 4bytes
    cout << sizeof(34l) << endl;   // generally 4 or 8 bytes depending on sys
    cout << sizeof(34) << endl;    // 4bytes

    /* Here,
    values 3.24, 34 ->literal
    letter f, l, u ->suffix/qualifiers
     */
    return 0;
}