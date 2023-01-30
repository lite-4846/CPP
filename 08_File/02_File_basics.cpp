// File I/O in C++: Read/Write in the Same Program & Closing Files!

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Connecting our file with lout stream
    ofstream lout("01_sample_1.txt");

    // Creating the name string variable entered by the user
    string name;
    cout<<"Enter Your Name : ";
    cin>>name;

    lout<<"My name is " + name;

    // The function won't consider the words after white space
    // Like if you write your name as lite Juniour it will just consider lite

    lout.close();

    ifstream lin("01_sample_1.txt");
    string content;
    // lin>>content;
    getline(lin, content);

    cout<<"The content of this file is "<<content<<endl;

    lin.close();

    return 0;
}