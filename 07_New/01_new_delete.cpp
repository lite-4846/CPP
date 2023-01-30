// Revisiting Pointers: new and delete Keywords !
// Pointers with classes and objects.

#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    *ptr = 76;
    cout<<"The value of a is "<<*ptr<<endl;

    // "new" Operator 
    int *p = new int(52);
    cout<<"The value at address p is "<<*p<<endl;
    // We can also make float, char and array with this...

    float *p1 = new float(88.39);
    cout<<"The value at address p1 is "<<*p1<<endl;

    int *arr = new int[3];   
    arr[0] = 10;
    *(arr + 1) = 90;
    arr[2] = 80;

    // "delete" Operator
    delete [] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    return 0;
}