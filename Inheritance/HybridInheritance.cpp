#include <bits/stdc++.h>

using namespace std;

/**
 * Combination of multiple and heirarchical inheritance
*/

class Student{
    public:
    void read()
    {
        cout << "Student read book" << endl;
    }
};

class Male{
    public:void gender(){cout << "Gender male" << endl;}
};

class Female{
    public:void gender(){cout << "Gender female" << endl;}
};

// Boy inheri Student and Male this is multiple inheritance
class Boy: public Student, public Male
{
    public:
    Boy(){cout << "Boy" << endl;}
};

// GIrl inheri Student and Female this is multiple inheritance
class Girl: public Student, public Female
{
    public:
    Girl(){cout << "Girl" << endl;}
};

// Student inherit by Boy and Girl so this is heirarchical inheritance

using namespace std;

int main()
{
    Boy boy;
    boy.read();
    boy.gender();

    Girl girl;
    girl.read();
    return 0;
}