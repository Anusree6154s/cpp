#include <iostream>
using namespace std;

class GfG {
public:
    //declare th estatic variable in class 
    static int i;

    // the static variable can be used in functions maybe to do actions with it
    void increment() {
        while (i<6)
        {
            i++;
        }
        cout << "Value of i: " << i << endl;
    }

    //it can be used in static functions too
    static void staincrement() {
        while (i<7)
        {
            i++;
        }
        cout << "Value of i: " << i << endl;
    }

    
};

//it needs to be declared outside once, to use in main()
int GfG::i;

int main() {
    GfG obj;

    // Print the initial value of i
    obj.increment();

    // Increment the static variable
    obj.staincrement();

    // it can be directly manipulated from main() too
    GfG::i = 10;
    GfG::i++;
    cout<<"value of i in main(): "<<GfG::i<<endl;


    return 0;
}
