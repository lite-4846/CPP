// Types of Operator!

#include <iostream>

using namespace std;

int main()
{

    int a = 3, b = 5;

    // Mathematical Operators
    cout << "Following are Mathematical Operators is C++. \n";
    cout << endl;
    cout << "The value of a + b is : " << (a + b) << endl; // endl works as \n
    cout << "The value of a - b is : " << (a - b) << endl;
    cout << "The value of a * b is : " << (a * b) << endl;
    cout << "The value of a / b is : " << (a / b) << endl;
    cout << "The value of a % b is : " << (a % b) << endl;
    cout << "The value of a++ is : " << a++ << endl;
    cout << "The value of a-- is : " << a-- << endl;
    cout << "The value of ++a is : " << ++a << endl;
    cout << "The value of --a is : " << --a << endl;
    cout << endl;

    // Assignment Operator "="
    // int a= 3; b=4;

    // Comparison Operator!
    cout << "Following are Comparison Operators is C++. \n";
    cout << endl;
    cout << "The value of a == b is : " << (a == b) << endl;
    cout << "The value of a != b is : " << (a != b) << endl;
    cout << "The value of a < b is : " << (a < b) << endl;
    cout << "The value of a > b is : " << (a > b) << endl;
    cout << "The value of a <= b is : " << (a <= b) << endl;
    cout << "The value of a >= b is : " << (a >= b) << endl;
    cout << endl;

    // Logical Operator !
    cout << "Following are Comparison Operators is C++. \n";
    cout << endl;
    cout << "The value of ((a == b) && (a < b)) is : " << ((a == b) && (a < b)) << endl;
    cout << "The value of ((a != b) || (a < b)) is : " << ((a != b) || (a < b)) << endl;
    cout << "The value of !(a == b) is : " << !(a == b) << endl;
    cout << endl;

    return 0;
}