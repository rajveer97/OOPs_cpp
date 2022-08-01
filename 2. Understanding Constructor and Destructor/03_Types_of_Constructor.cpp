/*
Notes:

    Types of Constructor:
    1. Default Constructor
    2. Parameterized Constructor
    3. Copy Constructor
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
      a = 0;
      b = 0;
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
  example ob;    // Hey, I am a default constructor
  example obj1(3, 5);  // Hey, I am parameterized constructor
  example obj2(obj1);        // I am copy constructor
  obj2.get();   // 3 5
  return 0;
}
