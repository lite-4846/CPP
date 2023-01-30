// Writing our First C++ Template #64

#include <iostream>
using namespace std;

template <class T>
class vector {
    T * arr;
    int size;
    public :
        vector(int m){
            size = m;
            arr = new T[size];
        }
        void setData(T x, T y, T z){
            for (int i = 0; i < size; i++)
            {
                arr[0]= x;
                arr[1]= y;
                arr[2]= z;
            }
        }
        T docProduct(vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main()
{
    vector <float> v1(3);
    v1.setData(3.8, 1, 2.5);
    
    vector <float> v2(3);
    v2.setData(4.5, 3.8, 1);

    float a = v1.docProduct(v2);
    cout<<a<<endl;

    return 0;
}