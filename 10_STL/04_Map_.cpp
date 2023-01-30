// Map In C++ STL

#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array 
int main()
{
    map<string, int> mapMarks;
    mapMarks["Sukuna"] = 100;
    mapMarks["Gojou"] = 67;
    mapMarks["Itadori"] = 44;
    mapMarks["Fushigoro"] = 98;
    mapMarks.insert({{"Kugisaki", 92},{"Panda", 60}});
    map<string, int> :: iterator iter = mapMarks.begin();
    for ( iter; iter!=mapMarks.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
    cout<<"The size is "<<mapMarks.size()<<endl;
    cout<<"The max-size is "<<mapMarks.max_size()<<endl;
    cout<<"The empty's return value is "<<mapMarks.empty()<<endl;


    return 0;
}