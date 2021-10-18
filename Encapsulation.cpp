#include <bits/stdc++.h>

using namespace std;

/**
 * Binding togather the data and function that manipulates those data
 * Here Youtuber is an example of encapsulation
*/
class Youtuber{
    private:
    string chanelName;
    int subscribers;

    public:
    Youtuber(string chanelName):chanelName{chanelName},subscribers{0}
    {}

    void subscribe()
    {
        subscribers++;
    }
    void unsubscribe()
    {
        subscribers=max(0,subscribers-1);
    }
    int getSubscribers()
    {
        return subscribers;
    }

    void changeChanelName(string newName)
    {
        chanelName=newName;
    }
    string getChanelName()
    {
        return chanelName;
    }
};

int main()
{
    Youtuber programmingChanel("Programming Chanel");
    programmingChanel.subscribe();
    programmingChanel.unsubscribe();
    programmingChanel.unsubscribe();
    programmingChanel.subscribe();
    programmingChanel.subscribe();
    cout << "Chanel Name : " << programmingChanel.getChanelName() << endl;
    cout << "Subscribes: " << programmingChanel.getSubscribers() << endl;
    return 0;
}