// While loop !
// For loop !
// Do while loop;

#include<iostream>

using namespace std;

int main(){

    // Its the same as the loops in C. So no need to worry.
    int i=0;

    //  ***********  For loop :  ***********  //

    for (int i = 0; i < 7; i++)
    {
        cout<<i<<endl;
    }
    
    //  ***********  While loop :  ***********  //

    while (i<5)
    {
        cout<<i<<endl;
        i++;
    }

    //  ***********  Do While loop :  ***********  //

    do
    {
        cout<<i<<endl;
    } while (i<5);
    
    
    return 0;
}