#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
    Student()
    {
        cout << "Student" << endl;
    }
    void read()
    {
        cout << "Student read book" << endl;
    }
};
class ProblemSolver{
    public:
    string name;
    int rating;
    ProblemSolver()
    {
        cout << "ProblemSolver" << endl;
    }
    // initialize name and rating, here name and rating is class member and {name}, {rating} is parameter received value
    ProblemSolver(string name, int rating):name{name},rating{rating}
    {
        cout << name << " is a ProblemSolver and rating is "<< rating << endl;
    }
    void read()
    {
        cout << "ProblemSolver read book" << endl;
    }
};

class Adol: public Student, public ProblemSolver
{
    public:
    Adol(string name, int rating):ProblemSolver(name,rating)
    {
       
       cout << "I am Adol" << endl;
    }
    void game()
    {
        cout << "I like to play computer game" << endl;
    }
};

int main()
{
    // call this class and it firstly call Student auto consstructor because first in extend place
    // then it called ProblemSolver and here fixed parametarized constructor and finaly call Adol constructor
    Adol adol("Adol",100);

    // adol.read(); // heare two Base class contains same function read() so memeber read is ambiguous
    
    // to solve ambiguous problem first approach is
    adol.Student::read(); // it's called Studnet class read()
    adol.ProblemSolver::read(); // it's called ProblemSolver class read() 

    // second approach casting
    Student student = adol; // this student contains accessable member of Student
    student.read();
    
    // third approach static casting
    static_cast<ProblemSolver>(adol).read();
    
    adol.game();

    return 0;
}