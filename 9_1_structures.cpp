#include <iostream>
using namespace std;

//creating structure
struct Person
{
    char name[50];
    int age;
    float salary;
};

//struct for studying typedef
typedef struct GeekForGeeks {
 
    int G1;
    char G2;
    float G3;
 
} GFG;

int main() {
    //structures -> groups of elements of different data types under a single name (like classes)
    Person p1;
    
    cout << "Enter Full name: ";
    cin.get(p1.name, 50);//get function in case the input is super long
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary<<endl;

//the name of a struct can be changed using tydef
 GFG Geek;
    Geek.G1 = 85;
    Geek.G2 = 'G';
    Geek.G3 = 989.45;
 
    cout << "\nThe value is : "
         << Geek.G1 << endl;
 
    cout << "The value is : "
         << Geek.G2 << endl;
 
    cout << "The value is : "
         << Geek.G3 << endl;


    return 0;
}