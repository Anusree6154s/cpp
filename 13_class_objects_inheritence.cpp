#include <iostream>
using namespace std;

// classes
class Employee
{
public:
    string name;
    int salary;

    // method to o/p details
    void printdetails()
    {
        cout << this->name << "'s salary is " << this->salary << endl; // this=instance for which the details are needed
    }
};

// subclass and inheritence->subclasses inherit properties of its superclass
class Teacher : public Employee
{
public:
    string subject;

    void inputDetails() // interactive i/p values thrugh mehthod
    {
        cout << "Enter name: ";
        cin >> this->name;

        cout << "Enter salary: ";
        cin >> this->salary;

        cout << "Enter subject: ";
        cin >> this->subject;
    }

    void printdetailsofteacher()
    {
        cout << this->subject << " teacher, " << this->Employee::name << "'s salary is " << this->Employee::salary << endl; // this=instance for which the details are needed
    }
};

int main()
{

    // classes and objects

    // classes-public, private, protected
    // Public members are accessible from anywhere, both within and outside the class. They have the broadest visibility and can be inherited by derived classes.
    // Private members are only accessible within the same class and are not inherited by derived classes. They provide encapsulation and hide implementation details.
    // Protected members are accessible within the class and by derived classes. They are not accessible from outside the class. Protected members provide a level of encapsulation while allowing derived classes to access and use the inherited members.

    // Class: A class is a blueprint or template that defines the structure and behavior of objects. It encapsulates data (in the form of data members) and behavior (in the form of member functions or methods). Objects are instances of classes.

    // Object: An object is an instance of a class. It represents a specific occurrence of a class and has its own set of data and state. Objects can interact with each other through their methods and exchange data.

    // Method: A method (member function) is a function defined within a class. It represents the behavior or actions that objects of the class can perform. Methods can access and manipulate the data members (variables) of the class. There are different types of methods, such as constructors, destructors, accessors, mutators, and regular member functions.

    // Data Member: A data member is a variable declared within a class that holds data or state specific to objects of that class. It represents the attributes or properties of objects. Data members can have different access specifiers, such as private, protected, or public, determining their visibility and accessibility.

    // Subclass and Inheritance: Inheritance is a mechanism that allows a class to derive properties and behaviors from another class, called the base class or superclass. The derived class, also known as the subclass, inherits the data members (variables) and member functions (methods) of the base class. It can extend the base class by adding its own data members and member functions or override the inherited members.

    // Polymorphism: Polymorphism is the ability of objects of different classes to respond differently to the same method or function call. It allows objects to be treated as instances of their base class or more specialized derived classes interchangeably.

    // Encapsulation: Encapsulation is a principle of OOP that encapsulates data and methods within a class, hiding the internal implementation details. It provides data abstraction and protects the integrity of data by controlling access through public, private, and protected access specifiers.

    // Abstraction: Abstraction is a concept that focuses on essential properties and behaviors while hiding unnecessary details. It allows you to create classes with simplified interfaces, making it easier to understand and use the underlying functionality.

    // object of the class created
    Employee emp1;
    Employee emp2;

    emp2.name = "anjali";
    emp2.salary = 4536;

    emp1.name = "anusree";
    emp1.salary = 4500;

    emp2.printdetails();                                         // method running/calling
    cout << emp1.name << "'s salary is " << emp1.salary << endl; // either o/p like this or can create a method in the classs itself

    // inheritance example
    Teacher t;
    t.inputDetails();

    t.printdetails();
    t.printdetailsofteacher();
    return 0;

    return 0;
}