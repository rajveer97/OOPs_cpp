#include<iostream>
using namespace std;

class A
{
    int a;

  public:
   // since we have not created any constructor, the compiler will 
   // create a by default constructor itself
    ~A()
    {
        cout<<"I am Parent class destructor. \n";
    }
};

class B : public A
{
    int b;
  
  public:
    
    ~B()
    {
        cout<<"I am child class destructor.\n";
    }
};

int main() {
    B obj;
    return 0;
}

/*
I am child class destructor.
I am Parent class destructor.
*/