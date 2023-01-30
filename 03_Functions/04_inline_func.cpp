// Inline function !
// This is used to make function fast!

#include<iostream>
using namespace std;

inline int product(int a, int b){
    // Not recomended to use below lines with inline function.
    // static int c = 0;   --> This executes only ones.
    // c = c + 1;          --> Next time this function will run, the value of c retained.
    return a*b;
}

int main()
{
    int a, b;
    
    cout<<"Enter the value for a and b :"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;


    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;

    // Now! If I do this step  👆  several times then it will take some time to execute.
    // Cause it has go through the same process of "product and return" several times.
    // Here comes the inline function it replaces the "code in product function" with "function call". 

    return 0;
}