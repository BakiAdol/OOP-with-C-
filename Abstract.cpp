#include <bits/stdc++.h>

using namespace std;

/**
 * Hey dude why i am showing you my implementation
 * I give you the oppurtunities to use my functionalities but it doesn't mean that i give you my implementaton
 * If a class contains at least one pure virtual function then it's abstruct class
 * Abstruct class give you somethin that you can use your ways
*/

class Shape{ // this is an abstruct class;
    protected:
    double width,height;
    virtual double area()=0;
    public:
    void setWidth(double w){width=w;}
    void setHeight(double h){height=h;}
};

// use Shape as and interface
class Rectangle: public Shape{
    public:
    double area()
    {
        return width*height;
    }
};

class Triangle: public Shape{
    public:
    double area()
    {
        return width*height/2;
    }
};

int main()
{
    // Shape s; // impposible to create object of a abstruct clas
    
    Rectangle r;
    r.setWidth(3);
    r.setHeight(5);
    cout << r.area() << endl;

    Triangle t;
    t.setWidth(3);
    t.setHeight(7);
    cout << t.area() << endl;

    return 0;
}
