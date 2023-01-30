// Virtual Functions!
// It is to overwrite the function shown before....

#include <iostream>
using namespace std;

class Base
{
public:
    int var_base = 1;
    virtual void display()  // Now this function won't be prefered. Because of virtual Keyword;
    {
        cout << "The value of var_base in base class is " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "The value of var_base in derived class is " << var_base << endl;
        cout << "The value of var_derived in derived class is " << var_derived << endl;
    }
};

int main()
{
    Base * base_class_pointer;
    Base obj_base;
    Derived obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}
