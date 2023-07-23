#include <iostream>
using namespace std;
#include <string>

int main() {
    // strings
    string name = "anusree";
    cout << "the name is " << name << endl;
    cout << "name size is " << name.size() << endl;
    cout << "name length is " << name.length() << endl;
    cout << "substring from 0th to 4th letter is " << name.substr(0, 4) << endl;
    cout << "subtring " << name.substr(1, 122) << endl;

    return 0;
}