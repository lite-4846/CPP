// Simple Example on Friend Concept ! 

#include<iostream>
using namespace std;

class Y;  // We have to mention since in (i) the compiler wont be able to recognize class Y it will throw a error . 

class X{
    int data;
    public: 
        void setData(int n1){
            data = n1;
        }
        void displayData(){
            cout<<data<<endl;
        }
    friend void add(X o1, Y o2);
};

class Y{
    int data;
    public: 
        void setData(int n2){
            data = n2;
        }
        void displayData(){
            cout<<data<<endl;
        }
    friend void add(X o1, Y o2);
};

void add(X o1, Y o2){
    cout<<"The addition of data in X and Y is "<<(o1.data + o2.data);
}

int main()
{
    X a;
    Y b;

    a.setData(3);
    b.setData(9);

    add(a, b);


    return 0;
}   