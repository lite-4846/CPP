// Array !

#include<iostream>

using namespace std;

int main()
{
    int marks[] = {33, 44, 64, 44};  // You can write the size of array or compiler will do it for you.
    // But Not everytime.  

    int mathmarks[3];
    mathmarks[0] = 44;
    mathmarks[1] = 34;
    mathmarks[2] = 94;

    // cout<<"This are the mathmarks : "<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;

    // cout<<"This are the Marks : "<<endl;
    // You can change the value of array.
    marks[3] = 30;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // Using Loops

    for(int i=0; i<4; i++){
        cout<<"The value of marks["<<i<<"] is : "<<marks[i]<<endl;
    }

    return 0;
}