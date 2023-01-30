// Vector In C++ STL !

#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this Vector :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1; // 0 lenght integer vector.

    int size, element;
    // cout<<"Enter the No. of element You want"<<endl;
    // cin>>size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter element no. "<<i+1<<" : ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }

    // vec1.pop_back(); // This will remove last elment

    // display(vec1);
    // vector <int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 5, 8);
    // display(vec1);

    vector<char> vec2(5, 'c'); // 5-element character vector.
    display(vec2);

    vector<char> vec3(vec2); // 5-element character vector from vec2
    display(vec3);

    vector<int> vec4(7, 9); // 7-element vector of 9s.
    display(vec4);
    cout << vec4.size();

    cout << "Will it be more fun or not";

    return 0;
}