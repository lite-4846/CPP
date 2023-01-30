// C++ Function Templates & Function Templates with Parameters!

#include <iostream>
using namespace std;

// float avg1(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float avg2(float a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float avg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}


int main()
{
    // float a = avg1(4, 6);
    // printf("The value of a is %.2f\n", a);
    // float b = avg2(5.5, 5.2);
    // cout<<"The value of b is "<<b<<endl;

    float a = avg(4, 6);
    printf("The value of a is %.2f\n", a);
    float b = avg(5.5, 5.2);
    cout<<"The value of b is "<<b<<endl;

    int x, y;
    x = 3;
    y = 4;
    swapp(x, y);
    cout<<x<<endl<<y;
    return 0;
}