/*
Notes:
    Destructor:
        Destructor is an instance member function.
        
        It has the same name as the class name. 
        No arguments.
        Created using tilde ~ symbol. 
        Destructor function is invoked automatically before the object gets destroyed. 
        It helps to release resources allocated to an object.

------------------------------------------------------------------------

        object has (*p)

        int *p = new int;
        p ---> memory location

        *p = memory location(value);
*/

#include<iostream>
using namespace std;

class complex
{
  private:
    int a, b;
    int *p;

  public:
    // constructor
    complex()
    {
        a = 0;
        b = 0;
        p = new int;      // new keyword is used for dynamic allocation
        *p = 5;
        cout<<"Hey, I am default constructor.\n";
    }

    // Destructor
    ~complex()
    {
        cout<<"Hey, I am destructor. \n";
        delete p;       // delete keyword is used for dynamic de-allocation
    }

    void show()
    {
        cout<<"a= " << a <<" b= " << b << " p= " << p <<endl;
    }
};

int main() {
    complex c1;
    c1.show();
    return 0;
}

/*
Hey, I am default constructor.
a= 0 b= 0 p= 0x1077048
Hey, I am destructor.
*/