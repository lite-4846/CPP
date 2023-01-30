// C++ Objects Memory Allocation & using Arrays in Classes !

#include <iostream>
using namespace std;

class Shop
{
    int itemId[5];
    int itemPrice[5];
    int counter;

public:
    void initCounter(void) { counter = 0; };
    void setdata(void);
    void displayData(void);
};

void Shop ::setdata(void)
{
    cout << "Enter the Id of the item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the Price of the item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayData(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of the item Id No. " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setdata();
    dukaan.setdata();
    dukaan.setdata();
    dukaan.displayData();
    return 0;
}