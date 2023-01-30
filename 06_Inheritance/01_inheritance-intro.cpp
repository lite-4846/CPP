// Inheritance Syntax & Visibility Mode!
// Concept of inheritance and more...

#include <iostream>
using namespace std;

// Base class

class StrawHat
{
public:
    int No;
    int age = 18;
    StrawHat() {}
    StrawHat(int n)
    {
        No = n;
    }
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

class SwordsMan : public StrawHat
{
    int SwordsStyle;

public:
    SwordsMan() {}
    SwordsMan(int n, int m)
    {
        No = n;
        SwordsStyle = m;
    }
    void show()
    {
        cout << "Your No. is " << No << " and You use " << SwordsStyle << " Swordstyle.";
    }
};

int main()
{
    StrawHat luffy(1), nami(3);
    cout << "Luffy is No. " << luffy.No << " and his age is " << luffy.age << endl;
    cout << "Nami is No. " << nami.No << " and his age is " << nami.age << endl;

    SwordsMan zoro(2, 3), brook(9, 1);
    cout << "Zoro is No. " << zoro.No << " and his age is " << zoro.age << endl;
    cout << "Brook is No. " << brook.No << " and his age is " << brook.age << endl;
    
    return 0;
}