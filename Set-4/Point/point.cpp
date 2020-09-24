#include"point.h"
#include<iostream>
#include<math.h>

using namespace std;

template<typename T>
Point<T>::Point():m_x(0),m_y(0){}//Default constructor invoked

template<typename T>
Point<T>::Point(T x,T y):m_x(x),m_y(y){} //Parameterized constructor invoked 

template<typename T>
T Point<T>::xaxis(){
	return m_x;
}

template<typename T>
T Point<T>::yaxis(){
	return m_y;
}

template<typename T>
T Point<T>::distanceFromOrigin(){
	T disadd;
	disadd=pow(m_x,2)+pow(m_y,2);
	T distance;
	distance=pow(a,0.5);
	return distance;
}

template<typename T>
Quadrant Point<T>::quadrant(){
	
	if(m_x>0 && m_y<0)
		return Q4;
	else if(m_x>0 && m_y>0)
		return Q1;
	else if(m_x<0 && m_y>0)
		return Q2;
	else
		return Q3;
}

template<typename T>
void Point<T>::display(){
	std::cout<<m_x<<","<<m_y;
}
