// Nesting of Member Functions !

#include <iostream>
#include <string>
using namespace std;

class binary
{
    // Imp Note : In class all the members are private by default.
// private :
    string s;
    void chk_bin();

public:
    void read();
 // void chk_bin();
    void reverse();
    void display();
};

void binary :: read(){
    cout<<"Enter a Binary number"<<endl;
    cin>>s;
    chk_bin();  // This is nesting of fuction we dont have write it ourself it will be called when read will be called!
}

void binary :: chk_bin(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary Number"<<endl;
            exit(0);
        }
    }
}

void binary :: reverse(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }        
    }   
}

void binary :: display(){
    cout<<"Displaying your number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);  
    } 
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
 // b.chk_bin();  --> if the function is private it cant be used in main function.
    b.display();
    b.reverse();
    b.display();
    return 0;
}