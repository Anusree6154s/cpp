#include <iostream>
using namespace std;

int main()
{
    // while loop
    int i = 0, n;
    cout << "enter number between 1 to 10" << endl;
    cin >> n;
    while (i < n)
    {
        cout << "I love you " << i << "times" << endl;
        i++;
    }

    // dowhile
    int j = 0;
    cout << "enter number between 1 to 10" << endl;
    cin >> n;
    do
    {
        cout << "I love you " << j << "times" << endl;
        j++;
    } while (j < n);

    //infinite while loop
    while (true) {
    cout << "This is an infinite loop. Press Ctrl+C to exit." << endl;
}
    return 0;
}