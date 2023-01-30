// Exercise!

#include <iostream>
#include <math.h>
using namespace std;

class Simple_Calculator
{
protected:
    int a, b;

public:
    void two_num(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void add()
    {
        cout << "The Addition of two numbers is " << a + b << endl;
    }
    void sub()
    {
        cout << "The Subtraction of two numbers is " << a - b << endl;
    }
    void mul()
    {
        cout << "The Multiplication of two numbers is " << a * b << endl;
    }
    void div()
    {
        cout << "The Division of two numbers is " << a / b << endl;
    }
};

class Scientific_Calculator
{
protected:
    int a, b;

public:
    void two_num(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void avg()
    {
        cout << "The Average of two numbers is " << (a + b) / 2 << endl;
    }
    void sine()
    {
        cout << "The sin of first number is " << sin(a) << "and the sin of second number is " << sin(b) << endl;
    }
    void cosine()
    {
        cout << "The cos of first number is " << cos(a) << "and the cos of second number is " << cos(b) << endl;
    }
    void log_num()
    {
        cout << "The log of first number is " << log(a) << "and the log of second number is " << log(b) << endl;
    }
};

class HybridCaluculator : public Simple_Calculator, public Scientific_Calculator
{
    int a, b;

public:
    void two_num(int n1, int n2)
    {
        Simple_Calculator ::two_num(n1, n2);
        Scientific_Calculator :: two_num(n1, n2);
    }
};

int main()
{
    HybridCaluculator h1;
    h1.two_num(4, 6);
    h1.add();
    h1.avg();
    return 0;
}