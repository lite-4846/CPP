// Parameterized constructor!

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(int, int); // Constructor Declaration.

    void printData()
    {
        cout << "Your complex No. is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y) // This is parameterized constructor as it accepts custom parameters.
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call
    
    Complex c1(5, 4);
    c1.printData();

    // Explicit Call

    Complex c2 = Complex(3, 5);
    c2.printData();

    return 0;
}
