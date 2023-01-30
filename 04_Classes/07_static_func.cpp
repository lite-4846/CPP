// Static Function or Method !
// --> static function can only access other static function and static variables.
// -->

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
    static void showCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee :: count = 10; // Default value is 0.

int main()
{
    Employee luffy, zoro, sanji;
    luffy.setData();
    luffy.displayData();
    Employee::showCount();

    zoro.setData();
    zoro.displayData();
    Employee::showCount();

    sanji.setData();
    sanji.displayData();
    Employee::showCount();

    return 0;
}