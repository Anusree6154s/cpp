#include <iostream>
using namespace std;

enum designFlags
{
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main()
{
    // enumeration -> userdefined data type consisting of integral constants(0, 1, 2, ..) in form of words
    // since an enum variable takes only one value out of many possible values, it is used for flags
    //  the members of an enum has default values starting from 1, 2, 3, ... but it can be changed
    /* eg.
        enum season
    {   spring = 0,
        summer = 4,
        autumn = 8,
        winter = 12
    };
    */

    int myDesign = BOLD | UNDERLINE;

    //    00000001
    //  | 00000100
    //  ___________
    //    00000101

    cout << myDesign; // output is 5, which means it is bold or underlined


    return 0;
}

//other than for flags enums dont act so important in cpp