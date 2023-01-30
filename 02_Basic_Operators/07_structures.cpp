//  Structures !  Same as in C.

#include <iostream>

using namespace std;

typedef struct employee
{
    int id;
    float salary;
    char favchar;
} emp;

int main()
{
    struct employee e1;
    e1.id = 74;
    e1.salary = 44.55;
    e1.favchar = 'a';

    cout<<e1.id<<endl;
    cout<<e1.salary<<endl;
    cout<<e1.favchar<<endl;

    emp e2;
    e2.id = 34;
    e2.salary = 44.25;
    e2.favchar = 'd';

    cout<<e2.id<<endl;
    cout<<e2.salary<<endl;
    cout<<e2.favchar<<endl;
    
    return 0;
}
