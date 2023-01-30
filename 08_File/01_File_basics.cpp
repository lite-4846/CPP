// File I/O in C++: Reading and Writing Files!

#include <iostream>
#include <fstream>

/*
These are some useful classes for working with files in C++ :

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

Inorder to work with files in C++, you will have to open it. Primarily there are two way to open a file :
  1. Using Constructor
  2. Using member function open() of the class
*/

using namespace std;

int main()
{
    string st = "Bogus Code";
    string st2;

    // Opening files using constructor and writing it.
    ofstream out("01_sample_1.txt"); // write operation
    out<<st;

    // Opening files using constructor and reading it.
    ifstream in("01_sample_2.txt"); // read operation
    // in>>st2;
    getline(in, st2);

    cout<<st2<<endl;

    return 0;
}