// Code Example: Constructors in Derived Class!

#include <iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 constructor is called"<<endl;
        }
        void print_data1(){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 constructor is called"<<endl;
        }
        void print_data2(){
            cout<<"The value of data1 is "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2{
    int der1, der2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            der1 = c;
            der2 = d;
            cout<<"Derived constructor is called."<<endl;
        }
        void print_der(){
            cout<<"The value of der1 and der2 is "<<der1<<" and "<<der2<<endl;
        }
};

int main()
{
    Derived Raabta(6, 96, 23, 3);
    Raabta.print_data1();
    Raabta.print_data2();
    Raabta.print_der();
    return 0;
}