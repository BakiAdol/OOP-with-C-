#include <bits/stdc++.h>

using namespace std;

/**
 * A derived class with two base classes and thes base class also derived classes of another base class 
*/

class Human
{
    public:
    void breathing(){cout << "Breathing" << endl;}
};

class Engineer: public virtual Human
{
    public:
    void eng(){cout << "Engineer" << endl;}
};

class Doctor: public virtual Human
{
    public:
    void dct(){cout << "Doctor" << endl;}
};

class MrX: public Engineer, public Doctor
{
    public:
    void x(){cout << "MrX" << endl;}
};

int main()
{
    MrX mrX;
    // mrX.breathing(); mrX contains [Human, Engineer, Human, Doctor and MrX] classes
    // Engineer and Doctor both class has breathing() function so there is an ambiguous, this problem is called dimond problem
    // so use virtual in Engineer and Doctor class

    // after using virtual in both classes
    // mrX contains [Human, Engineer and MrX]
    mrX.breathing();

    Engineer engineer;
    engineer.breathing();

    // this doctor contains[Human,Doctor]
    Doctor doctor = mrX;
    doctor.breathing();
    doctor.dct();
    //doctor.eng();
    //doctor.x();
    
    return 0;
}