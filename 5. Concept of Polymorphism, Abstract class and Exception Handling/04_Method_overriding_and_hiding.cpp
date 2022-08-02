/*
Notes:
    Function overriding and hiding:
        Suppose, the same function is defined in both the derived class and the base class.
        Now if we call this function using the object of the derived class, 
        the function of the derived class is executed.
        This is known as function overriding in C++. 
        The function in a derived class overrides the function in a base class.

        In C++, function overloading is possible i.e., two or more functions from the same class 
        can have the same name but different parameters. However, if a derived class redefines 
        the base class member method then all the base class methods with the same name 
        become hidden in the derived class

*/

// C++ program to demonstrate function overriding

#include<iostream>
using namespace std;

class Base
{
  public:
    void print()
    {
        cout<<"Base Function"<<endl;
    }

    void f1(int p)
    {
        cout<<"Hey!!"<<endl;
    }
};

class Derived : public Base
{
  public:  
    void print()
    {
        cout<<"Base Function"<<endl;
    }

    void f1()
    {
        cout<<"Hey!!"<<endl;
    }
};

int main() {
    Derived derived1;
    derived1.print();
    // derived1.f1(2);   // error
    derived1.f1();
    return 0;
}

/*
Base Function
Hey!!
*/