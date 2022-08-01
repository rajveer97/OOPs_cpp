/*
Notes:

    Constructor Overloading:
        Having the same name for a constructor as long as the list of arguments is different.

*/

#include<iostream>
using namespace std;

class Employee
{
    string id, name;
    int years;

  public:
    Employee()
    {
        id = "";
        name = "";
        years = 0;
    }

    // Overloading constructor
    Employee(string no, string nam, int year)
    {
        id = no;
        name = nam;
        years = year;
    }

    // Overloading constructor
    Employee(string no, string nam)
    {
        id = no;
        name = nam;
        years = 0;
    }

    void getDetails()
    {
        cout<<"ID: "<<id << " Name: " << name << " Experiance: " << years <<endl;
    }
};

int main() {
    // 1st constructor is called
    Employee emp1;

    // 2nd constructor is called
    Employee emp2("GFG123", "Rohan", 4);

    // 3rd constructor is called
    // where years is 0 (no expericance for a fresher)
    Employee fresher("GFG456", "Rajveer");

    emp1.getDetails();
    emp2.getDetails();
    fresher.getDetails();

    return 0;
}
