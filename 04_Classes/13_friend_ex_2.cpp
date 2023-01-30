// Another Example on Friend concept but Complex one!
// Swap data from different classes...

#include <iostream>
using namespace std;

class zoro;

class luffy
{
    int age;

public:
    void setData(int n1)
    {
        age = n1;
    }
    void displayData()
    {
        cout << age << endl;
    }
    friend void swapAge(luffy &, zoro &);
};

// Almonst got me good for this you know !

class zoro
{
    int age;

public:
    void setData(int n1)
    {
        age = n1;
    }
    void displayData()
    {
        cout << age << endl;
    }
    friend void swapAge(luffy &, zoro &);
};

void swapAge(luffy &m1, zoro &s1)
{
    int temp = m1.age;
    m1.age = s1.age;
    s1.age = temp;
}

int main()
{
    luffy m1;
    zoro s1;

    m1.setData(19);
    s1.setData(21);

    swapAge(m1, s1);
    cout << "After the swap the age of luffy is ";
    m1.displayData();
    cout << "After the swap the age of zoro is ";
    s1.displayData();
    return 0;
}
