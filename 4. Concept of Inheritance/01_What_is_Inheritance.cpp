/*
Notes: 
    Inheritance:
        The capability of a class to derive properties and characteristics from
        another class is called Inheritance.

        Sub Class: 
            The class that inherits properties from another class is called sub class or 
            child class or derived class.
        Super Class: 
            The class whose properties are inherited by sub class is called Base Class or Super Class.

        
        Syntax of Inheritance:
            class <derived_class_name> : <access-specifier> <base_class_name>
            {
                //body
            }
}
*/

// Types of Inheritance

// 1. Single Level 

class A
{

};

class B : public A 
{

};

//----------------------------------------
// 2. Multilevel: A->B->C

class A
{

};

class B : public A
{

};

class C : public B
{

};

//----------------------------------------
// 3. Multiple: A, B -> C
class A
{

};

class B
{

};

class C : public B, public A
{

};

//----------------------------------------
// 4. Hierarchical: A->B, A->C
class A
{

};

class B : public A
{

};

class C : public A
{

};

//----------------------------------------
// 5. Hybrid: Hierarchical + Multiple
class A
{

};

class B : public A
{

};

class C : public A
{

};

class D : public B, public C
{

};
