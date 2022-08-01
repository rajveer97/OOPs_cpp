/*
    Notes:
        Constructor:
            Constructor is a special instance member function having the same name 
            as the class name. 
            No return type.
            Solves the problem of initialization.
            Invoked when the object is created.
            If there is no constructor, the compiler will create it for you.
            Compiler creates default and copy constructor for you.
            If you created parameterized one, then the compiler will not create a default one.
*/

// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  example 
{
  private:
    // instance member variables
    int a;
    int b;

  public:
    example()      // default constructor
    {
      cout << "Hey, I am a default constructor" << endl;
    }

    example(int p, int q)      // parameterized constructor
    {
      cout << "Hey, I am parameterized constructor" << endl;
      a = p;
      b = q;
    }

    // instance member function
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void get()
    {
        cout<< a << " " << b <<endl; 
    }

};

int main() {
  example obj1(3, 5);  // Hey, I am parameterized constructor
  example obj2;        // Hey, I am a default constructor
  return 0;
}


