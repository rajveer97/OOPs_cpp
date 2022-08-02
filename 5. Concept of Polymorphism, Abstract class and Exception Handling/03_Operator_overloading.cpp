// 2. Operator Overloading

#include<iostream>
using namespace std;

class complex
{
  private:
    int a, b;

  public:
    complex()
    {

    }

    complex(int x, int y)
    {
        a = x;
        b = y;        
    }

    // Operator overloading
    // 1. Binary operator 
    complex operator +(complex c)
    {
        complex temp;
        temp.a = a + c.a;   // 7
        temp.b = b + c.b;   // 11

        return temp;
    }

    // 2. Unary operator
    complex operator -()
    {
        complex temp;
        temp.a = -a;
        temp.b = -b;

        return temp;
    }

    void show()
    {
        cout << a << " " << b << endl;
    }
};

int main() {
    complex c1(4, 7);     // a=4 b=7
    complex c2(3, 4);     // a=3 b=4        c3=a=4+3=7 and b=11

    complex c3;
    c3 =  c1.operator +(c2);     // c3 = c1+c2;
    c3.show();

    complex c4;
    c4 = -c2;
    c4.show();

    return 0;
}

/*
7 11
-3 -4
*/