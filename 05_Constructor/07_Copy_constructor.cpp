// << ---------Copy Constructor-------- >> !
// There is copy constructor provided by the class if we dont give em.

#include <iostream>
using namespace std;

class Normal
{
    int a;

public:
    Normal()
    {
        a = 0;
    }

    Normal(int x)
    {
        a = x;
    }

    // Normal(Normal &obj)
    // {
    //     a = obj.a;
    // }

    void display()
    {
        cout << "The value is " << a << endl;
    }
};

int main()
{
    Normal x, y, z(37), z2;
    x.display();
    y.display();
    z.display();

    Normal z1(z);   // Copy Constructor invoked.

    z1.display();  // z1 resembles to z now!

    z2 = z;        //  Copy Constructor wont work here cause the object is already made so.... 

    Normal z3 = z;  // Copy Constructor will invoke Here!.



    return 0;
}