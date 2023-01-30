// More about varialbes! 
// Global varialbes

#include <iostream>

using namespace std;

int glo = 56;

int main()
{
    int glo = 66;
    int x = 57;
    int y = 33;
    // You can also write it like this : int x=57; y=33;

    cout << "This is varialbes! The value of x is " << x << ". The value of y is " << y;
    cout << glo;
    // glo will be 66 as local variable has more precidence that global;
    return 0;
}