// Call by Value & Call by Reference !

#include<iostream>

using namespace std;

// This will not work !

// Call by Value -->
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference Using Pointers-->
void right_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 3, b = 7;
    cout<<"The value of a is "<<a<<" And the value of b is "<<b<<endl;

    swap(a, b);          // This wont work cause it just sending the copy of a and b it wont change them here.
    right_swap(&a, &b);  // This will swap a and b using pointers

    cout<<"The value of a is "<<a<<" And the value of b is "<<b<<endl;

    return 0;
}