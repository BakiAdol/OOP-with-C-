#include <bits/stdc++.h>

using namespace std;

/**
 * function overriding is runtime polymorphism/ dynamic binding/ lazy binding
 * we can achive runtime polymorphism using either pointer or reference
*/

class Base{
    public:
    void Print(){cout << "Print Base" << endl;}
    virtual void Fun(){cout << "Fun from Base" << endl;}
    virtual void Me(double x){cout << "Me form Derived2" << endl;}
};

class Derived:public Base{
    public:
    void Print(){cout << "Print Derived" << endl;}
    void Fun(){cout << "Fun from Derived" << endl;}
};

class Derived2:public Base{
    public:
    // it's not override base class Me, it's totally diffrent function 
    void Me(int x){cout << "Me form Derived2" << endl;} // always this Me() will be called not Base class Me()
    
    //check void Me(int x) is not override
    //void Me(int x)override{cout << "Me form Derived2" << endl;}

};

int main()
{
    Base *b = new Derived(); // Base type object that point Derived type
    b->Print(); // still it static binding print Base class Print()

    Base *bb = new Derived(); // Base type object that point Derived type
    bb->Fun(); // it's called derived class Fun function, because Fun() int Base class is virtual, it Fun() function exist in Derived class then it called derived class Fun()
    bb->Base::Fun(); // you can also call Base class Fun() this way
 
    Derived2 d2; // Derived2 type object
    Base &bbb = d2; // Base type object reference d2(Derived2 type object)
    bbb.Fun(); // this is called Base class function because Fun() function dosent exist in Derived2 class
    bbb.Me(2); // it's called Derived2 Me(), not Base Me() because Me() int Derived2 is not overrided function

    return 0;
}