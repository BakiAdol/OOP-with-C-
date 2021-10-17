#include <bits/stdc++.h>

using namespace std;

/**
 * all theree class(M416, AKM, UZI) inherit Gun class tha is heirarchical inheritance
*/

class Gun{
    public:
    Gun()
    {
        cout << "Gun" << endl;
    }
    void autoGun()
    {
        cout << "This is auto Gun" << endl;
    }
};

class AKM: public Gun
{
    public:
    AKM()
    {
        cout << "AKM" << endl;
    }
    void ammo()
    {
        cout << "AKM use 7.62mm ammo" << endl;
    }
};

class M416: public Gun
{
    public:
    M416()
    {
        cout << "M416" << endl;
    }
    void ammo()
    {
        cout << "M416 use 5.56mm ammo" << endl;
    }
};

class UZI: public Gun
{
    public:
    UZI()
    {
        cout << "UZI" << endl;
    }
    void ammo()
    {
        cout << "UZI use 9mm ammo" << endl;
    }
};

int main()
{
    M416 m416;
    m416.autoGun();
    
    Gun *gun;
    switch(1)
    {
        case 1:
            gun = new M416(); // all of thes assignment are called dynamic buinding
            break;
        case 2:
            gun = new AKM();
            break;
        default:
            gun = new UZI();
    }

    gun->autoGun();

    return 0;
}