/**
 * function overriding works in diffrent scope that means class must be inherited
 * function overloading does't require diffrent scope 
 * in function overloading function signature must be same
 * in function overriding function signature must diffrent
 * 
*/
#include <bits/stdc++.h>

using namespace std;

class A{
    public:
    A(){}
    void print(string name)
    {
        cout << "From A: " << name << endl;
    }
};

class B:public A{
    public:
    B(){}
    // overriding print function
    void print(string name)
    {
        // A::print(name); // can call print() from A by this way
        cout << "From B: " << name << endl;
    }

    void sum(int a, int b, int c)
    {
        cout << "Theree parameter sum: " << a+b+c << endl;
    }
    // overloading sum function
    void sum(int a, int b)
    {
        cout << "Two parameter sum: " << a+b << endl;
    }
};

int main()
{
    A a;
    a.print("Adol");
    B b;
    b.print("adol");
    
    b.sum(5,6);
    b.sum(7,8,9);

    return 0;
}