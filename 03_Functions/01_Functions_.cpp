// Functions & Function Prototypes !

#include <iostream>
using namespace std;

int sum(int a, int b); // --> Acceptable.
// int sum(int a, b);     --> Unacceptable.
// int sum(int, int)l     --> Acceptable

void g();
// void g(void);          --> Acceptable

int main()
{
    int num1, num2;
    // num1 and num2 are actual Parameters.

    cout << "Enter first Number : " << endl;
    cin >> num1;
    cout << "Enter second Number : " << endl;
    cin >> num2;
    cout << "The sum is : " << sum(num1, num2) << endl;
    g();
    return 0;
}

int sum(int a, int b)
{
    // Formal parameters a and b are taking values from actual parameters num1 and num2.
    int c = a + b;
    return c;
}

void g()
{
    cout << "That's it!";
}