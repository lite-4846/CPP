// Intro to Constructors!

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    // Creating A Constructor.
    // Constructor is special member function with the same name as Class.
    // It is used to intialize the objects of its class.
    // It is automatically invoked when an object is created.

    Complex(void); // Constructor Declaration.

    void printData()
    {
        cout << "Your complex No. is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void) // This is default constructor as it accepts no parameters.
{
    a = 0;
    b = 0;
}

int main()
{
    Complex c1;
    c1.printData();
    return 0;
}

/* Characteristics of Constructor

1. It should be declared in the public section of the Class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their addresses.

*/