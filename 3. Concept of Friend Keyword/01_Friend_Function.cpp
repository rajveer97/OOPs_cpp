/*
Notes:
    Friend Function:
        1. Not a member function
        2. Can access any member of class by creating an object 
           of that class to which it is a friend.
        3. No caller object
        4. Declared inside class
        5. Defined outside class
*/

#include<iostream>
using namespace std;

class complex
{
  private:
    int a, b;

  public:
    complex()
    {
        a = 0;
        b = 0;    // default constructor
    }

    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    // friend function declaration
    friend void add(complex ob);   // or add(complex);

    void show()
    {
        cout<< "a = " << a << ", b = " << b <<endl;
    }

};

// friend function definition
void add(complex c)
{
    cout<< "Sum = " << c.a + c.b <<endl;
}

int main() {
    complex c1;
    c1.set(4, 8);  // a=4 and b=8
    c1.show();
    add(c1); 
    return 0;
}

/*
a = 4, b = 8
Sum = 12
*/