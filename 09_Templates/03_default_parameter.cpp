// C++ Templates: Class Templates with Default Parameters!

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Nami
{
    T1 a;
    T2 b;
    T3 c;
public:
    Nami(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    display(){
        cout<<endl<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};

int main()
{
    Nami <> berry(3, 5.5, 'a');
    berry.display();

    Nami <int, char, char> dollar(5, 'l', '4');
    dollar.display();

    return 0;
}