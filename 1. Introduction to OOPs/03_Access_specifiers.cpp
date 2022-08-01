/*
Notes:

    There are 3 types of access modifiers in C++, 
    which we discuss in detail below:

    Public: All the class members declared under public will be available to everyone. 
    The data members and member functions declared public can be accessed by other classes too.

    Private: The class members declared as private can be accessed only by the functions inside the class. 
    They are not allowed to be accessed directly by any object or function outside the class.

    Protected: Protected access modifier is similar to that of private access modifiers, 
    the difference is that the class member declared as Protected are inaccessible outside the 
    class but they can be accessed by any subclass (derived class) of that class.

*/

// C++ program to demonstrate the working of public inheritance

#include <iostream>
using namespace std;

class Base {
  private:
    int pvt = 1;

  protected:
    int prot = 2;

  public:
    int pub = 3;

    // function to access private member
    int getPVT() {
      return pvt;
    }
};

class PublicDerived : public Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }
};

int main() {
  PublicDerived object1;
  cout << "Private = " << object1.getPVT() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.pub << endl;
  return 0;
}

/*
Private = 1
Protected = 2
Public = 3
*/