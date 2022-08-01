/*
Notes:
        Class members:

        Class are the building blocks of the Object-Oriented Programming.
        It is a user-defined data-type which contains data members carrying values that 
        describe the characteristics of the entity the class represents.

        class <class name>
        {
            instance member varibales   // state
            constructors
            instance member methods
        };

*/

#include<iostream>
using namespace std;

class person
{
    string name;   // state
    int age;

    public:
        void set(string n, int ag)
        {
            name = n;
            age = ag;
        }

        void work()
        {
            cout<<"Working.."<<endl;
        }

        void show()
        {
            cout<<name<<" "<<age<<endl;
        }
};

//Driver class
int main()
{
    person p1;     // object
    p1.set("Rajveer", 21);
    // p1.name; // error
    p1.work();
    p1.show();
    
    return 0;
}
