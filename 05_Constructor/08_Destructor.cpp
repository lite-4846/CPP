// Destructor ! Used to destroy the object from memory.
// will be called initially without calling.

#include <iostream>
using namespace std;


int count = 0;

class Num
{
private:
    

public:
    Num()
    {
        count++;
        cout << "This is the time a constructor is called for object Number " << count << endl;
    };
    ~Num(){
        cout << "This is the time a destructor is called for object Number " << count << endl;
        count--;
    };
};

int main()
{
    cout<<"Entering into main function"<<endl;
    cout<<"Calling first object "<<endl;
    Num n1;
    {
        cout<<"Entering into block function"<<endl;
        cout<<"Calling another two objects"<<endl;
        Num n2, n3;
        cout<<"Exiting from block function"<<endl;
    }
    cout<<"Back to main function"<<endl;
    return 0;
}
