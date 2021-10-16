#include <bits/stdc++.h>

using namespace std;

class Animal{
    public:
    void leg()
    {
        cout << "Animal(some) has Four legs" << endl;
    }

    // this is pure virtual function and make this class abstruct
    virtual void eat() = 0;
};

// you can also define the defination of pure virtual function
void Animal::eat()
{
    cout << "Each animal eat" << endl;
}

class Cat:public Animal{
    public:
    // override pure virtual function eat
    void eat()
    {
        cout << "Cat Eat Non-veg" << endl;
    }
};

class Cow:public Animal{
    public:
    // override pure virtual function eat
    void eat()
    {
        Animal::eat(); // call Abstruct call pure virtual function that function has a body also
        cout << "Cow Eat Veg" << endl;
    }
};

int main()
{
    Cat c;
    c.eat(); // call overrdie pure function eat that define in Cat class
    c.leg(); // call parent Animal class leg() function by inheritance

    Cow cow;
    cow.eat(); // call overrdie pure function eat that define in Cow class
    cow.leg(); // call parent Animal class leg() function by inheritance

    // Animal a; // you can't create object of a abstruct class
    // You can point or refer Derived class object from Base class
    Animal *a = new Cow();
    a->eat();

    return 0;
}