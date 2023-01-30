// List in C++ 
// It mostly same as vector but the insertion and deletion of element is faster than vector but random access is slow

#include <iostream>
#include <list>
using namespace std;

void display(list<int> lite){
    list<int> :: iterator it = lite.begin();
    for ( it; it != lite.end(); it++)
    {
        cout<<*it<<' ';
    }
    cout<<endl;
}

int main()
{
    list<int> list1; // List of 0 elements
    list1.push_back(50);
    list1.push_back(51);
    list1.push_back(52);
    list1.push_back(53);
    list1.push_back(55);
    display(list1);
    // list1.pop_back();
    // list1.pop_back();
    // list1.pop_front();

    // Sorting the list
    list1.sort();
    display(list1);
    list1.remove(50);


    list<int> list2(3);  // Empty list of size 3
    list<int> :: iterator iter = list2.begin();
    *iter = 18;
    cout<<*iter<<' ';
    *iter = 46;
    cout<<*iter<<' ';
    *iter = 4;
    cout<<*iter<<' ';
    
    // Merging 
    list1.merge(list2);
    display(list1);

    // Reverse
    list1.reverse();
    display(list1);


    return 0;
}