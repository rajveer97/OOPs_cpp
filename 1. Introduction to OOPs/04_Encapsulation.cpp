/*
Notes: 
    Encapsulation:

        Encapsulation is defined as the wrapping up of data under a single unit. 
        It is the mechanism that binds together the code and the data it manipulates.

        Another way to think about encapsulation is that it is a protective shield that 
        prevents the data from being accessed by the code outside this shield.

        Technically in encapsulation, the variables or data of a class are hidden from 
        any other class and can be accessed only through any member function of its own class 
        in which they are declared.

        As in encapsulation, the data in a class is hidden from the other classes, 
        so it is also known as data-hiding.

        Encapsulation can be achieved by declaring all the variables in the class as 
        private and writing public methods in the class to set and get the values of the variables.
*/


#include<iostream>
using namespace std;

class example 
{
    private:
        int a, b;

    public:
        void set(int x, int y)
        {
            a = x;
            b = y;
        }

        void get()
        {
            cout<<a << " "<<b<<endl;
        }
};

int main() {
    example obj;

    obj.set(3, 4);
    obj.get();
    
    return 0;
}