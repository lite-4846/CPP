// C++ Templates: Templates with Multiple Parameters!

#include <iostream>
using namespace std;

template <class T1, class T2>
class Myclass {
    // int data1;
    // char data2;
    T1 data1;
    T2 data2;
    public:
        void setData(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void getData(){
            cout<<this->data1<<endl<<this->data2;
        }
};


int main()
{
    Myclass <int, char> obj;
    obj.setData(4,'g');
    obj.getData();

    return 0;
}