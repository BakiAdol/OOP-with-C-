#include <bits/stdc++.h>

using namespace std;

/*
* There a derived and a base class and this base class also a derived call of another base class
*/

class ProgrammingLanguage{
    public:
    void print(string s)
    {
        cout << s << " is a programming language" << endl;
    }
};

class JavaScript : public ProgrammingLanguage
{
    // get print function from ProgrammingLanguage class
    public:
    void forloop(string s)
    {
        cout << s << " has for  loop" << endl;        
    }
};

class CPP : public JavaScript{
    // get print function from JavaScript class
    // get forloop function from JavaScript class
    public:
    void stl()
    {
        cout << "C++ has STL" << endl;
    }
};


int main()
{
    JavaScript js;
    js.print("JavaScript");
    js.forloop("JavaScript");

    CPP cpp;
    cpp.print("C++");
    cpp.forloop("C++");
    cpp.stl();

    return 0;
}