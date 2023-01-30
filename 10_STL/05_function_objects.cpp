// Function Objects (Functors) In C++ STL!

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Funciton Object (Functor) :: Function wraped in a class so that it can be used as object
    int arr[] = {3, 99, 33, 68, 31, 4, 12};
    // sort(arr, arr+5);
    sort(arr, arr+7, greater<int>());
    for(int i=0; i<7; i++)
      cout<<arr[i]<<' ';

    return 0;
}

// Here ends our C++ course If I find something amazing then we will do it.