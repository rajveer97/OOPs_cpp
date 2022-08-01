/*
Notes:
    this pointer:
        this is a keyword that refers to the current instance of the class. 
        
        3 main usage of this keyword in C++.
            It can be used to pass current object as a parameter to another method.
            It can be used to refer current class instance variable.
            It can be used to declare indexers.
*/

#include<iostream>
using namespace std;

class example
{
    int x, y;

  public:
    example(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void show()
    {
        cout<<"x = "<< x <<"\n" << "y = " <<y <<endl;
    }

};

int main() {
    example ob(2, 5);     // Normal object
    example *e1;          // Object Pointer
    e1 = &ob;
    e1->show();
    
    return 0;
}

/*
x = 2
y = 5
*/
