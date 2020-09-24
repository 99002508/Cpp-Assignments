#include "Complex.h"
#include<iostream>

using namespace std;

template<class T>
Complex<T>::Complex()
{
    m_real = 0.0;
    m_image = 0.0;
}

template<class T>
Complex<T>::Complex(const T real,const T imaginary)
{
    m_real = real;
    m_image = imaginary;
}

template<class T>
void Complex<T> :: display ()
{
    cout<<m_real<<"+"<<m_image<<"i"<<"\n";
}

template<class T>
T Complex<T> :: getreal()
{
    return m_real;
}

template<class T>
T Complex<T> :: getimage()
{
    return m_image;
}

template class Complex<double>;

/*
int main(){
  Complex<double> cn1(1,1);
  cn1.display();
}*/
