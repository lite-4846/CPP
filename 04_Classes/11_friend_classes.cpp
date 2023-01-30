// Friend Classes & Member Friend Functions !

#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex, Complex);
    int sumImgComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class Calculator;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printData()
    {
        cout << "Your complex no. is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}

int Calculator ::sumImgComplex(Complex o1, Complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    Complex c1, c2, sum;
    c1.setData(1, 5);
    c1.printData();
    c2.setData(6, 8);
    c2.printData();
    Calculator calc;
    int resR = calc.sumRealComplex(c1, c2);
    cout << "The sum of Real part of c1 and c2 is " << resR << endl;
    int resI = calc.sumImgComplex(c1, c2);
    cout << "The sum of Imginary part of c1 and c2 is " << resI << endl;
    return 0;
}