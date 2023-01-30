// Virtual Base Class !
// Code Example Demonstrating Virtual Base Class.....

#include <iostream>
using namespace std;

/*
Inheritance :

Student --> Test
Student --> Sports
Test --> Result
Sports --> Result

*/

class Student
{
protected:
    int roll_no;

public:
    void set_number(int n1)
    {
        roll_no = n1;
    }
    void print_number(void)
    {
        cout << "Your roll No. is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your Result is " << endl
             << "Maths : " << maths << endl
             << "Physics : " << physics << endl;
    }
};

class Sport : virtual public Student
{
protected:
    float score;

public:
    void set_score(float s1)
    {
        score = s1;
    }
    void print_score(void)
    {
        cout << "PT score : " << score << endl;
    }
};

class Result : public Test, public Sport
{
protected:
    float total;

public:
    void display_result(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your Total score is " << total << endl;
    }
};

int main()
{
    Result Robin;
    Robin.set_number(44);
    Robin.set_marks(99, 100);
    Robin.set_score(7);
    Robin.display_result();
    return 0;
}