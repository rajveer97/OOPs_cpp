/*
Notes:

    Object pointer:
        Pointer having the address of object.
        e1 --> ob(a,b)

        int *p;
        int x = 5;
        p = &x;
*/

#include<iostream>
using namespace std;

class example
{
    int x, y;

  public:
    /*
    example(int x, int y)
    {
        this->a = x;
        this->b = y;
    }
    */

    void set(int x, int y)
    {
        x = x;
        y = y;
    }

    void show()
    {
        cout<<"x = "<< x <<"\n" << "y = " <<y <<endl;
    }

};

int main() {

    example ob;     // Normal object
    example *e1;    // Object Pointer
    e1 = &ob;
    e1->set(2, 4);
    e1->show();
    
    return 0;
}

/*
x = 2
y = 4
*/