// Concept: parent class pointer can contain the reference of child class object

#include<iostream>
using namespace std;

class car
{
  public:
    void gear()
    {
        cout<<"Normal gear mechanism"<<endl;
    }

    void speed()
    {
        cout<<"Normal speed"<<endl;
    }
};

class sports_car : public car
{
  public:
    void gear()
    {
        cout<<"efficient gear mechanism"<<endl;
    }
};

int main() {
    car *p = new sports_car;
    p->speed();
    // Below line, excute the gear function of car class, 
    // Reason: early binding, due to method overriding
    p->gear(); // problem


    sports_car s1;
    s1.gear();

    return 0;
}

/*
Normal speed
Normal gear mechanism
efficient gear mechanism
*/