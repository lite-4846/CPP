// Defauly Arguments !

#include<iostream>
using namespace std;

// You can also use the constant argument to protect your content in that variable or string // ..............(4)

float moneyReceived(int money, float factor=1.05){
    return money*factor;
}

// Here! factor is default argument it can be overwritten like second one....   // ..............(3)

int main()
{
    int money = 100000;
    cout<<"For **VIP** : If the money is Rs "<<money<<endl<<
    ". You will receive Rs "<<moneyReceived(money)<<" at the end of the year."; //  ..............(1)

    // You can overwrite the value of default argument....                      //  ..............(2)
    cout<<"For **VIP** : If the money is Rs "<<money<<endl<<
    ". You will receive Rs "<<moneyReceived(money, 1.1)<<" at the end of the year.";

    return 0;
}