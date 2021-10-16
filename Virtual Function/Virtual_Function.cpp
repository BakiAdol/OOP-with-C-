#include <bits/stdc++.h>

using namespace std;

/**
 * Virtual function mainly used for achive dynamic polymorphism. Ahich is the bility to call derived class funciton using base class pointer or reference
 * For using virtual function use virtual keyword in the begining of Base class function and Override this function in Derived class, not use virtual keyword in Derived class
 * A class could have virtual destructor but not virtual constructor
 * Virtual function can't be static and also can't be friiend function
*/

class Base{
    public:
    void print()
    {
        cout << "From Base class" << endl;
    }

    virtual void message()
    {
        cout << "Message from Base class" << endl;
    }
};

class Derived:public Base{
    public:
    void print()
    {
        cout << "From Derived class" << endl;
    }

    void message()
    {
        cout << "Message from Derived class" << endl;
    }

    void onlyDerived()
    {
        cout << "Only Derived class" << endl;
    }
};

int main()
{
    Base *b = new Derived(); // b type Base but pointing Derived
    b->print(); // it's called Base class print() function
    
    Base *m = new Derived(); // b type Base but pointing Derived
    m->message(); // it's called Derived class message() function

    Derived d; // create Derived object
    Base &r = d; // store referance of d
    r.message(); // it's called Derived class message() function

    // here two methods pointer and referance has Base type object but point or store
    // Derive type so called Derived type function but you can't call
    // r.onlyDerived(); or onlyDerived() function because this function dosen't exist in Base class

    return 0;
}