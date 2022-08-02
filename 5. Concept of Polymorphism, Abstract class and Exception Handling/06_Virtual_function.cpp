/*
Notes:
    Virtual function:
        A virtual function is a member function in the base class 
        that we expect to redefine in derived classes. 
        
        Basically, a virtual function is used in the base class 
        in order to ensure that the function is overridden.

    Why do we need virtual function in C++?
        We use virtual functions to ensure that the correct function 
        is called for an object, regardless of the reference type used to call the function. 
        They are basically used to achieve the runtime polymorphism and are declared 
        in the base class by using the virtual keyword before the function.
*/

#include<iostream>
using namespace std;

class car
{
  public:
    virtual void gear()
    {
        cout<<"Normal gear mechanism"<<endl;
    }

    void speed()
    {
        cout<<"Normal speed"<<endl;
    }
};

class sports_car : public car
{
  public:
    void gear()
    {
        cout<<"efficient gear mechanism"<<endl;
    }
};

int main() {
    car *p = new sports_car;
    p->speed();
    p->gear();  // efficient gear mechanism  (problem solved by virtual function)


    sports_car s1;
    s1.gear();

    return 0;
}

/*
Normal speed
efficient gear mechanism
efficient gear mechanism
*/
