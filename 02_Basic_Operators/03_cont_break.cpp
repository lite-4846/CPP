// Continue and Break !

#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 7; i++)
    {
        cout << i << endl;
        if (i == 4)
        {
            break;
        }
    }
    for (int j = 0; j < 5; j++)
    {
        if (j == 3)
        {
            continue;
        }
        cout << j << endl;
    }
    return 0;
}