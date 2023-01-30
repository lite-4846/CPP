// Recursions & Recursive Functions !
// factorial and fibonacci :

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibo(int x){             // fibo equation :  nth = (n-1) + (n-2);
    if(x==1){                //   1,1,2,3,5,8...   fibonacci series..
        return 1;
    }
    if(x==2){
        return 1;
    }
    return fibo(x-1) + fibo(x-2);
}

int main()
{
    int a;
    cout << "Enter a number !" << endl;
    cin >> a;
    // cout<<"The factorial of "<<a<<" is "<<factorial(a)<<"."<<endl;

    cout << "The fubonacchi term "<<a<<" is "<<fibo(a)<<"."<<endl;

    return 0;
}