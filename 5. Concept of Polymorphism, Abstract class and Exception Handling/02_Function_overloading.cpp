// 1. Function Overloading

#include<iostream>
using namespace std;

class sum
{
    int a, b, c;
  public:
    sum()
    {
        a=0; b=0; c=0;
    }

    void add(int a, int b)
    {
        cout<<"Sum = " << a + b << endl;
    }

    void add(int a, int b, int c)
    {
        cout <<"Sum = " << a+b+c <<endl;
    }

};

int main() {
    sum s1;
    s1.add(4, 5);
    s1.add(4, 6, 4);

    return 0;
}

/*
Sum = 9
Sum = 14
*/


/*
// Error : Just changing the return type is not a function overloading

int fun(int a, int b)
float fun(int a, int b)

*/
