// Pointers to Objects and Arrow Operator !

#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    void set_data(int n1, int n2)
    {
        real = n1;
        img = n2;
    }
    void get_data()
    {
        cout << "Your Complex No. is " << real << " + " << img << "i" << endl;
    }
};

int main()
{
    int a; 

    Complex c1;
    c1.set_data(4, 6);
    c1.get_data();

    // Making objects using Pointer..

    // Using Casual Way..
    Complex *ptr = &c1;
    (*ptr).set_data(5, 7);
    (*ptr).get_data();

    // Also like previos lesson
    Complex *ptr1 = new Complex;
    (*ptr1).set_data(9, 3);
    (*ptr1).get_data();

    //Also, simpler but exact same thing, using Arrow Operator
    Complex *ptr2 = new Complex;
    ptr2->set_data(8, 5);
    ptr2->get_data();

    // Array
    Complex *ptr3 = new Complex[3];
    ptr3->set_data(4, 6);
    (ptr3 + 1)->set_data(5, 6);
    (ptr3 + 2)->set_data(4, 7);
    ptr3->get_data();
    (ptr3 + 1)->get_data();
    (ptr3 + 2)->get_data();

    cin>>a;
    return 0;
}