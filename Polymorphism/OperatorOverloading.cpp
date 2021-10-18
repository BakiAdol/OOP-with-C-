/**
 * Change the behaviour of operators(+,-,*,/,...) in only class or struct type
 * this concept is called compile time polymorphism/static binding/early binding
*/
#include <bits/stdc++.h>

using namespace std;

class Point
{
    public:
    int x, y;
    Point(int x=0,int y=0)
    {
        this->x=x;
        this->y=y;
    }
    Point operator +(const Point & obj) // add two points
    {
        return Point((this->x)+obj.x,(this->y)+obj.y);
    }
    Point operator -() // change sign of a point
    {
        return Point(-this->x,-this->y);
    }
    Point operator --() // decrease a point x and y by 1
    {
        return Point(--this->x,--this->y);
    }
};


int main()
{
    Point a(1,1),b(3,5);
    a = a + b;
    cout << a.x << " " << a.y << endl;
    --a;
    cout << a.x << " " << a.y << endl;
    Point c = -a;
    cout << c.x << " " << c.y << endl;
    return 0;
}