#include <iostream>
using namespace std;

// class to explain constructors
class Student
{
public:
    string name;
    int marks;

    // constructor->fucntion to accept i/ps
    Student(string x, int y, int z)
    {
        this->name = x;
        this->marks = y;
        this->secretPassword = z;
    }

    // method to o/p details
    void printdetails()
    {
        cout << this->name << "'s marks is " << this->marks << endl; // this=instance for which the details are needed
    }

    // to print private stuff with the help of class function outside main() as
    void printSecretPassword()
    {
        cout << "secret password is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

int main()
{
    // Constructor: A constructor is a special member function (method) that is automatically called when an object of a class is created. It initializes the object's data members and performs any necessary setup. Constructors have the same name as the class and do not have a return type.

    // Destructor: A destructor is a special member function that is automatically called when an object of a class is destroyed or goes out of scope. It performs cleanup tasks, such as releasing resources or deallocating memory, before the object is removed from memory.

    
    // constructors
    Student st1("anusree", 35, 68878372);
    Student st2("anjali", 32, 34686);
    st2.printdetails();
    st1.printdetails();
    // cout<<"secret password is "<<st1.secretPassword<<endl;//will print error as this is private
    st1.printSecretPassword(); // this will print secret password

   
}