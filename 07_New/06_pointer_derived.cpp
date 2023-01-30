// Pointers to Derived Classes !

#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
    {
        cout << "The value of var_base in base class is " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "The value of var_base in derived class is " << var_base << endl;
        cout << "The value of var_derived in derived class is " << var_derived << endl;
    }
};

int main()
{
    Base obj_base;
    Derived obj_derived;
    Base *base_class_pointer;
    Derived *derived_class_pointer;

    base_class_pointer = &obj_derived;
    base_class_pointer->var_base = 46;

    // base_class_pointer->var_derived = 47;   -->  Will throw an error since the pointer is of Base class.
    base_class_pointer->display();

    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 93;
    derived_class_pointer->var_derived = 333;
    derived_class_pointer->display();

    return 0;
}