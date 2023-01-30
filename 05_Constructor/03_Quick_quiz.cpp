// Write a program to calculate the distance between 2 point objects.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void showPoint()
    {
        cout << "The Point is (" << x << ", " << y << ")"<<endl;
    }
    friend float PointsDiff(Point, Point);
};

float PointsDiff(Point p1, Point p2)
{
    int d;
    float r;
    d = (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
    r = sqrt(d);
    return r;
}

int main()
{
    Point p1(5, 3);
    p1.showPoint();
    Point p2(8, 6);
    p2.showPoint();

    float d = PointsDiff(p1, p2);
    cout<<"The Difference between p1 and p2 is "<<d;


    return 0;
}