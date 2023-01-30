// Variables Part 02! 

#include<iostream>

using namespace std;
int c = 33;
int main(){

    // ************  Build in Datatypes.  ***************

    int a, b, c;
    // cout<<"Enter the value for a : "<<endl;
    // cin>>a;
    // cout<<"Enter the value for b : "<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum of a and b is "<<c<<endl;
    // cout<<"The value of global c is "<<::c<<endl;  // Writing global value though varible value is present.
    // cout<<endl;

    // ************  Float, double and long double Literals  ************

    float x = 33.4;  // Normally the value 33.4 is considered as double 
    float y = 33.4f; // But you can make it float by applying f after the value as shown.
    long double z = 33.4L; //

    // cout<<"The value of 33.4 is : "<<sizeof(33.4)<<endl;
    // cout<<"The value of 33.4 is : "<<sizeof(33.4f)<<endl;
    // cout<<"The value of 33.4 is : "<<sizeof(33.4F)<<endl;
    // cout<<"The value of 33.4 is : "<<sizeof(33.4l)<<endl;
    // cout<<"The value of 33.4 is : "<<sizeof(33.4L)<<endl;
    // cout<<"The value of x, y and z are : "<<x<<" "<<y<<" "<<z;

    // ************  Reference Variable  ************ 
    
    float m = 5;
    float &n = m;
    cout<<m<<endl;
    cout<<n<<endl;

    return 0;
}