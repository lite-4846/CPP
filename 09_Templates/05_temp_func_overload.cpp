// Member Function Templates & Overloading Template Functions!

#include <iostream>
using namespace std;

template <class T>
class Chopper
{
    T a;
public:
    Chopper(T a)
    {
        this->a = a;
    }
    void display();
};

template <class T>
void Chopper<T> :: display(){
    cout<<"The value of a is "<<a<<endl;
}

void func(int a){
    cout<<"a with normal : "<<a<<endl;
}

template <class T1>
void func(T1 a){
    cout<<"a with templatelized  : "<<a<<endl;
}

int main()
{
    Chopper <float> tony(4.5);
    tony.display();

    // Now if we call func function like below then....
    func(1); // The exact one will be called not the template one

    // This solves the ambiguity.
    return 0;
}