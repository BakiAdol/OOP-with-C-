#include <bits/stdc++.h>

using namespace std;

/**
 * function overloading is compile time polymorphism/static binding/early binding
 * function name must be same and parameter diffrent then those function are diffrent
 * you can't distinguise functon based on return type
*/

class Maximum{
    public:
    int Max(int num1, int num2)
    {
        return max(num1,num2);
    }
    int Max(int num1, int num2, int num3)
    {
        return max(num1,max(num2,num3));
    }
};
int main()
{
    Maximum m;
    cout << m.Max(5,6) << endl;
    cout << m.Max(9,4,7) << endl; 
    return 0;
}