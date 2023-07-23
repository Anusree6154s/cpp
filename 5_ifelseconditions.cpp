#include <iostream>
using namespace std;

int main()
{
    // if-else condition
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is either zero or negative." << endl;
    }

    //if-else ladder/cascaded if else (using elseif)
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    //nested if-else
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Number is positive." << endl;
    } else if (num < 0) {
        cout << "Number is negative." << endl;
    } else {
        if (num == 0) {
            cout << "Number is zero." << endl;
        } else {
            cout << "Invalid input." << endl;
        }
    }
    return 0;
}