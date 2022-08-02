// Demo code to see visibility mode as well as single level inheritance

#include<iostream>
using namespace std;

class A
{
    int a;

  public:
    void f1()
    {
        cout<<"In class A"<<endl;
    }

  protected:
    void f3()
    {
        cout<<"In class A under protected"<<endl;
    }
};

class B : public A
{
    int b;
  
  public:
    void f2()
    {
        cout<<"In class B"<<endl;
    }

    void help()
    {
        f3();    // we can use protected member in derived class 
    }

    // void f1(){}     // It will be created by the compiler but will not be visible

// protected:
    // void f3() {}    // It will be created by the compiler but will not be visible
};

int main() {
    B obj;
    obj.f1();
    obj.f2();
    obj.help();
    return 0;
}

/*
In class A
In class B
In class A under protected
*/