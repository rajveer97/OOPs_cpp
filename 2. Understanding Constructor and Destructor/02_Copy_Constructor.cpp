/*
Notes:

    Copy Constructor:
        The copy constructor in C++ is used to copy data of one object to another.

        when object is passed as an argument to a constructor, copy constructor gets invoked
*/

#include <iostream>
using namespace std;

// declare a class
class  example 
{
  private:
    // instance member variables
    int a, b;
    int c, d;

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

    example(example &ob)
    {
        cout<<"I am copy constructor"<<endl;
        c = ob.a;
        d = ob.b;
    }

    // instance member function
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void get()
    {
        cout<< c << " " << d <<endl; 
    }

};

int main() {
  example obj1(3, 5);  // Hey, I am parameterized constructor
  example obj2(obj1);        // I am copy constructor
  obj2.get();   // 3 5
  return 0;
}
