// Call by Reference in C++ !

#include <iostream>
using namespace std;

void swapReferenceVar(int &a, int &b)                                              //    ............ (2)
{
    int temp = a;
    a = b;
    b = temp;
}

// int & swapReferenceVar(int &a, int &b)                                                ............ (1)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }

int main()
{
    // For reference variable refer Chapter01 --> Varialbles.

    int a = 5, b = 6;

    cout << "The value of a is " << a << " And the value of b is " << b << endl;

    // swapReferenceVar(a, b) = 56;  // This is complicated but I got it ..                 ............ from equ(1)
    swapReferenceVar(a, b);                                                          //     ............ from equ(2)

    cout << "The value of a is " << a << " And the value of b is " << b << endl;

    return 0;
}