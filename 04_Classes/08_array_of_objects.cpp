// Array of Objects !

#include <iostream>
using namespace std;

class Employee
{
    int Id;
    int salary;

public:
    void setId(void)
    {
        salary = 12222;
        cout << "Enter the id of Employee" << endl;
        cin >> Id;
    }
    void getId(void)
    {
        cout << "The id of Employee is " << Id << endl;
    }
};

int main()
{
    Employee fb[5];
    for(int i=0; i<5; i++){
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}