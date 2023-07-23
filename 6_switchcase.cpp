#include <iostream>
#include <string>
using namespace std;

int main()
{
    // basic switch case
    // Example: Matching days of the week
    int day = 3;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    default:
        cout << "Invalid day" << endl;
    }
    // Output: Wednesday

    // fal-through switch case - if either of case is true all under it gets executed
    //  Example: Checking grade ranges
    char grade = 'A';
    switch (grade)
    {
    case 'A':
    case 'B':
        cout << "Good job!" << endl;
        break;
    case 'C':
    case 'D':
        cout << "Keep up the effort!" << endl;
        break;
    default:
        cout << "Work harder!" << endl;
    }
    // Output: Good job!

    // nested switch case
    //  Example: Matching a shape and its color
    //strings in switch case not possible in cpp, only n c#
    // string shape = "circle";
    // string color = "red";
    // switch (shape)
    // {
    // case "circle":
    //     switch (color)
    //     {
    //     case "red":
    //         cout << "A red circle" << endl;
    //         break;
    //     case "blue":
    //         cout << "A blue circle" << endl;
    //         break;
    //     default:
    //         cout << "A circle of unknown color" << endl;
    //     }
    //     break;
    // case "square":
    //     cout << "A square" << endl;
    //     break;
    // default:
    //     cout << "Unknown shape" << endl;
    // }
    // Output: A red circle

    int shape = 1;
    char color = 'r';
    switch (shape)
    {
    case 1:
        switch (color)
        {
        case 'r':
            cout << "A red circle" << endl;
            break;
        case 'b':
            cout << "A blue circle" << endl;
            break;
        default:
            cout << "A circle of unknown color" << endl;
        }
        break;
    case 2:
        cout << "A square" << endl;
        break;
    default:
        cout << "Unknown shape" << endl;
    }
    

    return 0;
}