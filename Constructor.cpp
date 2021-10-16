
#include <bits/stdc++.h>

using namespace std;

class Name{
    // constructor : construct members of a class and initialize; call for create copy of a clcass
    // copy constructor : same as constructor but the thing is initialize previously created object
    // overloaded constructor : same sonstructor behave diffrent based on parameter
    private:
    string name;

    public:
    Name() // non paramiteraize constructor
    {
        this->name = "";
    }

    // Name(string name="No Name") // overloaded constructor
    // {
    //     this->name = name;
    // }

    Name(string name) // paramiterize constructor
    {
        this->name = name;
    }

    Name(Name & obj) // copy constructor
    {
        this->name = obj.name;
    }

    void printName()
    {
        cout << name << endl;
    }
};

int main()
{
    // Name name_0;
    // name_0.printName();
    Name name_1("Adol");
    Name name_2(name_1);
    name_1.printName();
    name_2.printName();
    return 0;
}