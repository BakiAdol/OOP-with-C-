#include <bits/stdc++.h>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class Constructor" << endl;
    }
    ~Base()
    {
        cout << "Base class Destructor" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived class Constructor" << endl;
    }
    ~Derived()
    {
        cout << "Derived class Destructor" << endl;
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "Base2 class Constructor" << endl;
    }
    virtual ~Base2()
    {
        cout << "Base2 class Destructor" << endl;
    }
};

class Derived2 : public Base2
{
public:
    Derived2()
    {
        cout << "Derived2 class Constructor" << endl;
    }
    virtual ~Derived2()
    {
        cout << "Derived2 class Destructor" << endl;
    }
};

int main()
{
    // create Derived clas object..
    // first call Base class constructor and then Derived class constructor
    // then Derived class Destructor and then Base class constructor
    // [last construct first detruct]
    // Derived d;

    // point Derivbed class in b
    // here first Base class constructor and then derived class constructor call
    // Base *b = new Derived();
    // if you create memory manualy by new keyword you must be manualy delete this memory
    // so by delete keyword call only base class destructor
    // delete b;
    // thats the problem create i create memory for Dervied class but i cant call destrutor of derived claa
    // so use virtual destructor follow Base2 and Derived2 class

    // here first call Base2 class constructor and then Derived2 class constructor
    Base2 *b2 = new Derived2();
    // delete b2 call Dervied2 destructor and then Base2 class constructor
    // because i used virtual destructor and it care about which type it point
    delete b2;

    return 0;
}