// If else-if else ladder !
// Switch Case !

#include<iostream>

using namespace std;

int main(){

    int age;
    cout<<"Enter your Age !"<<endl;
    cin>>age;

    // *********  Basic Structure Control : If else-if else ladder  *********  //

    if (age<18)
    {
        cout<<"You can not Join the Party!"<<endl;
    }
    else if (age==18)
    {
        cout<<"You are shan of the Party!"<<endl;
    }
    else{
        cout<<"You can enter the party and enjoy it !"<<endl;
    }

    // *********  Basic Structure Control : Switch case  *********  //

    switch (age)
    {
    case 2:
        cout<<"You are kid! You can not Join the Party!"<<endl;
        break;
    case 18:
        cout<<"You have to buy the kid pass!"<<endl;
        break;
    case 22:
        cout<<"You can Join the Party!"<<endl;
        break;
    
    default:
        break;
    }


    return 0;
}