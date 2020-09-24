#include<iostream>
#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

using namespace std;
enum quadran{first_Q,second_Q,third_Q,fourth_Q};
class Point
{
private:
    int m_x;
    int m_y;

public:


    Point():
        m_x{0}, m_y{0} {}

    Point(int x,int y):
        m_x{x}, m_y{y} {}

    Point(const Point &a):
        m_x{a.m_x}, m_y{a.m_y} {}

    int distanceFromOrigin(Point );

 int quadrant(Point );

   int isOrigin(Point );


   int isOnXAxis(Point );


  int isOnYAxis(Point );


    void display()
    {
        cout<<"x="<<m_x<<endl;
        cout<<"y="<<m_y<<endl;
    }

};


#endif // POINT_H_INCLUDED
