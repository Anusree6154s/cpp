#include <iostream>
using namespace std;

int main()
{
    // basic loop
    //  Print numbers from 1 to 5
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    // Output: 1 2 3 4 5

    // range based loop
    //  Print elements of an array
    int numbers[] = {1, 2, 3, 4, 5};
    for (int num : numbers)
    {
        cout << num << " ";
    }
    // Output: 1 2 3 4 5

    // infinite loop
    //  Print numbers continuously until a specific condition within loop is met
    int count = 0;
    for (;;)
    {
        cout << count << " ";
        count++;
        if (count >= 5)
        {
            break;
        }
    }
    // Output: 0 1 2 3 4

    // nested for loop
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << "i: " << i << ", j: " << j << endl;
        }
    }

    return 0;
}