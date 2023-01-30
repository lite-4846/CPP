// File I/O in C++: open() and eof() functions!

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
    ofstream zout;
    zout.open("01_sample_1.txt");
    zout<<endl<<"Not gonna lie but he got me there..."<<endl
        <<"They had us in the first half ..."<<endl
        <<"Dayona...";
    zout.close();

    string st;
    ifstream zin;
    zin.open("01_sample_1.txt");
    // zin>>st;    
    // cout<<st<<endl;

    while(zin.eof() == 0){
        getline(zin, st);
        cout<<st<<endl;
    }
    zin.close();
    
    return 0;
}