#include <iostream>
#include <iterator> // both of these for using ostream class for outputting array
#include <algorithm>
using namespace std;

int main()
{
    // arrays ->group of elements of same data type
    int arr[4] = {34, 65, 87, 25}; // simple initialisation and output
    cout << arr[3] << endl;

    // arr1[n] is variable array and therefore needs dynamic mem alloc for it to work
    //  int n;                              // userdefined initialisation and output
    //  cout << "enter a number n" << endl; // since in arr[n], n is undefined, n's value must be asked from user first
    //  cin >> n;
    //  int i;
    //  int arr1[n];

int arr1[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter " << i << "th number" << endl;
        cin >> arr1[i];
    }

    cout << "array by each elemnet is :" << endl;
    for (int i = 0; i < 5; i++) // to output each element by iterating
    {
        cout
            << arr1[i] << " " << endl;
    }

    cout << "array is :";
    int size = sizeof(arr1) / sizeof(arr1[0]); // to ouput all elements at once
    copy(arr1, arr1 + size, ostream_iterator<int>(cout, " "));

    cout <<endl<< "for 2d arrays: " << endl;
    int arr2d[2][3] = {{4, 5, 5},
                       {2, 6, 8}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2d[i][j] << endl;
        }
    }

    return 0;
}