// Function Overloading !

#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}

// Calculate the volume of cylinder
float volume(int r, int h){
    return (3.14 * r * r * h);
}

float volume(int l){       //  volume of cube .......  
    return (l*l*l);
}

float volume(int l, int b, int h){    //  volume of cuboid ....
    return (l*b*h);
}

int main()
{
    cout<<"The sum of 3 and 7 is "<<sum(3,7)<<endl;
    cout<<"The sum of 3, 3 and 5 is "<<sum(3,3,5)<<endl<<endl;
    
    // This is overloading. The compiler will detect difference in the same function with no. of arguments.
    
    cout<<"The volume of cylinder of radius 3 and height 4 is "<<volume(3,4)<<endl;
    cout<<"The volume of cube of length 4 is "<<volume(4)<<endl;
    cout<<"The volume of cuboid of length 3, breadth 8 and height 4 is "<<volume(3,8,4)<<endl;

    return 0;
}