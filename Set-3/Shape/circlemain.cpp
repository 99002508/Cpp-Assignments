#include <iostream>
#include "triangle.h"
#include "polygon.h"
#include "shape.h"
#include <math.h>
#include "rectangle.h"
#include "shape.h"
#include "circle.h"
using namespace std;

Polygon::Polygon(){}
Polygon::Polygon(int x):m_sides(x){}
Triangle::Triangle(int x,int y, int z):m_a(x),m_b(y),m_c(z){}
double Triangle::area()
{
   double s,res;
   s=(m_a+m_b+m_c)/2;
   res=sqrt(s*(s-m_a)*(s-m_b)*(s-m_c));
   return(res);
}
double Triangle::circumference()
{
    return(m_a+m_b+m_c);
}
Rectangle::Rectangle(){}
Rectangle::Rectangle(int l, int b):m_length(l),m_breadth(b){}
double Rectangle:: area()
{
    return(m_length*m_breadth);
}
  double Rectangle::circumference()
  {
      return(m_length+m_breadth);
  }
Circle::Circle(){}
Circle::Circle(double r):m_radius(r){}
double Circle::area()
{
    return(3.14*m_radius*m_radius);
}
double Circle::circumference()
{
    return(3.14*m_radius*2);
}
//double Rectangle::area()
/*int main()
{
    Polygon *t;
    t=new Triangle(3,4,5);
    cout<<t->circumference()<<endl;


}*/
