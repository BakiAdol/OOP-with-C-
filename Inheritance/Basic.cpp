#include <bits/stdc++.h>

using namespace std;

/**
 * Inheritance : inherit the properties of Base class into Derived class
 * There are many types of inheritance
 * 1. Single : A derived calss with only one base class
 * 2. Multilevel : A derived class with a base class this base class maybe a derived class of another base class
 * 3. Multiple : A derived class with one more base class
 * 4. Hirarchical : Many derived call with one base class
 * 5. Hybrid : combination of multiple and hirarchical, a derived class has many base class and this drived class is also a base class of many derived class
 * 6. Multipach : a base class has many derived class and these dereived classes also base class of another derived class
 * 
 * Modes of inheritance:
 * 1. public : can be access from anywhere
 * 2. protected : access base class and derived class
 * 3. private : accesalbe only current class
 * 
*/

// Inheritance modes
class Base{
    public: int x;
    protected: int y;
    private : int z;
};

class Derived_Public: public Base
{
    /**
     * get public: int x; as public: int x;
     * get protected: int y; as protected: int y;
     * cat access private : int z;
    */
};

class Derived_Protected: protected Base
{
    /**
     * get public: int x; as protected: int x;
     * get protected: int y; as protected: int y;
     * cat access private : int z;
    */
};

class Derived_Private: private Base
{
    /**
     * get public: int x; as private: int x;
     * get protected: int y; as private: int y;
     * cat access private : int z;
    */
};

// basic inheritance
class Animal{
    public:
    void eat(string s)
    {
        cout << s << " eat" << endl; 
    }
};
class Cat: public Animal
{
    public:
    void run()
    {
        cout << "Cat running..." << endl; 
    }
};

class Bird: public Animal
{
    public:
    void fly()
    {
        cout << "Bird Flying..." << endl; 
    }
};

int main()
{
    Cat cat;
    cat.eat("Cat");
    cat.run();

    Bird bird;
    bird.eat("Bird");
    bird.fly();
    
    return 0;
}