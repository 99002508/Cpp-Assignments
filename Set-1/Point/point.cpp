#include<iostream>
#include "point.h"
#include<cmath>

Point::distanceFromOrigin(Point p)
{
    return (sqrt(pow(p.m_x,2)+pow(p.m_y,2)));

}

Point:: quadrant(Point p)
{
    if(p.m_x>0 && p.m_y>0)
        return 0;
    if(p.m_x<0 && p.m_y>0)
        return 1;
    if(p.m_x<0 && p.m_y<0)
        return 2;
    if(p.m_x>0 && p.m_y<0)
        return 3;
}

Point::isOrigin(Point p)
{
    if(p.m_x==0 && p.m_y==0)
        return true;
    else
        return false;
}


Point::isOnXAxis(Point p)
{
    if(p.m_x==0)
        return true;
    else
        return false;

}


Point::isOnYAxis(Point p)
{
    if(p.m_y==0)
        return true;
    else
        return false;
}
