// Static Data Members !
// --> In classes for every other object everything starts from fresh.
// --> So static variable is used to save data from other object like count.

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void displayData(void)
    {
        cout << "The id of the employee is " << id << " and the employee number is " << count << endl;
    }
};

int Employee ::count = 10; // Default value is 0.

int main()
{
    Employee luffy, zoro, sanji;
    luffy.setData();
    luffy.displayData();

    zoro.setData();
    zoro.displayData();

    sanji.setData();
    sanji.displayData();

    return 0;
}
