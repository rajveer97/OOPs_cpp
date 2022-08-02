/*
Notes:
    Exception Handling:
        Exceptions are runtime abnormal conditions that a program encounters during its execution. 
        
        There are two types of exceptions: 
            a)Synchronous (i.e., Divided by Zero, 
                                Out of range array subscripts, 
                                Unsuccessful memory Allocation )
            b)Asynchronous (i.e., exceptions which are beyond the program’s control, 
                                   such as disc failure, 
                                   keyboard interrupts etc.). 
                
        C++ provides the following specialized keywords for this purpose:
            try:   Represents a block of code that can throw an exception.
            catch: Represents a block of code that is executed when a particular exception is thrown.
            throw: Used to throw an exception. Also used to list the exceptions that a function 
                    throws but doesn’t handle itself.
*/

#include <iostream>
using namespace std;

int main()
{
int x = -1;

// Some code
cout << "Before try \n";
try {
	cout << "Inside try \n";
	if (x < 0)
	{
		throw x;
		cout << "After throw (Never executed) \n";
	}
}
catch (int x ) {
	cout << "Exception Caught \n";
}

cout << "After catch (Will be executed) \n";
return 0;
}

/*
Before try 
Inside try
Exception Caught 
After catch (Will be executed)
*/
