// Add member variables of two different classes

#include<iostream>
using namespace std;

class B;

// 1st Class
class A
{
  private:
    int a;

  public:
    A(int x)
    {
        a = x;
    }

    friend  void sum(A obj1, B obj2);

    void show()
    {
        cout<<"a = " << a<<endl;
    }

};

// 2nd Class
class B
{
  private:
    int b;

  public:
    B(int x)
    {
        b = x;
    }

    friend  void sum(A obj1, B obj2);

    void show()
    {
        cout<<"b = " << b<<endl;
    }
};

// friend function definition
void sum(A obj1, B obj2)
{
    cout<<"Sum = " << obj1.a + obj2.b << endl;
}

int main() {
    A obj1(4);
    B obj2(8);
    obj1.show();  // a = 4
    obj2.show();  // b = 8
    sum(obj1, obj2);

    return 0;
}

/*
a = 4
b = 8
Sum = 12
*/