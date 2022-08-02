/*
Notes:
    Abstract Class:
        Class having atleast one pure virtual function and no instantiate abstract class


    Pure virtual function: 
        A do nothing function
*/


#include<iostream>
using namespace std;

class person{
	public:
		virtual	void fun()=0;  //pure virtual function
		// no defination,no object for person class
		void f1(){
			cout<<"Hello"<<endl;
		}
};
// override fun function in child class.

class student:public person{
	public:
		void fun(){
			cout<<"override"<<endl;
		}
};


int main()
{
    person *p= new student;
    p->fun();

    student s1;
    s1.fun();
    s1.f1();
}

/*
override
override
Hello
*/

//--------------------------------------------------------------

/*
concept: generalization, easy to maintain, reuseability.
					person
				/           \
	student class            faculty class

*/
