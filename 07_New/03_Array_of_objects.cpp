// Array of Objects Using Pointers!

#include <iostream>
using namespace std;

class shopItem
{
    int Id;
    float price;

public:
    void set_data(int p, float q)
    {
        Id = p;
        price = q;
    }
    void get_data(void)
    {
        cout << "The Id of the Item is " << Id << endl;
        cout << "The price of the Item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;

    int p, i;
    float q;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the Id and price of Item" << endl;
        cin >> p >> q;
        ptr->set_data(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item no. : " << i + 1 << endl;
        ptrTemp->get_data();
        ptrTemp++;
    }

    return 0;
}