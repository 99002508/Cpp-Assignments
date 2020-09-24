#ifndef __GPOINT_H
#define __GPOINT_H

enum Quadrant {
  Q1,//0
  Q2,//1
  Q3,//2
  Q4//3
};


template<typename T>
class Point {
  T m_x;
  T m_y;
  public:
	Point();
	Point(T,T);
	T xaxis();
	T yaxis();
	T distanceFromOrigin();
	Quadrant quadrant();
	void display();
};

#endif
