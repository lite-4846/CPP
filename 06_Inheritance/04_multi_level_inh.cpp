// Multilevel Inheritance Deep Dive with Code Example!

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void student ::set_roll_number(int r1)
{
    roll_number = r1;
}

void student ::get_roll_number()
{
    cout << "Your Roll No. is " << roll_number << endl;
}

class exam : public student
{
protected:
    int maths;
    int physics;

public:
    void set_marks(float m1, float p1);
    void get_marks();
};

void exam ::set_marks(float m1, float p1)
{
    maths = m1;
    physics = p1;
}

void exam ::get_marks()
{
    cout << "Your marks in maths are " << maths << endl;
    cout << "Your marks in physics are " << physics << endl;
}

class result : public exam
{
protected:
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your Overall Percentage is " << (maths + physics) / 2 << "%." << endl;
    }
};

int main()
{
    /*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
    */

    result luffy;
    luffy.set_roll_number(19);
    luffy.set_marks(12, 46);
    luffy.display();
    return 0;
}