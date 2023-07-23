#include <iostream>
using namespace std;

int main()
{
    // break and continue is generaly associated with if-else statements
    // for any king od loops, if condition along with continue break is used for continuing and breaking the loop

    // in for loop
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break; // Exit the loop when i is equal to 6
        }
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // Skip the current iteration when i is equal to 3
        }
        cout << i << " ";
    }
    cout << endl;

    // in while loop
    int i = 1;
    while (i <= 5)
    {
        if (i == 3)
        {
            break; // Exit the loop when i is equal to 3
        }
        if (i % 2 == 0)
        {
            i++;
            continue; // Skip the current iteration when i is even
        }
        cout << i << " ";
        i++;
    }

    // in do while loop
    int j=1;
    do
    {
        if (j == 3)
        {
            break; // Exit the loop when i is equal to 3
        }
        if (j% 2 == 0)
        {
            cout << j << " is even." << endl;
        }
        else
        {
            cout << j << " is odd." << endl;
            j++;
            continue; // Skip the remaining code for odd numbers
        }
        j++;
    } while (j <= 5);

    return 0;
}