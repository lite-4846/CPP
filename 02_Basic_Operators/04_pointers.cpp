// Pointers !

#include <iostream>

using namespace std;

int main()
{
    // What is a pointer ?
    // --> A pointer is a data types who stores the address of other datatypes.

    int a=3;
    int *b = &a;

    // &  -->  Address of Operator.
    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The address of a is : "<<b<<endl;

    // *  -->  Dereference Operator. 
    cout<<"The value at address b is : "<<*b<<endl;

    // Pointer to Pointer 
    int **c = &b;
    cout<<"The address of b is : "<<c<<endl;
    cout<<"The value at address of c is : "<<*c<<endl;
    cout<<"The value at address of (address(c)) is : "<<**c<<endl;

    return 0;
}