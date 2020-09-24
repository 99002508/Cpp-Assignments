#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "shape.h"

class Circle : public IShape {
  
	private:
		double m_radius;

	public:
		Circle();
		Circle(double r);
		double area();
		double circumference();
};

#endif
