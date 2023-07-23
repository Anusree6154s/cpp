#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 6, 8, 3, 6, 7};
    int *p = arr;
    cout << "adaress of arr[0] is " << arr << endl;
    cout << "address of arr[0] is " << &arr[0] << endl;
    cout << "address of arr[0] is " << p << endl;

    cout << "address of arr[1] is " << &arr[1] << endl;
    cout << "adddress of arr[1] is " << p + 1 << endl;
    cout << "adddress of arr[5] is " << p + 5 << endl;

    cout << "value at arr[0] is " << arr[0] << endl;
    cout << "value at arr[0] is " << *p << endl;
    cout << "value at arr[1] is " << *(p + 1) << endl;
    cout << "value at arr[5] is " << *(p + 5) << endl;

    // pointer arithmetic
    // address new element = address current element + ( i * size of data type)

    return 0;
}