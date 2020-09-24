#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#include "polygon.h"

class Rectangle : public Polygon {

private:
  int  m_length;
  int  m_breadth;

public:
    Rectangle();
	Rectangle(int l,int b);
	double area();
	double circumference();
};

#endif
