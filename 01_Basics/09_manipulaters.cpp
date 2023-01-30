// Manipulators!
// Constants!
// Operator Presendence!

#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    // int a = 33;                          
    // cout<<"The value of a was : "<<a;
    // a = 55;
    // cout<<"The value of a is : "<<a;
    // In this way the value of a can be changed. But...

    const int x = 33;
    cout<<"The value of x is : "<<x<<endl;
    cout<<endl;
    // a = 43; // This will show error since a is constant.

    // *********  Manipulators in C++  *********  //

    int a = 3, b = 56, c = 4432; 
    cout<<"The value of a without setw is : "<<a<<endl;
    cout<<"The value of b without setw is : "<<b<<endl;
    cout<<"The value of c without setw is : "<<c<<endl;

    cout<<"The value of a is : "<<setw(4)<<a<<endl;
    cout<<"The value of b is : "<<setw(4)<<b<<endl;
    cout<<"The value of c is : "<<setw(4)<<c<<endl;

    // *********  Operator Presendence  ********* // 
    
    // We have learned this in C. Its the same as that.
    // You can refere a website called "C++ Reference"
    // That's it!
    
    return 0;
}