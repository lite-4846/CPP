// Passing Objects as Function Arguments !
// Writing a Program to sum to complex number...

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int r1, int r2)
    {
        a = r1;
        b = r2;
    }
    void sumComplex(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void printComplex()
    {
        cout << "The complex no. is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printComplex();

    c2.setData(3, 4);
    c2.printComplex();

    c3.sumComplex(c1, c2);
    c3.printComplex();
    return 0;
}