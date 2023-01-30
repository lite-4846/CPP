// Union ! It is similar to structure but....
// uses only one data type in it;

#include<iostream>

using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};


int main()
{
    union money m1;
    m1.rice = 33;
    m1.car = 'd';

    cout<<m1.rice<<endl;

    // So the value of rice is overwritten by car cause you can only use 1 data type from union 
    // It helps in optimising program since its only taking 4 byte.
    // But if I had taken structure it would be taking 9 bytes.

    return 0;
}