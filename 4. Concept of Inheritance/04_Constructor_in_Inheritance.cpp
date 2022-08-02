#include<iostream>
using namespace std;
 
class A
{
    int a;

  public:
    A()
    {
        cout<<"I am Parent class. \n";
    }

    A(int k)
    {
        cout<<"I am Parent class. \n";
        a = k;
    }
};

class B : public A
{
    int b;

  public:
/*  B()
    {
        cout<<"I am Child class. \n";
    }  // or */

    B(int x, int y) : A(x)
    {
        cout<<"I am Child class. \n";
        b = y;
    }


};


int main() {
    B obj(4, 6);

    return 0;
}

/*
I am Parent class. 
I am Child class.
*/